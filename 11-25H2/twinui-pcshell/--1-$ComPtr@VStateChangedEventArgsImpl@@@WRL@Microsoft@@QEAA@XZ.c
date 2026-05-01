/*
 * XREFs of ??1?$ComPtr@VStateChangedEventArgsImpl@@@WRL@Microsoft@@QEAA@XZ @ 0x180547DBC
 * Callers:
 *     _wil::MakeOrThrow_StateChangedEventArgsImpl_unsigned_short_const___&_bool_&__::_1_::dtor$0 @ 0x1806CC33E (_wil--MakeOrThrow_StateChangedEventArgsImpl_unsigned_short_const___-_bool_-__--_1_--dtor$0.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::ReportAppStateChange_::_1_::dtor$0 @ 0x1806CC4D6 (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--ReportAppStateChange_--_1_--.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18054BC30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IKeyValuePair@P.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<StateChangedEventArgsImpl>::~ComPtr<StateChangedEventArgsImpl>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *>,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
