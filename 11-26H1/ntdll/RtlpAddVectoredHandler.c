/*
 * XREFs of RtlpAddVectoredHandler @ 0x180077074
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x180102170 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x180110E70 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlProtectHeap @ 0x180076820 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180078C70 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180078D20 (LdrProtectMrdata.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800792EC (LdrEnsureMrdataHeapExists.c)
 *     RtlEncodePointer @ 0x1800D8BA0 (RtlEncodePointer.c)
 *     bsearch @ 0x180129D50 (bsearch.c)
 */

_QWORD *__fastcall RtlpAddVectoredHandler(int a1, void *a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v6; // rdi
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  PVOID ProcessHeap; // rcx
  _QWORD *Heap_0; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  int v14; // eax
  PVOID v15; // rcx
  int v16; // eax
  int v17; // r8d
  _UNKNOWN **v19; // rdi
  _UNKNOWN ***v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rbx
  _QWORD *v23; // rax

  v3 = a3;
  v6 = 0LL;
  if ( (int)LdrEnsureMrdataHeapExists() >= 0 )
  {
    if ( !RtlpProtectedPolicies )
      goto LABEL_3;
    RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock);
    v21 = bsearch(
            &unk_180178048,
            RtlpProtectedPolicies,
            (unsigned int)RtlpProtectedPoliciesActiveCount,
            0x18uLL,
            RtlpCompareProtectedPolicyEntry);
    v22 = v21;
    if ( v21 )
      v6 = v21[2];
    RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
    if ( !v22 || !v6 )
    {
LABEL_3:
      LOBYTE(v7) = LdrControlFlowGuardEnforced();
      if ( v7 )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v8 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          if ( v8 == -1 )
            goto LABEL_21;
        }
        else
        {
          RtlProtectHeap(LdrpMrdataHeap, 0);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v8 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      LOBYTE(v9) = LdrControlFlowGuardEnforced();
      if ( v9 )
        ProcessHeap = LdrpMrdataHeap;
      else
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
      Heap_0 = RtlAllocateHeap_0(ProcessHeap, 0, 0x28uLL);
      v12 = Heap_0;
      if ( Heap_0 )
      {
        *((_DWORD *)Heap_0 + 6) = 0;
        v13 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
        v12[2] = v13;
        if ( !v13 )
        {
          LOBYTE(v14) = LdrControlFlowGuardEnforced();
          if ( v14 )
            v15 = LdrpMrdataHeap;
          else
            v15 = NtCurrentPeb()->ProcessHeap;
          RtlFreeHeap_0(v15, 0, v12);
          v12 = 0LL;
          goto LABEL_14;
        }
        *v13 = 1LL;
        v12[4] = RtlEncodePointer(a2);
        v19 = &LdrpVectorHandlerList + 3 * v3 + 1;
        LdrProtectMrdata(0LL);
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)*(&LdrpVectorHandlerList + 3 * v3));
        if ( *v19 == (_UNKNOWN *)v19 )
          _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->80, v3 + 2);
        if ( a1 )
        {
          v20 = (_UNKNOWN ***)*v19;
          if ( *((_UNKNOWN ***)*v19 + 1) != v19 )
            goto LABEL_26;
          *v12 = v20;
          v12[1] = v19;
          v20[1] = (_UNKNOWN **)v12;
          *v19 = v12;
        }
        else
        {
          v23 = v19[1];
          if ( (_UNKNOWN **)*v23 != v19 )
LABEL_26:
            __fastfail(3u);
          *v12 = v19;
          v12[1] = v23;
          *v23 = v12;
          v19[1] = v12;
        }
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)*(&LdrpVectorHandlerList + 3 * v3));
        LdrProtectMrdata(1LL);
      }
LABEL_14:
      LOBYTE(v16) = LdrControlFlowGuardEnforced();
      if ( !v16 )
        return v12;
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        v17 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
        *(_DWORD *)LdrpMrdataHeapUnprotected = v17;
        if ( !v17 )
          RtlProtectHeap(LdrpMrdataHeap, 1u);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        return v12;
      }
LABEL_21:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
  }
  return 0LL;
}
