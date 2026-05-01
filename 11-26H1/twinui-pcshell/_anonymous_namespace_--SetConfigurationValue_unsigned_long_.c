/*
 * XREFs of _anonymous_namespace_::SetConfigurationValue_unsigned_long_ @ 0x1803340A4
 * Callers:
 *     ?EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAX_N@Z @ 0x180335844 (-EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@W.c)
 *     ?StoreSystemDialogResult@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAXAEBUhstring@7@K@Z @ 0x180336D50 (-StoreSystemDialogResult@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Int.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x180033DA8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$StartActivity@K@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBGK@Z @ 0x1803343F0 (--$StartActivity@K@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBGK@.c)
 *     ??0?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803351A0 (--0-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??1SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ @ 0x180335488 (--1SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803367C8 (-Stop@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall anonymous_namespace_::SetConfigurationValue_unsigned_long_(
        LPCWSTR lpValueName,
        unsigned int a2,
        __int64 a3)
{
  __int64 v6; // rax
  const WCHAR *v7; // rdx
  int v8; // eax
  const char *v9; // r9
  int lpData; // [rsp+20h] [rbp-1B8h]
  unsigned int Data; // [rsp+30h] [rbp-1A8h] BYREF
  LPCWSTR lpSubKey[5]; // [rsp+38h] [rbp-1A0h] BYREF
  _QWORD v14[42]; // [rsp+60h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  std::wstring::wstring(
    (__int64)lpSubKey,
    (__int64)L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\GamingConfiguration");
  if ( a3 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(a3 + 2 * v6) );
    if ( v6 )
    {
      std::wstring::append((__int64)lpSubKey, (__int64)L"\\");
      std::wstring::append((__int64)lpSubKey, a3);
    }
  }
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v14);
  v14[0] = &GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::`vftable';
  GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::StartActivity<unsigned long>(v14, lpValueName, a2);
  try
  {
    v7 = (const WCHAR *)lpSubKey;
    if ( lpSubKey[3] > (LPCWSTR)7 )
      v7 = lpSubKey[0];
    Data = a2;
    v8 = RegSetKeyValueW(HKEY_CURRENT_USER, v7, lpValueName, 4u, &Data, 4u);
    if ( v8 > 0 )
      v8 = (unsigned __int16)v8 | 0x80070000;
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C89,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
        (const char *)(unsigned int)v8,
        lpData);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x85,
      (int)"pcshell\\twinui\\gamingposture\\lib\\gamingpostureconfiguration.cpp",
      v9);
  }
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v14);
  GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::~SetConfigurationValueActivity((GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity *)v14);
  return std::wstring::_Tidy_deallocate(lpSubKey);
}
