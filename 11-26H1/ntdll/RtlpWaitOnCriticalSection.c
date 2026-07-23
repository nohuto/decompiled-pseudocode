/*
 * XREFs of RtlpWaitOnCriticalSection @ 0x180068F40
 * Callers:
 *     RtlpEnterCriticalSectionContended @ 0x180068AF0 (RtlpEnterCriticalSectionContended.c)
 * Callees:
 *     DbgPrintEx @ 0x18002B940 (DbgPrintEx.c)
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180069660 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x1800696F0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18006A0A0 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     RtlpPossibleDeadlock @ 0x18006A270 (RtlpPossibleDeadlock.c)
 *     NtWaitForSingleObject @ 0x18015EEC0 (NtWaitForSingleObject.c)
 *     ZwTerminateProcess @ 0x18015F3C0 (ZwTerminateProcess.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadId @ 0x18015FC50 (ZwAlertThreadByThreadId.c)
 *     NtWaitForAlertByThreadId @ 0x180162AB0 (NtWaitForAlertByThreadId.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

int __fastcall RtlpWaitOnCriticalSection(_RTL_CRITICAL_SECTION *Address, int a2)
{
  struct _TEB *v2; // rbx
  unsigned int v5; // r13d
  LARGE_INTEGER *v6; // r12
  unsigned int v7; // r14d
  void *LockSemaphore; // r15
  _DWORD *SharedData; // rcx
  __int64 v10; // rcx
  int *p_LockCount; // r13
  unsigned __int64 v12; // r14
  struct _TEB *v13; // rcx
  __int64 WaitOnAddressHashTable; // r9
  signed __int64 i; // rcx
  int **v16; // rax
  unsigned __int64 v17; // rbx
  signed __int64 v18; // rax
  signed __int64 v19; // rax
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rbx
  char v22; // dl
  signed __int64 v23; // rtt
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbx
  struct _PEB *v26; // rax
  __int64 v27; // rbx
  _DWORD *v28; // rcx
  __int64 v29; // rcx
  _QWORD *v30; // rdx
  _DWORD *v31; // rcx
  __int64 v32; // rcx
  _DWORD *v33; // rcx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r9
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  struct _TEB *v39; // rbx
  unsigned __int64 v40; // rdx
  unsigned int ContentionCount; // eax
  unsigned int v42; // ebx
  int v43; // eax
  _DWORD *v44; // rcx
  __int64 v45; // rcx
  NTSTATUS v46; // ebx
  struct _TEB *v47; // rcx
  __int64 WowTebOffset; // rax
  __int64 v49; // rcx
  NTSTATUS v50; // ebx
  char v52; // [rsp+40h] [rbp-C0h]
  unsigned int v53; // [rsp+44h] [rbp-BCh]
  unsigned int v54; // [rsp+48h] [rbp-B8h]
  int *v55; // [rsp+50h] [rbp-B0h] BYREF
  void *UniqueThread; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v57; // [rsp+60h] [rbp-A0h]
  __int64 v58; // [rsp+68h] [rbp-98h]
  char **v59; // [rsp+70h] [rbp-90h]
  __int64 v60; // [rsp+78h] [rbp-88h] BYREF
  __int64 v61; // [rsp+80h] [rbp-80h]
  struct _TEB *v62; // [rsp+88h] [rbp-78h]
  _DWORD v63[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v64; // [rsp+98h] [rbp-68h]
  __int64 v65; // [rsp+A8h] [rbp-58h]
  int LockCount; // [rsp+B0h] [rbp-50h]
  int v67; // [rsp+B4h] [rbp-4Ch]
  void *OwningThread; // [rsp+B8h] [rbp-48h]
  _RTL_CRITICAL_SECTION *v69; // [rsp+C0h] [rbp-40h]
  _BYTE Fields[6]; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v71; // [rsp+D6h] [rbp-2Ah]

  v2 = NtCurrentTeb();
  v52 = 0;
  v62 = v2;
  v53 = 0;
  v5 = 0;
  if ( Address == &LdrpLoaderLock )
  {
    v52 = 1;
    v2->WaitingOnLoaderLock = 1;
  }
  if ( byte_1801CA908 )
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
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
    }
  }
  v6 = &RtlpTimeout;
  if ( RtlpTimeoutDisable )
    v6 = 0LL;
  if ( !Address->LockSemaphore )
    RtlpCreateDeferredCriticalSectionEvent(Address);
  if ( Address->DebugInfo == (_RTL_CRITICAL_SECTION_DEBUG *)-1LL && (Address->SpinCount & 0x1000000) == 0 )
    RtlpAddDebugInfoToCriticalSection(Address);
  v7 = 0;
  v54 = 0;
  if ( Address->DebugInfo != (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
    ++Address->DebugInfo->ContentionCount;
  LockSemaphore = Address->LockSemaphore;
  while ( 1 )
  {
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v10 = (__int64)NtCurrentPeb()->SharedData + 552;
    else
      v10 = 2147353474LL;
    if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v43 = Address->SpinCount & 0xFFFFFF;
      v63[0] = 0;
      v67 = v43;
      LockCount = Address->LockCount;
      OwningThread = Address->OwningThread;
      v63[1] = 388104192;
      v64 = 0LL;
      v65 = 0LL;
      v69 = Address;
      v44 = NtCurrentPeb()->SharedData;
      if ( v44 && *v44 )
        v45 = (__int64)NtCurrentPeb()->SharedData + 552;
      else
        v45 = 2147353474LL;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v45, 0x20402u, 0x18u, v63);
    }
    if ( LockSemaphore != (void *)-1LL )
      break;
    p_LockCount = &Address->LockCount;
    v12 = 8 * (((unsigned __int64)&Address->LockCount >> 5) & 0x7F);
    while ( 1 )
    {
      UniqueThread = 0LL;
      v60 = 1LL;
      v55 = &Address->LockCount;
      v58 = 0LL;
      v57 = 0LL;
      v59 = 0LL;
      v13 = NtCurrentTeb();
      UniqueThread = v13->ClientId.UniqueThread;
      WaitOnAddressHashTable = (__int64)v13->ProcessEnvironmentBlock->WaitOnAddressHashTable;
      v61 = WaitOnAddressHashTable;
      for ( i = *(_QWORD *)(v12 + WaitOnAddressHashTable); ; i = v18 )
      {
        v16 = &v55;
        v17 = i ^ ((unsigned __int64)&v55 ^ i) & 0xFFFFFFFFFFFFFFFCuLL;
        v57 = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (i & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          v16 = 0LL;
        v59 = (char **)v16;
        if ( (i & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          v17 |= 2uLL;
        v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + WaitOnAddressHashTable), v17, i);
        if ( i == v18 )
          break;
      }
      if ( (((unsigned __int8)i ^ (unsigned __int8)v17) & 2) != 0 )
      {
        v19 = *(_QWORD *)(v12 + WaitOnAddressHashTable);
        do
        {
          v20 = v19 & 0xFFFFFFFFFFFFFFFCuLL;
          v21 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !*(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFFCuLL) + 32) )
          {
            do
            {
              v30 = v21;
              v21 = (_QWORD *)v21[2];
              v21[3] = v30;
            }
            while ( !v21[4] );
          }
          *(_QWORD *)(v20 + 32) = v21[4];
          v22 = v19 & 1;
          if ( (v19 & 1) != 0 )
            v20 = 0LL;
          v23 = v19;
          v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + WaitOnAddressHashTable), v20, v19);
        }
        while ( v23 != v19 );
        if ( v22 )
        {
          v24 = v19 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v24 )
          {
            do
            {
              v25 = *(_QWORD *)(v24 + 16);
              if ( !_InterlockedExchange((volatile __int32 *)(v24 + 40), 2) )
                ZwAlertThreadByThreadId(*(HANDLE *)(v24 + 8));
              v24 = v25;
            }
            while ( v25 );
            WaitOnAddressHashTable = v61;
          }
        }
      }
      if ( *p_LockCount == a2 )
        break;
      RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, &v55);
      LODWORD(v26) = 0;
LABEL_68:
      a2 = *p_LockCount;
      if ( (*p_LockCount & 2) == 0 )
        goto LABEL_39;
    }
    if ( MEMORY[0x7FFE036A] > 1u && MEMORY[0x7FFE0297] )
    {
      v34 = __rdtsc();
      v35 = v34;
      while ( 1 )
      {
        __asm { monitorx rax, rcx, rdx }
        if ( (v60 & 1) == 0 )
          break;
        v37 = v34;
        v38 = __rdtsc();
        v34 = v38;
        if ( v38 < v37 || v38 >= v35 )
          break;
        __asm { mwaitx  rax, rcx, rbx }
      }
    }
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&v60, 0) )
    {
      LODWORD(v26) = 0;
      goto LABEL_67;
    }
    v46 = NtWaitForAlertByThreadId(Address, v6);
    if ( v46 != 258 )
      goto LABEL_94;
    if ( _InterlockedExchange((volatile __int32 *)&v60, 4) != 2 )
    {
      RtlpWaitOnAddressRemoveWaitBlock(v61, &v55);
LABEL_94:
      LODWORD(v26) = 0;
      if ( v46 != 257 )
        LODWORD(v26) = v46;
      goto LABEL_67;
    }
    v50 = NtWaitForAlertByThreadId(Address, 0LL);
    LODWORD(v26) = 0;
    if ( v50 != 257 )
      LODWORD(v26) = v50;
LABEL_67:
    if ( (_DWORD)v26 != 258 )
      goto LABEL_68;
    v7 = v54;
    v5 = v53;
LABEL_77:
    v39 = NtCurrentTeb();
    v40 = (__int64)(((unsigned __int128)(v6->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v6->QuadPart) >> 23;
    DbgPrintEx(0x65u, 1u, "RTL: Enter CriticalSection Timeout (%I64u secs) %d\n", v40 + (v40 >> 63), v5);
    if ( Address->DebugInfo == (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
      ContentionCount = 0;
    else
      ContentionCount = Address->DebugInfo->ContentionCount;
    DbgPrintEx(
      0x65u,
      0,
      "RTL: Pid.Tid %p.%p, owner tid %p Critical Section %p - ContentionCount == %u\n",
      v39->ClientId.UniqueProcess,
      v39->ClientId.UniqueThread,
      Address->OwningThread,
      Address,
      ContentionCount);
    v53 = ++v5;
    if ( Address->DebugInfo == (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
      v42 = 0;
    else
      v42 = Address->DebugInfo->ContentionCount;
    if ( v5 > 2 && Address != &LdrpLoaderLock && v42 == v7 )
      RtlpPossibleDeadlock(Address);
    v54 = v42;
    v7 = v42;
    DbgPrintEx(0x65u, 0, "RTL: Re-Waiting\n");
  }
  LODWORD(v26) = NtWaitForSingleObject(LockSemaphore, 0, v6);
  if ( (_DWORD)v26 == 258 )
    goto LABEL_77;
LABEL_39:
  if ( (int)v26 < 0 )
    RtlRaiseStatus((NTSTATUS)v26);
  if ( v52 )
  {
    v27 = 2147353476LL;
    v62->WaitingOnLoaderLock = 0;
    v26 = NtCurrentPeb();
    v28 = v26->SharedData;
    if ( v28 && *v28 )
    {
      v26 = NtCurrentPeb();
      v29 = (__int64)v26->SharedData + 554;
    }
    else
    {
      v29 = 2147353476LL;
    }
    if ( *(_BYTE *)v29 )
    {
      v26 = NtCurrentPeb();
      if ( (v26->TracingFlags & 4) != 0 )
      {
        v26 = NtCurrentPeb();
        v31 = v26->SharedData;
        if ( v31 && *v31 )
        {
          v26 = NtCurrentPeb();
          v32 = (__int64)v26->SharedData + 555;
        }
        else
        {
          v32 = 2147353477LL;
        }
        if ( (*(_BYTE *)v32 & 0x20) != 0 )
        {
          memset_thunk_772440563353939046(Fields, 0, 0x240uLL);
          v71 = 5251;
          v33 = NtCurrentPeb()->SharedData;
          if ( v33 && *v33 )
            v27 = (__int64)NtCurrentPeb()->SharedData + 554;
          LODWORD(v26) = NtTraceEvent((HANDLE)*(unsigned __int8 *)v27, 0x402u, 0xAu, Fields);
        }
      }
    }
  }
  return (int)v26;
}
