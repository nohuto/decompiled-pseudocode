/*
 * XREFs of sub_180026804 @ 0x180026804
 * Callers:
 *     sub_180099E4C @ 0x180099E4C (sub_180099E4C.c)
 *     sub_18009A08C @ 0x18009A08C (sub_18009A08C.c)
 *     sub_18009A468 @ 0x18009A468 (sub_18009A468.c)
 *     sub_18009A580 @ 0x18009A580 (sub_18009A580.c)
 *     sub_18009AFF0 @ 0x18009AFF0 (sub_18009AFF0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180099184 @ 0x180099184 (sub_180099184.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180026804(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v6 = (_QWORD *)sub_180012BF8(a1 + 8, &v10);
  v9 = 0LL;
  v8 = a1 + 4096;
  v9 = v6[1];
  *v6 = 0LL;
  v6[1] = 0LL;
  sub_180099184(a2, &v8, a3);
  if ( v11 )
    sub_180010EC8(v11);
  return a2;
}
