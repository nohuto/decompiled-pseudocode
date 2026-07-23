/*
 * XREFs of HalpDmaCvmMakeMasterAdapterMapRegistersShared @ 0x14058B99C
 * Callers:
 *     HalpDmaInit @ 0x140CB6740 (HalpDmaInit.c)
 * Callees:
 *     CvmDebugLog @ 0x140534A08 (CvmDebugLog.c)
 *     HalpDmaCvmSetPageShareability @ 0x140785D68 (HalpDmaCvmSetPageShareability.c)
 */

void HalpDmaCvmMakeMasterAdapterMapRegistersShared()
{
  __int64 v0; // r8
  unsigned int v1; // r9d
  __int64 v2; // rax
  __int64 v3; // r10

  CvmDebugLog("Marking %s registers as shared. MapRegisterBase=%p SizeInBytes=%p\n");
  LOBYTE(v0) = 1;
  if ( (int)HalpDmaCvmSetPageShareability(v2, (v1 >> 12) + ((v1 & 0xFFF) != 0), v0, v3) < 0 )
    CvmDebugLog("Failed to mark %s registers as shared. Status=%08x\n");
}
