/*
 * XREFs of MiReuseStandbyPage @ 0x1402A973C
 * Callers:
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A90E0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1402A96FC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402AAAF0 (MiSwapNumaStandbyPage.c)
 *     MiTradePageMarkedPoisoned @ 0x140512E38 (MiTradePageMarkedPoisoned.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     MiClearPfnReuseFields @ 0x14031C280 (MiClearPfnReuseFields.c)
 */

__int64 __fastcall MiReuseStandbyPage(ULONG_PTR a1)
{
  char v2; // di
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 DemandZeroPte; // rax

  v2 = MiUnlinkPageFromListEx(a1);
  MiRestoreTransitionPte(a1);
  v3 = *(_DWORD *)(a1 + 32) & 0xFFF8FFFF | 0x50000;
  *(_DWORD *)(a1 + 32) = v3;
  MiClearPfnReuseFields(a1, v3, v4, v5);
  v6 = 0LL;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v7 = *(_QWORD *)(a1 + 16);
  if ( v7 )
    DemandZeroPte = v7 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
  else
    DemandZeroPte = MiMakeDemandZeroPte(4);
  *(_QWORD *)(a1 + 16) = DemandZeroPte;
  *(_QWORD *)a1 = v6;
  LOBYTE(v6) = (v2 & 3) == 0;
  return (unsigned int)v6;
}
