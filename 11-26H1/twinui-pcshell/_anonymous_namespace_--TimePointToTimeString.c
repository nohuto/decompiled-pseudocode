/*
 * XREFs of _anonymous_namespace_::TimePointToTimeString @ 0x18013992C
 * Callers:
 *     _anonymous_namespace_::GameMruItemToJsonObject @ 0x18013934C (_anonymous_namespace_--GameMruItemToJsonObject.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__time64_t __fastcall anonymous_namespace_::TimePointToTimeString(__time64_t a1, __int64 *a2)
{
  __int64 v4; // rdx
  const char *v5; // r9
  unsigned __int64 v6; // rax
  __time64_t Time[2]; // [rsp+20h] [rbp-458h] BYREF
  tm Tm; // [rsp+30h] [rbp-448h] BYREF
  wchar_t Buffer[512]; // [rsp+60h] [rbp-418h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+478h] [rbp+0h]

  Time[0] = a1;
  v4 = (unsigned __int128)(*a2 * (__int128)(__int64)0xD6BF94D5E57A42BDuLL) >> 64;
  memset(&Tm, 0, sizeof(Tm));
  Time[0] = ((unsigned __int64)(*a2 + v4) >> 63) + ((*a2 + v4) >> 23);
  if ( _gmtime64_s(&Tm, Time) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x32,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
      v5);
  wcsftime(Buffer, 0x400uLL, L"%Y-%m-%dT%H:%M:%SZ", &Tm);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v6 = std::_WChar_traits<wchar_t>::length((__int64)Buffer);
  std::wstring::_Construct<1,unsigned short const *>((char **)a1, Buffer, v6);
  return a1;
}
