/*
 * XREFs of ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18016E450
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180061BB8 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x18006647C (-_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800A8F60 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x18016EA30 (-_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z.c)
 *     ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x18016ED50 (-_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18016F3FC (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x18018C714 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@5@@Z @ 0x1801DD6CC (-_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collec.c)
 *     ??0CImmersiveAppFinderByTaskWindow@@QEAA@AEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z @ 0x1801ED068 (--0CImmersiveAppFinderByTaskWindow@@QEAA@AEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z.c)
 *     ??0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180201F70 (--0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180226188 (-_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentS.c)
 *     ?_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUIPresentationRequestedArgs@@@Z @ 0x1802A09EC (-_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerIntero.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802E5130 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CApplicationManager::_HandleViewEvent(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        int (__fastcall ***a3)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))
{
  __int64 v6; // rdx
  int (__fastcall *v8)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, void **); // rbx
  int (__fastcall *v9)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  struct Windows::Foundation::Collections::IPropertySet *v10; // rcx
  void *v11; // rcx
  int (__fastcall *v12)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  int (__fastcall *v13)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, void **); // rbx
  int (__fastcall *v14)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  struct Windows::Foundation::Collections::IPropertySet *v15; // r8
  struct Windows::Foundation::Collections::IPropertySet *v16; // rcx
  int (__fastcall *v17)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  struct Windows::Foundation::Collections::IPropertySet *v18; // rcx
  int (__fastcall *v19)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  int (__fastcall *v20)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  int (__fastcall *v21)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  char v22; // bl
  CTaskWindowFinder *v23; // rax
  __int64 v24; // rax
  IUnknown **v25; // rax
  HRESULT v26; // eax
  int (__fastcall *v27)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  void *ppvOut; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-48h] BYREF
  __int64 v30; // [rsp+40h] [rbp-40h] BYREF
  __int64 v31; // [rsp+48h] [rbp-38h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v32; // [rsp+50h] [rbp-30h] BYREF
  char v33; // [rsp+58h] [rbp-28h]
  _BYTE v34[8]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v35[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  int v37; // [rsp+C0h] [rbp+40h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v38; // [rsp+C8h] [rbp+48h] BYREF

  v37 = 0;
  if ( ((int (__fastcall *)(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Foundation::Collections::IPropertySet **), int *))(*a3)[6])(
         a3,
         &v37) < 0 )
    return 0LL;
  if ( v37 > 12 )
  {
    if ( v37 == 13 )
    {
      v38 = 0LL;
      v27 = **a3;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
      if ( v27(
             (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
             &GUID_8a11574c_5d5f_48d7_bd8c_d7a801fca248,
             &v38) >= 0 )
        (*(void (__fastcall **)(_QWORD, struct Windows::Foundation::Collections::IPropertySet *))(**((_QWORD **)this + 75)
                                                                                                + 120LL))(
          *((_QWORD *)this + 75),
          v38);
      goto LABEL_58;
    }
    if ( v37 == 14 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      CApplicationManager::_CreatePresentationRequestedArgs(
        this,
        (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
        (struct IPresentationRequestedArgs **)&ppvOut);
      v38 = 0LL;
      v17 = **a3;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
      if ( v17(
             (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
             &GUID_ffc41fc2_6037_4426_8bfb_7716e14343f7,
             &v38) >= 0 )
        (*(void (__fastcall **)(_QWORD, struct Windows::Foundation::Collections::IPropertySet *, void *))(**((_QWORD **)this + 75) + 128LL))(
          *((_QWORD *)this + 75),
          v38,
          ppvOut);
      v18 = v38;
      if ( v38 )
      {
        v38 = 0LL;
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v18 + 16LL))(v18);
      }
      goto LABEL_13;
    }
    if ( v37 != 35 )
    {
      if ( v37 != 38 )
        return 0LL;
      v38 = 0LL;
      v21 = **a3;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
      if ( v21(
             (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
             &GUID_559064cb_9dc0_4491_9a6c_ace3cd4e51c8,
             &v38) >= 0 )
        CApplicationManager::_HandleWindowingEnvironmentSettingsRequest(this, v38);
      goto LABEL_58;
    }
    v22 = 1;
    LOBYTE(v6) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::GetImpl'::`2'::impl,
      v6);
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v38 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
    v23 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)&v31, a2);
    v24 = CImmersiveAppFinderByTaskWindow::CImmersiveAppFinderByTaskWindow(v34, v23, 0LL);
    CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(this, v24, &v38, 0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v35);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v38 )
    {
      v29 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(
        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v38,
        (__int64 *)&v29);
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      v25 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk((char *)this + 48, &v30);
      v26 = IUnknown_QueryService(*v25, &guidService, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &ppvOut);
      if ( v26 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x177B,
          (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v26);
        v22 = 0;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
      if ( v22 )
        (*(void (__fastcall **)(void *, unsigned __int64, __int64))(*(_QWORD *)ppvOut + 32LL))(ppvOut, v29, 8LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
  }
  else if ( v37 == 12 )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    CApplicationManager::_CreatePresentationRequestedArgs(
      this,
      (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
      (struct IPresentationRequestedArgs **)&ppvOut);
    v38 = 0LL;
    v20 = **a3;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
    if ( v20(
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
           &GUID_73fde223_ab79_4255_b395_e73cc002703f,
           &v38) >= 0 )
      (*(void (__fastcall **)(_QWORD, struct Windows::Foundation::Collections::IPropertySet *, void *))(**((_QWORD **)this + 75) + 112LL))(
        *((_QWORD *)this + 75),
        v38,
        ppvOut);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  }
  else
  {
    if ( v37 )
    {
      switch ( v37 )
      {
        case 1:
          ppvOut = 0LL;
          v13 = (int (__fastcall *)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, void **))(*a3)[7];
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
          if ( v13((struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3, &ppvOut) >= 0 )
          {
            v38 = 0LL;
            v14 = **a3;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
            if ( v14(
                   (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
                   &GUID_741390c6_ef1e_43ce_bfc2_6cfb131c012e,
                   &v38) >= 0 )
            {
              v29 = 0LL;
              if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, unsigned __int64 *))(*(_QWORD *)a2 + 584LL))(
                     a2,
                     &v29) >= 0 )
                CApplicationManager::_HandleSelectTargetViewForNavigationRequest(this, v29, v15, v38);
            }
            v16 = v38;
            if ( v38 )
            {
              v38 = 0LL;
              (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v16 + 16LL))(v16);
            }
          }
          goto LABEL_13;
        case 2:
          ppvOut = 0LL;
          v8 = (int (__fastcall *)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, void **))(*a3)[7];
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
          if ( v8((struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3, &ppvOut) >= 0 )
          {
            v38 = 0LL;
            v9 = **a3;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
            if ( v9(
                   (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
                   &GUID_a8d2a90c_a403_4593_95ff_012516ae9351,
                   &v38) >= 0 )
              CApplicationManager::_HandleViewNavigationRequested(
                this,
                a2,
                (struct Windows::Foundation::Collections::IPropertySet *)ppvOut,
                v38);
            v10 = v38;
            if ( v38 )
            {
              v38 = 0LL;
              (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v10 + 16LL))(v10);
            }
          }
LABEL_13:
          v11 = ppvOut;
          if ( !ppvOut )
            return 0LL;
          ppvOut = 0LL;
LABEL_19:
          (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
          return 0LL;
        case 4:
          AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          v31 = 0LL;
          v32 = a2;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
          v33 = 0;
          CApplicationManager::_HandleTaskWindowDestruction(this, (const struct CTaskWindowFinder *)&v31);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
          ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          return 0LL;
      }
      if ( v37 != 5 )
        return 0LL;
      v38 = 0LL;
      v19 = **a3;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
      if ( v19(
             (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
             &GUID_360030af_7930_47a7_a1dd_184464be39de,
             &v38) >= 0 )
        CApplicationManager::_HandleViewPropertyChanged(this, a2, v38);
LABEL_58:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
      return 0LL;
    }
    v38 = 0LL;
    v12 = (int (__fastcall *)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Foundation::Collections::IPropertySet **))(*a3)[7];
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
    if ( v12((struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3, &v38) >= 0 )
      CApplicationManager::_HandleViewCreation(this, a2, (struct IUnknown *)v38);
    v11 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      goto LABEL_19;
    }
  }
  return 0LL;
}
