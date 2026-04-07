/*
 * XREFs of memcmp_0 @ 0x1800EB10C
 * Callers:
 *     ?CreateTextLayout@CDWriteText@@AEAAJXZ @ 0x18006314C (-CreateTextLayout@CDWriteText@@AEAAJXZ.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180072500 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z @ 0x180072984 (-LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z.c)
 *     ?ApplyColorizationParameters@CDesktopManager@@QEAA_NPEAVCGlassColorizationParameters@@@Z @ 0x18007323C (-ApplyColorizationParameters@CDesktopManager@@QEAA_NPEAVCGlassColorizationParameters@@@Z.c)
 *     ?SetFont@CDWriteText@@UEAAXAEBUtagLOGFONTW@@@Z @ 0x180074B40 (-SetFont@CDWriteText@@UEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x18007D978 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z @ 0x18008AD28 (-SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x1800B4F18 (-IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800BA820 (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1800D867C (-search@input_archive@tson@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
