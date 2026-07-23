/*
 * XREFs of MiGetControlAreaLoadConfig @ 0x14048F4E4
 * Callers:
 *     MiRelocateImageAgain @ 0x140881870 (MiRelocateImageAgain.c)
 *     MmGetSectionInformation @ 0x1408EBD40 (MmGetSectionInformation.c)
 *     MiMarkSharedImageCfgBits @ 0x140999108 (MiMarkSharedImageCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x14099B254 (MiMarkPrivateImageCfgBits.c)
 *     MiDoesImageContainFunctionOverrideFixups @ 0x140A08E48 (MiDoesImageContainFunctionOverrideFixups.c)
 *     MiSwitchBaseAddress @ 0x140AC9EC0 (MiSwitchBaseAddress.c)
 *     MiAllowImageMap @ 0x140B2222C (MiAllowImageMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaLoadConfig(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 32);
  return (v1 + 72) & -(__int64)(v1 != 0);
}
