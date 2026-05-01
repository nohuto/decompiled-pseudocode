/*
 * XREFs of ?BroadcastDVRComponent_RegistryChangeNotification_OnExit@GameDVRTraceProvider@@SAX_N000@Z @ 0x1800C68EC
 * Callers:
 *     ?RegistryChangeNotificationCallback@BroadcastDVRComponent@@AEAAJXZ @ 0x1800C62AC (-RegistryChangeNotificationCallback@BroadcastDVRComponent@@AEAAJXZ.c)
 * Callees:
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x180034194 (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x1800353F8 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800373F8 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ??$Shell_BroadcastDVRComponent_RegistryChangeNotification_OnExit@AEA_NAEA_NAEA_NAEA_N@GameDVRTraceProvider@@SAXAEA_N000@Z @ 0x1802BBA8C (--$Shell_BroadcastDVRComponent_RegistryChangeNotification_OnExit@AEA_NAEA_NAEA_NAEA_N@GameDVRTra.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall GameDVRTraceProvider::BroadcastDVRComponent_RegistryChangeNotification_OnExit(
        unsigned __int8 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  int v4; // edi
  int v5; // ebx
  int v6; // r14d
  int v7; // esi
  int v8; // [rsp+38h] [rbp-C8h]
  __int64 v9; // [rsp+38h] [rbp-C8h]
  __int64 v10; // [rsp+38h] [rbp-C8h]
  __int64 v11; // [rsp+38h] [rbp-C8h]
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t OutputString[1024]; // [rsp+60h] [rbp-A0h] BYREF
  STRSAFE_LPWSTR pszDest; // [rsp+860h] [rbp+760h] BYREF
  size_t cchDest; // [rsp+868h] [rbp+768h] BYREF

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  LOBYTE(v15) = a1;
  LOBYTE(v14) = a2;
  LOBYTE(v13) = a3;
  LOBYTE(v12) = a4;
  GameDVR_OutputDebug::GameDVR_OutputDebug(OutputString, "BroadcastDVRComponent_RegistryChangeNotification_OnExit");
  v8 = v5;
  StringCchPrintfExW(
    pszDest,
    cchDest,
    &pszDest,
    &cchDest,
    0,
    L"%S=%d ",
    "fGameDVRRegKeyEnabled",
    v8,
    v12,
    v13,
    v14,
    v15);
  LODWORD(v9) = v4;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=%d ", "fHistoricalCaptureEnabled", v9);
  LODWORD(v10) = v7;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=%d ", "fHistoricalCaptureEnabledOnBattery", v10);
  LODWORD(v11) = v6;
  StringCchPrintfExW(
    pszDest,
    cchDest,
    &pszDest,
    &cchDest,
    0,
    L"%S=%d ",
    "fHistoricalCaptureEnabledOnWirelessDesktop",
    v11);
  GameDVR_OutputDebug::OutputString(OutputString);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_RegistryChangeNotification_OnExit<bool &,bool &,bool &,bool &>(
    &v15,
    &v14,
    &v13,
    &v12);
}
