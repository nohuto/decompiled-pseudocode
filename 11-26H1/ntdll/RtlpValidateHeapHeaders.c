/*
 * XREFs of RtlpValidateHeapHeaders @ 0x180015508
 * Callers:
 *     RtlDebugAllocateHeap @ 0x180014940 (RtlDebugAllocateHeap.c)
 *     RtlpValidateHeap @ 0x180014EB8 (RtlpValidateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180022780 (RtlDebugReAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x1800FF818 (RtlDebugFreeHeap.c)
 *     RtlDebugCreateHeap @ 0x180113EEC (RtlDebugCreateHeap.c)
 *     RtlDebugCompactHeap @ 0x1801214DC (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180146E14 (RtlDebugCreateTagHeap.c)
 * Callees:
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemory @ 0x1801631E0 (RtlCompareMemory.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

char __fastcall RtlpValidateHeapHeaders(_QWORD *Src, char a2)
{
  void **v3; // rsi
  unsigned __int16 *v4; // rdi
  size_t v5; // r8
  SIZE_T v6; // rdi
  size_t v7; // rax
  unsigned int v9; // ecx
  __int64 v10; // rbx
  SIZE_T v11; // rax
  size_t v12; // [rsp+50h] [rbp+18h] BYREF

  if ( !RtlpValidateHeapHdrsEnable )
    return 1;
  v3 = (void **)(Src + 27);
  v4 = (unsigned __int16 *)Src + 105;
  if ( Src[27] )
    goto LABEL_3;
  v12 = *v4;
  if ( (int)ZwAllocateVirtualMemory(-1LL, Src + 27, 0LL, &v12, 4096, 4) < 0 )
    return 1;
  a2 = 1;
LABEL_3:
  v5 = *v4;
  v12 = v5;
  if ( a2 )
  {
    memmove(*v3, Src, v5);
    v7 = v12;
    v6 = v12;
  }
  else
  {
    v6 = RtlCompareMemory(Src, *v3, v5);
    v7 = v12;
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
    (char *)Src + v6,
    *(_DWORD *)((char *)Src + v6),
    *(_DWORD *)(Src[27] + v6));
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
