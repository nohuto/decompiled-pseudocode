/*
 * XREFs of RtlSetProtectedPolicy @ 0x1800F9120
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlProtectHeap @ 0x18007F470 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800818D0 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180081980 (LdrProtectMrdata.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081F4C (LdrEnsureMrdataHeapExists.c)
 *     bsearch @ 0x180129FE0 (bsearch.c)
 *     qsort @ 0x18012BEB0 (qsort.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlSetProtectedPolicy(_OWORD *Key, __int64 a2, _QWORD *a3)
{
  char v6; // di
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // ebx
  void *v11; // rax
  char *v12; // rbx
  unsigned int v13; // ebx
  char *Heap_0; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // r8d

  v6 = 0;
  v8 = LdrEnsureMrdataHeapExists();
  if ( v8 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock, v7);
    if ( LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v9);
      v10 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        if ( v10 == -1 )
          goto LABEL_32;
      }
      else
      {
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v10 + 1;
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    v11 = RtlpProtectedPolicies;
    if ( RtlpProtectedPolicies )
    {
      v12 = (char *)bsearch(
                      Key,
                      RtlpProtectedPolicies,
                      (unsigned int)RtlpProtectedPoliciesActiveCount,
                      0x18uLL,
                      (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
      if ( v12 )
      {
LABEL_19:
        v15 = *((_QWORD *)v12 + 2);
        *((_QWORD *)v12 + 2) = a2;
        if ( a3 )
          *a3 = v15;
        if ( v6 )
          qsort(
            RtlpProtectedPolicies,
            (unsigned int)RtlpProtectedPoliciesActiveCount,
            0x18uLL,
            (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
        v8 = 0;
        goto LABEL_24;
      }
      v11 = RtlpProtectedPolicies;
    }
    if ( v11 && (_DWORD)RtlpProtectedPoliciesActiveCount + 1 != RtlpProtectedPoliciesTotalCount )
    {
      LdrProtectMrdata(0);
      Heap_0 = (char *)RtlpProtectedPolicies;
LABEL_18:
      v12 = &Heap_0[24 * (unsigned int)RtlpProtectedPoliciesActiveCount];
      LODWORD(RtlpProtectedPoliciesActiveCount) = RtlpProtectedPoliciesActiveCount + 1;
      *(_OWORD *)v12 = 0LL;
      *((_QWORD *)v12 + 2) = 0LL;
      *(_OWORD *)v12 = *Key;
      LdrProtectMrdata(1);
      v6 = 1;
      goto LABEL_19;
    }
    if ( RtlpProtectedPoliciesTotalCount )
    {
      v13 = 2 * RtlpProtectedPoliciesTotalCount;
      if ( 2 * RtlpProtectedPoliciesTotalCount < (unsigned int)RtlpProtectedPoliciesTotalCount || v13 >= 0xAAAAAAA )
        goto LABEL_38;
    }
    else
    {
      v13 = 16;
    }
    if ( !LdrControlFlowGuardEnforced() || 24 * (unsigned __int64)v13 < 0xFF000 )
    {
      Heap_0 = (char *)RtlAllocateHeap_0();
      if ( Heap_0 )
      {
        LdrProtectMrdata(0);
        if ( RtlpProtectedPolicies )
        {
          memmove(Heap_0, RtlpProtectedPolicies, 24LL * (unsigned int)RtlpProtectedPoliciesActiveCount);
          LdrControlFlowGuardEnforced();
          RtlFreeHeap_0();
        }
        RtlpProtectedPolicies = Heap_0;
        RtlpProtectedPoliciesTotalCount = v13;
        goto LABEL_18;
      }
    }
LABEL_38:
    v8 = -1073741801;
LABEL_24:
    if ( !LdrControlFlowGuardEnforced() )
    {
LABEL_29:
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      return (unsigned int)v8;
    }
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v16);
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      v17 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v17;
      if ( !v17 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      goto LABEL_29;
    }
LABEL_32:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return (unsigned int)v8;
}
