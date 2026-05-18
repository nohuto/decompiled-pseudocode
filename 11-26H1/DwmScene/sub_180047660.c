/*
 * XREFs of sub_180047660 @ 0x180047660
 * Callers:
 *     sub_1800475BC @ 0x1800475BC (sub_1800475BC.c)
 * Callees:
 *     sub_180047C00 @ 0x180047C00 (sub_180047C00.c)
 *     sub_180047D40 @ 0x180047D40 (sub_180047D40.c)
 *     sub_180047E18 @ 0x180047E18 (sub_180047E18.c)
 *     sub_180047F8C @ 0x180047F8C (sub_180047F8C.c)
 *     sub_180048114 @ 0x180048114 (sub_180048114.c)
 *     sub_18004824C @ 0x18004824C (sub_18004824C.c)
 *     sub_180048378 @ 0x180048378 (sub_180048378.c)
 *     sub_180048544 @ 0x180048544 (sub_180048544.c)
 *     sub_18004866C @ 0x18004866C (sub_18004866C.c)
 */

__int64 __fastcall sub_180047660(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 292) = v2;
  *(_DWORD *)(a1 + 296) = v2;
  if ( (v2 & 0x100) != 0 )
    result = sub_18004824C(a1);
  if ( (v2 & 0x80u) != 0 )
    result = sub_180047C00(a1);
  if ( (v2 & 1) != 0 )
    result = sub_180048544(a1);
  if ( (v2 & 2) != 0 )
    result = sub_18004866C(a1);
  if ( (v2 & 0x10000000) != 0 )
  {
    result = sub_180047E18(a1);
  }
  else if ( (v2 & 0x40) != 0 )
  {
    result = sub_180047D40(a1);
  }
  if ( (v2 & 0x10) != 0 )
    result = sub_180048114(a1, *(_QWORD *)(a2 + 64), 0LL);
  if ( (v2 & 0x20) != 0 )
    result = sub_180048378(a1, *(_QWORD *)(a2 + 80), 0LL);
  if ( (v2 & 0x400) != 0 )
    return sub_180047F8C(a1, *(_QWORD *)(a2 + 104), *(_QWORD *)(a2 + 96));
  return result;
}
