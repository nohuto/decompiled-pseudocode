/*
 * XREFs of ExpNodeInitialize @ 0x140845C00
 * Callers:
 *     ExpWorkerInitialization @ 0x140CECB08 (ExpWorkerInitialization.c)
 * Callees:
 *     KeQueryNodeActiveAffinityEx @ 0x140470380 (KeQueryNodeActiveAffinityEx.c)
 *     KeQueryActiveGroupCount @ 0x1404B4BB0 (KeQueryActiveGroupCount.c)
 *     ExpNodeUpdateProcessorSubQueueIndex @ 0x1406D4C94 (ExpNodeUpdateProcessorSubQueueIndex.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpNodeInitialize(__int64 a1)
{
  unsigned int v1; // ebx
  USHORT ActiveGroupCount; // bp
  __int64 Pool2; // rax
  unsigned __int16 *v5; // rsi
  unsigned int v6; // r8d
  unsigned int v7; // eax
  bool v8; // cc
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v10 = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 104) = ExpNodeHotAddProcessorWorker;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  ActiveGroupCount = KeQueryActiveGroupCount();
  Pool2 = ExAllocatePool2(0x100uLL);
  v5 = (unsigned __int16 *)Pool2;
  if ( Pool2 )
  {
    *(_WORD *)(Pool2 + 2) = ActiveGroupCount;
    *(_WORD *)Pool2 = 1;
    *(_DWORD *)(Pool2 + 4) = 0;
    memset_0((void *)(Pool2 + 8), 0, 8LL * ActiveGroupCount);
    KeQueryNodeActiveAffinityEx(*(_WORD *)a1, v5, &v10);
    v6 = v10;
    v7 = (ExpMaximumProcessorsPerWorkQueue + v10 - 1) / ExpMaximumProcessorsPerWorkQueue;
    if ( !v7 )
      v7 = 1;
    v8 = v7 <= *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[72];
    *(_DWORD *)(a1 + 120) = v7;
    if ( !v8 )
      *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[72] = v7;
    *(_DWORD *)(a1 + 124) = 0;
    ExpNodeUpdateProcessorSubQueueIndex(a1, (__int64)v5, v6);
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
