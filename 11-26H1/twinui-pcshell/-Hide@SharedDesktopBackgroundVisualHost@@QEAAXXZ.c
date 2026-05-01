/*
 * XREFs of ?Hide@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x18060AFFC
 * Callers:
 *     ?Hide@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAHXZ @ 0x18060AFD0 (-Hide@-$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@In.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180609734 (--0-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??1Hide@SharedVisualHostProvider@@QEAA@XZ @ 0x180609E18 (--1Hide@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ?StartActivity@Hide@SharedVisualHostProvider@@QEAAXXZ @ 0x18060BFD8 (-StartActivity@Hide@SharedVisualHostProvider@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18060C804 (-Stop@-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation@Themes@UI@Internal@Windows@winrt@@W4DesktopVisualStartHint@Shell@5WindowsUdk@8@@Z @ 0x18060EC68 (-SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SharedDesktopBackgroundVisualHost::Hide(SharedDesktopBackgroundVisualHost *this)
{
  _QWORD v2[42]; // [rsp+20h] [rbp-168h] BYREF

  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v2,
    (__int64)"Hide");
  v2[0] = &SharedVisualHostProvider::Hide::`vftable';
  SharedVisualHostProvider::Hide::StartActivity((SharedVisualHostProvider::Hide *)v2);
  SharedDesktopBackgroundVisualHost::SyncState(this, 2LL);
  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v2);
  SharedVisualHostProvider::Hide::~Hide((SharedVisualHostProvider::Hide *)v2);
}
