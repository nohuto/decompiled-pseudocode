/*
 * XREFs of sub_14001F1BC @ 0x14001F1BC
 * Callers:
 *     sub_140046D40 @ 0x140046D40 (sub_140046D40.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140011760 @ 0x140011760 (sub_140011760.c)
 *     sub_14001F358 @ 0x14001F358 (sub_14001F358.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_14001F1BC(__int128 *a1, _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edx
  int v10; // r9d
  __int64 v12; // [rsp+20h] [rbp-E0h] BYREF
  PROPVARIANT pvar[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h]
  __int128 v15; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v16[528]; // [rsp+50h] [rbp-B0h] BYREF
  _UNKNOWN *retaddr; // [rsp+278h] [rbp+178h]

  *a2 = 0LL;
  v15 = *a1;
  v3 = sub_14001F358(&v15, a2, v16);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v12 = 0LL;
    v5 = MMDevAPI_4(v16, 131097LL, &v12);
    v4 = v5;
    if ( v5 < 0 )
    {
      sub_14000C2A8((int)retaddr, 25, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp", v5);
LABEL_14:
      sub_140003238(&v12);
      return v4;
    }
    *(_OWORD *)pvar = 0LL;
    v14 = 0LL;
    v6 = sub_1400B6010(v12);
    v4 = v6;
    if ( v6 >= 0 )
    {
      if ( LOWORD(pvar[0]) != 31 )
      {
        v4 = -2147467259;
        v10 = -2147467259;
        v9 = 29;
        goto LABEL_8;
      }
      v6 = sub_140011760(v8, v7, (__int64)pvar[1], a2);
      v4 = v6;
      if ( v6 >= 0 )
      {
        PropVariantClear(pvar);
        v4 = 0;
        goto LABEL_14;
      }
      v9 = 30;
    }
    else
    {
      v9 = 28;
    }
    v10 = v6;
LABEL_8:
    sub_14000C2A8((int)retaddr, v9, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp", v10);
    PropVariantClear(pvar);
    goto LABEL_14;
  }
  sub_14000C2A8((int)retaddr, 22, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp", v3);
  return v4;
}
