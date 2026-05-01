/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_8079b73aae97d35e2f9baaab6c344746___ @ 0x18058E130
 * Callers:
 *     ?OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x180272450 (-OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Intern.c)
 * Callees:
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005D480 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _lambda_8079b73aae97d35e2f9baaab6c344746_::operator() @ 0x18058E540 (_lambda_8079b73aae97d35e2f9baaab6c344746_--operator().c)
 */

__int64 **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_8079b73aae97d35e2f9baaab6c344746___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 *i; // rdi
  __int64 *j; // rsi
  __int64 **result; // rax

  for ( i = a2; i != a3; i += 2 )
  {
    if ( (unsigned __int8)lambda_8079b73aae97d35e2f9baaab6c344746_::operator()(a4, i) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 2; j != a3; j += 2 )
    {
      if ( !(unsigned __int8)lambda_8079b73aae97d35e2f9baaab6c344746_::operator()(a4, j) )
      {
        std::shared_ptr<KBViewInfo>::operator=(i, j);
        i += 2;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
