/*
 * XREFs of sub_18003FF30 @ 0x18003FF30
 * Callers:
 *     sub_18003F8DC @ 0x18003F8DC (sub_18003F8DC.c)
 *     sub_18003FC1C @ 0x18003FC1C (sub_18003FC1C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_18003A5B8 @ 0x18003A5B8 (sub_18003A5B8.c)
 *     sub_18003E3B0 @ 0x18003E3B0 (sub_18003E3B0.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18003FF30(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // r9
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF

  sub_180029EF8(a1 + 16, (__int64)a2);
  sub_180012BF8(a1, &v8);
  v4 = sub_18001C514(592LL);
  if ( v4 )
  {
    v5 = sub_180012C40(v10, &v8);
    v4 = sub_18003A5B8(v6, v5);
  }
  sub_18003E3B0(a2, v4);
  if ( v9 )
    sub_180010EC8(v9);
  return a2;
}
