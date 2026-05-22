/*
 * XREFs of ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x1800A6978
 * Callers:
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@V_lambda_b258cc9de3522e72b4ea29240fe4ce89_@@@impl@winrt@@UEAAIXZ @ 0x1800A6650 (-Release@-$implements_delegate@U-$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationM.c)
 *     winrt::impl::implements_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___::Release @ 0x1800DEC20 (winrt--impl--implements_delegate_winrt--Windows--System--Threading--WorkItemHandler_ea_1800DEC20.c)
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_d7951b2d46f88de3e36d3c8b29e58ea6_@@@impl@winrt@@UEAAIXZ @ 0x180101D60 (-Release@-$implements_delegate@U-$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall winrt::impl::implements_delegate_base::decrement_reference(volatile signed __int32 *this)
{
  return winrt::impl::atomic_ref_count::operator--(this);
}
