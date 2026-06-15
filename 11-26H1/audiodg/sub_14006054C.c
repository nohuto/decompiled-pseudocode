/*
 * XREFs of sub_14006054C @ 0x14006054C
 * Callers:
 *     sub_14005F8C8 @ 0x14005F8C8 (sub_14005F8C8.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_14005F83C @ 0x14005F83C (sub_14005F83C.c)
 */

__int64 __fastcall sub_14006054C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( qword_1400E8700 )
  {
    sub_14005F83C((__int64 *)qword_1400E8700, (__int64 *)xmmword_1400E8708);
    result = sub_1400453E4(
               qword_1400E8700,
               (*((_QWORD *)&xmmword_1400E8708 + 1) - qword_1400E8700) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  qword_1400E8700 = a2;
  *((_QWORD *)&xmmword_1400E8708 + 1) = a2 + 16 * a4;
  *(_QWORD *)&xmmword_1400E8708 = a2 + 16 * a3;
  return result;
}
