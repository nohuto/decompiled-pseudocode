/*
 * XREFs of ?HrAlloc@@YAJ_KPEAPEAX@Z @ 0x18001B210
 * Callers:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180086130 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall HrAlloc(unsigned __int64 a1, void **a2)
{
  unsigned int v2; // ebx
  void *v4; // rax

  v2 = 0;
  if ( a2 && a1 )
  {
    v4 = DefaultHeap::Alloc(a1);
    *a2 = v4;
    if ( !v4 )
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v2;
}
