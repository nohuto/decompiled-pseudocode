/*
 * XREFs of MiCheckTrimUnusedPageFileRegions @ 0x1402074A8
 * Callers:
 *     MiPartitionPeriodicTick @ 0x1402A6458 (MiPartitionPeriodicTick.c)
 * Callees:
 *     MiNumberWsSwapPagefiles @ 0x140207558 (MiNumberWsSwapPagefiles.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     PsReferencePartitionSafe @ 0x14025A030 (PsReferencePartitionSafe.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 */

ULONG64 __fastcall MiCheckTrimUnusedPageFileRegions(_QWORD *a1)
{
  ULONG64 result; // rax
  __int64 v3; // r8
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 QpcTimeStamp; // [rsp+38h] [rbp+10h] BYREF

  result = MiNumberWsSwapPagefiles();
  if ( (_DWORD)result )
  {
    if ( !a1[152] )
    {
      _InterlockedOr(v4, 0);
      result = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
      if ( result - a1[153] >= 0x861C46800LL )
      {
        if ( BYTE1(stru_140E2ED08.RelativeTimerBias) )
        {
          result -= 33000000000LL;
          a1[153] = result;
        }
        else
        {
          result = PsReferencePartitionSafe(a1[32], 36000000000LL, v3);
          if ( (_BYTE)result )
          {
            a1[152] = a1;
            a1[151] = MiTrimUnusedPageFileRegionsWorker;
            a1[149] = 0LL;
            return ExQueueWorkItemToPartition((ULONG_PTR)(a1 + 149));
          }
        }
      }
    }
  }
  return result;
}
