/*
 * XREFs of ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@PEBX@Z @ 0x14007F09C
 * Callers:
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1402204F0 (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 * Callees:
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

void *__fastcall operator new(size_t a1, __int64 a2, __int64 a3, const void *a4)
{
  size_t v4; // rdi
  void *Pool2; // rax
  void *v8; // rbx

  v4 = 1LL;
  if ( a1 )
    v4 = a1;
  if ( v4 > 0x7FFFFFFF )
    return 0LL;
  Pool2 = (void *)ExAllocatePool2(258LL, v4, 1265072196LL);
  v8 = Pool2;
  if ( Pool2 )
    memmove(Pool2, a4, v4);
  return v8;
}
