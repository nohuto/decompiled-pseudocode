/*
 * XREFs of _anonymous_namespace_::TimePointToTimeString @ 0x18005DE60
 * Callers:
 *     _anonymous_namespace_::GameMruItemToJsonObject @ 0x18005D8D4 (_anonymous_namespace_--GameMruItemToJsonObject.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

char **__fastcall anonymous_namespace_::TimePointToTimeString(char **a1, __int64 *a2)
{
  __int64 v4; // rdx
  const char *v5; // r9
  __time64_t Time[2]; // [rsp+20h] [rbp-458h] BYREF
  tm Tm; // [rsp+30h] [rbp-448h] BYREF
  wchar_t Buffer[512]; // [rsp+60h] [rbp-418h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+478h] [rbp+0h]

  Time[0] = (__time64_t)a1;
  v4 = (unsigned __int128)(*a2 * (__int128)(__int64)0xD6BF94D5E57A42BDuLL) >> 64;
  memset(&Tm, 0, sizeof(Tm));
  Time[0] = ((unsigned __int64)(*a2 + v4) >> 63) + ((*a2 + v4) >> 23);
  if ( _gmtime64_s(&Tm, Time) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x32,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
      v5);
  wcsftime(Buffer, 0x400uLL, L"%Y-%m-%dT%H:%M:%SZ", &Tm);
  std::wstring::wstring(a1, Buffer);
  return a1;
}
