/*
 * XREFs of PspTimerDelayWorkerRoutine @ 0x14061A4C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     PspApplyTimerDelayProcess @ 0x140619E40 (PspApplyTimerDelayProcess.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
