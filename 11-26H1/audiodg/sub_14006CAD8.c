/*
 * XREFs of sub_14006CAD8 @ 0x14006CAD8
 * Callers:
 *     sub_14006C91C @ 0x14006C91C (sub_14006C91C.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 */

__int64 __fastcall sub_14006CAD8(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_140003238((__int64 *)(v2 + 16));
  return sub_14006CAB4(a1);
}
