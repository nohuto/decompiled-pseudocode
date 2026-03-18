/*
 * XREFs of GetMaxDedicatedSqPerCqCount @ 0x140014620
 * Callers:
 *     NVMeCompletionQueuesDedicatedSubmissionQueuesInit @ 0x140011280 (NVMeCompletionQueuesDedicatedSubmissionQueuesInit.c)
 *     IoQueuesInitialize @ 0x140014D10 (IoQueuesInitialize.c)
 *     NVMeCleanUpSqCqMapping @ 0x14001639C (NVMeCleanUpSqCqMapping.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall GetMaxDedicatedSqPerCqCount(unsigned __int16 *a1)
{
  int v1; // r8d
  __int16 result; // ax
  int v3; // edx

  v1 = a1[117];
  result = 0;
  v3 = a1[165];
  if ( (unsigned __int16)v3 > (unsigned __int16)v1 )
    return (v3 - v1 - 1) / a1[166] + 1;
  return result;
}
