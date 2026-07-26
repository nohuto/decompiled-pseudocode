/*
 * XREFs of NdisMIdleNotificationConfirm @ 0x14006D9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140007140 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140048230 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004CBB0 (-ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_dq @ 0x1400687E0 (WPP_RECORDER_SF_dq_ea_1400687E0.c)
 *     ?ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006DC30 (-ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z4W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140082530 (-ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_.c)
 *     ?ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z@Z @ 0x1400826E0 (-ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXP.c)
 *     ?NdisUnexpectedSsError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x14008E630 (-NdisUnexpectedSsError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall NdisMIdleNotificationConfirm(struct _NDIS_MINIPORT_BLOCK *a1, POWER_STATE PowerState)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  KIRQL v5; // di
  int v6; // eax
  int v7; // eax
  char v8; // di
  int v9; // eax
  char v10; // di
  int v11; // edx
  KIRQL v12; // al
  KIRQL v13; // di

  SelectiveSuspend = a1->SelectiveSuspend;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xFu,
      0xFu,
      (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
      (char)a1,
      PowerState.SystemState);
  ndisLogMiniportEvent(a1, NdisMEvent_SSIdleConfirm);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  v6 = *((_DWORD *)SelectiveSuspend + 126);
  if ( (v6 & 0x100) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v5);
    ndisAoAcIdleRequestConfirm(a1);
  }
  else
  {
    *((_DWORD *)SelectiveSuspend + 126) = v6 | 8;
    KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 176));
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v5);
    ndisCancelWakeUpDpcTimer(a1);
    ndisCancelWaitWake(a1);
    v7 = ndisRequestWaitWake(a1, (PREQUEST_POWER_COMPLETE)ndisIdleWaitWakeCallback);
    v8 = v7;
    if ( v7 != 259 )
    {
      NdisUnexpectedSsError(a1, 1u, v7);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xFu,
          0x10u,
          (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
          v8,
          a1);
    }
    *((POWER_STATE *)SelectiveSuspend + 174) = PowerState;
    v9 = ndisRequestDeviceLowPower(
           a1,
           PowerState,
           (PREQUEST_POWER_COMPLETE)ndisPowerSuspendRequestComplete,
           a1,
           NdisMEventDx_SSIdle);
    v10 = v9;
    if ( v9 == 259 )
    {
      ndisWaitForKernelObject((char *)SelectiveSuspend + 176);
    }
    else
    {
      NdisUnexpectedSsError(a1, 2u, v9);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xFu,
          0x11u,
          (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
          v10,
          a1);
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
      *((_DWORD *)SelectiveSuspend + 126) &= ~8u;
      v13 = v12;
      KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 176), 0, 0);
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v13);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        15,
        18,
        (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
        (char)a1);
    }
  }
}
