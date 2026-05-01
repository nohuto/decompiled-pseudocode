/*
 * XREFs of ?TransformApplicationViewError@@YAXPEAJ@Z @ 0x18029A648
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_2cd8efa9c73fdf6fea1f7977b917e9c3___1_long_::Invoke @ 0x18029A600 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_18029A600.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_d5477cdde00c396a06f6576e925c03df___1_long_::Invoke @ 0x1802F2A40 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F2A40.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_e2360ed1712dd7b190dfa8ff8188f443___1_long_::Invoke @ 0x1802F2AF0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F2AF0.c)
 * Callees:
 *     <none>
 */

void __fastcall TransformApplicationViewError(int *a1)
{
  if ( *a1 == -2147023496 || *a1 == -2147024890 )
  {
    *a1 = -2147024809;
  }
  else if ( *a1 == -2147467260 )
  {
    *a1 = 0;
  }
}
