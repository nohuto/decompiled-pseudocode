/*
 * XREFs of ?BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit@GameDVRTraceProvider@@SAXJJKK@Z @ 0x180223E9C
 * Callers:
 *     ?KGLSettingsRegistryChangeNotificationCallback@BroadcastDVRComponent@@AEAAJXZ @ 0x1802BD2F0 (-KGLSettingsRegistryChangeNotificationCallback@BroadcastDVRComponent@@AEAAJXZ.c)
 * Callees:
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1800B5498 (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x1800B5600 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800B5720 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ??$Shell_BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit@AEAJAEAJAEAKAEAK@GameDVRTraceProvider@@SAXAEAJ0AEAK1@Z @ 0x180224038 (--$Shell_BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit@AEAJAEAJAEAKAEAK@GameDVRTra.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall GameDVRTraceProvider::BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit(
        int a1,
        int a2,
        int a3,
        int a4)
{
  int v8; // [rsp+38h] [rbp-C8h]
  __int64 v9; // [rsp+38h] [rbp-C8h]
  __int64 v10; // [rsp+38h] [rbp-C8h]
  __int64 v11; // [rsp+38h] [rbp-C8h]
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR OutputString[1024]; // [rsp+60h] [rbp-A0h] BYREF
  STRSAFE_LPWSTR pszDest; // [rsp+860h] [rbp+760h] BYREF
  size_t cchDest; // [rsp+868h] [rbp+768h] BYREF

  LODWORD(v15) = a1;
  LODWORD(v14) = a2;
  LODWORD(v13) = a3;
  LODWORD(v12) = a4;
  GameDVR_OutputDebug::GameDVR_OutputDebug(OutputString, "BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit");
  v8 = a1;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=%d ", "lResult", v8, v12, v13, v14, v15);
  LODWORD(v9) = a2;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=%d ", "hr", v9);
  LODWORD(v10) = a3;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=%u ", "kglVersion", v10);
  LODWORD(v11) = a4;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=%u ", "activateOnUpdate", v11);
  GameDVR_OutputDebug::OutputString(OutputString);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit<long &,long &,unsigned long &,unsigned long &>(
    &v15,
    &v14,
    &v13,
    &v12);
}
