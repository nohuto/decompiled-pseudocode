/*
 * XREFs of _lambda_8b16b784198cc2ffe8f5be0ce118e36a_::_lambda_8b16b784198cc2ffe8f5be0ce118e36a_ @ 0x18042DA60
 * Callers:
 *     ?v_SetDesiredNavigationLevel@UwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180184170 (-v_SetDesiredNavigationLevel@UwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@I.c)
 *     ?v_SetDesiredNavigationLevel@WindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18042FC20 (-v_SetDesiredNavigationLevel@WindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800CD100 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 *__fastcall lambda_8b16b784198cc2ffe8f5be0ce118e36a_::_lambda_8b16b784198cc2ffe8f5be0ce118e36a_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4,
        __int64 *a5)
{
  __int64 *result; // rax

  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    a1,
    a2);
  a1[1] = a3;
  a1[2] = *a4;
  result = a1;
  a1[3] = *a5;
  return result;
}
