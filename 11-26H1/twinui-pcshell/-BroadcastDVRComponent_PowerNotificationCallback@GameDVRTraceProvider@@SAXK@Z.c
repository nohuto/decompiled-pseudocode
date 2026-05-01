/*
 * XREFs of ?BroadcastDVRComponent_PowerNotificationCallback@GameDVRTraceProvider@@SAXK@Z @ 0x18020ADD0
 * Callers:
 *     ?PowerNotificationCallback@BroadcastDVRComponent@@AEAAXK@Z @ 0x18020AD20 (-PowerNotificationCallback@BroadcastDVRComponent@@AEAAXK@Z.c)
 * Callees:
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x180034194 (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x1800353F8 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800373F8 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ??$Shell_BroadcastDVRComponent_PowerNotificationCallback@AEAK@GameDVRTraceProvider@@SAXAEAK@Z @ 0x1802B4738 (--$Shell_BroadcastDVRComponent_PowerNotificationCallback@AEAK@GameDVRTraceProvider@@SAXAEAK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall GameDVRTraceProvider::BroadcastDVRComponent_PowerNotificationCallback(int a1)
{
  int v2; // [rsp+38h] [rbp-840h]
  __int64 v3; // [rsp+40h] [rbp-838h] BYREF
  wchar_t OutputString[1024]; // [rsp+50h] [rbp-828h] BYREF
  STRSAFE_LPWSTR pszDest; // [rsp+850h] [rbp-28h] BYREF
  size_t cchDest; // [rsp+858h] [rbp-20h] BYREF

  LODWORD(v3) = a1;
  GameDVR_OutputDebug::GameDVR_OutputDebug(OutputString, "BroadcastDVRComponent_PowerNotificationCallback");
  v2 = a1;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=%u ", "powerSettingData", v2, v3);
  GameDVR_OutputDebug::OutputString(OutputString);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_PowerNotificationCallback<unsigned long &>(&v3);
}
