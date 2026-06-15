/*
 * XREFs of sub_1400319B8 @ 0x1400319B8
 * Callers:
 *     sub_14002C870 @ 0x14002C870 (sub_14002C870.c)
 *     sub_14002DD08 @ 0x14002DD08 (sub_14002DD08.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400319B8(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _OWORD *a5)
{
  int v8; // edi
  int v9; // ecx
  int v11; // edx
  int v12; // edx
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+57h]

  *a4 = 1;
  v8 = sub_1400B6010(a3);
  if ( v8 < 0 )
  {
    v11 = 2286;
    goto LABEL_8;
  }
  v8 = sub_1400B6010(a2);
  if ( v8 < 0 )
  {
    v11 = 2288;
LABEL_8:
    sub_14000C2A8((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", v8);
    return (unsigned int)v8;
  }
  v9 = *(_DWORD *)(a1 + 140);
  if ( (v9 & 8) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 140) & 2) != 0 )
    {
      *a5 = xmmword_1400C6828;
      if ( (*(_BYTE *)(a1 + 140) & 8) != 0 )
        *a4 = 0;
      *(_DWORD *)(a1 + 140) &= 0xFFFFFFF5;
      return 0LL;
    }
    v12 = 2293;
  }
  else
  {
    if ( (v9 & 1) != 0 )
    {
      *a5 = xmmword_1400C6B18;
      return 0LL;
    }
    v12 = 2322;
  }
  sub_14000C2A8((int)retaddr, v12, (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", -2005139408);
  return 2289827888LL;
}
