/*
 * XREFs of DxgkDisplayMuxReportFirstFramePresented @ 0x14006522C
 * Callers:
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1402CFF04 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 * Callees:
 *     ?ReportFirstFramePresented@DISPLAY_MUX_MGR@@QEAAXU_LUID@@I@Z @ 0x14006B084 (-ReportFirstFramePresented@DISPLAY_MUX_MGR@@QEAAXU_LUID@@I@Z.c)
 */

void __fastcall DxgkDisplayMuxReportFirstFramePresented(struct _LUID a1, unsigned int a2)
{
  DISPLAY_MUX_MGR::ReportFirstFramePresented(qword_140169448, a1, a2);
}
