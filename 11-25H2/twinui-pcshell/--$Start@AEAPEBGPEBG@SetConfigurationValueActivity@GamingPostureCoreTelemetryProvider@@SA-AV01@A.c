/*
 * XREFs of ??$Start@AEAPEBGPEBG@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@SA?AV01@AEAPEBG$$QEAPEBG@Z @ 0x180334B70
 * Callers:
 *     _anonymous_namespace_::SetConfigurationValue_winrt::hstring_ @ 0x1803349DC (_anonymous_namespace_--SetConfigurationValue_winrt--hstring_.c)
 *     ?GamingAppAumid@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAXAEBUhstring@7@@Z @ 0x1803361CC (-GamingAppAumid@GamingPostureConfiguration@implementation@Posture@GamingExperiences_ea_1803361CC.c)
 * Callees:
 *     ??$StartActivity@PEBG@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG0@Z @ 0x180334C90 (--$StartActivity@PEBG@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEB.c)
 *     ??0?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803359A8 (--0-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

// Hidden C++ exception states: #wind=1
struct wil::details::IFailureCallback *__fastcall GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::Start<unsigned short const * &,unsigned short const *>(
        struct wil::details::IFailureCallback *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(a1);
  *(_QWORD *)a1 = &GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::`vftable';
  GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::StartActivity<unsigned short const *>(a1, *a2, *a3);
  return a1;
}
