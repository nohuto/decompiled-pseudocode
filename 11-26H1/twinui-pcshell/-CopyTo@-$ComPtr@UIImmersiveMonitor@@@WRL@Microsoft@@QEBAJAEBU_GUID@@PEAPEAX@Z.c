/*
 * XREFs of ?CopyTo@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B5818
 * Callers:
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersiveApplication@@PEAPEAU2@@Z @ 0x18009031C (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATI.c)
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEBGPEAPEAU2@@Z @ 0x1801C6144 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonito_ea_1801C6144.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IImmersiveMonitor>::CopyTo(_QWORD *a1)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *))*a1)(*a1, &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
}
