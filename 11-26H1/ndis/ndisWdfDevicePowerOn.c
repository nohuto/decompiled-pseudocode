/*
 * XREFs of ndisWdfDevicePowerOn @ 0x140082F10
 * Callers:
 *     ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x140004C70 (-ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 * Callees:
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x140009060 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019F20 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x14001B4C0 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x140045170 (-ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14004C230 (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x14004CB00 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140050280 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140058320 (-ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C3E8 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140157B40 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1401583F0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140158AB0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1401625B0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140164950 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x140167060 (-ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140167360 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1401790B0 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 */

void __fastcall ndisWdfDevicePowerOn(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // al
  unsigned __int8 v3; // di
  char v4; // al
  char v5; // r14
  enum _NDIS_DEVICE_PNP_EVENT v6; // edx
  unsigned int v7; // r9d
  unsigned int InterlockedFlags; // eax
  unsigned int v9; // ett
  __int64 v10; // rcx
  KIRQL v11; // di
  NDIS_MINIPORT_HOOK_ADAPTER_HANDLE__ *HookAdapterHandle; // rdx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  unsigned int FilterPnPFlags; // eax
  int v15; // edx
  _NDIS_IF_BLOCK *IfBlock; // rcx
  _NDIS_M_DRIVER_BLOCK *v17; // rax
  NDIS_MINIPORT_HOOK_ADAPTER_HANDLE__ *v18; // rdx
  struct _GUID *v19; // [rsp+20h] [rbp-E0h]
  __int64 v20; // [rsp+30h] [rbp-D0h]
  __int64 v21; // [rsp+38h] [rbp-C8h]
  BOOL v22[4]; // [rsp+40h] [rbp-C0h] BYREF
  char v23[160]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v25; // [rsp+100h] [rbp+0h]
  __int128 v26; // [rsp+110h] [rbp+10h]
  __int128 v27; // [rsp+120h] [rbp+20h]
  __int128 v28; // [rsp+130h] [rbp+30h]
  __int128 v29; // [rsp+140h] [rbp+40h]
  __int128 v30; // [rsp+150h] [rbp+50h]
  _DWORD v31[4]; // [rsp+160h] [rbp+60h] BYREF
  _DWORD v32[4]; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 MiniportXmitLinkSpeed; // [rsp+180h] [rbp+80h]
  unsigned __int64 MiniportRcvLinkSpeed; // [rsp+188h] [rbp+88h]
  _NDIS_SUPPORTED_PAUSE_FUNCTIONS MiniportPauseFunctions; // [rsp+190h] [rbp+90h]
  unsigned int MiniportAutoNegotiationFlags; // [rsp+194h] [rbp+94h]

  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      13,
      (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
      (char)a1);
  if ( (byte_14011D041 & 8) != 0 )
  {
    LODWORD(v20) = 65539;
    LODWORD(v19) = a1->IfIndex;
    McTemplateK0jqxd_EtwWriteTransfer(
      (__int64)a1,
      (__int64)&MiniportPoweringUp,
      (__int64)&a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      (__int64)v19,
      a1->NetLuid.Value,
      v20);
  }
  a1->PrevDriverPowerState = a1->DriverPowerState;
  a1->DriverPowerState = PowerDeviceD0;
  a1->CurrentDevicePowerState = PowerDeviceD0;
  KeSetEvent(&a1->OpenReadyEvent.Event, 0, 0);
  v2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  v3 = v2;
  ndisMRestoreOpenHandlers(a1, 4u);
  v4 = ndisIfSetInterfaceState(a1, 1, v3);
  a1->MiniportThread = 0LL;
  v5 = v4;
  KeReleaseSpinLock(&a1->Lock, v3);
  _m_prefetchw(&a1->InterlockedFlags);
  InterlockedFlags = a1->InterlockedFlags;
  do
  {
    v9 = InterlockedFlags;
    InterlockedFlags = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&a1->InterlockedFlags,
                         InterlockedFlags,
                         InterlockedFlags);
  }
  while ( v9 != InterlockedFlags );
  if ( (InterlockedFlags & 0x10) != 0 )
  {
    ndisSetDeviceInterfaceState(a1, 1u);
    _InterlockedAnd((volatile signed __int32 *)&a1->InterlockedFlags, 0xFFFFFFEF);
  }
  v22[0] = (_BYTE)ndisAcOnLine == 1;
  ndisNotifyMiniports(a1, v6, v22, v7);
  if ( (byte_14011D041 & 8) != 0 )
  {
    LODWORD(v21) = 1;
    LODWORD(v20) = 1;
    LODWORD(v19) = a1->IfIndex;
    McTemplateK0jqxqq_EtwWriteTransfer(
      v10,
      &DevicePowerStateChange,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      (__int64)v19,
      a1->NetLuid.Value,
      v20,
      v21);
  }
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&a1->MiniportOwner);
  ndisIssueNetEventSetPowerEvent(a1, PowerDeviceD0, 0);
  ndisNotifyDevicePowerStateChange(a1, NdisDeviceStateD0);
  if ( (a1->PnPFlags & 0x10000000) != 0 && (a1->Flags & 0x20000000) != 0 )
  {
    v11 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    for ( a1->MiniportThread = KeGetCurrentThread(); a1->LockAcquired; a1->MiniportThread = KeGetCurrentThread() )
    {
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v11);
      KeStallExecutionProcessor(1u);
      v11 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    }
    a1->LockAcquired = 1;
    a1->LockThread = KeGetCurrentThread();
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xDFFFFFFF);
    DWORD2(v25) |= 8u;
    HookAdapterHandle = a1->HookAdapterHandle;
    v32[2] = a1->MiniportMediaDuplexState;
    MiniportXmitLinkSpeed = a1->MiniportXmitLinkSpeed;
    MiniportRcvLinkSpeed = a1->MiniportRcvLinkSpeed;
    MiniportPauseFunctions = a1->MiniportPauseFunctions;
    MiniportAutoNegotiationFlags = a1->MiniportAutoNegotiationFlags;
    *(_QWORD *)&v27 = v32;
    DriverHandle = a1->DriverHandle;
    DWORD2(v27) = 40;
    v32[3] = 0;
    v32[0] = 2621824;
    v32[1] = 1;
    LODWORD(v24) = 7340440;
    *((_QWORD *)&v24 + 1) = a1;
    DWORD1(v25) = 1073807383;
    (*((void (__fastcall **)(_QWORD, NDIS_MINIPORT_HOOK_ADAPTER_HANDLE__ *, struct _NDIS_MINIPORT_BLOCK *, __int128 *))g_MiniportHookDrivers
     + 16 * (__int64)(int)DriverHandle->HookType
     + 8))(
      *((_QWORD *)g_MiniportHookDrivers + 16 * (__int64)(int)DriverHandle->HookType + 3),
      HookAdapterHandle,
      a1,
      &v24);
    a1->LockAcquired = 0;
    a1->LockThread = 0LL;
    if ( v11 != 2 )
      KeLowerIrql(v11);
  }
  ndisSignalD0RequestComplete(a1, 0);
  FilterPnPFlags = a1->FilterPnPFlags;
  if ( (FilterPnPFlags & 0x100) != 0 )
  {
    a1->FilterPnPFlags = FilterPnPFlags & 0xFFFFFEFF;
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathRunning, PauseReason_LowPower) )
    {
      memset(v23, 0, sizeof(v23));
      if ( (unsigned __int8)byte_14011EAD3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v23);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v15,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
            *(unsigned __int16 **)&v23[8],
            *(_QWORD *)v23);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
    Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, 1);
  }
  if ( !ndisAoAcCapable && !ndisAoAcTest || v5 )
  {
    if ( ndisMReferenceIfBlock(a1, 0xDu) )
    {
      IfBlock = a1->IfBlock;
      v31[0] = 786816;
      v31[1] = IfBlock->ifOperStatus;
      v31[2] = IfBlock->ifOperStatusFlags;
      v27 = (unsigned __int64)v31;
      v17 = a1->DriverHandle;
      v24 = 0LL;
      DWORD2(v27) = 12;
      v18 = a1->HookAdapterHandle;
      v25 = 0LL;
      LODWORD(v24) = 7340440;
      v26 = 0LL;
      *((_QWORD *)&v24 + 1) = a1;
      v28 = 0LL;
      DWORD1(v25) = 1073807395;
      v29 = 0LL;
      v30 = 0LL;
      (*((void (__fastcall **)(_QWORD, NDIS_MINIPORT_HOOK_ADAPTER_HANDLE__ *, struct _NDIS_MINIPORT_BLOCK *, __int128 *))g_MiniportHookDrivers
       + 16 * (__int64)(int)v17->HookType
       + 8))(
        *((_QWORD *)g_MiniportHookDrivers + 16 * (__int64)(int)v17->HookType + 3),
        v18,
        a1,
        &v24);
      ndisMDereferenceIfBlock(a1, 0xDu);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      15,
      (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
      (char)a1);
}
