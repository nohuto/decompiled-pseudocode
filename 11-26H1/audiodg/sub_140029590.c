/*
 * XREFs of sub_140029590 @ 0x140029590
 * Callers:
 *     sub_140028E18 @ 0x140028E18 (sub_140028E18.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140029B30 @ 0x140029B30 (sub_140029B30.c)
 *     sub_140033E34 @ 0x140033E34 (sub_140033E34.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_140029590(__int64 a1, __int64 a2, void *a3)
{
  HRESULT v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // r9d
  int v10; // edx
  int v11; // eax
  int v13[2]; // [rsp+30h] [rbp-30h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-28h] BYREF
  int v15[4]; // [rsp+40h] [rbp-20h] BYREF
  char v16; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v18; // [rsp+98h] [rbp+38h] BYREF

  ppv = 0LL;
  v6 = CoCreateInstance(&rclsid, 0LL, 0x17u, &riid, &ppv);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v18 = 0LL;
    v8 = sub_1400B6010(ppv);
    v7 = v8;
    if ( v8 >= 0 )
    {
      *(_QWORD *)v13 = 0LL;
      *(_QWORD *)v15 = v13;
      *(_QWORD *)&v15[2] = 0LL;
      v16 = 1;
      v7 = sub_1400B6010(a2);
      sub_140033E34(v15);
      if ( v7 >= 0 )
      {
        *(_OWORD *)v15 = *(_OWORD *)(a1 + 32);
        v11 = sub_140029B30(v18, v13[0], (int)v15, 0, *(_DWORD *)(a1 + 8), a3);
        v7 = v11;
        if ( v11 >= 0 )
        {
          sub_140008C08((void **)v13, 0LL);
          sub_140003238(&v18);
          v7 = 0;
          goto LABEL_12;
        }
        v9 = v11;
        v10 = 27;
      }
      else
      {
        v9 = v7;
        v10 = 25;
      }
      sub_14000C2A8((int)retaddr, v10, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp", v9);
      sub_140008C08((void **)v13, 0LL);
    }
    else
    {
      sub_14000C2A8((int)retaddr, 22, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp", v8);
    }
    sub_140003238(&v18);
  }
  else
  {
    sub_14000C2A8((int)retaddr, 19, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp", v6);
  }
LABEL_12:
  sub_140003238((__int64 *)&ppv);
  return (unsigned int)v7;
}
