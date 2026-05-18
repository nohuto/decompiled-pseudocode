/*
 * XREFs of sub_180090524 @ 0x180090524
 * Callers:
 *     sub_1800923D0 @ 0x1800923D0 (sub_1800923D0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180041860 @ 0x180041860 (sub_180041860.c)
 */

// Hidden C++ exception states: #wind=2
int *__fastcall sub_180090524(__int64 a1, int *a2)
{
  _QWORD *v2; // rax

  dword_1801CDAE0 = *a2;
  qword_1801CDAE8 = 0LL;
  qword_1801CDAF0 = 0LL;
  v2 = (_QWORD *)sub_180011790(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  qword_1801CDAE8 = (__int64)v2;
  qword_1801CDAF8 = 0LL;
  xmmword_1801CDB00 = 0LL;
  qword_1801CDB10 = 7LL;
  qword_1801CDB18 = 8LL;
  dword_1801CDAE0 = 1065353216;
  sub_180041860((__int64)&qword_1801CDAF8, 0x10uLL, (unsigned __int64)v2);
  return &dword_1801CDAE0;
}
