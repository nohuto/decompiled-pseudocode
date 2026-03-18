/*
 * XREFs of GetDPIServerInfo @ 0x140042F14
 * Callers:
 *     GetWindowNCMetrics @ 0x140042BB0 (GetWindowNCMetrics.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14004A6D4 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetCharDimensions @ 0x1400BFF0C (GetCharDimensions.c)
 *     xxxDrawCaptionTemp @ 0x1400C08C8 (xxxDrawCaptionTemp.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1400C2AE4 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 *     CreateCompatiblePublicDC @ 0x140174D54 (CreateCompatiblePublicDC.c)
 *     xxxDrawState @ 0x140190760 (xxxDrawState.c)
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     IsSysFontAndDefaultMode @ 0x14021EDAC (IsSysFontAndDefaultMode.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1402B7660 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     GetProcessDpiServerInfo @ 0x140042F48 (GetProcessDpiServerInfo.c)
 */

__int64 GetDPIServerInfo()
{
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    return GetProcessDpiServerInfo();
  else
    return Get96DpiServerInfo();
}
