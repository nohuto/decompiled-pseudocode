/*
 * XREFs of InitializeEnumerationContext @ 0x140003864
 * Callers:
 *     ProcLibTraceControlCallback @ 0x140024B00 (ProcLibTraceControlCallback.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x14003B750 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x14003BA14 (RetrieveEfficiencyClassInformation.c)
 *     GetPerfDomain @ 0x140042498 (GetPerfDomain.c)
 *     CpcHighestNotifyWorker @ 0x140042A28 (CpcHighestNotifyWorker.c)
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
