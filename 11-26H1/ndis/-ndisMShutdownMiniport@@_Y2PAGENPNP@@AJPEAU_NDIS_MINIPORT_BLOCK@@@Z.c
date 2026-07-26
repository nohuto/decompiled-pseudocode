/*
 * XREFs of ?ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401752F8
 * Callers:
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140082980 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x14000D3F0 (WPP_RECORDER_SF_qZ.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMInvokeShutdown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SHUTDOWN_ACTION@@@Z @ 0x1400A01CC (-ndisMInvokeShutdown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SHUTDOWN_ACTION@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMShutdownMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // dl
  __int64 v3; // rdx
  _DEVICE_POWER_STATE CurrentDevicePowerState; // eax
  void (__fastcall *ShutdownHandler)(void *); // rax
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF

  NewIrql = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      117,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      (char)a1);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x80000000);
  a1->PnPFlags |= 0x1000000u;
  _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFFFFFFE);
  v2 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v2);
  if ( (a1->PnPFlags & 0x4004) != 0 )
    goto LABEL_13;
  CurrentDevicePowerState = a1->CurrentDevicePowerState;
  if ( CurrentDevicePowerState == PowerDeviceD1 || (unsigned int)(CurrentDevicePowerState - 3) <= 1 )
    goto LABEL_13;
  if ( a1->MajorNdisVersion >= 6u )
  {
    if ( a1->DriverHandle->MiniportDriverCharacteristics.ShutdownHandlerEx )
      ndisMInvokeShutdown(a1, NdisShutdownPowerOff);
  }
  else
  {
    ShutdownHandler = a1->ShutdownHandler;
    if ( ShutdownHandler )
      ShutdownHandler(a1->ShutdownContext);
  }
  a1->PnPFlags |= 0x800000u;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      9u,
      0x76u,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      (char)a1,
      &a1->pAdapterInstanceName->Length);
LABEL_13:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        1,
        119,
        (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
        (char)a1);
  }
  return 0LL;
}
