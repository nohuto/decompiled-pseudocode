/*
 * XREFs of RtlpAddVectoredHandler @ 0x18007FCD4
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x180102DF0 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x1801112F0 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlEncodePointer @ 0x18007E8D0 (RtlEncodePointer.c)
 *     RtlProtectHeap @ 0x18007F470 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800818D0 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180081980 (LdrProtectMrdata.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081F4C (LdrEnsureMrdataHeapExists.c)
 *     bsearch @ 0x180129FE0 (bsearch.c)
 */

_QWORD *__fastcall RtlpAddVectoredHandler(int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 Heap_0; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // r8d
  _UNKNOWN **v19; // rdi
  __int64 v20; // rdx
  _UNKNOWN ***v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  _QWORD *v24; // rax

  v3 = a3;
  v6 = 0LL;
  if ( (int)LdrEnsureMrdataHeapExists() >= 0 )
  {
    if ( !RtlpProtectedPolicies )
      goto LABEL_35;
    RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock);
    v22 = bsearch(
            &unk_1801794E8,
            RtlpProtectedPolicies,
            (unsigned int)RtlpProtectedPoliciesActiveCount,
            0x18uLL,
            RtlpCompareProtectedPolicyEntry);
    v23 = v22;
    if ( v22 )
      v6 = v22[2];
    RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
    if ( !v23 || !v6 )
    {
LABEL_35:
      if ( (unsigned int)LdrControlFlowGuardEnforced(v7) )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v8);
        v10 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          if ( v10 == -1 )
            goto LABEL_17;
        }
        else
        {
          RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v10 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      LdrControlFlowGuardEnforced(v9);
      Heap_0 = RtlAllocateHeap_0();
      v13 = (_QWORD *)Heap_0;
      if ( !Heap_0 )
      {
LABEL_10:
        if ( !(unsigned int)LdrControlFlowGuardEnforced(v12) )
          return v13;
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v16);
        if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          v17 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
          *(_DWORD *)LdrpMrdataHeapUnprotected = v17;
          if ( !v17 )
            RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          return v13;
        }
LABEL_17:
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      *(_DWORD *)(Heap_0 + 24) = 0;
      v14 = (_QWORD *)RtlAllocateHeap_0();
      v13[2] = v14;
      if ( !v14 )
      {
        LdrControlFlowGuardEnforced(v15);
        RtlFreeHeap_0();
        v13 = 0LL;
        goto LABEL_10;
      }
      *v14 = 1LL;
      v13[4] = RtlEncodePointer(a2);
      v19 = &LdrpVectorHandlerList + 3 * v3 + 1;
      LdrProtectMrdata(0LL);
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + 3 * v3), v20);
      if ( *v19 == (_UNKNOWN *)v19 )
        _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->80, v3 + 2);
      if ( a1 )
      {
        v21 = (_UNKNOWN ***)*v19;
        if ( *((_UNKNOWN ***)*v19 + 1) != v19 )
          goto LABEL_22;
        *v13 = v21;
        v13[1] = v19;
        v21[1] = (_UNKNOWN **)v13;
        *v19 = v13;
      }
      else
      {
        v24 = v19[1];
        if ( (_UNKNOWN **)*v24 != v19 )
LABEL_22:
          __fastfail(3u);
        *v13 = v19;
        v13[1] = v24;
        *v24 = v13;
        v19[1] = v13;
      }
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + 3 * v3));
      LdrProtectMrdata(1LL);
      goto LABEL_10;
    }
  }
  return 0LL;
}
