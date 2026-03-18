/*
 * XREFs of ??EPffIterator@@QEAAAEAV0@XZ @ 0x140296FC4
 * Callers:
 *     ?bFoundForcedMatch@MAPPER@@QEAAHXZ @ 0x1400C74D0 (-bFoundForcedMatch@MAPPER@@QEAAHXZ.c)
 *     bAddAllFlEntry @ 0x1400CAAB4 (bAddAllFlEntry.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@AEAI@Z @ 0x1400FDD9C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@AEAI@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x140104000 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
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
 *     <none>
 */

__int64 *__fastcall PffIterator::operator++(__int64 *a1)
{
  int v1; // edx
  __int64 v2; // r8
  bool v3; // al

  v1 = 0;
  v2 = *a1;
  do
  {
    v2 = *(_QWORD *)(v2 + 8);
    *a1 = v2;
    v3 = 0;
    if ( v2 )
    {
      v1 |= 1u;
      if ( (*(_DWORD *)(v2 + 52) & 0x10000) != 0 )
        v3 = 1;
    }
    if ( (v1 & 1) != 0 )
      v1 &= ~1u;
  }
  while ( v3 );
  return a1;
}
