/*
 * XREFs of NdisMIdleNotificationCompleteEx @ 0x14006E2D0
 * Callers:
 *     NdisMIdleNotificationComplete @ 0x14006E2B0 (NdisMIdleNotificationComplete.c)
 * Callees:
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1400069D0 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140007140 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C63CC (-ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400C65F4 (-ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall NdisMIdleNotificationCompleteEx(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  KIRQL v5; // si
  unsigned int v6; // eax

  SelectiveSuspend = a1->SelectiveSuspend;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  ndisLogMiniportEvent(a1, NdisMEvent_SSIdleComplete);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xFu,
      0x1Bu,
      (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
      (char)a1,
      a2);
  *((_DWORD *)SelectiveSuspend + 126) &= ~4u;
  KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 200), 0, 0);
  v6 = *((_DWORD *)SelectiveSuspend + 126) & 0xFFFFFF7F;
  *((_DWORD *)SelectiveSuspend + 126) = v6;
  if ( (v6 & 0x100) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v5);
    if ( a2 >= 0 && a1->CurrentDevicePowerState == PowerDeviceD3 )
      ndisAoAcScheduleWakeWorkItem(a1, NdisMEventD0_AoAcSurpriseWake);
  }
  else if ( (v6 & 0x10) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v5);
    ndisRequestPowerResume(a1);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v5);
    ndisSelectiveSuspendResumeOperations(a1, 0);
  }
  ndisDereferenceMiniport(a1, 0x15u);
}
