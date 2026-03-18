/*
 * XREFs of MiCompareHotPatchNodes @ 0x14086F6BC
 * Callers:
 *     MiGetAllRegisteredPatches @ 0x14086FD1C (MiGetAllRegisteredPatches.c)
 *     MiInsertHotPatchRecord @ 0x1408708FC (MiInsertHotPatchRecord.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x140870AAC (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x140870BC8 (MiInsertSecureImageActivePatch.c)
 *     MmRemoveSecureImageActivePatch @ 0x140874D80 (MmRemoveSecureImageActivePatch.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A99998 (MiFindProcessImageHotPatchRecord.c)
 *     MiFindHotPatchRecord @ 0x140ABFFE4 (MiFindHotPatchRecord.c)
 *     MmRegisterHotPatches @ 0x140CFBBA4 (MmRegisterHotPatches.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCompareHotPatchNodes(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // ecx

  v2 = *(_DWORD *)(a2 + 24);
  if ( *(_DWORD *)(a1 + 24) >= v2 )
  {
    if ( *(_DWORD *)(a1 + 24) > v2 )
      return 1LL;
    v3 = *(_DWORD *)(a2 + 28);
    v4 = *(_DWORD *)(a1 + 28);
    if ( v4 >= v3 )
      return v4 > v3;
  }
  return 0xFFFFFFFFLL;
}
