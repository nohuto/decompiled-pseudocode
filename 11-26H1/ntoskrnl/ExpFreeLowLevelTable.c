/*
 * XREFs of ExpFreeLowLevelTable @ 0x1409BE498
 * Callers:
 *     ExpFreeHandleTable @ 0x1409BE364 (ExpFreeHandleTable.c)
 * Callees:
 *     ExpFreeTablePagedPool @ 0x140908540 (ExpFreeTablePagedPool.c)
 */

void __fastcall ExpFreeLowLevelTable(ULONG_PTR BugCheckParameter1, void **P)
{
  void *v4; // rdx

  v4 = *P;
  if ( v4 )
    ExpFreeTablePagedPool(BugCheckParameter1, v4, 0x800uLL);
  ExpFreeTablePagedPool(BugCheckParameter1, P, 0x1000uLL);
}
