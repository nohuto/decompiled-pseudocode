/*
 * XREFs of MiGetControlAreaLoadConfig @ 0x140495994
 * Callers:
 *     MiRelocateImageAgain @ 0x14087B470 (MiRelocateImageAgain.c)
 *     MmGetSectionInformation @ 0x1408E5780 (MmGetSectionInformation.c)
 *     MiDoesImageContainFunctionOverrideFixups @ 0x140962FC0 (MiDoesImageContainFunctionOverrideFixups.c)
 *     MiMarkSharedImageCfgBits @ 0x1409C8128 (MiMarkSharedImageCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x1409CA274 (MiMarkPrivateImageCfgBits.c)
 *     MiSwitchBaseAddress @ 0x140AC82D0 (MiSwitchBaseAddress.c)
 *     MiAllowImageMap @ 0x140B1FE0C (MiAllowImageMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaLoadConfig(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 32);
  return (v1 + 72) & -(__int64)(v1 != 0);
}
