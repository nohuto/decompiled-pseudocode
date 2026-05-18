/*
 * XREFs of sub_180032950 @ 0x180032950
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18002FD04 @ 0x18002FD04 (sub_18002FD04.c)
 */

_QWORD *__fastcall sub_180032950(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  v3 = sub_18002FD04(&v5);
  *a2 = *v3;
  a2[1] = v3[1];
  *v3 = 0LL;
  v3[1] = 0LL;
  if ( v6 )
    sub_180010EC8(v6);
  return a2;
}
