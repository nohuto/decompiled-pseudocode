/*
 * XREFs of ?MinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBUSize@Foundation@56@@Z @ 0x18035BCF4
 * Callers:
 *     ?put_MinimumSize@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHUSize@Foundation@Windows@3@@Z @ 0x18035D280 (-put_MinimumSize@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windo.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?SetMinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBUSize@Foundation@56@@Z @ 0x18035C548 (-SetMinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AE.c)
 */

void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::MinimumSize(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Foundation::Size *a2)
{
  __int64 v4; // rdx
  RTL_SRWLOCK *v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  wil::AcquireSRWLockExclusive(&v5, this + 22);
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetMinimumSize(this, v4, a2);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
}
