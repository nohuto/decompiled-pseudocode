/*
 * XREFs of KiFreeProcessorStateInitializationParameters @ 0x1405EB404
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407B9978 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140CC8ACC (KeStartAllProcessors.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     MmFreeIndependentPages @ 0x140308D40 (MmFreeIndependentPages.c)
 *     KiFreeProcessorStacks @ 0x1405EB2E0 (KiFreeProcessorStacks.c)
 *     KiFreeProcessorNumber @ 0x1405EFA14 (KiFreeProcessorNumber.c)
 *     KeUninitThread @ 0x140A038AC (KeUninitThread.c)
 */

__int64 __fastcall KiFreeProcessorStateInitializationParameters(__int64 a1)
{
  void *v1; // rdi
  __int64 result; // rax
  unsigned __int64 v4; // rcx

  v1 = *(void **)(a1 + 48);
  if ( v1 )
  {
    KeUninitThread(v1);
    ObfDereferenceObjectWithTag(v1, 0x746C6644u);
  }
  if ( *(_WORD *)(a1 + 32) || *(_BYTE *)(a1 + 34) )
    KiFreeProcessorNumber();
  result = KiFreeProcessorStacks((_QWORD *)a1);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    return MmFreeIndependentPages(v4, *(unsigned int *)(a1 + 16));
  return result;
}
