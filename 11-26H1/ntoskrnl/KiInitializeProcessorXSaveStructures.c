/*
 * XREFs of KiInitializeProcessorXSaveStructures @ 0x1405EF7B4
 * Callers:
 *     KiCompleteKernelInit @ 0x140BF96A8 (KiCompleteKernelInit.c)
 * Callees:
 *     ExInitializeSystemLookasideList @ 0x140C136D0 (ExInitializeSystemLookasideList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall KiInitializeProcessorXSaveStructures(__int64 a1)
{
  int Flink; // eax
  __int16 v3; // si
  __int64 result; // rax
  void *v5; // rbx

  Flink = (int)KiSupervisorXStateFeaturesLock.Header.WaitListHead.Flink;
  *(_QWORD *)(a1 + 2264) = &KiXStateContextLookasideList;
  v3 = 16;
  if ( Flink )
    v3 = Flink;
  result = ExAllocatePool2(0x40uLL);
  v5 = (void *)result;
  if ( result )
    result = ExInitializeSystemLookasideList(result, 512, MEMORY[0xFFFFF780000003E8] + 63, 1281446744, v3);
  else
    v5 = &KiXStateContextLookasideList;
  *(_QWORD *)(a1 + 2256) = v5;
  return result;
}
