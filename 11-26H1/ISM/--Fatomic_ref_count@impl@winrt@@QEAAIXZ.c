/*
 * XREFs of ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x180071984
 * Callers:
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@V_lambda_b258cc9de3522e72b4ea29240fe4ce89_@@@impl@winrt@@UEAAIXZ @ 0x1800A6650 (-Release@-$implements_delegate@U-$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationM.c)
 *     ?Release@marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@34@PEAPEAX@Z@UEAAIXZ @ 0x1800A66A0 (-Release@marshaler@-1--make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800A6910 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x1800A6978 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     winrt::impl::implements_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___::_implements_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___ @ 0x1800DDB2C (winrt--impl--implements_delegate_winrt--Windows--System--Threading--WorkItemHandler__lambda_d47f.c)
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_d7951b2d46f88de3e36d3c8b29e58ea6_@@@impl@winrt@@UEAAIXZ @ 0x180101D60 (-Release@-$implements_delegate@U-$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::atomic_ref_count::operator--(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedDecrement(a1);
  if ( (int)result < 0 )
    abort();
  return result;
}
