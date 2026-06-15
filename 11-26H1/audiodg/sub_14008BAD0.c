/*
 * XREFs of sub_14008BAD0 @ 0x14008BAD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14008A9EC @ 0x14008A9EC (sub_14008A9EC.c)
 *     sub_14008AAC8 @ 0x14008AAC8 (sub_14008AAC8.c)
 *     sub_14008C660 @ 0x14008C660 (sub_14008C660.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14008BAD0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  int v9; // eax
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+28h] [rbp-30h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v11 = 0LL;
  v12 = 0LL;
  v5 = a1 - 64;
  v6 = sub_14008AAC8((_QWORD *)(a1 - 64), (__int64)&v11, a3, a4);
  v7 = v6;
  if ( v6 < 0 )
  {
    sub_14000C2A8((int)retaddr, 353, (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspapo.cpp", v6);
    return v7;
  }
  v10 = v5;
  v9 = sub_14008A9EC(a2, &v10);
  v7 = v9;
  if ( v9 < 0 )
  {
    sub_14000C2A8((int)retaddr, 355, (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspapo.cpp", v9);
    sub_14008C660(v5);
    return v7;
  }
  return 0LL;
}
