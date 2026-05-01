/*
 * XREFs of ?SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x180091C20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersiveApplication@@PEAPEAU2@@Z @ 0x18009031C (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATI.c)
 *     ?_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x1801D2288 (-_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 *     ?_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelayedAppActivation@@PEAUISplashScreen@@@Z @ 0x1804E6E28 (-_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelay.c)
 *     ?FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z @ 0x180679A3C (-FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSwitchController::SwitchToApp(
        CSwitchController *this,
        struct IImmersiveApplication *a2,
        const struct SWITCH_TO_APP_OPTIONS *a3)
{
  volatile signed __int32 *v6; // rbx
  int MonitorForAppSwitchWithPreference; // edi
  struct IImmersiveApplication **v8; // r9
  CSwitchController *v9; // rcx
  int v11; // [rsp+30h] [rbp-40h] BYREF
  struct IImmersiveMonitor *v12; // [rsp+38h] [rbp-38h] BYREF
  struct IImmersiveApplication *v13; // [rsp+40h] [rbp-30h] BYREF
  struct HWND__ v14[4]; // [rsp+48h] [rbp-28h] BYREF
  char v15; // [rsp+58h] [rbp-18h]
  __int64 v16; // [rsp+60h] [rbp-10h] BYREF
  struct IImmersiveApplication *v17; // [rsp+A0h] [rbp+30h] BYREF
  char *v18; // [rsp+B8h] [rbp+48h]

  v6 = (volatile signed __int32 *)((char *)this - 88);
  v18 = (char *)this - 88;
  MonitorForAppSwitchWithPreference = 0;
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4) > 1 )
  {
    _InterlockedAdd(v6 + 27, 1u);
    MonitorForAppSwitchWithPreference = -2147019873;
  }
  if ( MonitorForAppSwitchWithPreference >= 0 )
  {
    v12 = 0LL;
    v13 = 0LL;
    *(_OWORD *)&v14[0].unused = 0LL;
    v15 = 0;
    v16 = 0LL;
    v11 = *((_DWORD *)a3 + 6);
    if ( a2 )
    {
      v17 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
      v17 = v13;
      v13 = a2;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
    }
    if ( *((_QWORD *)a3 + 4) )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14[2].unused);
      CallerIdentity::FindApplication(*((CallerIdentity **)this - 9), *((struct IUnknown **)a3 + 4), &v14[2], v8);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
    MonitorForAppSwitchWithPreference = CSwitchController::_GetMonitorForAppSwitchWithPreference(
                                          (CSwitchController *)v6,
                                          *(struct IImmersiveMonitor **)a3,
                                          *((_DWORD *)a3 + 2),
                                          a2,
                                          &v12);
    if ( MonitorForAppSwitchWithPreference >= 0 )
    {
      MonitorForAppSwitchWithPreference = CSwitchController::_SwitchToApp(
                                            (CSwitchController *)v6,
                                            (struct CSwitchController::ActivationData *)&v11);
      if ( MonitorForAppSwitchWithPreference >= 0 )
      {
        MonitorForAppSwitchWithPreference = 0;
        if ( *(_QWORD *)&v14[0].unused )
          MonitorForAppSwitchWithPreference = CSwitchController::_PerformDelayedActivationInternal(
                                                v9,
                                                v13,
                                                *(struct IDelayedAppActivation **)&v14[0].unused,
                                                0LL);
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14[2].unused);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14[0].unused);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  }
  if ( v6 && _InterlockedExchangeAdd(v6 + 26, 0xFFFFFFFF) == 1 )
    *((_DWORD *)v6 + 27) = 0;
  return (unsigned int)MonitorForAppSwitchWithPreference;
}
