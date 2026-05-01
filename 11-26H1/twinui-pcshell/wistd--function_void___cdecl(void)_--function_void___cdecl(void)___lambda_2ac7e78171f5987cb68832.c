/*
 * XREFs of wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_2ac7e78171f5987cb68832f690693247__void_ @ 0x1802C332C
 * Callers:
 *     ?SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJXZ @ 0x180109074 (-SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

_QWORD *__fastcall wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_2ac7e78171f5987cb68832f690693247__void_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // rax

  a1[14] = 0LL;
  a1[1] = &off_18072CD98;
  a1[2] = *a2;
  v3 = a2[1];
  a2[1] = 0LL;
  a1[3] = v3;
  a1[14] = a1 + 1;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a2 + 1);
  return a1;
}
