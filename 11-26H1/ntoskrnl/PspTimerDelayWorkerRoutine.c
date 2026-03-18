/*
 * XREFs of PspTimerDelayWorkerRoutine @ 0x1406174D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     PspApplyTimerDelayProcess @ 0x140616E50 (PspApplyTimerDelayProcess.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PspTimerDelayWorkerRoutine(_QWORD *P)
{
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(P[4] + 488LL)) )
  {
    PspApplyTimerDelayProcess(P[4], 0LL);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(P[4] + 488LL));
  }
  ObfDereferenceObjectWithTag((PVOID)P[4], 0x624A7350u);
  ExFreePoolWithTag(P, 0x65446954u);
}
