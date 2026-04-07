/*
 * XREFs of ?QueryInterface@?$weak_ref@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800D3CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$is_guid_of@UIMarshal@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800987A4 (--$is_guid_of@UIMarshal@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UIUnknown@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x180098858 (--$is_guid_of@UIUnknown@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UIAgileObject@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x180098910 (--$is_guid_of@UIAgileObject@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UIWeakReference@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800D3414 (--$is_guid_of@UIWeakReference@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 */

__int64 __fastcall winrt::impl::weak_ref<1,1>::QueryInterface(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx
  const struct std::nothrow_t *v7; // r8
  __int64 v8; // r9

  if ( winrt::is_guid_of<winrt::impl::IWeakReference>(a2)
    || winrt::is_guid_of<winrt::Windows::Foundation::IUnknown>(v2)
    || winrt::is_guid_of<winrt::impl::IAgileObject>(v5) )
  {
    *v3 = v4;
    _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v4 + 28));
    return 0LL;
  }
  else if ( winrt::is_guid_of<winrt::impl::IMarshal>(v6) )
  {
    return winrt::impl::make_marshaler(v8, v7);
  }
  else
  {
    *(_QWORD *)v7 = 0LL;
    return 2147500034LL;
  }
}
