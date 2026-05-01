/*
 * XREFs of ?IsGameManager_AddKGLGameToConfigStore@GameDVRTraceProvider@@SAXPEBG000@Z @ 0x18031633C
 * Callers:
 *     ?SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z @ 0x1803169E8 (-SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z.c)
 * Callees:
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x180034194 (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x1800353F8 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800373F8 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$Shell_IsGameManager_AddKGLGameToConfigStore@AEAPEBGAEAPEBGAEAPEBGAEAPEBG@GameDVRTraceProvider@@SAXAEAPEBG000@Z @ 0x1803159EC (--$Shell_IsGameManager_AddKGLGameToConfigStore@AEAPEBGAEAPEBGAEAPEBGAEAPEBG@GameDVRTraceProvider.c)
 */

void __fastcall GameDVRTraceProvider::IsGameManager_AddKGLGameToConfigStore(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  const unsigned __int16 *v7; // [rsp+40h] [rbp-C0h] BYREF
  const unsigned __int16 *v8; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v9; // [rsp+60h] [rbp-A0h] BYREF
  const unsigned __int16 *v10; // [rsp+70h] [rbp-90h] BYREF
  wchar_t OutputString[1024]; // [rsp+80h] [rbp-80h] BYREF
  STRSAFE_LPWSTR pszDest; // [rsp+880h] [rbp+780h] BYREF
  size_t cchDest; // [rsp+888h] [rbp+788h] BYREF

  v10 = a1;
  v8 = a3;
  v7 = a4;
  v9 = 0LL;
  GameDVR_OutputDebug::GameDVR_OutputDebug(OutputString, "IsGameManager_AddKGLGameToConfigStore");
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=\"%s\" ", "processName", a1, v7);
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=\"%s\" ", "processArgs", 0LL);
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=\"%s\" ", "processParentDir", a3);
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=\"%s\" ", "processWorkingDir", a4);
  GameDVR_OutputDebug::OutputString(OutputString);
  GameDVRTraceProvider::Shell_IsGameManager_AddKGLGameToConfigStore<unsigned short const * &,unsigned short const * &,unsigned short const * &,unsigned short const * &>(
    (__int64 *)&v10,
    &v9,
    (__int64 *)&v8,
    (__int64 *)&v7);
}
