/*
 * XREFs of ?BroadcastDVRComponent_RefreshGameListsTask@GameDVRTraceProvider@@SAX_N0@Z @ 0x1803115FC
 * Callers:
 *     ?RefreshGameListsTask@BroadcastDVRComponent@@AEAAX_N@Z @ 0x180313D04 (-RefreshGameListsTask@BroadcastDVRComponent@@AEAAX_N@Z.c)
 * Callees:
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x180034194 (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x1800353F8 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800373F8 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$Shell_BroadcastDVRComponent_RefreshGameListsTask@AEA_NAEA_N@GameDVRTraceProvider@@SAXAEA_N0@Z @ 0x18030EED8 (--$Shell_BroadcastDVRComponent_RefreshGameListsTask@AEA_NAEA_N@GameDVRTraceProvider@@SAXAEA_N0@Z.c)
 */

void __fastcall GameDVRTraceProvider::BroadcastDVRComponent_RefreshGameListsTask(__int64 a1, unsigned __int8 a2)
{
  int v2; // ebx
  int v3; // [rsp+38h] [rbp-C8h]
  __int64 v4; // [rsp+38h] [rbp-C8h]
  char v5[16]; // [rsp+40h] [rbp-C0h] BYREF
  char v6[16]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t OutputString[1024]; // [rsp+60h] [rbp-A0h] BYREF
  STRSAFE_LPWSTR pszDest; // [rsp+860h] [rbp+760h] BYREF
  size_t cchDest; // [rsp+868h] [rbp+768h] BYREF

  v2 = a2;
  v5[0] = a2;
  v6[0] = 0;
  GameDVR_OutputDebug::GameDVR_OutputDebug(OutputString, "BroadcastDVRComponent_RefreshGameListsTask");
  v3 = 0;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=%d ", "fHistoricalCaptureOffToOn", v3, *(_QWORD *)v5);
  LODWORD(v4) = v2;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=%d ", "fGameAppInFocus", v4);
  GameDVR_OutputDebug::OutputString(OutputString);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_RefreshGameListsTask<bool &,bool &>(v6, v5);
}
