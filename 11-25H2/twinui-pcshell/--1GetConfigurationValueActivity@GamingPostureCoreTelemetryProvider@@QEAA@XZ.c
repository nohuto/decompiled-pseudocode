/*
 * XREFs of ??1GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ @ 0x180335C5C
 * Callers:
 *     _anonymous_namespace_::GetConfigurationValue_unsigned_long_ @ 0x180334188 (_anonymous_namespace_--GetConfigurationValue_unsigned_long_.c)
 *     _anonymous_namespace_::GetConfigurationValue_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_____ @ 0x1803343C0 (_anonymous_namespace_--GetConfigurationValue_std--basic_string_unsigned_short_std--char_traits_u.c)
 *     __anonymous_namespace_::GetConfigurationValue_unsigned_long__::_1_::dtor$2 @ 0x1806BBAAD (__anonymous_namespace_--GetConfigurationValue_unsigned_long__--_1_--dtor$2.c)
 *     __anonymous_namespace_::GetConfigurationValue_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______::_1_::dtor$8 @ 0x1806BBBC5 (__anonymous_namespace_--GetConfigurationValue_std--basic_string_unsigned_short_std-_ea_1806BBBC5.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180335ECC (-Destroy@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity::~GetConfigurationValueActivity(
        GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity *this)
{
  *(_QWORD *)this = &GamingPostureCoreTelemetryProvider::GetConfigurationValueActivity::`vftable';
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
