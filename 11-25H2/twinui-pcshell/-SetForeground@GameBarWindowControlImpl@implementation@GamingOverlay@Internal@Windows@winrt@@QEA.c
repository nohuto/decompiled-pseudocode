/*
 * XREFs of ?SetForeground@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXXZ @ 0x18035582C
 * Callers:
 *     ?SetForeground@GamingOverlayExperienceManager@@UEAAJXZ @ 0x18034F3C0 (-SetForeground@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?SetForeground@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHXZ @ 0x180355800 (-SetForeground@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?SetForegroundInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18035588C (-SetForegroundInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@wi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetForeground(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  wil::AcquireSRWLockExclusive(&v2, this + 22);
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetForegroundInternal(this);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v2);
}
