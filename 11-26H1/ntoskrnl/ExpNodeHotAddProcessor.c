/*
 * XREFs of ExpNodeHotAddProcessor @ 0x1406D4BD0
 * Callers:
 *     ExInitializeProcessor @ 0x1406CF4B0 (ExInitializeProcessor.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140470380 (KeQueryNodeActiveAffinityEx.c)
 *     ExpNodeUpdateProcessorSubQueueIndex @ 0x1406D4C94 (ExpNodeUpdateProcessorSubQueueIndex.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpNodeHotAddProcessor(signed __int64 a1)
{
  __int16 v2; // si
  size_t v3; // rbp
  __int64 Pool2; // rax
  unsigned __int16 *v5; // rdi
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 112), a1, 0LL) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 88), DelayedWorkQueue);
  v2 = KiActiveGroups;
  v3 = 8LL * (unsigned __int16)KiActiveGroups;
  Pool2 = ExAllocatePool2(0x100uLL);
  v5 = (unsigned __int16 *)Pool2;
  if ( Pool2 )
  {
    *(_WORD *)Pool2 = 1;
    *(_WORD *)(Pool2 + 2) = v2;
    *(_DWORD *)(Pool2 + 4) = 0;
    memset_0((void *)(Pool2 + 8), 0, v3);
    KeQueryNodeActiveAffinityEx(*(_WORD *)a1, v5, &v6);
    ExpNodeUpdateProcessorSubQueueIndex(a1, v5, v6);
    ExFreePoolWithTag(v5, 0);
  }
}
