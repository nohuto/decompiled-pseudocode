/*
 * XREFs of _lambda_fe44875c696bc544c1b0599fc0c72566_::_lambda_invoker_cdecl_ @ 0x1804F2670
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VGamingPosturePositioner@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18020BDA0 (--1-$com_ptr_t@VGamingPosturePositioner@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VGamingPosturePositioner@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1804F6CA8 (--0-$com_ptr_t@VGamingPosturePositioner@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?OnDesktopSwitch@GamingPosturePositioner@@AEAAXXZ @ 0x1805009E8 (-OnDesktopSwitch@GamingPosturePositioner@@AEAAXXZ.c)
 */

void __fastcall lambda_fe44875c696bc544c1b0599fc0c72566_::_lambda_invoker_cdecl_(
        HWINEVENTHOOK hWinEventHook,
        __int64 event,
        HWND hwnd,
        __int64 idObject)
{
  GamingPosturePositioner *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  wil::com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>::com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>(
    v4,
    event,
    hwnd,
    idObject);
  if ( v4[0] )
    GamingPosturePositioner::OnDesktopSwitch(v4[0]);
  wil::com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>::~com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>((__int64 *)v4);
}
