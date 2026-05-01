/*
 * XREFs of ?OnShowWindowPolicy@KioskPositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1804F1680
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsOwnedAppWindow@KioskPositioner@@AEAA_NPEAUHWND__@@@Z @ 0x1804F0DF4 (-IsOwnedAppWindow@KioskPositioner@@AEAA_NPEAUHWND__@@@Z.c)
 *     ?IsViewManaged@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804F1028 (-IsViewManaged@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsWin32ApplicationView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804F10B0 (-IsWin32ApplicationView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KioskPositioner::OnShowWindowPolicy(
        KioskPositioner *this,
        HWND a2,
        __int64 a3,
        unsigned int *a4,
        struct tagRECT *lprc)
{
  int (*v8)(void); // rbx
  GamingPosturePositioner *v9; // rcx
  KioskPositioner *v10; // rcx
  const char *v11; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v14; // [rsp+40h] [rbp+8h] BYREF

  *a4 = 0;
  SetRectEmpty(lprc);
  v14 = 0LL;
  v8 = *(int (**)(void))(**((_QWORD **)this + 8) + 48LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v14);
  try
  {
    if ( v8() >= 0
      && KioskPositioner::IsViewManaged((KioskPositioner *)((char *)this - 152), v14)
      && GamingPosturePositioner::IsWin32ApplicationView(v9, v14)
      && !KioskPositioner::IsOwnedAppWindow(v10, a2) )
    {
      *a4 = 2;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x399,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v11);
  }
  return result;
}
