/*
 * XREFs of RtlpEnterCriticalSectionContended @ 0x180068AF0
 * Callers:
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpWaitOnCriticalSection @ 0x180068F40 (RtlpWaitOnCriticalSection.c)
 */

__int64 __fastcall RtlpEnterCriticalSectionContended(volatile signed __int32 *Address)
{
  __int64 v1; // rdx
  bool v3; // bp
  unsigned __int64 v4; // rsi
  char v5; // r15
  volatile signed __int32 *v6; // rdi
  char v7; // r11
  signed __int32 v8; // eax
  int v9; // r8d
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
  char v20; // r8
  signed __int32 v21; // edx
  unsigned int v22; // ecx
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rax
  signed __int32 v25; // ebx
  int v26; // ebx
  unsigned __int64 v27; // rax
  unsigned int v28; // r8d
  int v29; // edx
  unsigned int v30; // eax
  __int64 v31; // rbx
  struct _TEB *v32; // rax
  unsigned __int64 SchedulerSharedDataSlot; // rdx
  __int64 i; // rcx
  __int64 v36; // rax
  __int64 *v37; // rcx

  v1 = *((_QWORD *)Address + 4);
  if ( (v1 & 0x4000000) != 0 && *(_QWORD *)Address != -1LL && !*(_QWORD *)(*(_QWORD *)Address + 16LL) )
  {
    if ( (v1 & 0x2000000) != 0 && (v1 & 0xFFFFFF) == 0 )
      v1 |= 0x7D0uLL;
    v31 = (unsigned int)v1 & 0xFF000000;
    v32 = NtCurrentTeb();
    if ( NtCurrentPeb()->NumberOfProcessors != 1 )
      v31 = v1;
    SchedulerSharedDataSlot = (unsigned __int64)v32->SchedulerSharedDataSlot;
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
      RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)&RtlCriticalSectionLock, SchedulerSharedDataSlot);
    v36 = *(_QWORD *)Address + 16LL;
    if ( !*(_QWORD *)v36 )
    {
      *((_QWORD *)Address + 4) = v31;
      v37 = (__int64 *)off_1801C48E8;
      if ( *off_1801C48E8 != (_UNKNOWN *)&RtlCriticalSectionList )
        __fastfail(3u);
      *(_QWORD *)v36 = &RtlCriticalSectionList;
      *(_QWORD *)(v36 + 8) = v37;
      *v37 = v36;
      off_1801C48E8 = (_UNKNOWN **)v36;
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
  }
  v3 = 0;
  v4 = 0LL;
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    v4 = *((_QWORD *)Address + 4) & 0xFFFFFFLL;
    v3 = (*((_QWORD *)Address + 4) & 0x2000000LL) != 0;
  }
  v5 = 0;
  v6 = Address + 2;
  v7 = 0;
LABEL_5:
  v8 = *v6;
  v9 = 3;
  if ( !v5 )
    v9 = 1;
  if ( (v8 & 1) == 0 || v8 != _InterlockedCompareExchange(v6, v8 ^ v9, v8) )
  {
    v10 = 10 * v4;
    if ( MEMORY[0x7FFE036A] <= 1u )
    {
      v13 = 0;
      goto LABEL_22;
    }
    if ( Address != (volatile signed __int32 *)-8LL && MEMORY[0x7FFE0297] )
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
        v23 = v11;
        v24 = __rdtsc();
        v11 = v24;
        if ( v24 < v23 || v24 >= v12 )
          break;
        __asm { mwaitx  rax, rcx, rbx }
      }
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_22:
          v20 = 0;
          _m_prefetchw((const void *)(Address + 2));
          v21 = *v6;
          if ( v5 )
          {
            if ( (v21 & 2) != 0 )
              goto LABEL_24;
            if ( (v21 & 1) != 0 )
            {
              v20 = 1;
              v25 = v21 ^ 3;
            }
            else
            {
              v25 = v21 - 2;
            }
          }
          else if ( (v21 & 1) != 0 )
          {
            v20 = 1;
            v25 = v21 ^ 1;
          }
          else
          {
            v25 = v21 - 4;
            if ( (((_BYTE)v21 - 4) & 2) == 0 )
              v25 = v21 - 6;
          }
          if ( v25 == v21 )
          {
LABEL_24:
            RtlpWaitOnCriticalSection((PVOID)Address);
            v7 = 1;
            if ( v3 && v4 > 0x64 )
              --v4;
            goto LABEL_5;
          }
          if ( v21 == _InterlockedCompareExchange(Address + 2, v25, v21) )
          {
            if ( v20 )
              goto LABEL_15;
            v5 = 1;
            goto LABEL_24;
          }
          v26 = v13;
          if ( !v13 )
            break;
          if ( v13 < 0x1FFF )
            v26 = 2 * v13;
LABEL_44:
          v13 = v26;
          v27 = __rdtsc();
          v28 = 10 * (v26 + ((v26 - 1) & (unsigned int)v27)) / MEMORY[0x7FFE02D6];
          if ( v28 )
          {
            v29 = 1;
            do
            {
              _mm_pause();
              v30 = v29++;
            }
            while ( v30 < v28 );
          }
        }
        if ( NtCurrentTeb()->ProcessEnvironmentBlock->NumberOfProcessors != 1 )
        {
          v26 = 64;
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
    v22 = (*((_DWORD *)Address + 8) ^ (v4 ^ *((_DWORD *)Address + 8)) & 0xFFFFFF) & 0xFF000000;
    if ( NtCurrentPeb()->NumberOfProcessors != 1 )
      v22 = *((_DWORD *)Address + 8) ^ (v4 ^ *((_DWORD *)Address + 8)) & 0xFFFFFF;
    *((_QWORD *)Address + 4) = v22;
  }
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  result = 0LL;
  *((_DWORD *)Address + 3) = 1;
  *((_QWORD *)Address + 2) = UniqueThread;
  return result;
}
