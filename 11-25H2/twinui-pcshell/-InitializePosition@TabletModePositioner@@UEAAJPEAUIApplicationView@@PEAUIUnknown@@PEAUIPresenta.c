/*
 * XREFs of ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1804F7860
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180075F98 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z @ 0x1804AAF20 (-IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x1804F42B8 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1804F5F3C (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1804FB6B8 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabletModePositioner::InitializePosition(
        TabletModePositioner *this,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        __int64 (__fastcall ***a3)(struct IApplicationView *, GUID *, struct Windows::Foundation::Collections::IPropertySet **),
        struct IPresentationRequestedArgs *a4)
{
  int (__fastcall *v7)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  PositionerPropertySetHelpers *v12; // rcx
  int DetailsForActivation; // eax
  unsigned int v14; // ebx
  struct IApplicationView *v15; // rdx
  int inited; // eax
  __int64 v17; // rdx
  __int64 v18; // rdi
  int (__fastcall *v19)(__int64, __int64, __int64 *); // rbx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h] BYREF
  __int64 v25; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-8h]
  int v27; // [rsp+4Ch] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IUnknown v29; // [rsp+78h] [rbp+28h] BYREF

  v24 = 0LL;
  v7 = **a2;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v24);
  if ( v7((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v8) < 0
    || IsPeopleExperienceHostView((struct IApplicationView *)a2, v9, v10, v11) )
  {
    goto LABEL_25;
  }
  LODWORD(v29.lpVtbl) = 0;
  v25 = 0LL;
  v26 = 0;
  v27 = 0;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v12,
                           a3,
                           &v29,
                           (enum PositionerPropertySetHelpers::ActivationPropertyFlags *)&v25);
  v14 = DetailsForActivation;
  if ( DetailsForActivation >= 0 )
  {
    if ( ((__int64)v29.lpVtbl & 3) != 0 )
    {
      v29.lpVtbl = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
      inited = TabletModePositioner::CreateAndInitApplicationViewOperation(
                 (TabletModePositioner *)((char *)this - 128),
                 v15,
                 (struct IApplicationViewOperation **)&v29);
      v14 = inited;
      if ( inited < 0 )
      {
        v17 = 733LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)inited);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
        goto LABEL_26;
      }
      inited = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64))v29.lpVtbl->QueryInterface + 6))(
                 v29.lpVtbl,
                 3LL);
      v14 = inited;
      if ( inited < 0 )
      {
        v17 = 734LL;
        goto LABEL_8;
      }
      inited = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64))v29.lpVtbl->QueryInterface + 9))(
                 v29.lpVtbl,
                 1LL);
      v14 = inited;
      if ( inited < 0 )
      {
        v17 = 735LL;
        goto LABEL_8;
      }
      inited = ((__int64 (__fastcall *)(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *), struct IUnknownVtbl *))(*a2)[40])(
                 a2,
                 v29.lpVtbl);
      v14 = inited;
      if ( inited < 0 )
      {
        v17 = 736LL;
        goto LABEL_8;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
      goto LABEL_24;
    }
    v23 = 0LL;
    if ( v25
      && (v18 = *((_QWORD *)this + 26),
          v19 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v18 + 48LL),
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23),
          v19(v18, v25, &v23) >= 0) )
    {
      v20 = TabletModePositioner::AppToAppSwitchHelper((IUnknown *)this - 16, v23, v26, (__int64)a2, v27, 0);
      v14 = v20;
      if ( v20 < 0 )
      {
        v21 = 744LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v20);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
        goto LABEL_26;
      }
    }
    else
    {
      v20 = TabletModePositioner::SwitchToAppHelper((char *)this - 128, a2, 0LL, 0LL, 0LL);
      v14 = v20;
      if ( v20 < 0 )
      {
        v21 = 749LL;
        goto LABEL_20;
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
LABEL_24:
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 21, (__int64)a2);
LABEL_25:
    v14 = 0;
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D5,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)DetailsForActivation);
LABEL_26:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  return v14;
}
