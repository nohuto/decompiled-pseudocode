/*
 * XREFs of ??4?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x180099054
 * Callers:
 *     ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x18009F37C (-Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180098240 (-MemoryFree@@YAXPEAX@Z.c)
 */

void **__fastcall wistd::unique_ptr<void,wil::process_heap_deleter>::operator=(void **a1, void **a2)
{
  void *v2; // rax
  void *v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    MemoryFree(v4);
  return a1;
}
