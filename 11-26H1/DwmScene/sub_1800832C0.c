/*
 * XREFs of sub_1800832C0 @ 0x1800832C0
 * Callers:
 *     sub_1800836FC @ 0x1800836FC (sub_1800836FC.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_1800291F0 @ 0x1800291F0 (sub_1800291F0.c)
 *     sub_18008333C @ 0x18008333C (sub_18008333C.c)
 */

__int64 *__fastcall sub_1800832C0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_18008333C(a1 + 496);
  v4 = *a2;
  v5 = (_QWORD *)sub_180012BF8(a1 + 8, &v7);
  sub_1800291F0(v4, v5);
  if ( v8 )
    sub_180010EC8(v8);
  return a2;
}
