/*
 * XREFs of RtlpCtContextFree @ 0x18014964C
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1801493F0 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpCtContextInit @ 0x18014969C (RtlpCtContextInit.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1801497B0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 * Callees:
 *     TpReleaseWork @ 0x180064C60 (TpReleaseWork.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18006E910 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 */

__int64 __fastcall RtlpCtContextFree(__int64 *a1, _PEB_LDR_DATA *a2, __int64 a3)
{
  __int64 v4; // rcx
  void *v5; // rcx

  v4 = a1[1];
  if ( v4 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v4);
  v5 = (void *)a1[2];
  if ( v5 )
  {
    NtClose(v5);
    a1[2] = 0LL;
  }
  if ( *a1 )
    TpReleaseWork(*a1, a2, a3);
  return RtlpSysVolFree((__int64)a1);
}
