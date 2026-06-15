/*
 * XREFs of sub_14004B664 @ 0x14004B664
 * Callers:
 *     sub_14004B520 @ 0x14004B520 (sub_14004B520.c)
 * Callees:
 *     sub_14004AFCC @ 0x14004AFCC (sub_14004AFCC.c)
 *     sub_14004B378 @ 0x14004B378 (sub_14004B378.c)
 *     sub_14004B3EC @ 0x14004B3EC (sub_14004B3EC.c)
 */

__int64 __fastcall sub_14004B664(unsigned __int16 *a1)
{
  __int16 v2; // ax
  unsigned int v3; // ecx
  unsigned int v4; // eax

  v2 = sub_14004AFCC(a1);
  if ( v2 == 1 )
  {
    v4 = sub_14004B3EC((__int64)a1);
LABEL_6:
    v3 = v4;
    if ( !v4 )
      return v3;
    goto LABEL_7;
  }
  if ( v2 == 3 )
  {
    v4 = sub_14004B378((__int64)a1);
    goto LABEL_6;
  }
  v3 = 1;
LABEL_7:
  if ( *a1 == 0xFFFE )
  {
    v3 = 0;
    if ( a1[8] >= 0x16u )
      return a1[9] <= a1[7];
  }
  return v3;
}
