/*
 * XREFs of sub_18004D310 @ 0x18004D310
 * Callers:
 *     sub_18004C184 @ 0x18004C184 (sub_18004C184.c)
 *     sub_18004C2A8 @ 0x18004C2A8 (sub_18004C2A8.c)
 *     sub_18004D208 @ 0x18004D208 (sub_18004D208.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_18004D310(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    sub_180010EC8(v2);
  return sub_1800129D0(a1);
}
