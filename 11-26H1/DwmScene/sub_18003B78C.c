/*
 * XREFs of sub_18003B78C @ 0x18003B78C
 * Callers:
 *     sub_18003C964 @ 0x18003C964 (sub_18003C964.c)
 *     sub_180086D20 @ 0x180086D20 (sub_180086D20.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_18003B678 @ 0x18003B678 (sub_18003B678.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 */

_QWORD *__fastcall sub_18003B78C(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 *v7; // rcx
  char v8; // bl
  __int64 v9; // rax
  char v11; // [rsp+28h] [rbp-30h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+38h] [rbp-20h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  sub_18003D718(a1);
  v6 = sub_18003B678(a1, *a3);
  if ( v6 )
  {
    v7 = (__int64 *)sub_180012BF8(v6 + 8, &v13);
    v8 = 5;
    v9 = *v7;
  }
  else
  {
    v9 = 0LL;
    v12 = 0LL;
    v7 = (__int64 *)&v11;
    v8 = 6;
  }
  *a2 = v9;
  a2[1] = v7[1];
  *v7 = 0LL;
  v7[1] = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v12 )
      sub_180010EC8(v12);
  }
  if ( (v8 & 1) != 0 && v14 )
    sub_180010EC8(v14);
  return a2;
}
