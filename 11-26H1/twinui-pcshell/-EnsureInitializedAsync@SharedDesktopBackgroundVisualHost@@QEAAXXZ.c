/*
 * XREFs of ?EnsureInitializedAsync@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x18060AC78
 * Callers:
 *     ?GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA_KW4BackgroundIdentifier@34567@_N@Z @ 0x180606450 (-GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180609734 (--0-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??1EnsureInitializedAsync@SharedVisualHostProvider@@QEAA@XZ @ 0x180609DEC (--1EnsureInitializedAsync@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ?StartActivity@EnsureInitializedAsync@SharedVisualHostProvider@@QEAAXXZ @ 0x18060BF28 (-StartActivity@EnsureInitializedAsync@SharedVisualHostProvider@@QEAAXXZ.c)
 *     ?StartXamlHostThread@SharedDesktopBackgroundVisualHost@@AEAA_NXZ @ 0x18060C5B8 (-StartXamlHostThread@SharedDesktopBackgroundVisualHost@@AEAA_NXZ.c)
 *     ?Stop@EnsureInitializedAsync@SharedVisualHostProvider@@QEAAX_N@Z @ 0x18060C8F4 (-Stop@EnsureInitializedAsync@SharedVisualHostProvider@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SharedDesktopBackgroundVisualHost::EnsureInitializedAsync(SharedDesktopBackgroundVisualHost *this)
{
  bool started; // al
  _QWORD v3[42]; // [rsp+20h] [rbp-168h] BYREF

  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v3,
    (__int64)"EnsureInitializedAsync");
  v3[0] = &SharedVisualHostProvider::EnsureInitializedAsync::`vftable';
  SharedVisualHostProvider::EnsureInitializedAsync::StartActivity((SharedVisualHostProvider::EnsureInitializedAsync *)v3);
  started = SharedDesktopBackgroundVisualHost::StartXamlHostThread(this);
  SharedVisualHostProvider::EnsureInitializedAsync::Stop(
    (SharedVisualHostProvider::EnsureInitializedAsync *)v3,
    started);
  SharedVisualHostProvider::EnsureInitializedAsync::~EnsureInitializedAsync((SharedVisualHostProvider::EnsureInitializedAsync *)v3);
}
