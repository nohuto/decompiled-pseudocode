/*
 * XREFs of MiSetImageProtection @ 0x14038B930
 * Callers:
 *     MiApplyHotPatchToDriverDataPages @ 0x14086E230 (MiApplyHotPatchToDriverDataPages.c)
 *     MiPatchDataPagesCallback @ 0x140873410 (MiPatchDataPagesCallback.c)
 *     MiResolveImageImports @ 0x1408753A8 (MiResolveImageImports.c)
 *     MiCompactServiceTable @ 0x14087AC6C (MiCompactServiceTable.c)
 *     MmLoadSystemImageEx @ 0x140A269D4 (MmLoadSystemImageEx.c)
 *     MmChangeImageProtection @ 0x140AD5D10 (MmChangeImageProtection.c)
 *     MiProcessKernelUmaImageLoadConfig @ 0x140B059BC (MiProcessKernelUmaImageLoadConfig.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140B05B58 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiSetImportTableProtection @ 0x140B53544 (MiSetImportTableProtection.c)
 * Callees:
 *     MiSetSystemCodeProtection @ 0x14038B984 (MiSetSystemCodeProtection.c)
 */

__int64 __fastcall MiSetImageProtection(__int64 a1, unsigned __int64 a2, int a3)
{
  return MiSetSystemCodeProtection(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a2 + (unsigned int)(a3 - 1)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
}
