/*
 * XREFs of sub_140041B94 @ 0x140041B94
 * Callers:
 *     sub_14004229C @ 0x14004229C (sub_14004229C.c)
 *     sub_140043088 @ 0x140043088 (sub_140043088.c)
 *     sub_140055CB4 @ 0x140055CB4 (sub_140055CB4.c)
 *     sub_140069B3C @ 0x140069B3C (sub_140069B3C.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_140041B94(__int64 a1, _QWORD *a2)
{
  HRESULT v2; // eax
  int v3; // ebx
  int v4; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v7; // [rsp+58h] [rbp+28h] BYREF
  __int64 v8; // [rsp+60h] [rbp+30h] BYREF
  LPVOID ppv; // [rsp+68h] [rbp+38h] BYREF

  *a2 = 0LL;
  ppv = 0LL;
  v2 = CoCreateInstance(&stru_1400CB2C0, 0LL, 0x17u, &riid, &ppv);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v7 = 0LL;
    v4 = sub_1400B6010(ppv);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v8 = 0LL;
      if ( (int)sub_1400B6010(v7) < 0 || (v3 = sub_1400B6010(v8), v3 >= 0) )
      {
        sub_140003238(&v8);
        sub_140003238(&v7);
        v3 = 0;
        goto LABEL_10;
      }
      sub_140003238(&v8);
    }
    else
    {
      sub_14000C2A8((int)retaddr, 24, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", v4);
    }
    sub_140003238(&v7);
  }
  else
  {
    sub_14000C2A8((int)retaddr, 21, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", v2);
  }
LABEL_10:
  sub_140003238((__int64 *)&ppv);
  return (unsigned int)v3;
}
