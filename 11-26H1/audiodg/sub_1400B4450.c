/*
 * XREFs of sub_1400B4450 @ 0x1400B4450
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_14005F83C @ 0x14005F83C (sub_14005F83C.c)
 */

__int64 sub_1400B4450()
{
  __int64 result; // rax

  if ( qword_1400E8700 )
  {
    sub_14005F83C((__int64 *)qword_1400E8700, (__int64 *)xmmword_1400E8708);
    result = sub_1400453E4(
               qword_1400E8700,
               (*((_QWORD *)&xmmword_1400E8708 + 1) - qword_1400E8700) & 0xFFFFFFFFFFFFFFF0uLL);
    qword_1400E8700 = 0LL;
    xmmword_1400E8708 = 0LL;
  }
  return result;
}
