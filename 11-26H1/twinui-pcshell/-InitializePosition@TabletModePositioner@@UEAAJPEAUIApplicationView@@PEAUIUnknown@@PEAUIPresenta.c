/*
 * XREFs of ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180519020
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18008E6C8 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z @ 0x1804BCA14 (-IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x1805159B8 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x180517674 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x18051D5D8 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  PositionerPropertySetHelpers *v11; // rcx
  int DetailsForActivation; // eax
  unsigned int v13; // ebx
  struct IApplicationView *v14; // rdx
  int inited; // eax
  __int64 v16; // rdx
  __int64 v17; // rdi
  int (__fastcall *v18)(__int64, __int64, __int64 *); // rbx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h] BYREF
  int v25[2]; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IUnknown v27; // [rsp+78h] [rbp+28h] BYREF

  v23 = 0LL;
  v7 = **a2;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v23);
  if ( v7((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v8) < 0
    || IsPeopleExperienceHostView((struct IApplicationView *)a2, v9, v10) )
  {
    goto LABEL_25;
  }
  LODWORD(v27.lpVtbl) = 0;
  v24 = 0LL;
  *(_QWORD *)v25 = 0LL;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v11,
                           a3,
                           &v27,
                           (enum PositionerPropertySetHelpers::ActivationPropertyFlags *)&v24);
  v13 = DetailsForActivation;
  if ( DetailsForActivation >= 0 )
  {
    if ( ((__int64)v27.lpVtbl & 3) != 0 )
    {
      v27.lpVtbl = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
      inited = TabletModePositioner::CreateAndInitApplicationViewOperation(
                 (TabletModePositioner *)((char *)this - 128),
                 v14,
                 (struct IApplicationViewOperation **)&v27);
      v13 = inited;
      if ( inited < 0 )
      {
        v16 = 733LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)inited);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
        goto LABEL_26;
      }
      inited = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64))v27.lpVtbl->QueryInterface + 6))(
                 v27.lpVtbl,
                 3LL);
      v13 = inited;
      if ( inited < 0 )
      {
        v16 = 734LL;
        goto LABEL_8;
      }
      inited = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64))v27.lpVtbl->QueryInterface + 9))(
                 v27.lpVtbl,
                 1LL);
      v13 = inited;
      if ( inited < 0 )
      {
        v16 = 735LL;
        goto LABEL_8;
      }
      inited = ((__int64 (__fastcall *)(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *), struct IUnknownVtbl *))(*a2)[40])(
                 a2,
                 v27.lpVtbl);
      v13 = inited;
      if ( inited < 0 )
      {
        v16 = 736LL;
        goto LABEL_8;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
      goto LABEL_24;
    }
    v22 = 0LL;
    if ( v24
      && (v17 = *((_QWORD *)this + 26),
          v18 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v17 + 48LL),
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22),
          v18(v17, v24, &v22) >= 0) )
    {
      v19 = TabletModePositioner::AppToAppSwitchHelper((IUnknown *)this - 16, v22, v25[0], (__int64)a2, v25[1], 0);
      v13 = v19;
      if ( v19 < 0 )
      {
        v20 = 744LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v19);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
        goto LABEL_26;
      }
    }
    else
    {
      v19 = TabletModePositioner::SwitchToAppHelper((char *)this - 128, a2, 0LL, 0LL, 0LL);
      v13 = v19;
      if ( v19 < 0 )
      {
        v20 = 749LL;
        goto LABEL_20;
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
LABEL_24:
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 21, (__int64)a2);
LABEL_25:
    v13 = 0;
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D5,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)DetailsForActivation);
LABEL_26:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  return v13;
}
