/*
 * XREFs of ?IsGameManager_DirChangeCallback@GameDVRTraceProvider@@SAXPEBG@Z @ 0x1800B6030
 * Callers:
 *     ?DirChangeCallback@IsGameManager@@CAXPEAXE@Z @ 0x1800B5E70 (-DirChangeCallback@IsGameManager@@CAXPEAXE@Z.c)
 * Callees:
 *     ??$Shell_IsGameManager_DirChangeCallback@AEAPEBG@GameDVRTraceProvider@@SAXAEAPEBG@Z @ 0x1800B3AB4 (--$Shell_IsGameManager_DirChangeCallback@AEAPEBG@GameDVRTraceProvider@@SAXAEAPEBG@Z.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1800B5498 (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800B5720 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall GameDVRTraceProvider::IsGameManager_DirChangeCallback(const unsigned __int16 *a1)
{
  int wMonth; // [rsp+30h] [rbp-D0h]
  int wDay; // [rsp+38h] [rbp-C8h]
  int wHour; // [rsp+40h] [rbp-C0h]
  int wMinute; // [rsp+48h] [rbp-B8h]
  int wSecond; // [rsp+50h] [rbp-B0h]
  int wMilliseconds; // [rsp+58h] [rbp-A8h]
  const WCHAR *v7; // [rsp+70h] [rbp-90h] BYREF
  struct _SYSTEMTIME SystemTime; // [rsp+78h] [rbp-88h] BYREF
  wchar_t pszDest[1024]; // [rsp+90h] [rbp-70h] BYREF
  STRSAFE_LPWSTR v10; // [rsp+890h] [rbp+790h] BYREF
  size_t cchDest; // [rsp+898h] [rbp+798h] BYREF

  v7 = a1;
  v10 = pszDest;
  cchDest = 1024LL;
  SystemTime = 0LL;
  GetLocalTime(&SystemTime);
  wMilliseconds = SystemTime.wMilliseconds;
  wSecond = SystemTime.wSecond;
  wMinute = SystemTime.wMinute;
  wHour = SystemTime.wHour;
  wDay = SystemTime.wDay;
  wMonth = SystemTime.wMonth;
  StringCchPrintfExW(
    pszDest,
    cchDest,
    &v10,
    &cchDest,
    0,
    L"%02d/%02d %02d:%02d:%02d.%03d [%08p] ",
    wMonth,
    wDay,
    wHour,
    wMinute,
    wSecond,
    wMilliseconds,
    NtCurrentTeb()->ClientId.UniqueThread);
  StringCchPrintfExW(v10, cchDest, &v10, &cchDest, 0, L"%S: ", "IsGameManager_DirChangeCallback");
  StringCchPrintfExW(v10, cchDest, &v10, &cchDest, 0, L"%S=\"%s\" ", "SubLocation", v7);
  GameDVR_OutputDebug::OutputString(pszDest);
  GameDVRTraceProvider::Shell_IsGameManager_DirChangeCallback<unsigned short const * &>(&v7);
}
