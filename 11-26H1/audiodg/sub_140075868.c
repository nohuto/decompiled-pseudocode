/*
 * XREFs of sub_140075868 @ 0x140075868
 * Callers:
 *     sub_14006B61C @ 0x14006B61C (sub_14006B61C.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400118C0 @ 0x1400118C0 (sub_1400118C0.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_14005A3EC @ 0x14005A3EC (sub_14005A3EC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_140075868(__int64 a1, _QWORD *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // r9d
  int v8; // edx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  void *v13; // rax
  LPVOID ppv; // [rsp+30h] [rbp-20h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v19; // [rsp+78h] [rbp+28h] BYREF
  void *v20; // [rsp+80h] [rbp+30h] BYREF
  __int64 v21; // [rsp+88h] [rbp+38h] BYREF

  *a2 = 0LL;
  ppv = 0LL;
  v4 = CoCreateInstance(&stru_1400CB2C0, 0LL, 0x17u, &riid, &ppv);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *(_OWORD *)pvar = 0LL;
    v17 = 0LL;
    v6 = sub_1400B6010(a1);
    v5 = v6;
    if ( v6 >= 0 )
    {
      if ( LOWORD(pvar[0]) == 31 )
      {
        v19 = 0LL;
        v9 = sub_1400B6010(ppv);
        v5 = v9;
        if ( v9 >= 0 )
        {
          v21 = 0LL;
          v10 = sub_14005A3EC(&v19);
          v5 = v10;
          if ( v10 >= 0 )
          {
            v20 = 0LL;
            v11 = v21;
            sub_1400118C0(&v20, 0LL);
            v12 = sub_1400B6010(v11);
            v5 = v12;
            if ( v12 >= 0 )
            {
              v13 = v20;
              v20 = 0LL;
              *a2 = v13;
              sub_14001D96C(&v20);
              sub_140056130(&v21);
              sub_140003238(&v19);
              PropVariantClear(pvar);
              v5 = 0;
              goto LABEL_18;
            }
            sub_14000C2A8(
              (int)retaddr,
              419,
              (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
              v12);
            sub_14001D96C(&v20);
          }
          else
          {
            sub_14000C2A8(
              (int)retaddr,
              416,
              (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
              v10);
          }
          sub_140056130(&v21);
        }
        else
        {
          sub_14000C2A8((int)retaddr, 413, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp", v9);
        }
        sub_140003238(&v19);
        goto LABEL_6;
      }
      v5 = -2147418113;
      v7 = -2147418113;
      v8 = 410;
    }
    else
    {
      v7 = v6;
      v8 = 409;
    }
    sub_14000C2A8((int)retaddr, v8, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp", v7);
LABEL_6:
    PropVariantClear(pvar);
    goto LABEL_18;
  }
  sub_14000C2A8((int)retaddr, 406, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp", v4);
LABEL_18:
  sub_140003238((__int64 *)&ppv);
  return v5;
}
