/*
 * XREFs of sub_1800433C4 @ 0x1800433C4
 * Callers:
 *     sub_180042974 @ 0x180042974 (sub_180042974.c)
 *     sub_18005DEB0 @ 0x18005DEB0 (sub_18005DEB0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_1800299DC @ 0x1800299DC (sub_1800299DC.c)
 *     sub_18005E4E4 @ 0x18005E4E4 (sub_18005E4E4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800433C4(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rbp
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v8; // [rsp+50h] [rbp+8h]

  v6 = 0LL;
  result = (__int64)sub_180011F5C(a1 + 15, (__int64 *)&v6);
  if ( *((_QWORD *)&v6 + 1) )
    result = sub_180010EC8(*((__int64 *)&v6 + 1));
  v3 = a1[17];
  if ( v3 )
  {
    v8 = sub_1800162D0(&v6, a1 + 27);
    sub_1800299DC((__int64)v7, v3 + 472);
    sub_18005E4E4(v3 + 480, v8);
    sub_180011E54((__int64)v7);
    v4 = (volatile signed __int32 *)v8[1];
    if ( v4 )
      sub_180010F00(v4);
    v6 = 0LL;
    result = (__int64)sub_180011F5C(a1 + 17, (__int64 *)&v6);
    if ( *((_QWORD *)&v6 + 1) )
      result = sub_180010EC8(*((__int64 *)&v6 + 1));
    a1[27] = 0LL;
    v5 = (volatile signed __int32 *)a1[28];
    a1[28] = 0LL;
    if ( v5 )
      return sub_180010F00(v5);
  }
  return result;
}
