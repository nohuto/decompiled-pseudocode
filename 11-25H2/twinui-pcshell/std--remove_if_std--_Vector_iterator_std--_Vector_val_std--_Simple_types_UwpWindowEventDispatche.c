/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_UwpWindowEventDispatcher::PendingActivationResumeData_______lambda_6af174294f94e7bf6db82c2326726555___ @ 0x180416DB8
 * Callers:
 *     ?UwpWindowNavigatedToVisible@UwpWindowEventDispatcher@@EEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1800FCFF0 (-UwpWindowNavigatedToVisible@UwpWindowEventDispatcher@@EEAAJPEAUIUwpWindowContext@UwpWindowLifec.c)
 * Callees:
 *     ??4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z @ 0x180196098 (--4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     _lambda_6af174294f94e7bf6db82c2326726555_::operator()_UwpWindowEventDispatcher::PendingActivationResumeData_&_ @ 0x180416220 (_lambda_6af174294f94e7bf6db82c2326726555_--operator()_UwpWindowEventDispatcher--PendingActivatio.c)
 */

__int64 **std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_UwpWindowEventDispatcher::PendingActivationResumeData_______lambda_6af174294f94e7bf6db82c2326726555___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        ...)
{
  __int64 *i; // rdi
  __int64 *j; // rsi
  __int64 **result; // rax
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD *);
  v8 = v9;
  for ( i = a2; i != a3; i += 4 )
  {
    if ( lambda_6af174294f94e7bf6db82c2326726555_::operator()_UwpWindowEventDispatcher::PendingActivationResumeData___(
           &v8,
           i) )
    {
      break;
    }
  }
  if ( i != a3 )
  {
    for ( j = i + 4; j != a3; j += 4 )
    {
      if ( !lambda_6af174294f94e7bf6db82c2326726555_::operator()_UwpWindowEventDispatcher::PendingActivationResumeData___(
              (_QWORD **)va,
              j) )
      {
        UwpWindowEventDispatcher::PendingActivationResumeData::operator=(i, j);
        i += 4;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
