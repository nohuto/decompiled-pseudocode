/*
 * XREFs of sub_14005AC94 @ 0x14005AC94
 * Callers:
 *     sub_14005ABA8 @ 0x14005ABA8 (sub_14005ABA8.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_14001FC40 @ 0x14001FC40 (sub_14001FC40.c)
 *     sub_140021954 @ 0x140021954 (sub_140021954.c)
 *     sub_1400219B0 @ 0x1400219B0 (sub_1400219B0.c)
 *     sub_1400257E4 @ 0x1400257E4 (sub_1400257E4.c)
 *     sub_140033E34 @ 0x140033E34 (sub_140033E34.c)
 *     sub_1400382A0 @ 0x1400382A0 (sub_1400382A0.c)
 *     sub_1400401C8 @ 0x1400401C8 (sub_1400401C8.c)
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_140047598 @ 0x140047598 (sub_140047598.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005A8C4 @ 0x14005A8C4 (sub_14005A8C4.c)
 *     sub_14005B2F0 @ 0x14005B2F0 (sub_14005B2F0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_14005AC94(__int64 a1, __int128 *a2, __int64 a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  int v8; // eax
  __int128 *v9; // rdx
  void *v10; // rax
  int v11; // ebx
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r8
  void ***v18; // rax
  __int128 *v19; // rdx
  void *v20; // rax
  __int64 result; // rax
  void *v22; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v23; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-D0h] BYREF
  void *v26; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-C0h]
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+70h] [rbp-A8h]
  void **v30; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+80h] [rbp-98h] BYREF
  unsigned __int64 v32; // [rsp+88h] [rbp-90h]
  unsigned __int64 v33; // [rsp+90h] [rbp-88h]
  __int128 v34; // [rsp+98h] [rbp-80h] BYREF
  __int128 v35; // [rsp+A8h] [rbp-70h]
  __int128 v36; // [rsp+B8h] [rbp-60h]
  int v37; // [rsp+C8h] [rbp-50h]
  _UNKNOWN *retaddr; // [rsp+118h] [rbp+0h]

  v36 = 0uLL;
  v36 = *a2;
  v37 = 100;
  v24 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v29 = 0LL;
  try
  {
    if ( (int)sub_1400B6010(a4) >= 0 && LOWORD(pvar[0]) == 31 )
    {
      v24 = 0LL;
      v8 = CoRegisterDeviceCatalog(pvar[1], &v24);
      if ( v8 < 0 )
        sub_140007934((int)retaddr, 80, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp", v8);
      sub_140021954((__int64)&v34, (__int64)pvar[1]);
      v9 = &v34;
      if ( *((_QWORD *)&v35 + 1) > 7uLL )
        v9 = (__int128 *)v34;
      sub_1400382A0(&v22, v9);
      v10 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        *a6 = v10;
      }
      sub_14001D96C(&v22);
      if ( *((_QWORD *)&v35 + 1) > 7uLL )
        sub_1400453E4(v34, 2LL * *((_QWORD *)&v35 + 1) + 2);
    }
    v26 = 0LL;
    v23 = 0LL;
    v30 = &v26;
    v31 = 0LL;
    LOBYTE(v32) = 1;
    v11 = sub_14005A8C4(a1, &v31);
    sub_140033E34((__int64)&v30);
    if ( v11 >= 0 )
    {
      v12 = v23;
      if ( v23 )
      {
        sub_1400257E4((__int64)&v22);
        CoRevokeDeviceCatalog(v12);
        sub_14001FC40((__int64)&v22);
      }
      v23 = 0LL;
      CoRegisterDeviceCatalog(v26, &v23);
    }
    v27 = 0LL;
    v25 = 0LL;
    if ( (int)sub_1400B6010(a3) >= 0 && (int)sub_1400B6010(v25) >= 0 )
    {
      sub_140021954((__int64)&v30, v27);
      v15 = (char *)&v30;
      if ( v33 > 7 )
        v15 = (char *)v30;
      v16 = sub_140047598(v15, v32, v13, v14, 2LL) + 1;
      v34 = 0LL;
      v35 = 0LL;
      if ( v32 < v16 )
      {
        sub_14005B2F0();
        __debugbreak();
        JUMPOUT(0x14005B079LL);
      }
      v17 = -1LL;
      if ( v32 - v16 != -1LL )
        v17 = v32 - v16;
      v18 = &v30;
      if ( v33 > 7 )
        v18 = (void ***)v30;
      sub_1400219B0((char **)&v34, (char *)v18 + 2 * v16, v17);
      v19 = &v34;
      if ( *((_QWORD *)&v35 + 1) > 7uLL )
        v19 = (__int128 *)v34;
      sub_1400382A0(&v22, v19);
      if ( *((_QWORD *)&v35 + 1) > 7uLL )
        sub_1400453E4(v34, 2LL * *((_QWORD *)&v35 + 1) + 2);
      v20 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        *a5 = v20;
      }
      sub_14001D96C(&v22);
      if ( v33 > 7 )
        sub_1400453E4((__int64)v30, 2 * v33 + 2);
    }
    sub_140003238(&v25);
    sub_1400401C8(&v23);
    sub_140008C08(&v26, 0LL);
    PropVariantClear(pvar);
    result = sub_1400401C8(&v24);
  }
  catch ( ... )
  {
    return sub_140050410((int)retaddr, 109, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp");
  }
  return result;
}
