/*
 * XREFs of ?GetInitialAppRect@CSwitchController@@UEAAJPEAUIImmersiveMonitor@@PEBGW4ACTIVATION_MONITOR_PREFERENCE@@PEAUtagRECT@@@Z @ 0x1804E6B30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEBGPEAPEAU2@@Z @ 0x1801C6144 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonito_ea_1801C6144.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchController::GetInitialAppRect(
        __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        LPRECT lprc)
{
  int MonitorForAppSwitchWithPreference; // ebx
  struct IImmersiveMonitor *v11; // [rsp+40h] [rbp+8h] BYREF

  SetRectEmpty(lprc);
  v11 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
  MonitorForAppSwitchWithPreference = CSwitchController::_GetMonitorForAppSwitchWithPreference(
                                        (CSwitchController *)(a1 - 88),
                                        a2,
                                        a4,
                                        a3,
                                        &v11);
  if ( MonitorForAppSwitchWithPreference >= 0 )
    MonitorForAppSwitchWithPreference = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, LPRECT))(*(_QWORD *)v11 + 88LL))(
                                          v11,
                                          lprc);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
  return (unsigned int)MonitorForAppSwitchWithPreference;
}
