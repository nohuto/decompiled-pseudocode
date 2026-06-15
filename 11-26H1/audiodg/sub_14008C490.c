/*
 * XREFs of sub_14008C490 @ 0x14008C490
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_14005D3B4 @ 0x14005D3B4 (sub_14005D3B4.c)
 *     sub_14008AF6C @ 0x14008AF6C (sub_14008AF6C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14008C490(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // edx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+28h] [rbp-40h] BYREF
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+48h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v10 = a2;
  v9 = 0LL;
  v3 = sub_14005D3B4(&v10);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v11 = 0LL;
    v12 = 0LL;
    v13 = sub_1400B6010(v9);
    v3 = sub_14008AF6C((_QWORD *)(a1 - 72), (__int64)&v11, v6, v7);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v4 = 0;
      goto LABEL_7;
    }
    v5 = 334;
  }
  else
  {
    v5 = 329;
  }
  sub_14000C2A8((int)retaddr, v5, (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspapo.cpp", v3);
LABEL_7:
  sub_140056130(&v9);
  return v4;
}
