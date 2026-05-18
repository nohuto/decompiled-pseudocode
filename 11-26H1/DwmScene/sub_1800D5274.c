/*
 * XREFs of sub_1800D5274 @ 0x1800D5274
 * Callers:
 *     sub_180089EEC @ 0x180089EEC (sub_180089EEC.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18008A458 @ 0x18008A458 (sub_18008A458.c)
 */

_QWORD *__fastcall sub_1800D5274(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = (__int64)a2;
  v3 = (_QWORD *)sub_18001C514(8LL);
  if ( v3 )
    *v3 = &Spectre::Utils::Tweening::ExponentialEaseInOutCurve::`vftable';
  v5[0] = 0LL;
  *a2 = v3;
  sub_18008A458(v5);
  return a2;
}
