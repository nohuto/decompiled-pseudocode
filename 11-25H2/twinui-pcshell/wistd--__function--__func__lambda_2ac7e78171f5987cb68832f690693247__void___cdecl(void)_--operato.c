/*
 * XREFs of wistd::__function::__func__lambda_2ac7e78171f5987cb68832f690693247__void___cdecl(void)_::operator() @ 0x18052EE30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$try_query@UIUnknown@@@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@1@XZ @ 0x1804ED344 (--$try_query@UIUnknown@@@-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBA-AV-.c)
 *     ?UpdateCurrentDesktopWallpaperPath@CVirtualDesktopManager@@AEAAJXZ @ 0x1805346DC (-UpdateCurrentDesktopWallpaperPath@CVirtualDesktopManager@@AEAAJXZ.c)
 */

void __fastcall wistd::__function::__func__lambda_2ac7e78171f5987cb68832f690693247__void___cdecl_void__::operator()(
        __int64 a1)
{
  void *v2; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::try_query<IUnknown>(
    (struct IWeakReference **)(a1 + 16),
    &v2);
  if ( v2 )
    CVirtualDesktopManager::UpdateCurrentDesktopWallpaperPath(*(CVirtualDesktopManager **)(a1 + 8));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v2);
}
