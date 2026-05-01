/*
 * XREFs of ?_Change_array@?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x1800F1120
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800F05D8 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@w.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180241870 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Window.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1804A2708 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Change_array(
        __int64 **a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rdi
  __int64 *v9; // rbp
  __int64 *result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    while ( v4 != v9 )
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v4++);
    std::_Deallocate<16>(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = a2;
  a1[1] = &a2[a3];
  result = &a2[a4];
  a1[2] = result;
  return result;
}
