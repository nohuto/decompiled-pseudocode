/*
 * XREFs of ?Bounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA?AURect@Foundation@56@XZ @ 0x18035AF08
 * Callers:
 *     ?get_Bounds@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x18035CF50 (-get_Bounds@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@wi.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?GetBounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA?AURect@Foundation@56@Uread_lock_required@wil@@@Z @ 0x18035B248 (-GetBounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA-AU.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::Bounds(
        RTL_SRWLOCK *a1,
        __int64 a2)
{
  RTL_SRWLOCK *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(v5, a1 + 22);
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::GetBounds(a1, a2);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v5);
  return a2;
}
