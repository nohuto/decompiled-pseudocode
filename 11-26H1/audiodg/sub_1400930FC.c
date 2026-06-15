/*
 * XREFs of sub_1400930FC @ 0x1400930FC
 * Callers:
 *     sub_14009361C @ 0x14009361C (sub_14009361C.c)
 *     sub_1400936E4 @ 0x1400936E4 (sub_1400936E4.c)
 *     sub_140093DB8 @ 0x140093DB8 (sub_140093DB8.c)
 * Callees:
 *     sub_140093134 @ 0x140093134 (sub_140093134.c)
 */

_QWORD *__fastcall sub_1400930FC(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      result = (_QWORD *)sub_140093134();
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
