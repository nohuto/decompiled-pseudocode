/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_8ee7d66042e48d98bb41283a1a194426___::Invoke @ 0x180495B10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1801FB3CC (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ?lock@?$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1804990F8 (-lock@-$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA-.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_8ee7d66042e48d98bb41283a1a194426___::Invoke(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v3; // [rsp+28h] [rbp-10h]
  int v4; // [rsp+40h] [rbp+8h] BYREF

  std::weak_ptr<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::lock(a1 + 16, &v2);
  try
  {
    if ( v2 )
      std::_Func_class<void,>::operator()(v2 + 320);
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
