/*
 * XREFs of sub_140093530 @ 0x140093530
 * Callers:
 *     sub_140002FE0 @ 0x140002FE0 (sub_140002FE0.c)
 * Callees:
 *     sub_14002A54C @ 0x14002A54C (sub_14002A54C.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_140093530(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax

  qword_1400E88D0 = (__int64)&off_1400BF308;
  qword_1400E88D8 = 0LL;
  dword_1400E88E0 = 0;
  qword_1400E88E8 = 0LL;
  qword_1400E88F0 = 0LL;
  v2 = (_QWORD *)sub_1400492F4(48LL, a2);
  *v2 = v2;
  v2[1] = v2;
  qword_1400E88E8 = (__int64)v2;
  qword_1400E88F8 = 0LL;
  xmmword_1400E8900 = 0LL;
  qword_1400E8910 = 7LL;
  qword_1400E8918 = 8LL;
  dword_1400E88E0 = 1065353216;
  sub_14002A54C(&qword_1400E88F8, 0x10uLL, (__int64)v2);
  return &qword_1400E88D0;
}
