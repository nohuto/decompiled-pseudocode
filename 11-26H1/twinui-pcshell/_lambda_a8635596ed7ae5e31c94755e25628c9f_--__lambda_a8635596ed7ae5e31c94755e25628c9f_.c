/*
 * XREFs of _lambda_a8635596ed7ae5e31c94755e25628c9f_::__lambda_a8635596ed7ae5e31c94755e25628c9f_ @ 0x1801C4358
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a8635596ed7ae5e31c94755e25628c9f___::_CTaskWrapper__lambda_a8635596ed7ae5e31c94755e25628c9f___ @ 0x1806C1414 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a8635596ed7ae5e31c94755e25628c9f___--_CTask.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18009D9D0 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_a8635596ed7ae5e31c94755e25628c9f_::__lambda_a8635596ed7ae5e31c94755e25628c9f_(
        Platform::WeakReference *this)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((Platform::WeakReference *)((char *)this + 8));
  Platform::WeakReference::InternalRelease(this);
}
