/*
 * XREFs of ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x1800D6240
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_5_::_lambda_1___::QueryInterface @ 0x1800D6030 (winrt--impl--implements_delegate_winrt--Udwm--Transitions--AnimationCompletedHandle_ea_1800D6030.c)
 *     winrt::impl::implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1___::QueryInterface @ 0x1800D74C0 (winrt--impl--implements_delegate_winrt--Udwm--Transitions--UnloadDelegate__winrt--U_ea_1800D74C0.c)
 * Callees:
 *     ??$is_guid_of@UIUnknown@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800871E0 (--$is_guid_of@UIUnknown@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UIMarshal@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18008BA4C (--$is_guid_of@UIMarshal@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UIAgileObject@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18008BCAC (--$is_guid_of@UIAgileObject@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??E?$_Atomic_integral@I$03@std@@QEAAIXZ @ 0x1800D621C (--E-$_Atomic_integral@I$03@std@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_base::query_interface(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // r11
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  const struct std::nothrow_t *v9; // r8
  __int64 v10; // r9

  v5 = a1;
  v6 = *a2 - *a5;
  if ( *a2 == *a5 )
    v6 = a2[1] - a5[1];
  if ( !v6
    || winrt::is_guid_of<winrt::Windows::Foundation::IUnknown>(a2)
    || winrt::is_guid_of<winrt::impl::IAgileObject>(v7) )
  {
    *a3 = a4;
    std::_Atomic_integral<unsigned int,4>::operator++(v5);
    return 0LL;
  }
  else if ( winrt::is_guid_of<winrt::impl::IMarshal>(v8) )
  {
    return winrt::impl::make_marshaler(v10, v9);
  }
  else
  {
    *(_QWORD *)v9 = 0LL;
    return 2147500034LL;
  }
}
