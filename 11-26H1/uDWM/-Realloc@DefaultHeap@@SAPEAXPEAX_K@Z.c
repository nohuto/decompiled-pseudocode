/*
 * XREFs of ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180085E74
 * Callers:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180008110 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x180031788 (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180086130 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

LPVOID __fastcall DefaultHeap::Realloc(void *lpMem, unsigned __int64 a2)
{
  HANDLE ProcessHeap; // rax

  if ( !lpMem )
    return DefaultHeap::Alloc(a2);
  ProcessHeap = GetProcessHeap();
  return HeapReAlloc(ProcessHeap, 0, lpMem, a2);
}
