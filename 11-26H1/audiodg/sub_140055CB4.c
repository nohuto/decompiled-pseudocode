/*
 * XREFs of sub_140055CB4 @ 0x140055CB4
 * Callers:
 *     sub_140054D80 @ 0x140054D80 (sub_140054D80.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140011760 @ 0x140011760 (sub_140011760.c)
 *     sub_140041B94 @ 0x140041B94 (sub_140041B94.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_140055CB4(__int128 *a1, __int64 a2, _QWORD *a3)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // edx
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int128 v14; // [rsp+40h] [rbp-20h]
  int v15; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+8h]

  *a3 = 0LL;
  v11 = 0LL;
  if ( (int)sub_140041B94(a2, &v11) < 0 || !v11 )
    goto LABEL_10;
  *(_OWORD *)pvar = 0LL;
  v13 = 0LL;
  v14 = 0uLL;
  v14 = *a1;
  v15 = 100;
  v5 = sub_1400B6010(v11);
  v8 = v5;
  if ( v5 >= 0 )
  {
    if ( LOWORD(pvar[0]) == 31 )
    {
      v5 = sub_140011760(v7, v6, (__int64)pvar[1], a3);
      v8 = v5;
      if ( v5 < 0 )
      {
        v9 = 50;
        goto LABEL_8;
      }
    }
    PropVariantClear(pvar);
LABEL_10:
    v8 = 0;
    goto LABEL_11;
  }
  v9 = 46;
LABEL_8:
  sub_14000C2A8((int)retaddr, v9, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", v5);
  PropVariantClear(pvar);
LABEL_11:
  sub_140003238(&v11);
  return v8;
}
