/*
 * XREFs of RtlpCtContextFree @ 0x1801494FC
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1801492A0 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpCtContextInit @ 0x18014954C (RtlpCtContextInit.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x180149660 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 * Callees:
 *     TpReleaseWork @ 0x1800850B0 (TpReleaseWork.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18008ED60 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 */

LOGICAL __fastcall RtlpCtContextFree(PTP_WORK *BaseAddress)
{
  __int64 v2; // rcx
  PTP_WORK v3; // rcx

  v2 = (__int64)BaseAddress[1];
  if ( v2 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
  v3 = BaseAddress[2];
  if ( v3 )
  {
    NtClose(v3);
    BaseAddress[2] = 0LL;
  }
  if ( *BaseAddress )
    TpReleaseWork(*BaseAddress);
  return RtlpSysVolFree(BaseAddress);
}
