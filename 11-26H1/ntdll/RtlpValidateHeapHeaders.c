/*
 * XREFs of RtlpValidateHeapHeaders @ 0x180060C38
 * Callers:
 *     RtlDebugReAllocateHeap @ 0x18000D850 (RtlDebugReAllocateHeap.c)
 *     RtlDebugAllocateHeap @ 0x180060070 (RtlDebugAllocateHeap.c)
 *     RtlpValidateHeap @ 0x1800605E8 (RtlpValidateHeap.c)
 *     RtlDebugFreeHeap @ 0x1800FEF68 (RtlDebugFreeHeap.c)
 *     RtlDebugCreateHeap @ 0x1801136E8 (RtlDebugCreateHeap.c)
 *     RtlDebugCompactHeap @ 0x180121278 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180146CC4 (RtlDebugCreateTagHeap.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemory @ 0x1801630E0 (RtlCompareMemory.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

char __fastcall RtlpValidateHeapHeaders(char *Src, char a2)
{
  void **v3; // rsi
  unsigned __int16 *v4; // rdi
  ULONG_PTR v5; // r8
  ULONG_PTR v6; // rdi
  ULONG_PTR v7; // rax
  unsigned int v9; // ecx
  __int64 v10; // rbx
  ULONG_PTR v11; // rax
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+18h] BYREF

  if ( !RtlpValidateHeapHdrsEnable )
    return 1;
  v3 = (void **)(Src + 216);
  v4 = (unsigned __int16 *)(Src + 210);
  if ( *((_QWORD *)Src + 27) )
    goto LABEL_3;
  RegionSize = *v4;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)Src + 27, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 1;
  a2 = 1;
LABEL_3:
  v5 = *v4;
  RegionSize = v5;
  if ( a2 )
  {
    memmove(*v3, Src, v5);
    v7 = RegionSize;
    v6 = RegionSize;
  }
  else
  {
    v6 = RtlCompareMemory(Src, *v3, v5);
    v7 = RegionSize;
  }
  if ( v7 == v6 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "Heap %p - headers modified (%p is %lx instead of %lx)\n",
    Src,
    &Src[v6],
    *(_DWORD *)&Src[v6],
    *(_DWORD *)(*((_QWORD *)Src + 27) + v6));
  v9 = 0;
  while ( 1 )
  {
    v10 = 2LL * v9;
    if ( !*((_QWORD *)&RtlpHeapHeaderFieldOffsets + 2 * v9 + 1) )
      break;
    v11 = *((unsigned int *)&RtlpHeapHeaderFieldOffsets + 4 * v9++);
    if ( v6 >= v11 && v6 < *((unsigned int *)&RtlpHeapHeaderFieldOffsets + 4 * v9) )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint(
        "    This is located in the %s field of the heap header.\n",
        *((const char **)&RtlpHeapHeaderFieldOffsets + v10 + 1));
      return 0;
    }
  }
  return 0;
}
