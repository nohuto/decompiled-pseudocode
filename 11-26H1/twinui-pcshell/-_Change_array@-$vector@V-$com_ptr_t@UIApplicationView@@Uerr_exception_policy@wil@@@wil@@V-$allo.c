/*
 * XREFs of ?_Change_array@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x180176C40
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEAPEAUIApplicationView@@@Z @ 0x1804EF76C (--$_Emplace_reallocate@AEAPEAUIApplicationView@@@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_e.c)
 * Callees:
 *     ??_G?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAAPEAXI@Z @ 0x180176CCC (--_G-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAAPEAXI@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Change_array(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 v9; // rbp
  __int64 result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    while ( v4 != v9 )
    {
      wil::com_ptr_t<IApplicationView,wil::err_exception_policy>::`scalar deleting destructor'(v4);
      v4 += 8LL;
    }
    std::_Deallocate<16>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = a2;
  a1[1] = a2 + 8 * a3;
  result = a2 + 8 * a4;
  a1[2] = result;
  return result;
}
