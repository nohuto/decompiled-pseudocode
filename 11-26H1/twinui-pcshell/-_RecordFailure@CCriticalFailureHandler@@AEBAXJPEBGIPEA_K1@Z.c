/*
 * XREFs of ?_RecordFailure@CCriticalFailureHandler@@AEBAXJPEBGIPEA_K1@Z @ 0x18067AAF0
 * Callers:
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18067A61C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 * Callees:
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1802BF8E0 (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ?SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z @ 0x1803B8AA0 (-SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z.c)
 */

void __fastcall CCriticalFailureHandler::_RecordFailure(
        CCriticalFailureHandler *this,
        int a2,
        BYTE *a3,
        int a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF

  hKey = 0LL;
  if ( !RegCreateKeyExW(HKEY_CURRENT_USER, lpSubKey, 0, 0LL, 1u, 0x20006u, 0LL, &hKey, 0LL) )
  {
    SHRegSetString(hKey, 0LL, L"PreviousFailure_SourceFile", a3);
    SHRegSetDWORD(hKey, 0LL, L"PreviousFailure_SourceLine", a4);
    SHRegSetDWORD(hKey, 0LL, L"PreviousFailure_Result", a2);
    if ( a5 )
      SHRegSetDWORD(hKey, 0LL, L"PreviousFailure_Arg1", *(_DWORD *)a5);
    if ( a6 )
      SHRegSetDWORD(hKey, 0LL, L"PreviousFailure_Arg2", *(_DWORD *)a6);
    RegCloseKey(hKey);
  }
}
