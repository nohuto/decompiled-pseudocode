/*
 * XREFs of InitializeEnumerationContext @ 0x1400049F4
 * Callers:
 *     RetrieveEfficiencyClassInformation @ 0x140027CF0 (RetrieveEfficiencyClassInformation.c)
 *     ProcLibTraceControlCallback @ 0x14002C260 (ProcLibTraceControlCallback.c)
 *     CpcHighestNotifyWorker @ 0x140045AFC (CpcHighestNotifyWorker.c)
 *     GetPerfDomain @ 0x1400463E0 (GetPerfDomain.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x14004724C (InitializeEnergyEstimationForEfficiencyClass.c)
 * Callees:
 *     <none>
 */

void __fastcall InitializeEnumerationContext(__int64 a1, int a2, __int64 a3)
{
  *(_QWORD *)a3 = a1;
  *(_QWORD *)(a3 + 8) = a1;
  *(_DWORD *)(a3 + 24) = a2;
  *(_QWORD *)(a3 + 16) = 0LL;
}
