/*
 * XREFs of ?BroadcastDVRComponent_OnAddRemoveGameTask@GameDVRTraceProvider@@SAXPEAXK@Z @ 0x1803112A8
 * Callers:
 *     ?OnAddRemoveGameTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@EW4ShellNotificationType@Internal@Capture@Media@Windows@@E@Z @ 0x180312EDC (-OnAddRemoveGameTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@EW4ShellNotificationType@Internal@C.c)
 * Callees:
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x180034194 (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x1800353F8 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800373F8 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$Shell_BroadcastDVRComponent_OnAddRemoveGameTask@AEAPEAXAEAK@GameDVRTraceProvider@@SAXAEAPEAXAEAK@Z @ 0x18030EDB0 (--$Shell_BroadcastDVRComponent_OnAddRemoveGameTask@AEAPEAXAEAK@GameDVRTraceProvider@@SAXAEAPEAXA.c)
 */

void __fastcall GameDVRTraceProvider::BroadcastDVRComponent_OnAddRemoveGameTask(void *a1, int a2)
{
  __int64 v4; // [rsp+38h] [rbp-C8h]
  __int64 v5; // [rsp+40h] [rbp-C0h] BYREF
  void *v6; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t OutputString[1024]; // [rsp+50h] [rbp-B0h] BYREF
  STRSAFE_LPWSTR pszDest; // [rsp+850h] [rbp+750h] BYREF
  size_t cchDest; // [rsp+858h] [rbp+758h] BYREF

  v6 = a1;
  LODWORD(v5) = a2;
  GameDVR_OutputDebug::GameDVR_OutputDebug(OutputString, "BroadcastDVRComponent_OnAddRemoveGameTask");
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=0x%I64x ", "hWnd", a1, v5, v6);
  LODWORD(v4) = a2;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=%u ", "notificationToInvoke", v4);
  GameDVR_OutputDebug::OutputString(OutputString);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_OnAddRemoveGameTask<void * &,unsigned long &>(
    (__int64 *)&v6,
    (int *)&v5);
}
