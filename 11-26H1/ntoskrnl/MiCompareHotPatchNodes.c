/*
 * XREFs of MiCompareHotPatchNodes @ 0x140875A8C
 * Callers:
 *     MiGetAllRegisteredPatches @ 0x14087607C (MiGetAllRegisteredPatches.c)
 *     MiInsertHotPatchRecord @ 0x140876C5C (MiInsertHotPatchRecord.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x140876E0C (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x140876F28 (MiInsertSecureImageActivePatch.c)
 *     MmRemoveSecureImageActivePatch @ 0x14087B164 (MmRemoveSecureImageActivePatch.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A9DB18 (MiFindProcessImageHotPatchRecord.c)
 *     MiFindHotPatchRecord @ 0x140AC2084 (MiFindHotPatchRecord.c)
 *     MmRegisterHotPatches @ 0x140D01F24 (MmRegisterHotPatches.c)
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
