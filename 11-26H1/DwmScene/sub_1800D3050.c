/*
 * XREFs of sub_1800D3050 @ 0x1800D3050
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003E908 @ 0x18003E908 (sub_18003E908.c)
 *     sub_18003EA38 @ 0x18003EA38 (sub_18003EA38.c)
 *     sub_1800D42D0 @ 0x1800D42D0 (sub_1800D42D0.c)
 */

_QWORD *__fastcall sub_1800D3050(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]

  v3 = (_QWORD *)(a1 + 144);
  sub_18003E908(a1 + 144, &v8, a3);
  v5 = v9;
  if ( !sub_18003EA38(v6, v9) || v5 == *v3 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  else
  {
    sub_1800D42D0(v5 + 64, a2);
  }
  return a2;
}
