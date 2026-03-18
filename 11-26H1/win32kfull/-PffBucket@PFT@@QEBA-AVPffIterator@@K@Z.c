/*
 * XREFs of ?PffBucket@PFT@@QEBA?AVPffIterator@@K@Z @ 0x14025A850
 * Callers:
 *     vCleanupPrivateFonts @ 0x1400FD9B0 (vCleanupPrivateFonts.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x14020EAF0 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x14021F2C4 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x140287590 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ?prfntDeactivateEudcRFONTs@@YAXPEBQEAVPFE@@PEAU_LIST_ENTRY@@@Z @ 0x1402889F8 (-prfntDeactivateEudcRFONTs@@YAXPEBQEAVPFE@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x14028F80C (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1402916D4 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     _UmfdZombifyAllUmfdFonts_::_2_::_lambda_1_::operator() @ 0x1402967F4 (_UmfdZombifyAllUmfdFonts_--_2_--_lambda_1_--operator().c)
 *     PFTOBJ::EnumeratePFFs__vUnlinkAllEudcRFONTsAndPFEs_::_5_::_lambda_3___ @ 0x140323C28 (PFTOBJ--EnumeratePFFs__vUnlinkAllEudcRFONTsAndPFEs_--_5_--_lambda_3___.c)
 *     vLinkEudcPFEs @ 0x140324F0C (vLinkEudcPFEs.c)
 *     vUnlinkEudcRFONTs @ 0x140325380 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1403254C8 (vUnlinkEudcRFONTsAndPFEs.c)
 *     PFTOBJ::EnumeratePFFs__PUBLIC_PFTOBJ::GetEmbedFonts_::_2_::_lambda_1___ @ 0x14032684C (PFTOBJ--EnumeratePFFs__PUBLIC_PFTOBJ--GetEmbedFonts_--_2_--_lambda_1___.c)
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x140326AC4 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     ?HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z @ 0x140326CD8 (-HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z.c)
 *     ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x1403270F0 (-VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z.c)
 * Callees:
 *     ??0PffIterator@@QEAA@PEAVPFF@@@Z @ 0x140297050 (--0PffIterator@@QEAA@PEAVPFF@@@Z.c)
 */

__int64 __fastcall PFT::PffBucket(__int64 a1, PffIterator *a2, unsigned int a3)
{
  struct PFF *v4; // rdx
  __int64 v5; // r9

  if ( a3 >= *(_DWORD *)(a1 + 24) )
    v4 = 0LL;
  else
    v4 = *(struct PFF **)(a1 + 8LL * a3 + 40);
  PffIterator::PffIterator(a2, v4);
  return v5;
}
