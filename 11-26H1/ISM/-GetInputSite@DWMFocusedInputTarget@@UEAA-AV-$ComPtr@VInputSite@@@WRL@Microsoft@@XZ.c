/*
 * XREFs of ?GetInputSite@DWMFocusedInputTarget@@UEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@XZ @ 0x18002AF80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x18002AE88 (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 */

__int64 *__fastcall DWMFocusedInputTarget::GetInputSite(__int64 a1, __int64 *a2)
{
  DWMFocusedInputTarget *v4; // rcx

  v4 = (DWMFocusedInputTarget *)(a1 - 32);
  if ( !*((_QWORD *)v4 + 10) )
    DWMFocusedInputTarget::PopulateInputSiteFromViewId(v4);
  *a2 = *(_QWORD *)(a1 + 48);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a2);
  return a2;
}
