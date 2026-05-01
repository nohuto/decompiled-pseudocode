/*
 * XREFs of ?_Change_array@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x18017FF5C
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEAPEAUIApplicationView@@@Z @ 0x1804DD180 (--$_Emplace_reallocate@AEAPEAUIApplicationView@@@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_e.c)
 * Callees:
 *     ??_G?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAAPEAXI@Z @ 0x180180004 (--_G-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E0490 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Change_array(
        void **a1,
        char *a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // rbx
  char *v9; // rbp
  char *v10; // rcx
  signed __int64 v11; // rdx
  const struct std::nothrow_t *v12; // rdx
  char *result; // rax
  unsigned __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  void *v15; // [rsp+58h] [rbp+10h] BYREF

  v4 = (char *)*a1;
  if ( *a1 )
  {
    v9 = (char *)a1[1];
    while ( v4 != v9 )
    {
      wil::com_ptr_t<IApplicationView,wil::err_exception_policy>::`scalar deleting destructor'(v4);
      v4 += 8;
    }
    v10 = (char *)*a1;
    v11 = (_BYTE *)a1[2] - (_BYTE *)*a1;
    v15 = *a1;
    v12 = (const struct std::nothrow_t *)(v11 & 0xFFFFFFFFFFFFFFF8uLL);
    v14 = (unsigned __int64)v12;
    if ( (unsigned __int64)v12 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v15, &v14);
      v12 = (const struct std::nothrow_t *)v14;
      v10 = (char *)v15;
    }
    operator delete(v10, v12);
  }
  *a1 = a2;
  a1[1] = &a2[8 * a3];
  result = &a2[8 * a4];
  a1[2] = result;
  return result;
}
