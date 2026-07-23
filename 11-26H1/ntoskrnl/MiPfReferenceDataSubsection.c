/*
 * XREFs of MiPfReferenceDataSubsection @ 0x140398A10
 * Callers:
 *     MiPfConvertFileOffsetToProto @ 0x14036E9D0 (MiPfConvertFileOffsetToProto.c)
 * Callees:
 *     MiAddViewsForSection @ 0x1402C51E0 (MiAddViewsForSection.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140458404 (MiRemoveViewsFromSectionWithPfn.c)
 */

__int64 __fastcall MiPfReferenceDataSubsection(__int64 *a1, ULONG_PTR a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 result; // rax
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 PoolMm; // rax
  __int64 *v12; // r8

  result = MiAddViewsForSection((volatile LONG **)a2, *(unsigned int *)(a2 + 44), 2, a4);
  v7 = result;
  if ( (int)result >= 0 )
  {
    v8 = *a1;
    v9 = *(_QWORD *)(*a1 + 32);
    if ( *(_QWORD *)(*a1 + 24) == *a1 + 24 || *(_DWORD *)(v9 + 16) == 5 )
    {
      v10 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
      LODWORD(v10) = v10 | 0x80000000;
      PoolMm = ExAllocatePoolMm(256LL, 64LL, 1817406797LL, v10);
      v9 = PoolMm;
      if ( !PoolMm )
      {
        MiRemoveViewsFromSectionWithPfn(a2);
        return v7;
      }
      v8 = *a1;
      *(_DWORD *)(PoolMm + 16) = 0;
      v12 = *(__int64 **)(v8 + 32);
      if ( *v12 != v8 + 24 )
        __fastfail(3u);
      *(_QWORD *)PoolMm = v8 + 24;
      *(_QWORD *)(PoolMm + 8) = v12;
      *v12 = PoolMm;
      *(_QWORD *)(v8 + 32) = PoolMm;
    }
    *(_QWORD *)(v9 + 8LL * (unsigned int)(*(_DWORD *)(v9 + 16))++ + 24) = a2;
    if ( !*(_QWORD *)(v8 + 16) )
      *(_QWORD *)(v8 + 16) = a2;
    return 0LL;
  }
  return result;
}
