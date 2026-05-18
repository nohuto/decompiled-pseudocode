/*
 * XREFs of sub_18005FEB8 @ 0x18005FEB8
 * Callers:
 *     sub_180060C28 @ 0x180060C28 (sub_180060C28.c)
 *     sub_180060CDC @ 0x180060CDC (sub_180060CDC.c)
 *     sub_18006A784 @ 0x18006A784 (sub_18006A784.c)
 * Callees:
 *     sub_18005FEF0 @ 0x18005FEF0 (sub_18005FEF0.c)
 */

_QWORD *__fastcall sub_18005FEB8(__int64 a1, __int64 a2)
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
      result = (_QWORD *)sub_18005FEF0();
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
