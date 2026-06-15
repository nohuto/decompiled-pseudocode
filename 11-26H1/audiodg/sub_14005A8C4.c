/*
 * XREFs of sub_14005A8C4 @ 0x14005A8C4
 * Callers:
 *     sub_14005AC94 @ 0x14005AC94 (sub_14005AC94.c)
 *     sub_1400747DC @ 0x1400747DC (sub_1400747DC.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400118C0 @ 0x1400118C0 (sub_1400118C0.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_14005A3EC @ 0x14005A3EC (sub_14005A3EC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_14005A8C4(__int64 a1, _QWORD *a2)
{
  HRESULT v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // r9d
  int v9; // edx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  void *v14; // rax
  void *v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-20h] BYREF
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+58h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v22; // [rsp+88h] [rbp+28h] BYREF
  __int64 v23; // [rsp+90h] [rbp+30h] BYREF
  __int64 v24; // [rsp+98h] [rbp+38h] BYREF

  *a2 = 0LL;
  ppv = 0LL;
  v3 = CoCreateInstance(&stru_1400CB2C0, 0LL, 0x17u, &riid, &ppv);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v22 = 0LL;
    v5 = sub_1400B6010(ppv);
    v4 = v5;
    if ( v5 < 0 )
    {
      sub_14000C2A8((int)retaddr, 36, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp", v5);
LABEL_5:
      sub_140003238(&v22);
      goto LABEL_24;
    }
    v23 = 0LL;
    v6 = sub_1400B6010(v22);
    v4 = v6;
    if ( v6 < 0 )
    {
      sub_14000C2A8((int)retaddr, 39, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp", v6);
LABEL_8:
      sub_140003238(&v23);
      goto LABEL_5;
    }
    *(_OWORD *)pvar = 0LL;
    v20 = 0LL;
    v7 = sub_1400B6010(v23);
    v4 = v7;
    if ( v7 >= 0 )
    {
      if ( LOWORD(pvar[0]) == 31 )
      {
        v24 = 0LL;
        v10 = sub_1400B6010(ppv);
        v4 = v10;
        if ( v10 >= 0 )
        {
          v17 = 0LL;
          v11 = sub_14005A3EC(&v24);
          v4 = v11;
          if ( v11 >= 0 )
          {
            v16 = 0LL;
            v12 = v17;
            sub_1400118C0(&v16, 0LL);
            v13 = sub_1400B6010(v12);
            v4 = v13;
            if ( v13 >= 0 )
            {
              v14 = v16;
              v16 = 0LL;
              *a2 = v14;
              sub_14001D96C(&v16);
              sub_140056130(&v17);
              sub_140003238(&v24);
              PropVariantClear(pvar);
              sub_140003238(&v23);
              sub_140003238(&v22);
              v4 = 0;
              goto LABEL_24;
            }
            sub_14000C2A8((int)retaddr, 52, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp", v13);
            sub_14001D96C(&v16);
          }
          else
          {
            sub_14000C2A8((int)retaddr, 49, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp", v11);
          }
          sub_140056130(&v17);
        }
        else
        {
          sub_14000C2A8((int)retaddr, 46, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp", v10);
        }
        sub_140003238(&v24);
        goto LABEL_12;
      }
      v4 = -2147418113;
      v8 = -2147418113;
      v9 = 43;
    }
    else
    {
      v8 = v7;
      v9 = 42;
    }
    sub_14000C2A8((int)retaddr, v9, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp", v8);
LABEL_12:
    PropVariantClear(pvar);
    goto LABEL_8;
  }
  sub_14000C2A8((int)retaddr, 33, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp", v3);
LABEL_24:
  sub_140003238((__int64 *)&ppv);
  return v4;
}
