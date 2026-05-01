/*
 * XREFs of ?IsGameManager_KGLUpdated@GameDVRTraceProvider@@SAXIHI@Z @ 0x1802BE9E8
 * Callers:
 *     ?UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z @ 0x18013F7F0 (-UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z.c)
 * Callees:
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1800B5498 (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x1800B5600 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800B5720 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ??$Shell_IsGameManager_KGLUpdated@AEAIAEAHAEAI@GameDVRTraceProvider@@SAXAEAIAEAH0@Z @ 0x180240F38 (--$Shell_IsGameManager_KGLUpdated@AEAIAEAHAEAI@GameDVRTraceProvider@@SAXAEAIAEAH0@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall GameDVRTraceProvider::IsGameManager_KGLUpdated(int a1, int a2, int a3)
{
  int v5; // [rsp+38h] [rbp-C8h]
  __int64 v6; // [rsp+38h] [rbp-C8h]
  __int64 v7; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v8; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR OutputString[1024]; // [rsp+60h] [rbp-A0h] BYREF
  STRSAFE_LPWSTR pszDest; // [rsp+860h] [rbp+760h] BYREF
  size_t cchDest; // [rsp+868h] [rbp+768h] BYREF

  LODWORD(v9) = a1;
  LODWORD(v8) = a2;
  LODWORD(v7) = a3;
  GameDVR_OutputDebug::GameDVR_OutputDebug(OutputString, "IsGameManager_KGLUpdated");
  v5 = a1;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=%u ", "index", v5, v7, v8, v9);
  LODWORD(v6) = a2;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=%d ", "ret", v6);
  GameDVR_OutputDebug::OutputString(OutputString);
  GameDVRTraceProvider::Shell_IsGameManager_KGLUpdated<unsigned int &,int &,unsigned int &>(
    &v9,
    (int *)&v8,
    (unsigned int *)&v7);
}
