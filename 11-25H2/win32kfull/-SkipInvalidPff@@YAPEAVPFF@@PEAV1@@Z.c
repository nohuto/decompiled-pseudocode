/*
 * XREFs of ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030F07C
 * Callers:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1400B8CB0 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x140106FA8 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x14010FBC0 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x1401A3238 (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1401C2EFC (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1401F3650 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1401FF2A4 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     vLinkEudcPFEsWorker @ 0x140201E80 (vLinkEudcPFEsWorker.c)
 *     ?QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x1402610C4 (-QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z.c)
 *     _UmfdZombifyAllUmfdFonts_::_2_::_lambda_1_::operator() @ 0x140263534 (_UmfdZombifyAllUmfdFonts_--_2_--_lambda_1_--operator().c)
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x140263948 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     vDeactivateEudcRFONTsWorker @ 0x14030DC0C (vDeactivateEudcRFONTsWorker.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x14030E428 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x14030E570 (vUnlinkEudcRFONTsWorker.c)
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x14030EDE0 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x14030EF2C (-GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ.c)
 *     ?HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z @ 0x14030F01C (-HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z.c)
 *     ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x14030F0D4 (-VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z.c)
 * Callees:
 *     Feature_1251264824__private_IsEnabledDeviceUsageNoInline @ 0x14030F3D4 (Feature_1251264824__private_IsEnabledDeviceUsageNoInline.c)
 */

struct PFF *__fastcall SkipInvalidPff(struct PFF *a1)
{
  bool v2; // cc

  v2 = dword_14039BDC0 <= 0;
  if ( dword_14039BDC0 < 0 )
  {
    _InterlockedCompareExchange(&dword_14039BDC0, Feature_1251264824__private_IsEnabledDeviceUsageNoInline() != 0, -1);
    v2 = dword_14039BDC0 <= 0;
  }
  if ( !v2 )
  {
    while ( a1 && (*((_DWORD *)a1 + 13) & 0x10000) != 0 )
      a1 = (struct PFF *)*((_QWORD *)a1 + 1);
  }
  return a1;
}
