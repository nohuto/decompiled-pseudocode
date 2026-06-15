/*
 * XREFs of sub_14006A544 @ 0x14006A544
 * Callers:
 *     sub_14004229C @ 0x14004229C (sub_14004229C.c)
 *     sub_140043088 @ 0x140043088 (sub_140043088.c)
 *     sub_140069B3C @ 0x140069B3C (sub_140069B3C.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_14006A544(__int64 a1, __int64 *a2)
{
  HRESULT Instance; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  LPVOID ppv[2]; // [rsp+30h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  ppv[0] = 0LL;
  Instance = CoCreateInstance(&stru_1400CB2C0, 0LL, 0x17u, &riid, ppv);
  v4 = Instance;
  if ( Instance >= 0 )
  {
    v12 = 0LL;
    v5 = sub_1400B6010(ppv[0]);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v11 = 0LL;
      v6 = sub_1400B6010(v12);
      v4 = v6;
      if ( v6 >= 0 )
      {
        v7 = v11;
        v11 = 0LL;
        *a2 = v7;
        sub_140003238(&v11);
        sub_140003238(&v12);
        v4 = 0;
        goto LABEL_9;
      }
      sub_14000C2A8((int)retaddr, 73, (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", v6);
      sub_140003238(&v11);
    }
    else
    {
      sub_14000C2A8((int)retaddr, 70, (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", v5);
    }
    sub_140003238(&v12);
  }
  else
  {
    sub_14000C2A8((int)retaddr, 67, (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", Instance);
  }
LABEL_9:
  sub_140003238((__int64 *)ppv);
  return v4;
}
