/*
 * XREFs of MiReInitializeFreeSlabPfn @ 0x14036BA38
 * Callers:
 *     MiRepurposeStandbySlabPage @ 0x1402AB348 (MiRepurposeStandbySlabPage.c)
 *     MiGetRepurposedSlabStandbyPage @ 0x14036B420 (MiGetRepurposedSlabStandbyPage.c)
 *     MiFreePageToSlabAllocator @ 0x14036B704 (MiFreePageToSlabAllocator.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiReInitializeFreeSlabPfn(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  unsigned __int64 DemandZeroPte; // rax
  __int64 result; // rax

  v2 = a1;
  *(_QWORD *)(a1 + 8) = (*(_DWORD *)(a2 + 128) != 2) - 2LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 24) &= 0xFFFFFF0000000000uLL;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( (*(_BYTE *)(a1 + 34) & 7) == 1 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
      DemandZeroPte = v3 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    else
      DemandZeroPte = MiMakeDemandZeroPte(4);
    *(_QWORD *)(v2 + 16) = DemandZeroPte;
  }
  result = *(_DWORD *)(v2 + 32) & 0xFFF8FFFF | 0x50000;
  *(_DWORD *)(v2 + 32) = result;
  return result;
}
