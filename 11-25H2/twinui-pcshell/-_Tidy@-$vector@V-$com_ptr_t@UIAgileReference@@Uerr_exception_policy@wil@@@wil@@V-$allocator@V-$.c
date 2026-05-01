/*
 * XREFs of ?_Tidy@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1800280D4
 * Callers:
 *     ??_EAgileCallbackArray@AgileRegistrationList@@UEAAPEAXI@Z @ 0x180028070 (--_EAgileCallbackArray@AgileRegistrationList@@UEAAPEAXI@Z.c)
 *     ??1?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18022B0AC (--1-$vector@V-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-$com_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E0490 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Tidy(void **a1)
{
  char *v1; // rbx
  char *v3; // rsi
  char *v4; // rcx
  signed __int64 v5; // rdx
  const struct std::nothrow_t *v6; // rdx
  void *v7; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = (char *)*a1;
  if ( *a1 )
  {
    v3 = (char *)a1[1];
    while ( v1 != v3 )
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v1);
      v1 += 8;
    }
    v4 = (char *)*a1;
    v5 = (_BYTE *)a1[2] - (_BYTE *)*a1;
    v7 = *a1;
    v6 = (const struct std::nothrow_t *)(v5 & 0xFFFFFFFFFFFFFFF8uLL);
    v8 = (unsigned __int64)v6;
    if ( (unsigned __int64)v6 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v7, &v8);
      v4 = (char *)v7;
      v6 = (const struct std::nothrow_t *)v8;
    }
    operator delete(v4, v6);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
