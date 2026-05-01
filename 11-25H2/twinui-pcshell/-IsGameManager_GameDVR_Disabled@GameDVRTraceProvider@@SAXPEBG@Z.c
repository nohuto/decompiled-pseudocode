/*
 * XREFs of ?IsGameManager_GameDVR_Disabled@GameDVRTraceProvider@@SAXPEBG@Z @ 0x18031A03C
 * Callers:
 *     ?IsEnabledInGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEA_N1PEAK@Z @ 0x180112CE8 (-IsEnabledInGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEA_N1PEAK@Z.c)
 * Callees:
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1800B5498 (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x1800B5600 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800B5720 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$Shell_IsGameManager_GameDVR_Disabled@AEAPEBG@GameDVRTraceProvider@@SAXAEAPEBG@Z @ 0x180319604 (--$Shell_IsGameManager_GameDVR_Disabled@AEAPEBG@GameDVRTraceProvider@@SAXAEAPEBG@Z.c)
 */

void __fastcall GameDVRTraceProvider::IsGameManager_GameDVR_Disabled(const unsigned __int16 *a1)
{
  const WCHAR *v2; // [rsp+40h] [rbp-838h] BYREF
  WCHAR OutputString[1024]; // [rsp+50h] [rbp-828h] BYREF
  STRSAFE_LPWSTR pszDest; // [rsp+850h] [rbp-28h] BYREF
  size_t cchDest; // [rsp+858h] [rbp-20h] BYREF

  v2 = a1;
  GameDVR_OutputDebug::GameDVR_OutputDebug(OutputString, "IsGameManager_GameDVR_Disabled");
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=\"%s\" ", "reason", a1, v2);
  GameDVR_OutputDebug::OutputString(OutputString);
  GameDVRTraceProvider::Shell_IsGameManager_GameDVR_Disabled<unsigned short const * &>(&v2);
}
