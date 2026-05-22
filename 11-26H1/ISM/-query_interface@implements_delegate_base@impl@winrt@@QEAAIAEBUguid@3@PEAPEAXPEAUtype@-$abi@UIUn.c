/*
 * XREFs of ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x1800A6DDC
 * Callers:
 *     ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UAppViewChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_1c7c596e6dbeb6e60f71d7a89cc6a131_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800A6580 (-QueryInterface@-$implements_delegate@U-$TypedEventHandler@UAppViewWatcher@WindowManagement@Appl.c)
 *     ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@V_lambda_3fbc58ee29e05f36ae297a4d99e658b9_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800A65B0 (-QueryInterface@-$implements_delegate@U-$TypedEventHandler@UWindowWatcher@WindowManagement@Appli.c)
 *     ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_2deb2f955f0614de05a4052d98264887_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800A65E0 (-QueryInterface@-$implements_delegate@U-$TypedEventHandler@UWindowWatcher@WindowMan_ea_1800A65E0.c)
 *     ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_d7951b2d46f88de3e36d3c8b29e58ea6_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800A8E10 (-QueryInterface@-$implements_delegate@U-$TypedEventHandler@UIUniversalAppModelWatcher@WindowMana.c)
 *     winrt::impl::implements_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___::QueryInterface @ 0x1800DEBF0 (winrt--impl--implements_delegate_winrt--Windows--System--Threading--WorkItemHandler_ea_1800DEBF0.c)
 * Callees:
 *     ?increment_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x1800A6B24 (-increment_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_base::query_interface(
        winrt::impl::implements_delegate_base *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 a4,
        _QWORD *a5)
{
  if ( *a2 == *a5 && a2[1] == a5[1]
    || *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown> && a2[1] == 0x46000000000000C0LL
    || *a2 == winrt::impl::guid_v<winrt::impl::IAgileObject> && a2[1] == 0x905B8FCA64EEFFC0uLL )
  {
    *a3 = a4;
    winrt::impl::implements_delegate_base::increment_reference(a1);
    return 0LL;
  }
  else if ( *a2 == winrt::impl::guid_v<winrt::impl::IMarshal> && a2[1] == 0x46000000000000C0LL )
  {
    return winrt::impl::make_marshaler(a4, a3);
  }
  else
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
}
