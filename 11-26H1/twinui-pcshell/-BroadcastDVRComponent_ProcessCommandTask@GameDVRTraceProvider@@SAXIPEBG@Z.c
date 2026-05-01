/*
 * XREFs of ?BroadcastDVRComponent_ProcessCommandTask@GameDVRTraceProvider@@SAXIPEBG@Z @ 0x1800C5F98
 * Callers:
 *     ?ProcessCommandTask@BroadcastDVRComponent@@AEAAXW4_BCASTDVR_COMMAND@@@Z @ 0x1800C5CA0 (-ProcessCommandTask@BroadcastDVRComponent@@AEAAXW4_BCASTDVR_COMMAND@@@Z.c)
 * Callees:
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x180034194 (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x1800353F8 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800373F8 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ??$Shell_BroadcastDVRComponent_ProcessCommandTask@AEAIAEAPEBG@GameDVRTraceProvider@@SAXAEAIAEAPEBG@Z @ 0x1800C5B8C (--$Shell_BroadcastDVRComponent_ProcessCommandTask@AEAIAEAPEBG@GameDVRTraceProvider@@SAXAEAIAEAPE.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall GameDVRTraceProvider::BroadcastDVRComponent_ProcessCommandTask(int a1, const unsigned __int16 *a2)
{
  int v4; // [rsp+38h] [rbp-C8h]
  __int64 v5; // [rsp+40h] [rbp-C0h] BYREF
  const WCHAR *v6; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t OutputString[1024]; // [rsp+50h] [rbp-B0h] BYREF
  STRSAFE_LPWSTR pszDest; // [rsp+850h] [rbp+750h] BYREF
  size_t cchDest; // [rsp+858h] [rbp+758h] BYREF

  LODWORD(v5) = a1;
  v6 = a2;
  GameDVR_OutputDebug::GameDVR_OutputDebug(OutputString, "BroadcastDVRComponent_ProcessCommandTask");
  v4 = a1;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=%u ", "command", v4, v5, v6);
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=\"%s\" ", "CommandString", a2);
  GameDVR_OutputDebug::OutputString(OutputString);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_ProcessCommandTask<unsigned int &,unsigned short const * &>(
    (int *)&v5,
    &v6);
}
