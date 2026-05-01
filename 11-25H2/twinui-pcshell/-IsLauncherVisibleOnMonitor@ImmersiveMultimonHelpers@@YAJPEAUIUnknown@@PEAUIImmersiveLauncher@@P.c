/*
 * XREFs of ?IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@PEA_N@Z @ 0x1804D02AC
 * Callers:
 *     ?_InitAnimationPassState@CAppTransitionManager@@AEAAXPEAUIAppLayoutOperation@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804D1090 (-_InitAnimationPassState@CAppTransitionManager@@AEAAXPEAUIAppLayoutOperation@@PEAUIImmersiveAppl.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1804FB6B8 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?IsLauncherOrSwitcherVisibleOnThisMonitor@TabletModeViewManager@@AEAA_NXZ @ 0x1804FD810 (-IsLauncherOrSwitcherVisibleOnThisMonitor@TabletModeViewManager@@AEAA_NXZ.c)
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1805090CC (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ImmersiveMultimonHelpers::IsLauncherVisibleOnMonitor(
        IUnknown *punk,
        struct IUnknown *a2,
        struct IImmersiveLauncher *a3,
        bool *a4)
{
  HRESULT Service; // ebx
  void *v8; // rbx
  __int64 (__fastcall *v9)(void *, struct IUnknown **); // rdi
  struct IUnknown *v11[2]; // [rsp+20h] [rbp-10h] BYREF
  void *v12; // [rsp+68h] [rbp+38h] BYREF
  void *ppvOut; // [rsp+70h] [rbp+40h] BYREF
  struct IUnknown *v14; // [rsp+78h] [rbp+48h] BYREF

  ppvOut = 0LL;
  *(_BYTE *)a3 = 0;
  if ( a2 )
  {
    ((void (__fastcall *)(struct IUnknown *, struct IUnknown *, struct IImmersiveLauncher *, bool *))a2->lpVtbl->AddRef)(
      a2,
      a2,
      a3,
      a4);
    v12 = ppvOut;
    ppvOut = a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    Service = IUnknown_QueryService(
                punk,
                (const GUID *const)&SID_ImmersiveLauncher,
                &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
                &ppvOut);
    if ( Service < 0 )
      goto LABEL_12;
  }
  LODWORD(v12) = 0;
  Service = (*(__int64 (__fastcall **)(void *, void **))(*(_QWORD *)ppvOut + 56LL))(ppvOut, &v12);
  if ( Service >= 0 && (_DWORD)v12 )
  {
    v8 = ppvOut;
    v11[0] = 0LL;
    v9 = *(__int64 (__fastcall **)(void *, struct IUnknown **))(*(_QWORD *)ppvOut + 88LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v11);
    Service = v9(v8, v11);
    if ( Service >= 0 )
    {
      v14 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
      Service = IUnknown_QueryService(
                  punk,
                  &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                  &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                  (void **)&v14);
      if ( Service >= 0 )
        *(_BYTE *)a3 = SHIsSameObject(v11[0], v14);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v11);
  }
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)Service;
}
