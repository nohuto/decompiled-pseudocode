/*
 * XREFs of sub_140073F98 @ 0x140073F98
 * Callers:
 *     sub_140073A74 @ 0x140073A74 (sub_140073A74.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140011760 @ 0x140011760 (sub_140011760.c)
 *     sub_14001FC40 @ 0x14001FC40 (sub_14001FC40.c)
 *     sub_1400257E4 @ 0x1400257E4 (sub_1400257E4.c)
 *     sub_1400401C8 @ 0x1400401C8 (sub_1400401C8.c)
 *     sub_140073790 @ 0x140073790 (sub_140073790.c)
 *     sub_1400747DC @ 0x1400747DC (sub_1400747DC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140073F98(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  __int64 v10; // r15
  int v11; // eax
  unsigned int v12; // edi
  int v13; // r9d
  int v14; // edx
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // eax
  unsigned int v18; // esi
  __int64 v19; // rdi
  HRESULT v20; // eax
  __int64 v21; // rax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+28h]
  __int64 v24; // [rsp+50h] [rbp+30h] BYREF
  __int64 v25; // [rsp+60h] [rbp+40h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  *(_OWORD *)(a1 + 144) = *a2;
  *(_DWORD *)(a1 + 168) = a5;
  v10 = a6;
  *(_QWORD *)(a1 + 176) = a6;
  v11 = sub_140011760(a1, (__int64)a2, a4, (_QWORD *)(a1 + 160));
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = v11;
    v14 = 137;
LABEL_10:
    sub_14000C2A8((int)retaddr, v14, (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectwrapper.cpp", v13);
    goto LABEL_20;
  }
  v15 = a7;
  if ( a7 )
  {
    v16 = v24;
    if ( v24 )
    {
      sub_1400257E4((__int64)&a6);
      CoRevokeDeviceCatalog(v16);
      sub_14001FC40((__int64)&a6);
    }
    v24 = 0LL;
    v17 = CoRegisterDeviceCatalog(v15, &v24);
    v18 = v17;
    if ( v17 < 0 )
    {
      v12 = -2147009265;
      if ( v17 != -2147009265 )
      {
        sub_14000C2A8((int)retaddr, 24, (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectwrapper.cpp", v17);
        v12 = v18;
      }
      v13 = v12;
      v14 = 148;
      goto LABEL_10;
    }
  }
  if ( a4 )
  {
    v19 = v25;
    if ( v25 )
    {
      sub_1400257E4((__int64)&a6);
      CoRevokeDeviceCatalog(v19);
      sub_14001FC40((__int64)&a6);
    }
    v25 = 0LL;
    sub_1400747DC(a4, &v25);
  }
  v20 = sub_140073790((const IID *)a1);
  v12 = v20;
  if ( v20 < 0 )
  {
    v13 = v20;
    v14 = 156;
    goto LABEL_10;
  }
  v21 = a1 + 128;
  if ( !v10 )
    v21 = a1 + 8;
  *a8 = v21 & -(__int64)(a1 != 0);
  v12 = 0;
LABEL_20:
  sub_1400401C8(&v25);
  sub_1400401C8(&v24);
  return v12;
}
