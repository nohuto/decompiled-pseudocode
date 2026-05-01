/*
 * XREFs of ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803FBE04
 * Callers:
 *     ?_OnShellStateChanged@HolographicPositioner@@AEAAJW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x180241564 (-_OnShellStateChanged@HolographicPositioner@@AEAAJW4ShellState@Holographic@Shell@Internal@Window.c)
 *     ?HandleRecoveryForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1803F9890 (-HandleRecoveryForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1803FC3EC (-_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x1801935A0 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1802C7E44 (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1803FC820 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1803FE11C (-_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIViewHostI.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x180659AF8 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::_CloseView(__int64 **this, struct IApplicationView *a2)
{
  struct Windows::Internal::Shell::Holographic::IViewHostItem **ViewHostItem; // rax
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v5; // r8
  __int64 v6; // rcx
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  IUnknown **v12; // rax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v19; // [rsp+70h] [rbp+30h] BYREF
  void *ppvOut; // [rsp+78h] [rbp+38h] BYREF

  if ( !HolographicPositioner::_IsViewWin32Slate((void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2, 6) )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    v12 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk((__int64)(this + 1), &v19);
    v10 = IUnknown_QueryService(*v12, &stru_18077BD78, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &ppvOut);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
    if ( (v10 & 0x80000000) == 0 )
    {
      v15 = ApplicationViewHelpers::CloseView(a2, ppvOut, 10LL);
      v10 = v15;
      if ( v15 >= 0 )
      {
        v10 = 0;
        goto LABEL_19;
      }
      v13 = (unsigned int)v15;
      v14 = 2296LL;
    }
    else
    {
      v13 = v10;
      v14 = 2289LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)v13);
LABEL_19:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    return v10;
  }
  ViewHostItem = (struct Windows::Internal::Shell::Holographic::IViewHostItem **)HolographicPositioner::_FindViewHostItem(
                                                                                   this,
                                                                                   &v17,
                                                                                   a2);
  v5 = *ViewHostItem;
  *ViewHostItem = 0LL;
  v19 = v5;
  v6 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v5 = v19;
  }
  if ( !v5 )
  {
    v7 = this[37];
    v8 = *v7;
    v19 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *, char *, struct Windows::Internal::Shell::Holographic::IViewHostItem **))(v8 + 48))(
           v7,
           a2,
           (char *)this + 304,
           &v19);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 2281LL;
      goto LABEL_10;
    }
    v5 = v19;
  }
  v9 = HolographicPositioner::_TransitionViewFromHolographic((HolographicPositioner *)this, a2, v5);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v10 = 0;
    goto LABEL_12;
  }
  v11 = 2284LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v9);
LABEL_12:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
  return v10;
}
