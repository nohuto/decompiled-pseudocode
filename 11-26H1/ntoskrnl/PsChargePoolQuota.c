/*
 * XREFs of PsChargePoolQuota @ 0x1403BD330
 * Callers:
 *     FsRtlCancelNotify @ 0x1404A3F80 (FsRtlCancelNotify.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A85820 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterReportChange @ 0x140AF6420 (FsRtlNotifyFilterReportChange.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     PsChargeProcessPoolQuota @ 0x1403BD360 (PsChargeProcessPoolQuota.c)
 */

void __stdcall PsChargePoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  NTSTATUS v3; // eax

  v3 = PsChargeProcessPoolQuota(Process, PoolType, Amount);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
}
