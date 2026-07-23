/*
 * XREFs of IopInitializeRemovePagesArray @ 0x1405D7EE0
 * Callers:
 *     IopInitializeCrashDump @ 0x1407960C8 (IopInitializeCrashDump.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void IopInitializeRemovePagesArray()
{
  __int64 Pool2; // rax

  if ( !IopRemovePagesArray )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    IopRemovePagesArray = Pool2;
    if ( Pool2 )
      *(_DWORD *)(Pool2 + 4) = 1000;
  }
}
