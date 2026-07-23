/*
 * XREFs of EtwpAllocatePhysicalMemoryForTraceBuffers @ 0x140AB295C
 * Callers:
 *     EtwpAllocateTraceBufferPool @ 0x140AB272C (EtwpAllocateTraceBufferPool.c)
 * Callees:
 *     EtwpAllocatePhysicalPages @ 0x14082B258 (EtwpAllocatePhysicalPages.c)
 *     EtwpFreePfnArray @ 0x14082C000 (EtwpFreePfnArray.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocatePhysicalMemoryForTraceBuffers(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 Pool2; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edi
  __int64 v8; // rbp
  __int64 v9; // rax

  v2 = (unsigned __int64)*(unsigned int *)(a1 + 4) >> 12;
  Pool2 = ExAllocatePool2(0x40uLL);
  v7 = 0;
  *(_QWORD *)(a1 + 1592) = Pool2;
  if ( !Pool2
    || (v8 = v2 * *(unsigned int *)(a1 + 224), v9 = ExAllocatePool2(0x100uLL), (*(_QWORD *)(a1 + 1600) = v9) == 0LL) )
  {
    v7 = -1073741801;
LABEL_6:
    EtwpFreePfnArray(a1, v4, v5, v6);
    return v7;
  }
  *(_QWORD *)v9 = EtwpAllocatePhysicalPages((char *)(v9 + 8), v8);
  if ( **(_QWORD **)(a1 + 1600) != v8 )
  {
    v7 = -1073741670;
    goto LABEL_6;
  }
  return v7;
}
