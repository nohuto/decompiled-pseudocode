/*
 * XREFs of ?AllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18035ACF8
 * Callers:
 *     ?SetAllowPointerActivation@GamingOverlayExperienceManager@@UEAAJE@Z @ 0x180353760 (-SetAllowPointerActivation@GamingOverlayExperienceManager@@UEAAJE@Z.c)
 *     ?put_AllowPointerActivation@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAH_N@Z @ 0x18035D170 (-put_AllowPointerActivation@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Int.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?SetAllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEB_N@Z @ 0x18035C060 (-SetAllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Window.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::AllowPointerActivation(
        RTL_SRWLOCK *this,
        char a2)
{
  __int64 v3; // rdx
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v5; // [rsp+28h] [rbp-20h] BYREF

  v4[0] = a2;
  v5 = 0LL;
  wil::AcquireSRWLockExclusive(&v5, this + 22);
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetAllowPointerActivation(
    this,
    v3,
    v4);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
}
