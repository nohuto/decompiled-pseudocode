/*
 * XREFs of RtlpCallVectoredHandlers @ 0x18004CF90
 * Callers:
 *     RtlDispatchException @ 0x18004C680 (RtlDispatchException.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlDecodePointer @ 0x18004D5D0 (RtlDecodePointer.c)
 *     RtlProtectHeap @ 0x18007F470 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800818D0 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180081980 (LdrProtectMrdata.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpCallVectoredHandlers(__int64 a1, __int128 *a2, unsigned int a3)
{
  struct _PEB *v3; // rbp
  unsigned int v4; // r14d
  unsigned __int8 v5; // bl
  volatile signed __int64 **v7; // rdi
  unsigned int CrossProcessFlags; // eax
  __int64 **v9; // r13
  volatile signed __int64 *v10; // rdx
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
  volatile signed __int64 **v26; // rdx
  volatile signed __int64 *v27; // r8
  char *v28; // r9
  __int64 j; // rcx
  signed __int64 v30; // rcx
  bool v31; // cc
  signed __int64 v32; // rcx
  _QWORD *v33; // rsi
  __int64 v35; // rdx
  int v36; // edi
  __int64 v37; // rdx
  int v38; // esi
  _QWORD *v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  int v43; // ecx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 *v46; // [rsp+20h] [rbp-68h]
  volatile signed __int64 **v47; // [rsp+28h] [rbp-60h]
  _QWORD *v48; // [rsp+30h] [rbp-58h]
  _QWORD v49[10]; // [rsp+38h] [rbp-50h] BYREF
  int v51; // [rsp+A0h] [rbp+18h]
  _QWORD *v52; // [rsp+A8h] [rbp+20h]

  v3 = NtCurrentPeb();
  v4 = a3 + 2;
  v5 = 0;
  v7 = (volatile signed __int64 **)(&LdrpVectorHandlerList + 3 * a3);
  CrossProcessFlags = v3->CrossProcessFlags;
  v9 = (__int64 **)(v7 + 1);
  if ( _bittest((const int *)&CrossProcessFlags, a3 + 2) )
  {
    v49[1] = a2;
    v10 = *v7;
    v49[0] = a1;
    v52 = 0LL;
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
      RtlpAcquireSRWLockExclusiveContended(v10, (__int64)v10);
    v13 = *v9;
    while ( 1 )
    {
      v48 = v13;
      if ( v13 == (__int64 *)v9 )
        break;
      v46 = v13;
      v47 = (volatile signed __int64 **)(v13 + 2);
      if ( _InterlockedIncrement64((volatile signed __int64 *)v13[2]) <= 1 )
        __fastfail(0xEu);
      RtlReleaseSRWLockExclusive(*v7);
      v14 = 0LL;
      v15 = (__int64 (__fastcall *)(_QWORD *))RtlDecodePointer(v13[4]);
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
      v51 = v15(v49);
      if ( v14 )
        *(_DWORD *)(v14 + 1396) = v51 != -1;
      v27 = *v7;
      v28 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v28 )
      {
        for ( j = 0LL; (unsigned int)j < 8; j = (unsigned int)(j + 1) )
        {
          v26 = (volatile signed __int64 **)&v28[8 * j];
          if ( !*v26 )
          {
            *v26 = v27;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v27, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(v27, (__int64)v26);
      v13 = (__int64 *)*v13;
      v30 = _InterlockedExchangeAdd64(*v47, 0xFFFFFFFFFFFFFFFFuLL);
      v31 = v30 <= 1;
      v32 = v30 - 1;
      if ( v31 )
      {
        if ( v32 )
          __fastfail(0xEu);
        if ( !*((_DWORD *)v46 + 6) )
          __fastfail(0x3Cu);
        if ( (unsigned int)LdrControlFlowGuardEnforced() )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v37);
          v38 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
          {
            if ( v38 == -1 )
              goto LABEL_49;
          }
          else
          {
            RtlProtectHeap(LdrpMrdataHeap, 0LL);
          }
          *(_DWORD *)LdrpMrdataHeapUnprotected = v38 + 1;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        LdrProtectMrdata(0LL);
        v33 = v48;
        v39 = (_QWORD *)*v48;
        if ( *(_QWORD **)(*v48 + 8LL) != v48 || (v40 = (_QWORD *)v48[1], (_QWORD *)*v40 != v48) )
          __fastfail(3u);
        *v40 = v39;
        v39[1] = v40;
        if ( v40 == v39 )
          _interlockedbittestandreset((volatile signed __int32 *)&v3->80, v4);
        LdrProtectMrdata(1LL);
        *v48 = v52;
        v52 = v48;
        if ( (unsigned int)LdrControlFlowGuardEnforced() )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v41);
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
            goto LABEL_49;
          v43 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
          *(_DWORD *)LdrpMrdataHeapUnprotected = v43;
          if ( !v43 )
          {
            LOBYTE(v42) = 1;
            RtlProtectHeap(LdrpMrdataHeap, v42);
          }
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
      }
      else
      {
        v33 = v52;
      }
      if ( v51 == -1 )
      {
        v5 = 1;
        goto LABEL_29;
      }
    }
    v33 = v52;
LABEL_29:
    RtlReleaseSRWLockExclusive(*v7);
    if ( v33 )
    {
      if ( (unsigned int)LdrControlFlowGuardEnforced() )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v35);
        v36 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          if ( v36 == -1 )
            goto LABEL_49;
        }
        else
        {
          RtlProtectHeap(LdrpMrdataHeap, 0LL);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v36 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      do
      {
        v33 = (_QWORD *)*v33;
        RtlFreeHeap_0();
        LdrControlFlowGuardEnforced();
        RtlFreeHeap_0();
      }
      while ( v33 );
      if ( !(unsigned int)LdrControlFlowGuardEnforced() )
        return v5;
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v44);
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        v45 = (unsigned int)(*(_DWORD *)LdrpMrdataHeapUnprotected - 1);
        *(_DWORD *)LdrpMrdataHeapUnprotected = v45;
        if ( !(_DWORD)v45 )
        {
          LODWORD(v45) = 1;
          RtlProtectHeap(LdrpMrdataHeap, v45);
        }
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
