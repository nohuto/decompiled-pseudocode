/*
 * XREFs of _anonymous_namespace_::SetConfigurationValue_unsigned_long_ @ 0x1803348B0
 * Callers:
 *     ?EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAX_N@Z @ 0x180335F6C (-EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@W.c)
 *     ?StoreSystemDialogResult@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAXAEBUhstring@7@K@Z @ 0x1803372D0 (-StoreSystemDialogResult@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Int.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800287E0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$StartActivity@K@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBGK@Z @ 0x180334BC8 (--$StartActivity@K@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBGK@.c)
 *     ??$set_value@I@reg@wil@@YAXPEAUHKEY__@@PEBG1AEBI@Z @ 0x180335704 (--$set_value@I@reg@wil@@YAXPEAUHKEY__@@PEBG1AEBI@Z.c)
 *     ??0?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803359A8 (--0-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??1SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ @ 0x180335C88 (--1SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180336D44 (-Stop@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall anonymous_namespace_::SetConfigurationValue_unsigned_long_(__int64 a1, unsigned int a2, _WORD *a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  void **v8; // rdx
  const char *v9; // r9
  unsigned int v10; // [rsp+20h] [rbp-1B8h] BYREF
  void *Src[5]; // [rsp+28h] [rbp-1B0h] BYREF
  _QWORD v12[42]; // [rsp+50h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  std::wstring::wstring((char **)Src, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\GamingConfiguration");
  if ( a3 )
  {
    v6 = -1LL;
    v7 = -1LL;
    do
      ++v7;
    while ( a3[v7] );
    if ( v7 )
    {
      std::wstring::append(Src, (void *)L"\\", 1uLL);
      do
        ++v6;
      while ( a3[v6] );
      std::wstring::append(Src, a3, v6);
    }
  }
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v12);
  v12[0] = &GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::`vftable';
  GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::StartActivity<unsigned long>(v12, a1, a2);
  try
  {
    v8 = Src;
    if ( Src[3] > (void *)7 )
      v8 = (void **)Src[0];
    v10 = a2;
    ((void (__fastcall *)(__int64, void **, __int64, unsigned int *))wil::reg::set_value<unsigned int>)(
      -2147483647LL,
      v8,
      a1,
      &v10);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x7E,
      (int)"pcshell\\twinui\\gamingposture\\lib\\gamingpostureconfiguration.cpp",
      v9);
  }
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v12);
  GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::~SetConfigurationValueActivity((GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity *)v12);
  std::wstring::_Tidy_deallocate(Src);
}
