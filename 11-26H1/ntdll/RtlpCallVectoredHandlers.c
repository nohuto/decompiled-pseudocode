/*
 * XREFs of RtlpCallVectoredHandlers @ 0x180037510
 * Callers:
 *     RtlDispatchException @ 0x180036C00 (RtlDispatchException.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlDecodePointer @ 0x180037B50 (RtlDecodePointer.c)
 *     RtlProtectHeap @ 0x180076820 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180078C70 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180078D20 (LdrProtectMrdata.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpCallVectoredHandlers(__int64 a1, __int128 *a2, unsigned int a3)
{
  struct _PEB *v3; // rbp
  unsigned int v4; // r14d
  unsigned __int8 v5; // bl
  PRTL_SRWLOCK *v7; // rdi
  unsigned int CrossProcessFlags; // eax
  __int64 **v9; // r13
  PRTL_SRWLOCK v10; // rdx
  _QWORD *SchedulerSharedDataSlot; // r8
  __int64 i; // rax
  __int64 *v13; // r15
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(_QWORD *); // r9
  unsigned int v16; // r8d
  int v17; // ett
  signed __int32 v18; // r10d
  __int64 v19; // rsi
  bool v20; // zf
  __int128 *v21; // rcx
  __int128 *v22; // rax
  __int64 v23; // rdx
  __int128 v24; // xmm0
  __int128 v25; // xmm0
  PRTL_SRWLOCK *v26; // rdx
  PRTL_SRWLOCK v27; // r8
  char *v28; // r9
  __int64 j; // rcx
  signed __int64 v30; // rcx
  bool v31; // cc
  signed __int64 v32; // rcx
  PVOID *v33; // rsi
  int v35; // eax
  int v36; // edi
  int v37; // eax
  int v38; // esi
  PVOID **v39; // rcx
  PVOID **v40; // rax
  int v41; // eax
  int v42; // ecx
  PVOID *v43; // rdi
  int v44; // eax
  PVOID ProcessHeap; // rcx
  int v46; // eax
  int v47; // edx
  __int64 *v48; // [rsp+20h] [rbp-68h]
  volatile signed __int64 **v49; // [rsp+28h] [rbp-60h]
  PVOID *v50; // [rsp+30h] [rbp-58h]
  _QWORD v51[10]; // [rsp+38h] [rbp-50h] BYREF
  int v53; // [rsp+A0h] [rbp+18h]
  PVOID *BaseAddress; // [rsp+A8h] [rbp+20h]

  v3 = NtCurrentPeb();
  v4 = a3 + 2;
  v5 = 0;
  v7 = (PRTL_SRWLOCK *)(&LdrpVectorHandlerList + 3 * a3);
  CrossProcessFlags = v3->CrossProcessFlags;
  v9 = (__int64 **)(v7 + 1);
  if ( _bittest((const int *)&CrossProcessFlags, a3 + 2) )
  {
    v51[1] = a2;
    v10 = *v7;
    v51[0] = a1;
    BaseAddress = 0LL;
    SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
      {
        if ( !SchedulerSharedDataSlot[i] )
        {
          SchedulerSharedDataSlot[i] = v10;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)v10, (unsigned __int64)v10);
    v13 = *v9;
    while ( 1 )
    {
      v50 = (PVOID *)v13;
      if ( v13 == (__int64 *)v9 )
        break;
      v48 = v13;
      v49 = (volatile signed __int64 **)(v13 + 2);
      if ( _InterlockedIncrement64((volatile signed __int64 *)v13[2]) <= 1 )
        __fastfail(0xEu);
      RtlReleaseSRWLockExclusive(*v7);
      v14 = 0LL;
      v15 = (__int64 (__fastcall *)(_QWORD *))RtlDecodePointer((PVOID)v13[4]);
      if ( (v3->NtGlobalFlag & 0x800000) != 0 && RtlpExceptionLog2 )
      {
        v16 = RtlpExceptionLogCount;
        v17 = RtlpExceptionLogCount;
        v18 = _InterlockedCompareExchange(
                &RtlpExceptionLogCount,
                (RtlpExceptionLogCount + 1) % 0x32u,
                RtlpExceptionLogCount);
        if ( v17 != v18 )
        {
          do
          {
            v16 = v18;
            v18 = _InterlockedCompareExchange(&RtlpExceptionLogCount, (v18 + 1) % 0x32u, v18);
          }
          while ( v18 != v16 );
        }
        v19 = 1424LL * v16;
        v20 = RtlpExceptionLog2 + v19 == 0;
        v14 = RtlpExceptionLog2 + v19;
        *(_QWORD *)(v14 + 1400) = NtCurrentTeb()->ClientId.UniqueThread;
        if ( !v20 )
        {
          v21 = a2;
          v22 = (__int128 *)(v14 + 160);
          *(_DWORD *)(v14 + 1392) = 2;
          v23 = 9LL;
          *(_DWORD *)(v14 + 1396) = -1;
          *(_OWORD *)v14 = *(_OWORD *)a1;
          *(_OWORD *)(v14 + 16) = *(_OWORD *)(a1 + 16);
          *(_OWORD *)(v14 + 32) = *(_OWORD *)(a1 + 32);
          *(_OWORD *)(v14 + 48) = *(_OWORD *)(a1 + 48);
          *(_OWORD *)(v14 + 64) = *(_OWORD *)(a1 + 64);
          *(_OWORD *)(v14 + 80) = *(_OWORD *)(a1 + 80);
          *(_OWORD *)(v14 + 96) = *(_OWORD *)(a1 + 96);
          *(_OWORD *)(v14 + 112) = *(_OWORD *)(a1 + 112);
          *(_OWORD *)(v14 + 128) = *(_OWORD *)(a1 + 128);
          *(_QWORD *)(v14 + 144) = *(_QWORD *)(a1 + 144);
          do
          {
            v22 += 8;
            v24 = *v21;
            v21 += 8;
            *(v22 - 8) = v24;
            *(v22 - 7) = *(v21 - 7);
            *(v22 - 6) = *(v21 - 6);
            *(v22 - 5) = *(v21 - 5);
            *(v22 - 4) = *(v21 - 4);
            *(v22 - 3) = *(v21 - 3);
            *(v22 - 2) = *(v21 - 2);
            *(v22 - 1) = *(v21 - 1);
            --v23;
          }
          while ( v23 );
          *v22 = *v21;
          v22[1] = v21[1];
          v22[2] = v21[2];
          v22[3] = v21[3];
          v25 = v21[4];
          *(_QWORD *)(v14 + 1408) = 0LL;
          *(_QWORD *)(v14 + 1416) = v15;
          v22[4] = v25;
          *(_DWORD *)(v14 + 208) &= 0x10001Fu;
        }
      }
      v53 = v15(v51);
      if ( v14 )
        *(_DWORD *)(v14 + 1396) = v53 != -1;
      v27 = *v7;
      v28 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v28 )
      {
        for ( j = 0LL; (unsigned int)j < 8; j = (unsigned int)(j + 1) )
        {
          v26 = (PRTL_SRWLOCK *)&v28[8 * j];
          if ( !*v26 )
          {
            *v26 = v27;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v27, 0LL) )
        RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)v27, (unsigned __int64)v26);
      v13 = (__int64 *)*v13;
      v30 = _InterlockedExchangeAdd64(*v49, 0xFFFFFFFFFFFFFFFFuLL);
      v31 = v30 <= 1;
      v32 = v30 - 1;
      if ( v31 )
      {
        if ( v32 )
          __fastfail(0xEu);
        if ( !*((_DWORD *)v48 + 6) )
          __fastfail(0x3Cu);
        LOBYTE(v37) = LdrControlFlowGuardEnforced();
        if ( v37 )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v38 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
          {
            if ( v38 == -1 )
              goto LABEL_49;
          }
          else
          {
            RtlProtectHeap(LdrpMrdataHeap, 0);
          }
          *(_DWORD *)LdrpMrdataHeapUnprotected = v38 + 1;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        LdrProtectMrdata(0LL);
        v33 = v50;
        v39 = (PVOID **)*v50;
        if ( *((PVOID **)*v50 + 1) != v50 || (v40 = (PVOID **)v50[1], *v40 != v50) )
          __fastfail(3u);
        *v40 = (PVOID *)v39;
        v39[1] = (PVOID *)v40;
        if ( v40 == v39 )
          _interlockedbittestandreset((volatile signed __int32 *)&v3->80, v4);
        LdrProtectMrdata(1LL);
        *v50 = BaseAddress;
        BaseAddress = v50;
        LOBYTE(v41) = LdrControlFlowGuardEnforced();
        if ( v41 )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
            goto LABEL_49;
          v42 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
          *(_DWORD *)LdrpMrdataHeapUnprotected = v42;
          if ( !v42 )
            RtlProtectHeap(LdrpMrdataHeap, 1u);
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
      }
      else
      {
        v33 = BaseAddress;
      }
      if ( v53 == -1 )
      {
        v5 = 1;
        goto LABEL_29;
      }
    }
    v33 = BaseAddress;
LABEL_29:
    RtlReleaseSRWLockExclusive(*v7);
    if ( v33 )
    {
      LOBYTE(v35) = LdrControlFlowGuardEnforced();
      if ( v35 )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v36 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          if ( v36 == -1 )
            goto LABEL_49;
        }
        else
        {
          RtlProtectHeap(LdrpMrdataHeap, 0);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v36 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      do
      {
        v43 = v33;
        v33 = (PVOID *)*v33;
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v43[2]);
        LOBYTE(v44) = LdrControlFlowGuardEnforced();
        if ( v44 )
          ProcessHeap = LdrpMrdataHeap;
        else
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap_0(ProcessHeap, 0, v43);
      }
      while ( v33 );
      LOBYTE(v46) = LdrControlFlowGuardEnforced();
      if ( !v46 )
        return v5;
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        v47 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
        *(_DWORD *)LdrpMrdataHeapUnprotected = v47;
        if ( !v47 )
          RtlProtectHeap(LdrpMrdataHeap, 1u);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        return v5;
      }
LABEL_49:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
  }
  return v5;
}
