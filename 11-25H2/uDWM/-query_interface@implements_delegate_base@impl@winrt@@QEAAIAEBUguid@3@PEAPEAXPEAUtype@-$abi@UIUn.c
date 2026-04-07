/*
 * XREFs of ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x1800D9210
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___::QueryInterface @ 0x1800D8FE0 (winrt--impl--implements_delegate_winrt--Udwm--Transitions--AnimationCompletedHandle_ea_1800D8FE0.c)
 *     winrt::impl::implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789d___::QueryInterface @ 0x1800DA530 (winrt--impl--implements_delegate_winrt--Udwm--Transitions--UnloadDelegate__lambda_8_ea_1800DA530.c)
 * Callees:
 *     ??$is_guid_of@UIMarshal@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800987A4 (--$is_guid_of@UIMarshal@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UIUnknown@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x180098858 (--$is_guid_of@UIUnknown@Foundation@Windows@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??$is_guid_of@UIAgileObject@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x180098910 (--$is_guid_of@UIAgileObject@impl@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 *     ??E?$_Atomic_integral@I$03@std@@QEAAIXZ @ 0x1800D91EC (--E-$_Atomic_integral@I$03@std@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_base::query_interface(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // r11
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  const struct std::nothrow_t *v8; // r8
  __int64 v9; // r9

  v5 = a1;
  if ( *a2 == *a5 && a2[1] == a5[1]
    || winrt::is_guid_of<winrt::Windows::Foundation::IUnknown>(a2)
    || winrt::is_guid_of<winrt::impl::IAgileObject>(v6) )
  {
    *a3 = a4;
    std::_Atomic_integral<unsigned int,4>::operator++(v5);
    return 0LL;
  }
  else if ( winrt::is_guid_of<winrt::impl::IMarshal>(v7) )
  {
    return winrt::impl::make_marshaler(v9, v8);
  }
  else
  {
    *(_QWORD *)v8 = 0LL;
    return 2147500034LL;
  }
}
