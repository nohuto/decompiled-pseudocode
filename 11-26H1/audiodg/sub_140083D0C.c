/*
 * XREFs of sub_140083D0C @ 0x140083D0C
 * Callers:
 *     sub_140080F10 @ 0x140080F10 (sub_140080F10.c)
 *     sub_140081650 @ 0x140081650 (sub_140081650.c)
 *     sub_140081AE0 @ 0x140081AE0 (sub_140081AE0.c)
 *     sub_1400837C0 @ 0x1400837C0 (sub_1400837C0.c)
 *     sub_140084920 @ 0x140084920 (sub_140084920.c)
 *     sub_140084B80 @ 0x140084B80 (sub_140084B80.c)
 * Callees:
 *     sub_1400265D8 @ 0x1400265D8 (sub_1400265D8.c)
 */

_QWORD *__fastcall sub_140083D0C(__int64 a1, _QWORD *a2, __int64 a3, _QWORD **a4)
{
  _QWORD *v4; // rdi
  _QWORD *result; // rax

  v4 = (_QWORD *)*a2;
  for ( *a4 = (_QWORD *)*a2; ; v4 = *a4 )
  {
    if ( !v4 )
    {
      *a4 = 0LL;
      return 0LL;
    }
    result = (_QWORD *)*sub_1400265D8(a1, a4);
    if ( *result == a3 )
      break;
  }
  *a4 = v4;
  return result;
}
