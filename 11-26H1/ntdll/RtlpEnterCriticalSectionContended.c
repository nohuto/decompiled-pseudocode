/*
 * XREFs of RtlpEnterCriticalSectionContended @ 0x18007A2D0
 * Callers:
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpWaitOnCriticalSection @ 0x18007A720 (RtlpWaitOnCriticalSection.c)
 */

__int64 __fastcall RtlpEnterCriticalSectionContended(__int64 a1)
{
  __int64 v1; // rdx
  bool v3; // bp
  unsigned __int64 v4; // rsi
  char v5; // r15
  volatile signed __int32 *v6; // rdi
  char v7; // r11
  signed __int32 v8; // eax
  __int64 v9; // r8
  unsigned int v10; // ebx
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r9
  unsigned int v13; // ecx
  signed __int32 v14; // eax
  void *UniqueThread; // rcx
  __int64 result; // rax
  int v17; // edx
  unsigned int v18; // ebx
  signed __int32 v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // ecx
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rax
  unsigned __int32 v24; // ebx
  int v25; // ebx
  unsigned __int64 v26; // rax
  int v27; // edx
  unsigned int v28; // eax
  __int64 v29; // rbx
  struct _TEB *v30; // rax
  __int64 SchedulerSharedDataSlot; // rdx
  __int64 i; // rcx
  __int64 v34; // rax
  __int64 *v35; // rcx

  v1 = *(_QWORD *)(a1 + 32);
  if ( (v1 & 0x4000000) != 0 && *(_QWORD *)a1 != -1LL && !*(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    if ( (v1 & 0x2000000) != 0 && (v1 & 0xFFFFFF) == 0 )
      v1 |= 0x7D0uLL;
    v29 = (unsigned int)v1 & 0xFF000000;
    v30 = NtCurrentTeb();
    if ( NtCurrentPeb()->NumberOfProcessors != 1 )
      v29 = v1;
    SchedulerSharedDataSlot = (__int64)v30->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
      {
        if ( !*(_QWORD *)(SchedulerSharedDataSlot + 8 * i) )
        {
          *(_QWORD *)(SchedulerSharedDataSlot + 8 * i) = &RtlCriticalSectionLock;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&RtlCriticalSectionLock, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(&RtlCriticalSectionLock, SchedulerSharedDataSlot);
    v34 = *(_QWORD *)a1 + 16LL;
    if ( !*(_QWORD *)v34 )
    {
      *(_QWORD *)(a1 + 32) = v29;
      v35 = (__int64 *)off_1801C58E8;
      if ( *off_1801C58E8 != (_UNKNOWN *)&RtlCriticalSectionList )
        __fastfail(3u);
      *(_QWORD *)v34 = &RtlCriticalSectionList;
      *(_QWORD *)(v34 + 8) = v35;
      *v35 = v34;
      off_1801C58E8 = (_UNKNOWN **)v34;
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
  }
  v3 = 0;
  v4 = 0LL;
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    v4 = *(_QWORD *)(a1 + 32) & 0xFFFFFFLL;
    v3 = (*(_QWORD *)(a1 + 32) & 0x2000000LL) != 0;
  }
  v5 = 0;
  v6 = (volatile signed __int32 *)(a1 + 8);
  v7 = 0;
LABEL_5:
  v8 = *v6;
  v9 = 3LL;
  if ( !v5 )
    v9 = 1LL;
  if ( (v8 & 1) == 0 || v8 != _InterlockedCompareExchange(v6, v8 ^ v9, v8) )
  {
    v10 = 10 * v4;
    if ( MEMORY[0x7FFE036A] <= 1u )
    {
      v13 = 0;
      goto LABEL_22;
    }
    if ( a1 != -8 && MEMORY[0x7FFE0297] )
    {
      v11 = __rdtsc();
      v12 = v11 + v10;
      while ( 1 )
      {
        v13 = 0;
        __asm { monitorx rax, rcx, rdx }
        if ( (*v6 & 1) != 0 )
        {
          v13 = 0;
          v14 = *v6;
          if ( v14 == _InterlockedCompareExchange(v6, v9 ^ v14, v14) )
            goto LABEL_15;
        }
        v22 = v11;
        v23 = __rdtsc();
        v11 = v23;
        if ( v23 < v22 || v23 >= v12 )
          break;
        __asm { mwaitx  rax, rcx, rbx }
      }
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_22:
          LOBYTE(v9) = 0;
          _m_prefetchw((const void *)(a1 + 8));
          v20 = *(unsigned int *)v6;
          if ( v5 )
          {
            if ( (v20 & 2) != 0 )
              goto LABEL_24;
            if ( (v20 & 1) != 0 )
            {
              v9 = 1LL;
              v24 = v20 ^ 3;
            }
            else
            {
              v24 = v20 - 2;
            }
          }
          else if ( (v20 & 1) != 0 )
          {
            v9 = 1LL;
            v24 = v20 ^ 1;
          }
          else
          {
            v24 = v20 - 4;
            if ( (((_BYTE)v20 - 4) & 2) == 0 )
              v24 = v20 - 6;
          }
          if ( v24 == (_DWORD)v20 )
          {
LABEL_24:
            RtlpWaitOnCriticalSection(a1, v20, v9);
            v7 = 1;
            if ( v3 && v4 > 0x64 )
              --v4;
            goto LABEL_5;
          }
          if ( (_DWORD)v20 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), v24, v20) )
          {
            if ( (_BYTE)v9 )
              goto LABEL_15;
            v5 = 1;
            v20 = v24;
            goto LABEL_24;
          }
          v25 = v13;
          if ( !v13 )
            break;
          if ( v13 < 0x1FFF )
            v25 = 2 * v13;
LABEL_44:
          v13 = v25;
          v26 = __rdtsc();
          LODWORD(v26) = 10 * (v25 + ((v25 - 1) & (unsigned int)v26)) / MEMORY[0x7FFE02D6];
          v9 = (unsigned int)v26;
          if ( (_DWORD)v26 )
          {
            v27 = 1;
            do
            {
              _mm_pause();
              v28 = v27++;
            }
            while ( v28 < (unsigned int)v9 );
          }
        }
        if ( NtCurrentTeb()->ProcessEnvironmentBlock->NumberOfProcessors != 1 )
        {
          v25 = 64;
          goto LABEL_44;
        }
      }
    }
    v17 = 0;
    v18 = v10 / MEMORY[0x7FFE02D6];
    while ( 1 )
    {
      v13 = 0;
      if ( (*v6 & 1) != 0 )
      {
        v13 = 0;
        v19 = *v6;
        if ( v19 == _InterlockedCompareExchange(v6, v9 ^ v19, v19) )
          break;
      }
      if ( v17 == v18 )
        goto LABEL_22;
      _mm_pause();
      ++v17;
    }
  }
LABEL_15:
  if ( v3 )
  {
    if ( !v7 && v4 < 0x7D0 )
      LODWORD(v4) = v4 + 1;
    v21 = (*(_DWORD *)(a1 + 32) ^ (v4 ^ *(_DWORD *)(a1 + 32)) & 0xFFFFFF) & 0xFF000000;
    if ( NtCurrentPeb()->NumberOfProcessors != 1 )
      v21 = *(_DWORD *)(a1 + 32) ^ (v4 ^ *(_DWORD *)(a1 + 32)) & 0xFFFFFF;
    *(_QWORD *)(a1 + 32) = v21;
  }
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  result = 0LL;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = UniqueThread;
  return result;
}
