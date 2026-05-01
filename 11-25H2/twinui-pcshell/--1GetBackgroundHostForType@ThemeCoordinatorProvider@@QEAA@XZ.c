/*
 * XREFs of ??1GetBackgroundHostForType@ThemeCoordinatorProvider@@QEAA@XZ @ 0x1805E10A0
 * Callers:
 *     ?GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA_KW4BackgroundIdentifier@34567@_N@Z @ 0x1805E1824 (-GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA.c)
 *     _winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetBackgroundHostForType_::_1_::dtor$1 @ 0x1806D83DF (_winrt--Windows--Internal--UI--Themes--implementation--ThemeCoordinator--GetBackgro_ea_1806D83DF.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1805E160C (-Destroy@-$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall ThemeCoordinatorProvider::GetBackgroundHostForType::~GetBackgroundHostForType(
        ThemeCoordinatorProvider::GetBackgroundHostForType *this)
{
  *(_QWORD *)this = &ThemeCoordinatorProvider::GetBackgroundHostForType::`vftable';
  wil::ActivityBase<ThemeCoordinatorProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ThemeCoordinatorProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ThemeCoordinatorProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
