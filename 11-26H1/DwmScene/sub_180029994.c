/*
 * XREFs of sub_180029994 @ 0x180029994
 * Callers:
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_180029734 @ 0x180029734 (sub_180029734.c)
 * Callees:
 *     sub_1800294F4 @ 0x1800294F4 (sub_1800294F4.c)
 */

unsigned __int64 __fastcall sub_180029994(_QWORD *a1, _QWORD *a2, _BYTE *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx

  v4 = a1[1];
  if ( v4 == a1[2] )
    return sub_1800294F4(a1, v4, a2, a3);
  *(_QWORD *)v4 = *a2;
  *(_BYTE *)(v4 + 8) = *a3;
  v5 = a1[1];
  a1[1] = v5 + 16;
  return v5;
}
