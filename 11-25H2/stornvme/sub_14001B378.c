/*
 * XREFs of sub_14001B378 @ 0x14001B378
 * Callers:
 *     sub_140018F20 @ 0x140018F20 (sub_140018F20.c)
 *     sub_140018F74 @ 0x140018F74 (sub_140018F74.c)
 *     sub_140018FC8 @ 0x140018FC8 (sub_140018FC8.c)
 *     sub_14001901C @ 0x14001901C (sub_14001901C.c)
 *     sub_14001B734 @ 0x14001B734 (sub_14001B734.c)
 *     sub_140032320 @ 0x140032320 (sub_140032320.c)
 *     sub_140032374 @ 0x140032374 (sub_140032374.c)
 * Callees:
 *     sub_14001AF1C @ 0x14001AF1C (sub_14001AF1C.c)
 *     sub_14001B0C8 @ 0x14001B0C8 (sub_14001B0C8.c)
 *     sub_14001B1D8 @ 0x14001B1D8 (sub_14001B1D8.c)
 */

__int64 __fastcall sub_14001B378(__int64 a1, unsigned int a2, volatile signed __int32 **a3)
{
  char v5; // bl
  char v6; // di

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = a1;
  }
  else
  {
    v6 = sub_14001B0C8(*a3, a1, (__int64)a3);
    v5 = v6;
  }
  if ( a2 )
  {
    sub_14001AF1C((__int64)a3, v6, a2, 1LL);
    if ( a2 - 3 <= 1 )
      sub_14001B1D8(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
