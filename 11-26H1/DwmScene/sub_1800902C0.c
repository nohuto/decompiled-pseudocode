/*
 * XREFs of sub_1800902C0 @ 0x1800902C0
 * Callers:
 *     sub_180090658 @ 0x180090658 (sub_180090658.c)
 *     sub_180090718 @ 0x180090718 (sub_180090718.c)
 *     sub_1800907C0 @ 0x1800907C0 (sub_1800907C0.c)
 * Callees:
 *     sub_1800902F8 @ 0x1800902F8 (sub_1800902F8.c)
 */

_QWORD *__fastcall sub_1800902C0(__int64 a1, __int64 a2)
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
      result = (_QWORD *)sub_1800902F8();
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
