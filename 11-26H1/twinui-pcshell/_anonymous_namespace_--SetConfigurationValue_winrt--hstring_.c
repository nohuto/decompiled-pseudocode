/*
 * XREFs of _anonymous_namespace_::SetConfigurationValue_winrt::hstring_ @ 0x180334204
 * Callers:
 *     ?CurrentSessionId@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAXAEBUhstring@7@@Z @ 0x180335778 (-CurrentSessionId@GamingPostureConfiguration@implementation@Posture@GamingExperienc_ea_180335778.c)
 *     ?GamingAppAumid@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAXAEBUhstring@7@@Z @ 0x180335AF8 (-GamingAppAumid@GamingPostureConfiguration@implementation@Posture@GamingExperiences_ea_180335AF8.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$Start@AEAPEBGPEBG@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@SA?AV01@AEAPEBG$$QEAPEBG@Z @ 0x180334398 (--$Start@AEAPEBGPEBG@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@SA-AV01@A.c)
 *     ??1SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ @ 0x180335488 (--1SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803367C8 (-Stop@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall anonymous_namespace_::SetConfigurationValue_winrt::hstring_(const WCHAR *a1, winrt::hstring *a2)
{
  winrt::hstring *v2; // rbx
  const unsigned __int16 *v3; // rax
  const unsigned __int16 *v4; // rcx
  const WCHAR *v5; // rdx
  DWORD cbData; // eax
  __int64 v7; // rax
  int v8; // eax
  const char *v9; // r9
  LPCVOID lpData; // [rsp+20h] [rbp-1B8h]
  LPCWSTR lpValueName; // [rsp+30h] [rbp-1A8h] BYREF
  const unsigned __int16 *v12; // [rsp+38h] [rbp-1A0h] BYREF
  winrt::hstring *v13; // [rsp+40h] [rbp-198h]
  LPCWSTR lpSubKey[5]; // [rsp+48h] [rbp-190h] BYREF
  _BYTE v15[336]; // [rsp+70h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v2 = a2;
  lpValueName = a1;
  v13 = a2;
  std::wstring::wstring(
    (__int64)lpSubKey,
    (__int64)L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\GamingConfiguration");
  v12 = winrt::hstring::c_str(v2);
  GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::Start<unsigned short const * &,unsigned short const *>(
    v15,
    &lpValueName,
    &v12);
  v3 = winrt::hstring::c_str(v2);
  v4 = v3;
  v5 = (const WCHAR *)lpSubKey;
  if ( lpSubKey[3] > (LPCWSTR)7 )
    v5 = lpSubKey[0];
  if ( v3 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v4[v7] );
    cbData = 2 * v7 + 2;
  }
  else
  {
    cbData = 0;
  }
  v8 = RegSetKeyValueW(HKEY_CURRENT_USER, v5, lpValueName, 1u, v4, cbData);
  if ( v8 > 0 )
    v8 = (unsigned __int16)v8 | 0x80070000;
  if ( v8 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C89,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
        (const char *)(unsigned int)v8,
        (int)lpData);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x91,
        (int)"pcshell\\twinui\\gamingposture\\lib\\gamingpostureconfiguration.cpp",
        v9);
      v2 = v13;
    }
  }
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v15);
  GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::~SetConfigurationValueActivity((GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity *)v15);
  std::wstring::_Tidy_deallocate(lpSubKey);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v2);
}
