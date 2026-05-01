/*
 * XREFs of ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersiveApplication@@PEAPEAU2@@Z @ 0x18009031C
 * Callers:
 *     ?SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x180091C20 (-SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEAUIImmersiveApplication@@PEAPEAU2@@Z @ 0x180090464 (-_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEAUIImmersiveApplicatio.c)
 *     ?CopyTo@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B5818 (-CopyTo@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSwitchController::_GetMonitorForAppSwitchWithPreference(
        CSwitchController *a1,
        struct IImmersiveMonitor *a2,
        int a3,
        struct IImmersiveApplication *a4,
        struct IImmersiveMonitor **a5)
{
  struct IImmersiveMonitor **v8; // r14
  __int64 v9; // rdx
  bool v10; // si
  int v11; // r15d
  struct IImmersiveMonitor *v12; // rbx
  unsigned int MonitorForAppSwitch; // eax
  unsigned int v14; // ebx
  struct IImmersiveMonitor *v15; // rcx
  struct IImmersiveMonitor *v18; // [rsp+78h] [rbp+48h] BYREF

  v8 = a5;
  *a5 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
  v18 = 0LL;
  v10 = 0;
  v11 = -2147019873;
  v12 = a2;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a2 + 8LL))(a2);
    LODWORD(a5) = 0;
    if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, struct IImmersiveMonitor ***))(*(_QWORD *)a2 + 48LL))(
           a2,
           &a5) >= 0 )
    {
      if ( (_DWORD)a5 )
      {
        v12 = 0LL;
        v18 = a2;
        v11 = 0;
        v10 = a3 == 1;
      }
    }
  }
  if ( v12 )
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v11 >= 0 && v10 )
    MonitorForAppSwitch = Microsoft::WRL::ComPtr<IImmersiveMonitor>::CopyTo(&v18, v9, v8);
  else
    MonitorForAppSwitch = CSwitchController::_GetMonitorForAppSwitch(a1, v18, a4, v8);
  v14 = MonitorForAppSwitch;
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v14;
}
