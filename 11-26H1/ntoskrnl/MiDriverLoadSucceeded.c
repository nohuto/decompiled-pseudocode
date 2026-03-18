/*
 * XREFs of MiDriverLoadSucceeded @ 0x140A78E84
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x14086E384 (MiApplyHotPatchToLoadedDriver.c)
 *     MmLoadSystemImageEx @ 0x140A269D4 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038A9B0 (MiSectionControlArea.c)
 *     VfDriverLoadSucceeded @ 0x1404F4E4C (VfDriverLoadSucceeded.c)
 *     MiGetBaseLoaderPortion @ 0x1404F5130 (MiGetBaseLoaderPortion.c)
 *     MiCacheImageSymbols @ 0x140A78F14 (MiCacheImageSymbols.c)
 *     MiCallImageNotify @ 0x140A790C8 (MiCallImageNotify.c)
 *     MiProtectSystemImage @ 0x140A7935C (MiProtectSystemImage.c)
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
    MiProtectSystemImage(a1, 0LL);
  VfDriverLoadSucceeded(a1);
}
