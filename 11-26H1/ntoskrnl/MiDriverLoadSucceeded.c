/*
 * XREFs of MiDriverLoadSucceeded @ 0x1409E4E98
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x140874754 (MiApplyHotPatchToLoadedDriver.c)
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     VfDriverLoadSucceeded @ 0x1404EE42C (VfDriverLoadSucceeded.c)
 *     MiGetBaseLoaderPortion @ 0x1404EE710 (MiGetBaseLoaderPortion.c)
 *     MiProtectSystemImage @ 0x1409E4B80 (MiProtectSystemImage.c)
 *     MiCacheImageSymbols @ 0x1409E4F28 (MiCacheImageSymbols.c)
 *     MiCallImageNotify @ 0x1409E50E8 (MiCallImageNotify.c)
 */

void __fastcall MiDriverLoadSucceeded(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 BaseLoaderPortion; // rax

  *(_DWORD *)(a1 + 104) |= 0x41004000u;
  BaseLoaderPortion = MiGetBaseLoaderPortion(a1);
  *(_DWORD *)(BaseLoaderPortion + 184) |= 2u;
  MiCallImageNotify();
  MiCacheImageSymbols(a1, a3, a4);
  if ( !*(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 144) || (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    MiProtectSystemImage(a1, 0);
  VfDriverLoadSucceeded(a1);
}
