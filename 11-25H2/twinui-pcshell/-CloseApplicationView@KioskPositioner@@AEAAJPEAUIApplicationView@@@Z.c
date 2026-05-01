/*
 * XREFs of ?CloseApplicationView@KioskPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804DD9DC
 * Callers:
 *     ?HandleRecoveryForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804DE3F0 (-HandleRecoveryForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x1801935A0 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveAppCrusher@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1802BEBF4 (-reset@-$com_ptr_t@UIImmersiveAppCrusher@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x180659AF8 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KioskPositioner::CloseApplicationView(KioskPositioner *this, struct IApplicationView *a2)
{
  IUnknown **v4; // rax
  HRESULT v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *ppvOut; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  ppvOut = 0LL;
  wil::com_ptr_t<IImmersiveAppCrusher,wil::err_exception_policy>::reset((__int64 *)&ppvOut);
  v4 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk((__int64)this, &v12);
  v5 = IUnknown_QueryService(*v4, &stru_180788700, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &ppvOut);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  if ( v5 >= 0 )
  {
    v8 = ApplicationViewHelpers::CloseView(a2, ppvOut, 10LL);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v6 = (unsigned int)v8;
    v7 = 1183LL;
  }
  else
  {
    v6 = (unsigned int)v5;
    v7 = 1181LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
    (const char *)v6);
LABEL_7:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppvOut);
  return (unsigned int)v5;
}
