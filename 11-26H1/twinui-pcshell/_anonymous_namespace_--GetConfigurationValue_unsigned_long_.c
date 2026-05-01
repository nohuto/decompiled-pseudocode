/*
 * XREFs of _anonymous_namespace_::GetConfigurationValue_unsigned_long_ @ 0x180333A04
 * Callers:
 *     ?EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SA_NXZ @ 0x180335958 (-EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperienc_ea_180335958.c)
 *     ?GetStoredSystemDialogResult@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAKAEBUhstring@7@@Z @ 0x180335D24 (-GetStoredSystemDialogResult@GamingPostureConfiguration@implementation@Posture@GamingExperiences.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x180033DA8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ @ 0x1803306B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ.c)
 *     ??$Start@AEAPEBG@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@SA?AV01@AEAPEBG@Z @ 0x180334350 (--$Start@AEAPEBG@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@SA-AV01@AEAPE.c)
 *     ??$Stop@K@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXK_N@Z @ 0x180334650 (--$Stop@K@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXK_N@Z.c)
 *     ??$try_get_value@K@reg@wil@@YA?AV?$optional@K@std@@PEAUHKEY__@@PEBG1@Z @ 0x18033502C (--$try_get_value@K@reg@wil@@YA-AV-$optional@K@std@@PEAUHKEY__@@PEBG1@Z.c)
 *     ??1GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ @ 0x18033545C (--1GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall anonymous_namespace_::GetConfigurationValue_unsigned_long_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5)
{
  char v5; // si
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // r8
  const char *v9; // r9
  const char *v10; // r9
  __int64 v11; // rax
  _QWORD *v12; // r8
  __int64 v13; // rdi
  __int64 v14; // r8
  const char *v15; // r9
  _QWORD *v16; // r8
  const char *v17; // r9
  char v19; // [rsp+20h] [rbp-1A8h]
  char v20; // [rsp+20h] [rbp-1A8h]
  __int64 v21; // [rsp+28h] [rbp-1A0h]
  __int64 v22; // [rsp+28h] [rbp-1A0h]
  _BYTE v24[8]; // [rsp+38h] [rbp-190h] BYREF
  _QWORD v25[3]; // [rsp+40h] [rbp-188h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-170h]
  _BYTE v27[336]; // [rsp+60h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  v5 = a4;
  v6 = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_57721926>::GetImpl'::`2'::impl) )
  {
    GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity::Start<unsigned short const * &>((GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity *)v27);
    v20 = 1;
    std::wstring::wstring((__int64)v25, (__int64)L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\GamingConfiguration");
    if ( a5 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( *(_WORD *)(a5 + 2 * v11) );
      if ( v11 )
      {
        std::wstring::append((__int64)v25, (__int64)L"\\");
        std::wstring::append((__int64)v25, a5);
      }
    }
    try
    {
      v12 = v25;
      if ( v26 > 7 )
        v12 = (_QWORD *)v25[0];
      v13 = a1;
      v22 = *(_QWORD *)wil::reg::try_get_value<unsigned long>(v24, -2147483647LL, v12, a1);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x28,
        (int)"pcshell\\twinui\\gamingposture\\lib\\gamingpostureconfiguration.cpp",
        v15);
      v6 = 0;
      v5 = a4;
      v13 = a1;
    }
    if ( BYTE4(v22) )
      goto LABEL_21;
    if ( !v5 )
    {
      v20 = 0;
      v16 = v25;
      if ( v26 > 7 )
        v16 = (_QWORD *)v25[0];
      try
      {
        v22 = *(_QWORD *)wil::reg::try_get_value<unsigned long>(v24, -2147483646LL, v16, v13);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x34,
          (int)"pcshell\\twinui\\gamingposture\\lib\\gamingpostureconfiguration.cpp",
          v17);
        v6 = 0;
      }
      if ( BYTE4(v22) )
LABEL_21:
        v6 = v22;
    }
    LOBYTE(v14) = v20;
    GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity::Stop<unsigned long>(v27, v6, v14);
    std::wstring::_Tidy_deallocate(v25);
  }
  else
  {
    GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity::Start<unsigned short const * &>((GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity *)v27);
    try
    {
      v19 = 1;
      v7 = a1;
      v21 = *(_QWORD *)wil::reg::try_get_value<unsigned long>(
                         v24,
                         -2147483647LL,
                         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\GamingConfiguration",
                         a1);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x52,
        (int)"pcshell\\twinui\\gamingposture\\lib\\gamingpostureconfiguration.cpp",
        v9);
      v6 = 0;
      v7 = a1;
    }
    if ( BYTE4(v21) )
      goto LABEL_6;
    try
    {
      v19 = 0;
      v21 = *(_QWORD *)wil::reg::try_get_value<unsigned long>(
                         v24,
                         -2147483646LL,
                         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\GamingConfiguration",
                         v7);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x5D,
        (int)"pcshell\\twinui\\gamingposture\\lib\\gamingpostureconfiguration.cpp",
        v10);
      v6 = 0;
    }
    if ( BYTE4(v21) )
LABEL_6:
      v6 = v21;
    LOBYTE(v8) = v19;
    GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity::Stop<unsigned long>(v27, v6, v8);
  }
  GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity::~GetConfigurationValueActivity((GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity *)v27);
  return v6;
}
