/*
 * XREFs of RtlSetProtectedPolicy @ 0x1800F8890
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlProtectHeap @ 0x180076820 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180078C70 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180078D20 (LdrProtectMrdata.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800792EC (LdrEnsureMrdataHeapExists.c)
 *     bsearch @ 0x180129D50 (bsearch.c)
 *     qsort @ 0x18012BC20 (qsort.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlSetProtectedPolicy(PGUID PolicyGuid, ULONG_PTR PolicyValue, PULONG_PTR OldPolicyValue)
{
  char v6; // di
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  PVOID v10; // rax
  char *v11; // rbx
  unsigned int v12; // ebx
  int v13; // eax
  PVOID ProcessHeap; // rcx
  char *Heap_0; // rdi
  PVOID v16; // rsi
  unsigned __int64 v17; // rax
  int v18; // eax
  int v19; // r8d
  int v21; // eax
  PVOID v22; // rcx

  v6 = 0;
  v7 = LdrEnsureMrdataHeapExists();
  if ( v7 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LOBYTE(v8) = LdrControlFlowGuardEnforced();
    if ( v8 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v9 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        if ( v9 == -1 )
          goto LABEL_32;
      }
      else
      {
        RtlProtectHeap(LdrpMrdataHeap, 0);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v9 + 1;
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    v10 = RtlpProtectedPolicies;
    if ( RtlpProtectedPolicies )
    {
      v11 = (char *)bsearch(
                      PolicyGuid,
                      RtlpProtectedPolicies,
                      (unsigned int)RtlpProtectedPoliciesActiveCount,
                      0x18uLL,
                      (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
      if ( v11 )
      {
LABEL_19:
        v17 = *((_QWORD *)v11 + 2);
        *((_QWORD *)v11 + 2) = PolicyValue;
        if ( OldPolicyValue )
          *OldPolicyValue = v17;
        if ( v6 )
          qsort(
            RtlpProtectedPolicies,
            (unsigned int)RtlpProtectedPoliciesActiveCount,
            0x18uLL,
            (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
        v7 = 0;
        goto LABEL_24;
      }
      v10 = RtlpProtectedPolicies;
    }
    if ( v10 && (_DWORD)RtlpProtectedPoliciesActiveCount + 1 != RtlpProtectedPoliciesTotalCount )
    {
      LdrProtectMrdata(0);
      Heap_0 = (char *)RtlpProtectedPolicies;
LABEL_18:
      v11 = &Heap_0[24 * (unsigned int)RtlpProtectedPoliciesActiveCount];
      LODWORD(RtlpProtectedPoliciesActiveCount) = RtlpProtectedPoliciesActiveCount + 1;
      *(_OWORD *)v11 = 0LL;
      *((_QWORD *)v11 + 2) = 0LL;
      *(GUID *)v11 = *PolicyGuid;
      LdrProtectMrdata(1);
      v6 = 1;
      goto LABEL_19;
    }
    if ( RtlpProtectedPoliciesTotalCount )
    {
      v12 = 2 * RtlpProtectedPoliciesTotalCount;
      if ( 2 * RtlpProtectedPoliciesTotalCount < (unsigned int)RtlpProtectedPoliciesTotalCount || v12 >= 0xAAAAAAA )
        goto LABEL_38;
    }
    else
    {
      v12 = 16;
    }
    LOBYTE(v13) = LdrControlFlowGuardEnforced();
    if ( v13 )
    {
      if ( 24 * (unsigned __int64)v12 >= 0xFF000 )
        goto LABEL_38;
      ProcessHeap = LdrpMrdataHeap;
    }
    else
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    Heap_0 = (char *)RtlAllocateHeap_0(ProcessHeap, 0, 24LL * v12);
    if ( Heap_0 )
    {
      LdrProtectMrdata(0);
      v16 = RtlpProtectedPolicies;
      if ( RtlpProtectedPolicies )
      {
        memmove(Heap_0, RtlpProtectedPolicies, 24LL * (unsigned int)RtlpProtectedPoliciesActiveCount);
        LOBYTE(v21) = LdrControlFlowGuardEnforced();
        if ( v21 )
          v22 = LdrpMrdataHeap;
        else
          v22 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap_0(v22, 0, v16);
      }
      RtlpProtectedPolicies = Heap_0;
      RtlpProtectedPoliciesTotalCount = v12;
      goto LABEL_18;
    }
LABEL_38:
    v7 = -1073741801;
LABEL_24:
    LOBYTE(v18) = LdrControlFlowGuardEnforced();
    if ( !v18 )
    {
LABEL_29:
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      return v7;
    }
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      v19 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v19;
      if ( !v19 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      goto LABEL_29;
    }
LABEL_32:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return v7;
}
