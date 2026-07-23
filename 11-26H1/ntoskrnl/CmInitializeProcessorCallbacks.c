/*
 * XREFs of CmInitializeProcessorCallbacks @ 0x14085681C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 *     CmpInitCallbacks @ 0x140856CAC (CmpInitCallbacks.c)
 * Callees:
 *     ExInitializeSystemLookasideList @ 0x140C136D0 (ExInitializeSystemLookasideList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmInitializeProcessorCallbacks(__int64 a1)
{
  __int64 Pool2; // rax
  void *v3; // rbx
  __int64 result; // rax

  Pool2 = ExAllocatePool2(0x40uLL);
  v3 = (void *)Pool2;
  if ( Pool2 )
    ExInitializeSystemLookasideList(Pool2, 1, 48, 1768115523, 64);
  else
    v3 = &CmpCallbackContextLookasideList;
  *(_QWORD *)(a1 + 2272) = v3;
  result = 0LL;
  *(_QWORD *)(a1 + 2280) = &CmpCallbackContextLookasideList;
  return result;
}
