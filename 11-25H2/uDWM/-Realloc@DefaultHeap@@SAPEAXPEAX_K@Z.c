/*
 * XREFs of ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x1800E9790
 * Callers:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800079C0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800082D4 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x180057B00 (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall DefaultHeap::Realloc(void *a1, SIZE_T a2)
{
  if ( a1 )
    return HeapReAlloc(g_hProcessHeap, 0, a1, a2);
  else
    return DefaultHeap::Alloc(a2);
}
