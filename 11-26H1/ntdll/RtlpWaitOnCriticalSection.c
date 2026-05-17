/*
 * XREFs of RtlpWaitOnCriticalSection @ 0x18007A720
 * Callers:
 *     RtlpEnterCriticalSectionContended @ 0x18007A2D0 (RtlpEnterCriticalSectionContended.c)
 * Callees:
 *     DbgPrintEx @ 0x1800413D0 (DbgPrintEx.c)
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x18007AE40 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18007AED0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18007B880 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     RtlpPossibleDeadlock @ 0x18007BA50 (RtlpPossibleDeadlock.c)
 *     NtWaitForSingleObject @ 0x18015EFC0 (NtWaitForSingleObject.c)
 *     ZwTerminateProcess @ 0x18015F4C0 (ZwTerminateProcess.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadId @ 0x18015FD50 (ZwAlertThreadByThreadId.c)
 *     NtWaitForAlertByThreadId @ 0x180162BB0 (NtWaitForAlertByThreadId.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

int __fastcall RtlpWaitOnCriticalSection(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  struct _TEB *v3; // rbx
  int v4; // esi
  unsigned int v6; // r13d
  LARGE_INTEGER *v7; // r12
  int v8; // r14d
  void *v9; // r15
  _DWORD *SharedData; // rcx
  __int64 v11; // rcx
  int *v12; // r13
  unsigned __int64 v13; // r14
  struct _TEB *v14; // rcx
  __int64 WaitOnAddressHashTable; // r9
  signed __int64 i; // rcx
  __int64 *v17; // rax
  unsigned __int64 v18; // rbx
  signed __int64 v19; // rax
  signed __int64 v20; // rax
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rbx
  signed __int64 v23; // rdx
  signed __int64 v24; // rtt
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rbx
  struct _PEB *v27; // rax
  __int64 v28; // rbx
  _DWORD *v29; // rcx
  __int64 v30; // rcx
  _QWORD *v31; // rdx
  _DWORD *v32; // rcx
  __int64 v33; // rcx
  _DWORD *v34; // rcx
  unsigned __int64 v35; // r9
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  struct _TEB *v39; // rbx
  unsigned __int64 v40; // rdx
  int v41; // eax
  int v42; // ebx
  int v43; // eax
  _DWORD *v44; // rcx
  __int64 v45; // rcx
  int v46; // ebx
  struct _TEB *v47; // rcx
  __int64 WowTebOffset; // rax
  __int64 v49; // rcx
  int v50; // ebx
  char v52; // [rsp+40h] [rbp-C0h]
  unsigned int v53; // [rsp+44h] [rbp-BCh]
  int v54; // [rsp+48h] [rbp-B8h]
  __int64 v55; // [rsp+50h] [rbp-B0h] BYREF
  void *UniqueThread; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v57; // [rsp+60h] [rbp-A0h]
  __int64 v58; // [rsp+68h] [rbp-98h]
  __int64 *v59; // [rsp+70h] [rbp-90h]
  __int64 v60; // [rsp+78h] [rbp-88h] BYREF
  __int64 v61; // [rsp+80h] [rbp-80h]
  struct _TEB *v62; // [rsp+88h] [rbp-78h]
  _DWORD v63[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v64; // [rsp+98h] [rbp-68h]
  __int64 v65; // [rsp+A8h] [rbp-58h]
  int v66; // [rsp+B0h] [rbp-50h]
  int v67; // [rsp+B4h] [rbp-4Ch]
  __int64 v68; // [rsp+B8h] [rbp-48h]
  __int64 v69; // [rsp+C0h] [rbp-40h]
  _BYTE v70[6]; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v71; // [rsp+D6h] [rbp-2Ah]

  v3 = NtCurrentTeb();
  v52 = 0;
  v62 = v3;
  v4 = a2;
  v53 = 0;
  v6 = 0;
  if ( (_UNKNOWN **)a1 == &LdrpLoaderLock )
  {
    v52 = 1;
    v3->WaitingOnLoaderLock = 1;
  }
  if ( byte_1801CB8C8 )
    goto LABEL_105;
  if ( UseWOW64 )
  {
    v47 = NtCurrentTeb();
    WowTebOffset = v47->WowTebOffset;
    if ( (_DWORD)WowTebOffset )
    {
      if ( (int)WowTebOffset >= 0 )
        v47 = (struct _TEB *)((char *)v47 + WowTebOffset);
    }
    else
    {
      v47 = 0LL;
    }
    v49 = *(unsigned int *)(LODWORD(v47->NtTib.Self) + 0xCLL);
    if ( v49 )
    {
      if ( *(_BYTE *)(v49 + 40) )
LABEL_105:
        ZwTerminateProcess(-1LL, 3221225547LL);
    }
  }
  v7 = &RtlpTimeout;
  if ( RtlpTimeoutDisable )
    v7 = 0LL;
  if ( !*(_QWORD *)(a1 + 24) )
    RtlpCreateDeferredCriticalSectionEvent(a1);
  if ( *(_QWORD *)a1 == -1LL && (*(_DWORD *)(a1 + 32) & 0x1000000) == 0 )
    RtlpAddDebugInfoToCriticalSection(a1, a2);
  v8 = 0;
  v54 = 0;
  if ( *(_QWORD *)a1 != -1LL )
    ++*(_DWORD *)(*(_QWORD *)a1 + 36LL);
  v9 = *(void **)(a1 + 24);
  while ( 1 )
  {
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v11 = (__int64)NtCurrentPeb()->SharedData + 552;
    else
      v11 = 2147353474LL;
    if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v43 = *(_DWORD *)(a1 + 32) & 0xFFFFFF;
      v63[0] = 0;
      v67 = v43;
      v66 = *(_DWORD *)(a1 + 8);
      v68 = *(_QWORD *)(a1 + 16);
      v63[1] = 388104192;
      v64 = 0LL;
      v65 = 0LL;
      v69 = a1;
      v44 = NtCurrentPeb()->SharedData;
      if ( v44 && *v44 )
        v45 = (__int64)NtCurrentPeb()->SharedData + 552;
      else
        v45 = 2147353474LL;
      NtTraceEvent(*(unsigned __int8 *)v45, 132098LL, 24LL, v63);
    }
    if ( v9 != (void *)-1LL )
      break;
    v12 = (int *)(a1 + 8);
    v13 = 8 * (((unsigned __int64)(a1 + 8) >> 5) & 0x7F);
    while ( 1 )
    {
      UniqueThread = 0LL;
      v60 = 1LL;
      v55 = a1 + 8;
      v58 = 0LL;
      v57 = 0LL;
      v59 = 0LL;
      v14 = NtCurrentTeb();
      UniqueThread = v14->ClientId.UniqueThread;
      WaitOnAddressHashTable = (__int64)v14->ProcessEnvironmentBlock->WaitOnAddressHashTable;
      v61 = WaitOnAddressHashTable;
      for ( i = *(_QWORD *)(v13 + WaitOnAddressHashTable); ; i = v19 )
      {
        v17 = &v55;
        v18 = i ^ ((unsigned __int64)&v55 ^ i) & 0xFFFFFFFFFFFFFFFCuLL;
        v57 = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (i & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          v17 = 0LL;
        v59 = v17;
        if ( (i & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          v18 |= 2uLL;
        v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + WaitOnAddressHashTable), v18, i);
        if ( i == v19 )
          break;
      }
      if ( (((unsigned __int8)i ^ (unsigned __int8)v18) & 2) != 0 )
      {
        v20 = *(_QWORD *)(v13 + WaitOnAddressHashTable);
        do
        {
          v21 = v20 & 0xFFFFFFFFFFFFFFFCuLL;
          v22 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !*(_QWORD *)((v20 & 0xFFFFFFFFFFFFFFFCuLL) + 32) )
          {
            do
            {
              v31 = v22;
              v22 = (_QWORD *)v22[2];
              v22[3] = v31;
            }
            while ( !v22[4] );
          }
          *(_QWORD *)(v21 + 32) = v22[4];
          v23 = v20 & 1;
          if ( (v20 & 1) != 0 )
            v21 = 0LL;
          v24 = v20;
          v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + WaitOnAddressHashTable), v21, v20);
        }
        while ( v24 != v20 );
        if ( (_BYTE)v23 )
        {
          v25 = v20 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v25 )
          {
            do
            {
              v26 = *(_QWORD *)(v25 + 16);
              if ( !_InterlockedExchange((volatile __int32 *)(v25 + 40), 2) )
                ZwAlertThreadByThreadId(*(_QWORD *)(v25 + 8), v23, a3);
              v25 = v26;
            }
            while ( v26 );
            WaitOnAddressHashTable = v61;
          }
        }
      }
      if ( *v12 == v4 )
        break;
      RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, &v55);
      LODWORD(v27) = 0;
LABEL_68:
      v4 = *v12;
      if ( (*v12 & 2) == 0 )
        goto LABEL_39;
    }
    if ( MEMORY[0x7FFE036A] > 1u && MEMORY[0x7FFE0297] )
    {
      a3 = __rdtsc();
      v35 = a3;
      while ( 1 )
      {
        __asm { monitorx rax, rcx, rdx }
        if ( (v60 & 1) == 0 )
          break;
        v37 = a3;
        v38 = __rdtsc();
        a3 = v38;
        if ( v38 < v37 || v38 >= v35 )
          break;
        __asm { mwaitx  rax, rcx, rbx }
      }
    }
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&v60, 0) )
    {
      LODWORD(v27) = 0;
      goto LABEL_67;
    }
    v46 = NtWaitForAlertByThreadId(a1, v7);
    if ( v46 != 258 )
      goto LABEL_94;
    if ( _InterlockedExchange((volatile __int32 *)&v60, 4) != 2 )
    {
      RtlpWaitOnAddressRemoveWaitBlock(v61, &v55);
LABEL_94:
      LODWORD(v27) = 0;
      if ( v46 != 257 )
        LODWORD(v27) = v46;
      goto LABEL_67;
    }
    v50 = NtWaitForAlertByThreadId(a1, 0LL);
    LODWORD(v27) = 0;
    if ( v50 != 257 )
      LODWORD(v27) = v50;
LABEL_67:
    if ( (_DWORD)v27 != 258 )
      goto LABEL_68;
    v8 = v54;
    v6 = v53;
LABEL_77:
    v39 = NtCurrentTeb();
    v40 = (__int64)(((unsigned __int128)(v7->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v7->QuadPart) >> 23;
    DbgPrintEx(101, 1, "RTL: Enter CriticalSection Timeout (%I64u secs) %d\n", v40 + (v40 >> 63), v6);
    if ( *(_QWORD *)a1 == -1LL )
      v41 = 0;
    else
      v41 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    DbgPrintEx(
      101,
      0,
      "RTL: Pid.Tid %p.%p, owner tid %p Critical Section %p - ContentionCount == %u\n",
      v39->ClientId.UniqueProcess,
      v39->ClientId.UniqueThread,
      *(const void **)(a1 + 16),
      (const void *)a1,
      v41);
    v53 = ++v6;
    if ( *(_QWORD *)a1 == -1LL )
      v42 = 0;
    else
      v42 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    if ( v6 > 2 && (_UNKNOWN **)a1 != &LdrpLoaderLock && v42 == v8 )
      RtlpPossibleDeadlock(a1);
    v54 = v42;
    v8 = v42;
    DbgPrintEx(101, 0, "RTL: Re-Waiting\n");
  }
  LODWORD(v27) = NtWaitForSingleObject(v9, 0, v7);
  if ( (_DWORD)v27 == 258 )
    goto LABEL_77;
LABEL_39:
  if ( (int)v27 < 0 )
    RtlRaiseStatus((int)v27);
  if ( v52 )
  {
    v28 = 2147353476LL;
    v62->WaitingOnLoaderLock = 0;
    v27 = NtCurrentPeb();
    v29 = v27->SharedData;
    if ( v29 && *v29 )
    {
      v27 = NtCurrentPeb();
      v30 = (__int64)v27->SharedData + 554;
    }
    else
    {
      v30 = 2147353476LL;
    }
    if ( *(_BYTE *)v30 )
    {
      v27 = NtCurrentPeb();
      if ( (v27->TracingFlags & 4) != 0 )
      {
        v27 = NtCurrentPeb();
        v32 = v27->SharedData;
        if ( v32 && *v32 )
        {
          v27 = NtCurrentPeb();
          v33 = (__int64)v27->SharedData + 555;
        }
        else
        {
          v33 = 2147353477LL;
        }
        if ( (*(_BYTE *)v33 & 0x20) != 0 )
        {
          memset_thunk_772440563353939046(v70, 0, 0x240uLL);
          v71 = 5251;
          v34 = NtCurrentPeb()->SharedData;
          if ( v34 && *v34 )
            v28 = (__int64)NtCurrentPeb()->SharedData + 554;
          LODWORD(v27) = NtTraceEvent(*(unsigned __int8 *)v28, 1026LL, 10LL, v70);
        }
      }
    }
  }
  return (int)v27;
}
