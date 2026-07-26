/*
 * XREFs of ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140048230
 * Callers:
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x140046240 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     NdisMIdleNotificationConfirm @ 0x14006D9C0 (NdisMIdleNotificationConfirm.c)
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140082980 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x140084370 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140088080 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1401645B0 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x140178170 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140179FD0 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x140009060 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisCancelWaitWake(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // al
  int v3; // edx
  __int64 v4; // rcx
  KIRQL v5; // al
  bool WaitWakeIoCompletionRoutineRan; // di
  struct _GUID *v7; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  if ( !a1->WaitWakeIrp || a1->WaitWakeIoCompletionRoutineRan || a1->WaitWakeCancelAttempted )
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v2);
  }
  else
  {
    a1->MiniportThread = 0LL;
    *(_WORD *)&a1->WaitWakeCancelInProgress = 257;
    KeReleaseSpinLock(&a1->Lock, v2);
    if ( IoCancelIrp(a1->WaitWakeIrp) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v3,
          14,
          147,
          (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
          (char)a1);
      }
      if ( (byte_14011D041 & 8) != 0 )
      {
        LODWORD(v8) = 65537;
        LODWORD(v7) = a1->IfIndex;
        McTemplateK0jqxd_EtwWriteTransfer(
          v4,
          (__int64)&CancelledWakeIrp,
          (__int64)&a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          (__int64)v7,
          a1->NetLuid.Value,
          v8);
      }
    }
    v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    WaitWakeIoCompletionRoutineRan = a1->WaitWakeIoCompletionRoutineRan;
    a1->WaitWakeCancelInProgress = 0;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v5);
    if ( WaitWakeIoCompletionRoutineRan )
      IofCompleteRequest(a1->WaitWakeIrp, 0);
  }
}
