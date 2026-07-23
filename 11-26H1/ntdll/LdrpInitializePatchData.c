/*
 * XREFs of LdrpInitializePatchData @ 0x1800FBCA0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 */

__int64 LdrpInitializePatchData()
{
  _QWORD *Heap_0; // rax

  Heap_0 = RtlAllocateHeap_0(LdrpHeap, (NtdllBaseTag + 1572864) | 8, 0x18uLL);
  if ( !Heap_0 )
    return 3221225495LL;
  *(_DWORD *)Heap_0 = 1;
  Heap_0[1] = LdrLoadDll;
  Heap_0[2] = LdrGetProcedureAddress;
  NtCurrentPeb()->PatchLoaderData = Heap_0;
  return 0LL;
}
