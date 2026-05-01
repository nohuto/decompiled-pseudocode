/*
 * XREFs of ?ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180516F40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800464B8 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18008E6C8 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z @ 0x1804BCA14 (-IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x1805159B8 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x18051D5D8 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TabletModePositioner::ControlGainedForActivation(
        __int64 a1,
        struct IUnknown *a2,
        int a3,
        __int64 (__fastcall ***a4)(struct IApplicationView *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))
{
  __int64 v8; // rdx
  __int64 v9; // r8
  PositionerPropertySetHelpers *v11; // rcx
  int DetailsForActivation; // ebx
  __int64 v13; // rdx
  const struct _GUID *v14; // rdx
  __int64 v15; // rcx
  int Instance; // eax
  int v17; // eax
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 (__fastcall *v19)(struct IUnknownVtbl *, GUID *, __int64 *); // rdi
  int v20; // eax
  __int64 v21; // rdi
  int (__fastcall *v22)(__int64, struct IUnknown *, struct IUnknown *); // rbx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // [rsp+30h] [rbp-20h] BYREF
  struct IUnknown *v26; // [rsp+38h] [rbp-18h] BYREF
  __int64 v27; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IUnknown v29; // [rsp+70h] [rbp+20h] BYREF

  if ( SHIsSameObject(a2, *(struct IUnknown **)(a1 + 168)) )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 168));
    return 0LL;
  }
  if ( IsPeopleExperienceHostView((struct IApplicationView *)a2, v8, v9) )
    return 0LL;
  LODWORD(v29.lpVtbl) = 0;
  v26 = 0LL;
  v27 = 0LL;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v11,
                           a4,
                           &v29,
                           (enum PositionerPropertySetHelpers::ActivationPropertyFlags *)&v26);
  if ( DetailsForActivation >= 0 )
  {
    if ( ((__int64)v29.lpVtbl & 1) != 0 )
      return 0LL;
    if ( ((__int64)v29.lpVtbl & 0x10) != 0 )
    {
      DetailsForActivation = ((__int64 (__fastcall *)(struct IUnknown *))a2->lpVtbl[9].AddRef)(a2);
      if ( DetailsForActivation >= 0 )
        return 0LL;
      v13 = 790LL;
      goto LABEL_7;
    }
    if ( ((__int64)v29.lpVtbl & 2) != 0 )
    {
      DetailsForActivation = ((__int64 (__fastcall *)(struct IUnknown *))a2->lpVtbl[9].AddRef)(a2);
      if ( DetailsForActivation < 0 )
      {
        v13 = 800LL;
        goto LABEL_7;
      }
      DetailsForActivation = ((__int64 (__fastcall *)(struct IUnknown *))a2->lpVtbl[14].Release)(a2);
      if ( DetailsForActivation < 0 )
      {
        v13 = 801LL;
        goto LABEL_7;
      }
LABEL_38:
      DetailsForActivation = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD))a2->lpVtbl[18].QueryInterface)(a2, 0LL);
      if ( DetailsForActivation >= 0 )
        return 0LL;
      v13 = 839LL;
      goto LABEL_7;
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD, struct IUnknown *))(**(_QWORD **)(a1 + 120) + 184LL))(
           *(_QWORD *)(a1 + 120),
           a2) )
    {
      ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl[2].QueryInterface)(a2);
      goto LABEL_38;
    }
    v29.lpVtbl = 0LL;
    if ( a3 == 7 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
      Instance = CEnumerableObjectCollection::CreateInstance(v15, v14, (void **)&v29.lpVtbl);
      DetailsForActivation = Instance;
      if ( Instance >= 0 )
      {
        v26 = a2;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
        v17 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, struct IUnknown *))v29.lpVtbl->QueryInterface + 5))(
                v29.lpVtbl,
                a2);
        DetailsForActivation = v17;
        if ( v17 >= 0 )
        {
          v25 = 0LL;
          lpVtbl = v29.lpVtbl;
          v19 = *(__int64 (__fastcall **)(struct IUnknownVtbl *, GUID *, __int64 *))v29.lpVtbl->QueryInterface;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
          v20 = v19(lpVtbl, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9, &v25);
          DetailsForActivation = v20;
          if ( v20 >= 0 )
          {
            (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 96LL))(a1, v25, 7LL);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
            goto LABEL_38;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x332,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v20);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x32F,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v17);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x32C,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)Instance);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
      return (unsigned int)DetailsForActivation;
    }
    if ( v26
      && (v21 = *(_QWORD *)(a1 + 208),
          v22 = *(int (__fastcall **)(__int64, struct IUnknown *, struct IUnknown *))(*(_QWORD *)v21 + 48LL),
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29),
          v22(v21, v26, &v29) >= 0) )
    {
      v23 = TabletModePositioner::AppToAppSwitchHelper(
              (IUnknown *)(a1 - 128),
              (__int64)v29.lpVtbl,
              v27,
              (__int64)a2,
              SHIDWORD(v27),
              0);
      DetailsForActivation = v23;
      if ( v23 < 0 )
      {
        v24 = 829LL;
LABEL_36:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v23);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
        return (unsigned int)DetailsForActivation;
      }
    }
    else
    {
      v23 = TabletModePositioner::SwitchToAppHelper(a1 - 128, a2, 0LL, 0LL, 0LL);
      DetailsForActivation = v23;
      if ( v23 < 0 )
      {
        v24 = 834LL;
        goto LABEL_36;
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
    goto LABEL_38;
  }
  v13 = 782LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)DetailsForActivation);
  return (unsigned int)DetailsForActivation;
}
