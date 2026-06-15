/*
 * XREFs of sub_140058AF0 @ 0x140058AF0
 * Callers:
 *     sub_140058B20 @ 0x140058B20 (sub_140058B20.c)
 *     sub_14007CC24 @ 0x14007CC24 (sub_14007CC24.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140058AF0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = a1[2] - *a1;
  if ( a2 + a1[1] - *a1 < v2 )
    return 1;
  if ( a2 < 2 * v2 )
    a2 = 2 * v2;
  return sub_140058B84(a1, a2);
}
