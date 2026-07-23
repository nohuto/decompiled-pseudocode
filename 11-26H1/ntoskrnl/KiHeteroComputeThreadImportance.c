/*
 * XREFs of KiHeteroComputeThreadImportance @ 0x140409C30
 * Callers:
 *     KiHeteroScanQueueForPreemptionSwapTarget @ 0x140236D78 (KiHeteroScanQueueForPreemptionSwapTarget.c)
 *     KiEvaluatePreemptionSwapTarget @ 0x140409AA4 (KiEvaluatePreemptionSwapTarget.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall KiHeteroComputeThreadImportance(int a1, unsigned __int8 a2)
{
  __int16 v2; // cx
  int v4; // [rsp+18h] [rbp+18h]
  __int16 v5; // [rsp+1Ch] [rbp+1Ch]
  char v6; // [rsp+1Eh] [rbp+1Eh]

  v4 = 33752069;
  v5 = 6;
  v6 = 1;
  v2 = *((unsigned __int8 *)&v4 + a1);
  if ( (KiHeteroSchedulerOptionsMask & 8) == 0 || (KiHeteroSchedulerOptions & 8) == 0 )
    a2 = 0;
  return a2 | (unsigned __int16)(v2 << 8);
}
