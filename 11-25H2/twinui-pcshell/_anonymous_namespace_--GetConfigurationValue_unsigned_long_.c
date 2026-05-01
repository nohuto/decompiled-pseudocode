/*
 * XREFs of _anonymous_namespace_::GetConfigurationValue_unsigned_long_ @ 0x180334188
 * Callers:
 *     ?EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SA_NXZ @ 0x180336038 (-EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperienc_ea_180336038.c)
 *     ?GetStoredSystemDialogResult@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAKAEBUhstring@7@@Z @ 0x1803363F4 (-GetStoredSystemDialogResult@GamingPostureConfiguration@implementation@Posture@GamingExperiences.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800287E0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ @ 0x180331758 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ.c)
 *     ??$Start@AEAPEBG@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@SA?AV01@AEAPEBG@Z @ 0x180334B28 (--$Start@AEAPEBG@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@SA-AV01@AEAPE.c)
 *     ??$Stop@K@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXK_N@Z @ 0x180334E20 (--$Stop@K@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXK_N@Z.c)
 *     ??$try_get_value@K@reg@wil@@YA?AV?$optional@K@std@@PEAUHKEY__@@PEBG1@Z @ 0x18033581C (--$try_get_value@K@reg@wil@@YA-AV-$optional@K@std@@PEAUHKEY__@@PEBG1@Z.c)
 *     ??1GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ @ 0x180335C5C (--1GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall anonymous_namespace_::GetConfigurationValue_unsigned_long_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        _WORD *a5)
{
  char v5; // r14
  unsigned int v6; // ebx
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  void **v9; // r8
  __int64 v10; // rdi
  __int64 v11; // r8
  const char *v12; // r9
  void **v13; // r8
  const char *v14; // r9
  const char *v15; // r9
  __int64 v16; // rdi
  __int64 v17; // r8
  char v19; // [rsp+20h] [rbp-1B8h]
  char v20; // [rsp+20h] [rbp-1B8h]
  __int64 v21; // [rsp+28h] [rbp-1B0h]
  __int64 v22; // [rsp+28h] [rbp-1B0h]
  _BYTE v24[8]; // [rsp+38h] [rbp-1A0h] BYREF
  void *Src[3]; // [rsp+40h] [rbp-198h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-180h]
  _BYTE v27[336]; // [rsp+60h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v5 = a4;
  v6 = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_57721926>::GetImpl'::`2'::impl) )
  {
    GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity::Start<unsigned short const * &>((GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity *)v27);
    v19 = 1;
    std::wstring::wstring((char **)Src, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\GamingConfiguration");
    if ( a5 )
    {
      v7 = -1LL;
      v8 = -1LL;
      do
        ++v8;
      while ( a5[v8] );
      if ( v8 )
      {
        std::wstring::append(Src, (void *)L"\\", 1uLL);
        do
          ++v7;
        while ( a5[v7] );
        std::wstring::append(Src, a5, v7);
      }
    }
    try
    {
      v9 = Src;
      if ( v26 > 7 )
        v9 = (void **)Src[0];
      v10 = a1;
      v21 = *(_QWORD *)wil::reg::try_get_value<unsigned long>(v24, -2147483647LL, v9, a1);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x21,
        (int)"pcshell\\twinui\\gamingposture\\lib\\gamingpostureconfiguration.cpp",
        v12);
      v6 = 0;
      v5 = a4;
      v10 = a1;
    }
    if ( BYTE4(v21) )
      goto LABEL_17;
    if ( !v5 )
    {
      v19 = 0;
      v13 = Src;
      if ( v26 > 7 )
        v13 = (void **)Src[0];
      try
      {
        v21 = *(_QWORD *)wil::reg::try_get_value<unsigned long>(v24, -2147483646LL, v13, v10);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x2D,
          (int)"pcshell\\twinui\\gamingposture\\lib\\gamingpostureconfiguration.cpp",
          v14);
        v6 = 0;
      }
      if ( BYTE4(v21) )
LABEL_17:
        v6 = v21;
    }
    LOBYTE(v11) = v19;
    GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity::Stop<unsigned long>(v27, v6, v11);
    std::wstring::_Tidy_deallocate(Src);
  }
  else
  {
    GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity::Start<unsigned short const * &>((GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity *)v27);
    try
    {
      v20 = 1;
      v16 = a1;
      v22 = *(_QWORD *)wil::reg::try_get_value<unsigned long>(
                         v24,
                         -2147483647LL,
                         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\GamingConfiguration",
                         a1);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x4B,
        (int)"pcshell\\twinui\\gamingposture\\lib\\gamingpostureconfiguration.cpp",
        v15);
      v6 = 0;
      v16 = a1;
    }
    if ( BYTE4(v22)
      || (v20 = 0,
          v22 = *(_QWORD *)wil::reg::try_get_value<unsigned long>(
                             v24,
                             -2147483646LL,
                             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\GamingConfiguration",
                             v16),
          BYTE4(v22)) )
    {
      v6 = v22;
    }
    LOBYTE(v17) = v20;
    GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity::Stop<unsigned long>(v27, v6, v17);
  }
  GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity::~GetConfigurationValueActivity((GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity *)v27);
  return v6;
}
