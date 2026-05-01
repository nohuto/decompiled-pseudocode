/*
 * XREFs of ?MinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA?AUSize@Foundation@56@XZ @ 0x18035BC58
 * Callers:
 *     ?get_MinimumSize@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEAUSize@Foundation@Windows@3@@Z @ 0x18035D060 (-get_MinimumSize@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windo.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 */

_DWORD *__fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::MinimumSize(
        __int64 a1,
        _DWORD *a2)
{
  int v4; // xmm0_4
  int v5; // xmm1_4
  unsigned __int64 v7; // [rsp+20h] [rbp-18h]
  RTL_SRWLOCK *v8[2]; // [rsp+28h] [rbp-10h] BYREF

  v8[0] = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(v8, (RTL_SRWLOCK *)(a1 + 176));
  if ( *(_QWORD *)(a1 + 40) )
  {
    v4 = *(_DWORD *)(a1 + 64);
    v5 = *(_DWORD *)(a1 + 68);
  }
  else if ( *(_BYTE *)(a1 + 136) )
  {
    v4 = *(_DWORD *)(a1 + 128);
    v5 = *(_DWORD *)(a1 + 132);
  }
  else
  {
    v7 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v5 = HIDWORD(v7);
    v4 = v7;
  }
  *a2 = v4;
  a2[1] = v5;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v8);
  return a2;
}
