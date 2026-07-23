/*
 * XREFs of KeFlushQueuedDpcs @ 0x1405163E0
 * Callers:
 *     KeCleanupThreadState @ 0x140201FC8 (KeCleanupThreadState.c)
 *     MiFinishResume @ 0x1406F4600 (MiFinishResume.c)
 *     ExpTimeZoneCleanupSiloState @ 0x14083C694 (ExpTimeZoneCleanupSiloState.c)
 *     ExpPartitionDestroy @ 0x140845D08 (ExpPartitionDestroy.c)
 *     MiDeletePartitionResources @ 0x14086F208 (MiDeletePartitionResources.c)
 *     IopDeleteDriver @ 0x140AC9150 (IopDeleteDriver.c)
 *     MmPageEntireDriver @ 0x140ACBBB0 (MmPageEntireDriver.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KiRequestSoftwareInterrupt @ 0x1403129C0 (KiRequestSoftwareInterrupt.c)
 *     KeGenericProcessorCallback @ 0x14037BD24 (KeGenericProcessorCallback.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     KiGetDeepIdleProcessors @ 0x140452A7C (KiGetDeepIdleProcessors.c)
 *     Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_IsEnabledNoReportingNoInline @ 0x1405EBEEC (Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_IsEnabledNoReportingNoInline.c)
 *     KiLogFlushQueuedDpcsCalledAtDispatchLevel @ 0x1405F3B14 (KiLogFlushQueuedDpcsCalledAtDispatchLevel.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void KeFlushQueuedDpcs(void)
{
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v1; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int16 *v2[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int16 v3; // [rsp+40h] [rbp-C8h]
  int v4; // [rsp+42h] [rbp-C6h]
  __int16 v5; // [rsp+46h] [rbp-C2h]
  struct _KAFFINITY_EX v6; // [rsp+48h] [rbp-C0h] BYREF
  struct _KAFFINITY_EX v7; // [rsp+158h] [rbp+50h] BYREF
  void *retaddr; // [rsp+280h] [rbp+178h]

  memset_0(&v6.8, 0, sizeof(v6.8));
  v4 = 0;
  v5 = 0;
  LODWORD(v1) = 0;
  memset_0(&v7.8, 0, sizeof(v7.8));
  if ( (unsigned int)Feature_Servicing_FlushQueuedDpcsAtDispatchLevel__private_IsEnabledNoReportingNoInline()
    && KeGetCurrentIrql() == 2 )
  {
    if ( dword_140E06F58 && tlgKeywordOn((__int64)&dword_140E06F58, 0x400000000001LL) )
      KiLogFlushQueuedDpcsCalledAtDispatchLevel(retaddr);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->DpcData[0].DpcQueueDepth | CurrentPrcb->DpcData[1].DpcQueueDepth )
      KiRequestSoftwareInterrupt(CurrentPrcb, 2);
  }
  else
  {
    *(_QWORD *)&v6.Count = 2097153LL;
    memset_0(&v6.8, 0, sizeof(v6.8));
    *(_QWORD *)&v7.Count = 2097153LL;
    memset_0(&v7.8, 0, sizeof(v7.8));
    KiGetDeepIdleProcessors(&v6, &v7);
    v2[1] = (unsigned __int16 *)v6.Bitmap[0];
    v2[0] = (unsigned __int16 *)&v6;
    v3 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v1, v2) )
    {
      if ( *(_DWORD *)(KiProcessorBlock[(unsigned int)v1] + 14524) )
        KeAddProcessorAffinityEx(&v7.Count, v1);
    }
    KeGenericProcessorCallback((__int64 *)&v7, (__int64)KiFlushQueuedDpcsWorker, 0LL, 2);
  }
}
