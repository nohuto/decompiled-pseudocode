/*
 * XREFs of ?Shutdown@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z @ 0x18060BC48
 * Callers:
 *     ?ShutdownHostForId@?$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@@impl@winrt@@UEAAHH@Z @ 0x1806074D0 (-ShutdownHostForId@-$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18060967C (--0-$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??1Shutdown@SharedVisualHostProvider@@QEAA@XZ @ 0x180609EC8 (--1Shutdown@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ?StartActivity@Shutdown@SharedVisualHostProvider@@QEAAX_N@Z @ 0x18060C2A8 (-StartActivity@Shutdown@SharedVisualHostProvider@@QEAAX_N@Z.c)
 *     ?Stop@?$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18060C714 (-Stop@-$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?StopXamlHostThread@SharedDesktopBackgroundVisualHost@@AEAAX_N@Z @ 0x18060EB70 (-StopXamlHostThread@SharedDesktopBackgroundVisualHost@@AEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SharedDesktopBackgroundVisualHost::Shutdown(SharedDesktopBackgroundVisualHost *this)
{
  _QWORD v2[42]; // [rsp+20h] [rbp-168h] BYREF

  wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v2,
    (__int64)"Shutdown");
  v2[0] = &SharedVisualHostProvider::Shutdown::`vftable';
  SharedVisualHostProvider::Shutdown::StartActivity((SharedVisualHostProvider::Shutdown *)v2, 1);
  SharedDesktopBackgroundVisualHost::StopXamlHostThread(this, 1);
  wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v2);
  SharedVisualHostProvider::Shutdown::~Shutdown((SharedVisualHostProvider::Shutdown *)v2);
}
