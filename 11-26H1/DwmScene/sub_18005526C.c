/*
 * XREFs of sub_18005526C @ 0x18005526C
 * Callers:
 *     sub_180054E00 @ 0x180054E00 (sub_180054E00.c)
 *     sub_1800553F4 @ 0x1800553F4 (sub_1800553F4.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 */

_QWORD *__fastcall sub_18005526C(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD **)(a1 + 40);
  if ( v2 == *(_QWORD **)(a1 + 48) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180012A94(*v2 + 56LL, &v5);
    sub_18001367C(v5, a2);
    if ( v6 )
      sub_180010EC8(v6);
  }
  return a2;
}
