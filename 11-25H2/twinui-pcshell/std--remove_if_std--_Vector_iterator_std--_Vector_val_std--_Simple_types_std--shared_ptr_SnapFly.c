/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_68aa1190552d1a9a339a806e906c71bc___ @ 0x18058E0A0
 * Callers:
 *     ?OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x180272450 (-OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Intern.c)
 * Callees:
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005D480 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _lambda_68aa1190552d1a9a339a806e906c71bc_::operator() @ 0x18058E510 (_lambda_68aa1190552d1a9a339a806e906c71bc_--operator().c)
 */

__int64 **std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_68aa1190552d1a9a339a806e906c71bc___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        ...)
{
  __int64 *i; // rdi
  __int64 *j; // rsi
  __int64 **result; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v8 = v9;
  for ( i = a2; i != a3; i += 2 )
  {
    if ( (unsigned __int8)lambda_68aa1190552d1a9a339a806e906c71bc_::operator()(&v8, i) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 2; j != a3; j += 2 )
    {
      if ( !(unsigned __int8)lambda_68aa1190552d1a9a339a806e906c71bc_::operator()((__int64 *)va, j) )
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
