/*
 * XREFs of RtlDebugDestroyHeap @ 0x18011FBB4
 * Callers:
 *     RtlDestroyHeap @ 0x18007EAC0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180014E10 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x180014EB8 (RtlpValidateHeap.c)
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18007F200 (RtlpSecMemFreeVirtualMemory.c)
 */

char __fastcall RtlDebugDestroyHeap(__int64 a1)
{
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (void *)a1 == NtCurrentPeb()->ProcessHeap )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("May not destroy the process heap at %p\n", (const void *)a1);
    return 0;
  }
  if ( !RtlpCheckHeapSignature((_DWORD *)a1, "RtlDestroyHeap") || !RtlpValidateHeap(a1, 0) )
    return 0;
  *(_DWORD *)(a1 + 152) = 0;
  if ( *(_QWORD *)(a1 + 216) )
  {
    v4 = 0LL;
    RtlpSecMemFreeVirtualMemory(v3, (__int64 *)(a1 + 216), &v4, 0x8000LL);
  }
  return 1;
}
