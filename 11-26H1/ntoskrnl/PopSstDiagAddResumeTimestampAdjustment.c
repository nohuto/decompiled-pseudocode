/*
 * XREFs of PopSstDiagAddResumeTimestampAdjustment @ 0x140C12730
 * Callers:
 *     PoNotifySystemTimeSet @ 0x140427DFC (PoNotifySystemTimeSet.c)
 * Callees:
 *     <none>
 */

void __fastcall PopSstDiagAddResumeTimestampAdjustment(__int64 a1)
{
  PopDirectedDripsDiagLock.WriteOperationCount += a1;
}
