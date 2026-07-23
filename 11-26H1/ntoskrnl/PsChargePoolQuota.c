/*
 * XREFs of PsChargePoolQuota @ 0x1403C71A0
 * Callers:
 *     FsRtlCancelNotify @ 0x1403FB5E0 (FsRtlCancelNotify.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A8A420 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterReportChange @ 0x140AF8AC0 (FsRtlNotifyFilterReportChange.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     PsChargeProcessPoolQuota @ 0x1403C71D0 (PsChargeProcessPoolQuota.c)
 */

void __stdcall PsChargePoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  int v3; // eax

  v3 = PsChargeProcessPoolQuota(Process, PoolType, Amount);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
}
