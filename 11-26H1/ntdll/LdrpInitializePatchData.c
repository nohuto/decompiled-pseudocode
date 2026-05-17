/*
 * XREFs of LdrpInitializePatchData @ 0x1800FC550
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 */

__int64 LdrpInitializePatchData()
{
  _QWORD *Heap_0; // rax

  Heap_0 = (_QWORD *)RtlAllocateHeap_0();
  if ( !Heap_0 )
    return 3221225495LL;
  *(_DWORD *)Heap_0 = 1;
  Heap_0[1] = LdrLoadDll;
  Heap_0[2] = LdrGetProcedureAddress;
  NtCurrentPeb()->PatchLoaderData = Heap_0;
  return 0LL;
}
