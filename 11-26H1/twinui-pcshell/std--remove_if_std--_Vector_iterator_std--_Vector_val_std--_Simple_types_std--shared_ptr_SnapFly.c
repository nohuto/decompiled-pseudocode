/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_d3d99d077aa6088e001c766fa29bfd0f___ @ 0x1805B2288
 * Callers:
 *     ?OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x18026A390 (-OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Intern.c)
 * Callees:
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18013AB58 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _lambda_d3d99d077aa6088e001c766fa29bfd0f_::operator() @ 0x1805B28FC (_lambda_d3d99d077aa6088e001c766fa29bfd0f_--operator().c)
 */

__int64 **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_d3d99d077aa6088e001c766fa29bfd0f___(
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
    if ( (unsigned __int8)lambda_d3d99d077aa6088e001c766fa29bfd0f_::operator()(a4, i) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 2; j != a3; j += 2 )
    {
      if ( !(unsigned __int8)lambda_d3d99d077aa6088e001c766fa29bfd0f_::operator()(a4, j) )
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
