/*
 * XREFs of ?Play@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x1805E6CFC
 * Callers:
 *     ?Play@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAHXZ @ 0x1805E6CD0 (-Play@-$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@In.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1805E4AF0 (--0-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??1Play@SharedVisualHostProvider@@QEAA@XZ @ 0x1805E5214 (--1Play@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ?StartActivity@Play@SharedVisualHostProvider@@QEAAXXZ @ 0x1805E74BC (-StartActivity@Play@SharedVisualHostProvider@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1805E7B18 (-Stop@-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation@Themes@UI@Internal@Windows@winrt@@W4DesktopVisualStartHint@Shell@5WindowsUdk@8@@Z @ 0x1805EA028 (-SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SharedDesktopBackgroundVisualHost::Play(SharedDesktopBackgroundVisualHost *this)
{
  _QWORD v2[42]; // [rsp+20h] [rbp-168h] BYREF

  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v2,
    (__int64)"Play");
  v2[0] = &SharedVisualHostProvider::Play::`vftable';
  SharedVisualHostProvider::Play::StartActivity((SharedVisualHostProvider::Play *)v2);
  SharedDesktopBackgroundVisualHost::SyncState(this, 4LL);
  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v2);
  SharedVisualHostProvider::Play::~Play((SharedVisualHostProvider::Play *)v2);
}
