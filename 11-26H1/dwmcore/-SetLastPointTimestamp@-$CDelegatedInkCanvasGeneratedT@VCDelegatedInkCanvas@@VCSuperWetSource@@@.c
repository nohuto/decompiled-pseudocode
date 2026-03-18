/*
 * XREFs of ?SetLastPointTimestamp@?$CDelegatedInkCanvasGeneratedT@VCDelegatedInkCanvas@@VCSuperWetSource@@@@QEAAJ_J@Z @ 0x18024BB0C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     McTemplateU0x_EventWriteTransfer @ 0x1800F8600 (McTemplateU0x_EventWriteTransfer.c)
 *     ?OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x180125C54 (-OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 */

__int64 __fastcall CDelegatedInkCanvasGeneratedT<CDelegatedInkCanvas,CSuperWetSource>::SetLastPointTimestamp(
        struct CSuperWetSource *a1,
        __int64 a2)
{
  if ( a2 != *((_QWORD *)a1 + 20) )
  {
    *((_QWORD *)a1 + 20) = a2;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0x_EventWriteTransfer((__int64)a1, &EVTDESC_DELEGATEDINKCANVAS_TIMESTAMPUPDATE, a2);
    CSuperWetInkManager::OnUpdatedInkReceived(*(CSuperWetInkManager **)(*((_QWORD *)a1 + 3) + 656LL), a1);
  }
  return 0LL;
}
