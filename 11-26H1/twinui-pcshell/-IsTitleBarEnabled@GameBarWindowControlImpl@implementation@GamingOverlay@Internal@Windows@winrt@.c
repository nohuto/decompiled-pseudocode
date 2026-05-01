/*
 * XREFs of ?IsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18035BA80
 * Callers:
 *     ?OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18034F484 (-OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?put_IsTitleBarEnabled@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAH_N@Z @ 0x18035D200 (-put_IsTitleBarEnabled@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?SetIsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEB_N@Z @ 0x18029CC44 (-SetIsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsTitleBarEnabled(
        RTL_SRWLOCK *this,
        char a2)
{
  __int64 v3; // rdx
  RTL_SRWLOCK *v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  v4 = 0LL;
  wil::AcquireSRWLockExclusive(&v4, this + 22);
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetIsTitleBarEnabled(
    (__int64)this,
    v3,
    &v5);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v4);
}
