/*
 * XREFs of ?BroadcastDVRComponent_EnterBroadcastMode@GameDVRTraceProvider@@SAXPEBG@Z @ 0x1803110D8
 * Callers:
 *     ?EnterBroadcastMode@BroadcastDVRComponent@@UEAAJE@Z @ 0x180311BC0 (-EnterBroadcastMode@BroadcastDVRComponent@@UEAAJE@Z.c)
 * Callees:
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x180034194 (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x1800353F8 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800373F8 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$Shell_BroadcastDVRComponent_EnterBroadcastMode@AEAPEBG@GameDVRTraceProvider@@SAXAEAPEBG@Z @ 0x18030ED08 (--$Shell_BroadcastDVRComponent_EnterBroadcastMode@AEAPEBG@GameDVRTraceProvider@@SAXAEAPEBG@Z.c)
 */

void __fastcall GameDVRTraceProvider::BroadcastDVRComponent_EnterBroadcastMode(const unsigned __int16 *a1)
{
  const WCHAR *v2; // [rsp+40h] [rbp-838h] BYREF
  wchar_t OutputString[1024]; // [rsp+50h] [rbp-828h] BYREF
  STRSAFE_LPWSTR pszDest; // [rsp+850h] [rbp-28h] BYREF
  size_t cchDest; // [rsp+858h] [rbp-20h] BYREF

  v2 = a1;
  GameDVR_OutputDebug::GameDVR_OutputDebug(OutputString, "BroadcastDVRComponent_EnterBroadcastMode");
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=\"%s\" ", "DesktopMode", a1, v2);
  GameDVR_OutputDebug::OutputString(OutputString);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_EnterBroadcastMode<unsigned short const * &>(&v2);
}
