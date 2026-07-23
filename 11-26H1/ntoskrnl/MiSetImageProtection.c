/*
 * XREFs of MiSetImageProtection @ 0x14038D6E0
 * Callers:
 *     MiApplyHotPatchToDriverDataPages @ 0x140874600 (MiApplyHotPatchToDriverDataPages.c)
 *     MiPatchDataPagesCallback @ 0x140879770 (MiPatchDataPagesCallback.c)
 *     MiResolveImageImports @ 0x14087B78C (MiResolveImageImports.c)
 *     MiCompactServiceTable @ 0x14088106C (MiCompactServiceTable.c)
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 *     MmChangeImageProtection @ 0x140AD2CC0 (MmChangeImageProtection.c)
 *     MiProcessKernelUmaImageLoadConfig @ 0x140B07A50 (MiProcessKernelUmaImageLoadConfig.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140B07BEC (MiProcessKernelCfgImageLoadConfig.c)
 *     MiSetImportTableProtection @ 0x140B55DE4 (MiSetImportTableProtection.c)
 * Callees:
 *     MiSetSystemCodeProtection @ 0x14038D734 (MiSetSystemCodeProtection.c)
 */

__int64 __fastcall MiSetImageProtection(__int64 a1, unsigned __int64 a2, int a3)
{
  return MiSetSystemCodeProtection(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a2 + (unsigned int)(a3 - 1)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
}
