/*
 * XREFs of ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x180075A8C
 * Callers:
 *     ?InitializePosition@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180215E60 (-InitializePosition@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentati.c)
 *     ?InitializePositionWithShowCommand@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAKPEAUtagRECT@@@Z @ 0x1804EED80 (-InitializePositionWithShowCommand@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180075F98 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@AEAUtagRECT@@@Z @ 0x180114E58 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x180116944 (-CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplication.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1801E576C (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18023E7C4 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 *     ??0_lambda_2b94c938c284b16eb776d16960094630_@@QEAA@PEAV?$shared_ptr@VPinRequestContext@@@std@@AEAV?$shared_ptr@VPinOperationContext@@@2@AEA_N@Z @ 0x1802961C4 (--0_lambda_2b94c938c284b16eb776d16960094630_@@QEAA@PEAV-$shared_ptr@VPinRequestContext@@@std@@AE.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _lambda_47792995d1678f4d654f023075ae386d_::operator() @ 0x1804ED64C (_lambda_47792995d1678f4d654f023075ae386d_--operator().c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1804EF3A4 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::InitializePositionHelper(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4)
{
  PositionerPropertySetHelpers *v7; // rcx
  int DetailsForActivation; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // eax
  int RestorePosition; // eax
  struct IApplicationViewPosition *v13; // rbx
  __int64 v14; // rdx
  int (__fastcall *v16)(struct IApplicationViewPosition *, GUID *, __int64 *); // rdi
  __int64 v17; // rax
  int v18; // eax
  struct IImmersiveMonitor *v19; // rcx
  __int64 v20; // rcx
  struct IApplicationViewPosition *v21; // rcx
  struct IApplicationViewOperation *v22; // rcx
  struct IApplicationViewOperation *v23; // rcx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  int v28; // eax
  struct PositionerPropertySetHelpers::ViewSizePreferences *v29; // [rsp+20h] [rbp-A9h]
  struct IApplicationViewOperation *v30; // [rsp+50h] [rbp-79h] BYREF
  struct IApplicationViewPosition *v31; // [rsp+58h] [rbp-71h] BYREF
  struct IImmersiveMonitor *v32; // [rsp+60h] [rbp-69h] BYREF
  __int64 v33; // [rsp+68h] [rbp-61h] BYREF
  struct IUnknown v34; // [rsp+70h] [rbp-59h] BYREF
  __int64 v35; // [rsp+78h] [rbp-51h] BYREF
  struct tagRECT v36; // [rsp+80h] [rbp-49h] BYREF
  struct IApplicationView *v37; // [rsp+90h] [rbp-39h] BYREF
  _OWORD v38[2]; // [rsp+A0h] [rbp-29h] BYREF
  struct tagRECT v39; // [rsp+C0h] [rbp-9h] BYREF
  struct tagRECT v40; // [rsp+D0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v37 = (struct IApplicationView *)a3;
  v35 = 0LL;
  (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
    a2,
    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
    &v35);
  LODWORD(v34.lpVtbl) = 0;
  *(_QWORD *)&v36.left = 0LL;
  *(_QWORD *)&v36.right = 0LL;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v7,
                           v37,
                           &v34,
                           (enum PositionerPropertySetHelpers::ActivationPropertyFlags *)&v36,
                           v29);
  v9 = DetailsForActivation;
  if ( DetailsForActivation < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB07,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation);
    if ( v35 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    return v9;
  }
  v10 = v35;
  if ( !v35 )
  {
    v30 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
    v11 = CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured(this, a2, &v30);
    v9 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB0D,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v11);
      v23 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(struct IApplicationViewOperation *))(*(_QWORD *)v23 + 16LL))(v23);
      }
      if ( v35 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      return v9;
    }
    v31 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
    RestorePosition = CDesktopPositioner::_GetRestorePosition(
                        this,
                        a2,
                        (struct PositionerPropertySetHelpers::ViewSizePreferences *)&v36,
                        &v31);
    v9 = RestorePosition;
    if ( RestorePosition < 0 )
    {
      v14 = 2833LL;
      goto LABEL_9;
    }
    if ( !v37 || (v13 = v31) == 0LL )
    {
      RestorePosition = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
                          a2,
                          v30);
      v9 = RestorePosition;
      if ( RestorePosition < 0 )
      {
        v14 = 2907LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)RestorePosition);
LABEL_10:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v35);
        return v9;
      }
      goto LABEL_54;
    }
    v33 = 0LL;
    v16 = **(int (__fastcall ***)(struct IApplicationViewPosition *, GUID *, __int64 *))v31;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
    if ( v16(v13, &GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1, &v33) >= 0 )
    {
      v17 = _lambda_2b94c938c284b16eb776d16960094630_::_lambda_2b94c938c284b16eb776d16960094630_(v38, &v33, &v37, &v31);
      lambda_47792995d1678f4d654f023075ae386d_::operator()(v17);
    }
    v40 = 0LL;
    if ( v31 )
    {
      v24 = (*(__int64 (__fastcall **)(struct IApplicationViewPosition *, struct tagRECT *))(*(_QWORD *)v31 + 24LL))(
              v31,
              &v40);
      if ( v24 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB3D,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v24);
    }
    v39 = 0LL;
    LODWORD(v34.lpVtbl) = 0;
    v32 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
    v36 = v40;
    if ( (int)CDesktopPositioner::_GetRectAndFlagsFromPresentationArgs(
                this,
                a4,
                &v36,
                &v39,
                (enum TRY_POSITION_VIEW_FLAGS *)&v34,
                &v32) < 0 )
    {
      v18 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, struct IApplicationViewPosition *))(*(_QWORD *)v30 + 80LL))(
              v30,
              v31);
      v9 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB55,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v18);
        v19 = v32;
        if ( v32 )
        {
          v32 = 0LL;
          (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v19 + 16LL))(v19);
        }
        v20 = v33;
        if ( v33 )
        {
          v33 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
        v21 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(struct IApplicationViewPosition *))(*(_QWORD *)v21 + 16LL))(v21);
        }
        v22 = v30;
        if ( v30 )
        {
          v30 = 0LL;
          (*(void (__fastcall **)(struct IApplicationViewOperation *))(*(_QWORD *)v22 + 16LL))(v22);
        }
        if ( v35 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
        return v9;
      }
      v28 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
              a2,
              v30);
      v9 = v28;
      if ( v28 >= 0 )
        goto LABEL_53;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB56,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v28);
LABEL_46:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
      goto LABEL_10;
    }
    *(_QWORD *)&v36.left = 0LL;
    v25 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
            &v36,
            &v39);
    v9 = v25;
    if ( v25 >= 0 )
    {
      v38[0] = v39;
      v27 = CDesktopPositioner::PositionViewWithOptions(this, a2, v38, LODWORD(v34.lpVtbl), v30, 7, v32, 0, 0, 0);
      if ( v27 >= 0 )
        goto LABEL_51;
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB4B,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v27);
      v25 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, struct IApplicationViewPosition *))(*(_QWORD *)v30 + 80LL))(
              v30,
              v31);
      v9 = v25;
      if ( v25 < 0 )
      {
        v26 = 2894LL;
        goto LABEL_44;
      }
      v25 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
              a2,
              v30);
      v9 = v25;
      if ( v25 >= 0 )
      {
LABEL_51:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36.left);
LABEL_53:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
LABEL_54:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
        v10 = v35;
        goto LABEL_11;
      }
      v26 = 2895LL;
    }
    else
    {
      v26 = 2886LL;
    }
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v25);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36.left);
    goto LABEL_46;
  }
LABEL_11:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return 0LL;
}
