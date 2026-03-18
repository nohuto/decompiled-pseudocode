/*
 * XREFs of ?CleanUpRegion@@YAXPEAVREGION@@@Z @ 0x1401C4470
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x140010450 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 */

void __fastcall CleanUpRegion(struct REGION *a1)
{
  struct REGION *v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v1);
}
