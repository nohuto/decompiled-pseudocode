/*
 * XREFs of GetAppCompatFlags @ 0x1401BCA50
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x140030E90 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVUDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1400BD4C0 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVUDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRIC.c)
 *     ?GetWindowWorker@@YAPEAUtagWND@@PEAU1@IH@Z @ 0x1401692A4 (-GetWindowWorker@@YAPEAUtagWND@@PEAU1@IH@Z.c)
 *     xxxDoScrollMenu @ 0x1402E8138 (xxxDoScrollMenu.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetAppCompatFlags(struct tagTHREADINFO *a1, __int64 a2)
{
  if ( !a1 )
    a1 = PtiCurrent(0LL, a2);
  return *((unsigned int *)a1 + 170);
}
