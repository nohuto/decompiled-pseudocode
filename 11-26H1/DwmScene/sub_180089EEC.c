/*
 * XREFs of sub_180089EEC @ 0x180089EEC
 * Callers:
 *     sub_18008B370 @ 0x18008B370 (sub_18008B370.c)
 *     sub_18008B500 @ 0x18008B500 (sub_18008B500.c)
 * Callees:
 *     sub_180089CE8 @ 0x180089CE8 (sub_180089CE8.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

_QWORD *__fastcall sub_180089EEC(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 (__fastcall ****v6)(_QWORD, __int64); // rax
  _QWORD *v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = a2;
  v6 = (__int64 (__fastcall ****)(_QWORD, __int64))sub_1800D5274(a1, &v8);
  sub_180089CE8(a1, a2, a3, v6);
  return a2;
}
