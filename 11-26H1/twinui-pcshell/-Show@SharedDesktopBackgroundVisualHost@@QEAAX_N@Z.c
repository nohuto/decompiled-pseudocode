/*
 * XREFs of ?Show@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z @ 0x18060BB8C
 * Callers:
 *     ?Show@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAH_N@Z @ 0x18060BB60 (-Show@-$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@In.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180609734 (--0-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??1Show@SharedVisualHostProvider@@QEAA@XZ @ 0x180609E9C (--1Show@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ?StartActivity@Show@SharedVisualHostProvider@@QEAAX_N@Z @ 0x18060C1E8 (-StartActivity@Show@SharedVisualHostProvider@@QEAAX_N@Z.c)
 *     ?Stop@?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18060C804 (-Stop@-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation@Themes@UI@Internal@Windows@winrt@@W4DesktopVisualStartHint@Shell@5WindowsUdk@8@@Z @ 0x18060EC68 (-SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SharedDesktopBackgroundVisualHost::Show(RTL_SRWLOCK *this, bool a2)
{
  RTL_SRWLOCK *v4[2]; // [rsp+20h] [rbp-178h] BYREF
  _QWORD v5[42]; // [rsp+30h] [rbp-168h] BYREF

  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v5,
    (__int64)"Show");
  v5[0] = &SharedVisualHostProvider::Show::`vftable';
  SharedVisualHostProvider::Show::StartActivity((SharedVisualHostProvider::Show *)v5, a2);
  wil::AcquireSRWLockExclusive(v4, this + 24);
  LOBYTE(this[25].Ptr) = a2;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v4);
  SharedDesktopBackgroundVisualHost::SyncState(this, 1LL);
  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v5);
  SharedVisualHostProvider::Show::~Show((SharedVisualHostProvider::Show *)v5);
}
