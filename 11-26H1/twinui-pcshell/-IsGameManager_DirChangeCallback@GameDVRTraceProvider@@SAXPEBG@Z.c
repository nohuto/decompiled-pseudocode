/*
 * XREFs of ?IsGameManager_DirChangeCallback@GameDVRTraceProvider@@SAXPEBG@Z @ 0x180127890
 * Callers:
 *     ?DirChangeCallback@IsGameManager@@CAXPEAXE@Z @ 0x1801276C0 (-DirChangeCallback@IsGameManager@@CAXPEAXE@Z.c)
 * Callees:
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x180034194 (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??$Shell_IsGameManager_DirChangeCallback@AEAPEBG@GameDVRTraceProvider@@SAXAEAPEBG@Z @ 0x180034308 (--$Shell_IsGameManager_DirChangeCallback@AEAPEBG@GameDVRTraceProvider@@SAXAEAPEBG@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800373F8 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall GameDVRTraceProvider::IsGameManager_DirChangeCallback(const unsigned __int16 *a1)
{
  int wMonth; // [rsp+30h] [rbp-D0h]
  int wDay; // [rsp+38h] [rbp-C8h]
  int wHour; // [rsp+40h] [rbp-C0h]
  int wMinute; // [rsp+48h] [rbp-B8h]
  int wSecond; // [rsp+50h] [rbp-B0h]
  int wMilliseconds; // [rsp+58h] [rbp-A8h]
  const WCHAR *v8; // [rsp+70h] [rbp-90h] BYREF
  struct _SYSTEMTIME SystemTime; // [rsp+78h] [rbp-88h] BYREF
  wchar_t pszDest[1024]; // [rsp+90h] [rbp-70h] BYREF
  STRSAFE_LPWSTR v11; // [rsp+890h] [rbp+790h] BYREF
  size_t cchDest; // [rsp+898h] [rbp+798h] BYREF

  v8 = a1;
  cchDest = 1024LL;
  v11 = pszDest;
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
    &v11,
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
  StringCchPrintfExW(v11, cchDest, &v11, &cchDest, 0, L"%S: ", "IsGameManager_DirChangeCallback");
  StringCchPrintfExW(v11, cchDest, &v11, &cchDest, 0, L"%S=\"%s\" ", "SubLocation", a1);
  GameDVR_OutputDebug::OutputString(pszDest);
  GameDVRTraceProvider::Shell_IsGameManager_DirChangeCallback<unsigned short const * &>(&v8);
}
