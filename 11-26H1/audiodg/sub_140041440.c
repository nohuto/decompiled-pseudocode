/*
 * XREFs of sub_140041440 @ 0x140041440
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400115FC @ 0x1400115FC (sub_1400115FC.c)
 *     sub_140029510 @ 0x140029510 (sub_140029510.c)
 *     sub_140029B30 @ 0x140029B30 (sub_140029B30.c)
 *     sub_14003529C @ 0x14003529C (sub_14003529C.c)
 *     sub_140035CA4 @ 0x140035CA4 (sub_140035CA4.c)
 *     sub_140036470 @ 0x140036470 (sub_140036470.c)
 *     sub_140037278 @ 0x140037278 (sub_140037278.c)
 *     sub_140038C2C @ 0x140038C2C (sub_140038C2C.c)
 *     sub_14003E2C8 @ 0x14003E2C8 (sub_14003E2C8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140041440(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        unsigned int a5,
        int a6,
        int a7,
        __int64 a8)
{
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned int v13; // ebx
  int v14; // edx
  HRESULT v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  _OWORD *v24; // rax
  _OWORD *v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  int v30[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  int v32[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v33; // [rsp+80h] [rbp-80h]
  __int128 v34; // [rsp+90h] [rbp-70h]
  int v35; // [rsp+A0h] [rbp-60h]
  int v36; // [rsp+A4h] [rbp-5Ch]
  _OWORD v37[2]; // [rsp+A8h] [rbp-58h]
  _OWORD v38[6]; // [rsp+D0h] [rbp-30h] BYREF
  LARGE_INTEGER v39; // [rsp+180h] [rbp+80h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+270h] [rbp+170h] BYREF
  _UNKNOWN *retaddr; // [rsp+3A8h] [rbp+2A8h]

  v26 = a4;
  v11 = a1 + 140;
  v12 = sub_140006470(a1);
  sub_140006980(&PerformanceCount, (LARGE_INTEGER)v12, "SrvSystemEffect_Initialize", v11);
  if ( !a2 )
  {
    v13 = -2147024809;
    v14 = 157;
LABEL_5:
    sub_14000C2A8((int)retaddr, v14, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", v13);
    goto LABEL_33;
  }
  if ( !*(_QWORD *)(a1 + 96) )
  {
    v13 = -2147024882;
    v14 = 158;
    goto LABEL_5;
  }
  v33 = 0LL;
  *(_OWORD *)a8 = 0LL;
  *(_QWORD *)(a8 + 16) = v33;
  *(_DWORD *)(a8 + 24) = 0;
  ppv = 0LL;
  v15 = CoCreateInstance(&rclsid, 0LL, 0x17u, &riid, &ppv);
  v13 = v15;
  if ( v15 < 0 )
  {
    sub_14000C2A8((int)retaddr, 163, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", v15);
LABEL_8:
    sub_140003238((__int64 *)&ppv);
    goto LABEL_33;
  }
  *(_QWORD *)v30 = 0LL;
  v16 = sub_1400B6010(ppv);
  v13 = v16;
  if ( v16 < 0 )
  {
    sub_14000C2A8((int)retaddr, 166, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", v16);
LABEL_11:
    sub_140003238((__int64 *)v30);
    goto LABEL_8;
  }
  v31 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  if ( (int)sub_1400B6010(*(_QWORD *)(a1 + 96)) < 0 )
  {
    v18 = sub_1400B6010(*(_QWORD *)(a1 + 96));
    v13 = v18;
    if ( v18 < 0 )
    {
      if ( a7 == 1 )
      {
        sub_14000C2A8((int)retaddr, 183, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", v18);
LABEL_16:
        sub_140003238(&v27);
        sub_140003238(&v29);
        sub_140003238(&v31);
        goto LABEL_11;
      }
      if ( (int)sub_1400B6010(*(_QWORD *)(a1 + 96)) < 0 )
      {
        sub_140003238(&v27);
        sub_140003238(&v29);
        sub_140003238(&v31);
        sub_140003238((__int64 *)v30);
        sub_140003238((__int64 *)&ppv);
        v13 = 0;
        goto LABEL_33;
      }
    }
  }
  memset(v38, 0, 88);
  v19 = sub_140006470(v17);
  sub_140006980(&v39, (LARGE_INTEGER)v19, "SrvSystemEffect_InitApo", v11);
  *(_OWORD *)v32 = *v26;
  v20 = sub_140029B30(*(__int64 *)v30, a3, (__int64)v32, a5, a6, v38);
  v13 = v20;
  if ( v20 < 0 )
  {
    sub_14000C2A8((int)retaddr, 195, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", v20);
    sub_1400066EC(&v39);
    goto LABEL_16;
  }
  sub_1400066EC(&v39);
  *(_QWORD *)v32 = v38;
  if ( v29 )
  {
    v21 = sub_1400B6010(a1 + 8);
    v13 = v21;
    if ( v21 < 0 )
    {
      sub_14000C2A8((int)retaddr, 231, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", v21);
      LOBYTE(v32[2]) = 0;
      sub_140029510((__int64 *)v32);
      goto LABEL_16;
    }
  }
  else if ( v31 )
  {
    v36 = 0;
    v34 = v38[0];
    v35 = v38[1];
    LODWORD(v34) = 56;
    v37[0] = *(_OWORD *)((char *)&v38[1] + 8);
    v37[1] = *(_OWORD *)((char *)&v38[2] + 8);
    v22 = sub_1400B6010(a1 + 8);
    v13 = v22;
    if ( v22 < 0 )
    {
      sub_14000C2A8((int)retaddr, 244, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", v22);
      LOBYTE(v32[2]) = 0;
      sub_140029510((__int64 *)v32);
      goto LABEL_16;
    }
  }
  if ( a7 && *(_QWORD *)(a1 + 104) != v29 )
    sub_1400115FC((_QWORD *)(a1 + 104), v29);
  v23 = *(_QWORD *)(a1 + 96);
  v24 = 0LL;
  v26 = 0LL;
  if ( v23 )
  {
    sub_1400B6010(v23);
    v24 = v26;
  }
  *(_DWORD *)a8 = v24 != 0LL;
  sub_140003238((__int64 *)&v26);
  sub_14003529C(&v26, *(_QWORD *)(a1 + 96));
  *(_DWORD *)(a8 + 4) = v26 != 0LL;
  sub_140003238((__int64 *)&v26);
  sub_140037278(&v26, *(_QWORD *)(a1 + 96));
  *(_DWORD *)(a8 + 8) = v26 != 0LL;
  sub_140003238((__int64 *)&v26);
  sub_140035CA4(&v26, *(_QWORD *)(a1 + 96));
  *(_DWORD *)(a8 + 12) = v26 != 0LL;
  sub_140003238((__int64 *)&v26);
  sub_140036470(&v26, *(_QWORD *)(a1 + 96));
  *(_DWORD *)(a8 + 16) = v26 != 0LL;
  sub_140003238((__int64 *)&v26);
  sub_140038C2C(&v26, *(_QWORD *)(a1 + 96));
  *(_DWORD *)(a8 + 20) = v26 != 0LL;
  sub_140003238((__int64 *)&v26);
  *(_DWORD *)(a8 + 24) = v27 != 0;
  LOBYTE(v32[2]) = 0;
  sub_140029510((__int64 *)v32);
  sub_140003238(&v27);
  sub_140003238(&v29);
  sub_140003238(&v31);
  sub_140003238((__int64 *)v30);
  sub_140003238((__int64 *)&ppv);
  v13 = 0;
LABEL_33:
  sub_1400066EC(&PerformanceCount);
  return v13;
}
