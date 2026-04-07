/*
 * XREFs of ?SetBounds@CPrimitive@@QEAAXAEBUD2D_POINTANDSIZE_L@@@Z @ 0x1800BD834
 * Callers:
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x1800C9F88 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     ?SetSize@CPrimitive@@QEAAXAEBUtagSIZE@@@Z @ 0x180072CDC (-SetSize@CPrimitive@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?SetOffset@CPrimitive@@QEAAXAEBUtagPOINT@@@Z @ 0x1800BD890 (-SetOffset@CPrimitive@@QEAAXAEBUtagPOINT@@@Z.c)
 */

void __fastcall CPrimitive::SetBounds(CPrimitive *this, const struct D2D_POINTANDSIZE_L *a2)
{
  struct tagPOINT v3; // [rsp+38h] [rbp+10h] BYREF
  struct tagSIZE v4; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(struct tagPOINT *)a2;
  v4 = (struct tagSIZE)*((_QWORD *)a2 + 1);
  CPrimitive::SetOffset(this, &v3);
  CPrimitive::SetSize((struct tagSIZE *)this, &v4);
}
