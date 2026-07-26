/*
 * XREFs of ?NdisUnexpectedSsError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x14008E630
 * Callers:
 *     ?ndisPowerSuspendRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140005850 (-ndisPowerSuspendRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOC.c)
 *     ?ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140005B00 (-ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z.c)
 *     ?ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x14006D230 (-ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 *     NdisMIdleNotificationConfirm @ 0x14006D9C0 (NdisMIdleNotificationConfirm.c)
 *     ?ndisSetPowerResumeComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1400C6AD0 (-ndisSetPowerResumeComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z @ 0x1400C6C20 (-ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x14008E670 (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall NdisUnexpectedSsError(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int16 a2, int a3)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx

  SelectiveSuspend = a1->SelectiveSuspend;
  NdisTraceLoggingUnexpectedSelectiveSuspendError(a1, a2, a3);
  *((_WORD *)SelectiveSuspend + 313) = *((_WORD *)SelectiveSuspend + 312);
  *((_WORD *)SelectiveSuspend + 312) = a2;
}
