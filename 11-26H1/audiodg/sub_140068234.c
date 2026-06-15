/*
 * XREFs of sub_140068234 @ 0x140068234
 * Callers:
 *     sub_14006B3B0 @ 0x14006B3B0 (sub_14006B3B0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400126A4 @ 0x1400126A4 (sub_1400126A4.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_140037FB0 @ 0x140037FB0 (sub_140037FB0.c)
 *     sub_14003826C @ 0x14003826C (sub_14003826C.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_1400674EC @ 0x1400674EC (sub_1400674EC.c)
 *     sub_140067618 @ 0x140067618 (sub_140067618.c)
 *     sub_1400A9110 @ 0x1400A9110 (sub_1400A9110.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall sub_140068234(
        int *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8)
{
  unsigned int v9; // edi
  __int64 v11; // r14
  int v12; // r12d
  int v13; // ebx
  unsigned int v14; // r11d
  int v15; // edx
  unsigned int v16; // r10d
  unsigned int v17; // r14d
  HRESULT v18; // eax
  int v19; // edx
  LPVOID v20; // rbx
  __int128 v21; // xmm6
  int v22; // r9d
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // edx
  LPVOID v28; // rcx
  int v29; // eax
  int v30; // eax
  int v31; // r9d
  int v32; // edx
  int v33; // eax
  int v34; // edx
  __int64 v35; // r12
  unsigned __int64 v36; // rcx
  int v37; // eax
  int v38; // eax
  int v39; // edx
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  LPVOID v43; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v44; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID ppv; // [rsp+70h] [rbp-98h] BYREF
  __int64 v51[2]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v52; // [rsp+88h] [rbp-80h] BYREF
  __int128 v53; // [rsp+98h] [rbp-70h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-60h]
  _QWORD *v55; // [rsp+B0h] [rbp-58h]
  _QWORD *v56; // [rsp+B8h] [rbp-50h]
  _QWORD v57[19]; // [rsp+C8h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+1D0h] [rbp+C8h]

  v9 = a3;
  LODWORD(v45) = a3;
  v54 = a6;
  v56 = a7;
  v55 = a8;
  v11 = *((_QWORD *)a1 + 16);
  v48 = v11;
  v12 = *a1;
  LODWORD(v43) = 0;
  v13 = sub_140037FB0(a2, *(_DWORD *)(v11 + 8), *(unsigned __int16 *)(v11 + 12), &v43);
  if ( v13 < 0 )
  {
    v15 = 565;
LABEL_85:
    sub_14000C2A8((int)retaddr, v15, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v13);
    return (unsigned int)v13;
  }
  if ( v9 + (unsigned int)v43 < (unsigned int)v43 )
  {
    v13 = -2147024362;
    v15 = 566;
    goto LABEL_85;
  }
  LODWORD(v43) = 0;
  v13 = sub_140037FB0(*((_QWORD *)a1 + 3), *(_DWORD *)(v11 + 8), v14, &v43);
  if ( v13 < 0 )
  {
    v15 = 570;
    goto LABEL_85;
  }
  v17 = (unsigned int)v43;
  if ( a1[2] != 1 && v16 > (unsigned int)v43 )
    v17 = v16;
  v49 = *((_QWORD *)a1 + 2);
  v51[0] = 0LL;
  if ( !*((_QWORD *)a1 + 10) && !*((_QWORD *)a1 + 11) )
    goto LABEL_19;
  ppv = 0LL;
  v18 = CoCreateInstance((const IID *const)a1 + 5, 0LL, 0x17u, &stru_1400C6FE8, &ppv);
  v13 = v18;
  if ( v18 >= 0 )
  {
    v18 = sub_1400B6010(ppv);
    v13 = v18;
    if ( v18 < 0 )
    {
      v19 = 584;
      goto LABEL_17;
    }
    v20 = ppv;
    sub_140019444(v51);
    v18 = sub_1400B6010(v20);
    v13 = v18;
    if ( v18 < 0 )
    {
      v19 = 585;
      goto LABEL_17;
    }
    sub_140003238((__int64 *)&ppv);
    v9 = v45;
LABEL_19:
    if ( v12 )
    {
      v13 = -2147418113;
      sub_14000C2A8(
        (int)retaddr,
        588,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        -2147418113);
      goto LABEL_83;
    }
    v44 = 0LL;
    if ( a4 )
      v21 = xmmword_1400C98A8;
    else
      v21 = xmmword_1400C9948;
    sub_140019444(&v44);
    v53 = *((_OWORD *)a1 + 3);
    v52 = v21;
    v23 = sub_1400A9110((unsigned int)&v52, (unsigned int)&v53, a1[78], v22, (__int64)&v44);
    v13 = v23;
    if ( v23 < 0 )
    {
      sub_14000C2A8((int)retaddr, 592, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v23);
LABEL_82:
      sub_140003238(&v44);
      goto LABEL_83;
    }
    v43 = 0LL;
    if ( a4 )
    {
      v46 = 0LL;
      v24 = sub_1400674EC(a4, &v46);
      v13 = v24;
      if ( v24 < 0 )
      {
        sub_14000C2A8((int)retaddr, 599, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v24);
LABEL_29:
        sub_140056130(&v46);
LABEL_81:
        sub_140003238((__int64 *)&v43);
        goto LABEL_82;
      }
      v45 = 0LL;
      v25 = sub_1400B6010(v46);
      v13 = v25;
      if ( v25 < 0 )
      {
        sub_14000C2A8((int)retaddr, 602, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v25);
LABEL_32:
        sub_140056130(&v45);
        goto LABEL_29;
      }
      v47 = 0LL;
      v26 = sub_1400B6010(v44);
      v13 = v26;
      if ( v26 < 0 )
      {
        v27 = 605;
LABEL_35:
        sub_14000C2A8((int)retaddr, v27, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v26);
LABEL_36:
        sub_140056130(&v47);
        goto LABEL_32;
      }
      v26 = sub_1400B6010(v47);
      v13 = v26;
      if ( v26 < 0 )
      {
        v27 = 606;
        goto LABEL_35;
      }
      v28 = v43;
      v43 = 0LL;
      if ( v28 )
        sub_1400B6010(v28);
      v26 = sub_1400B6010(v44);
      v13 = v26;
      if ( v26 < 0 )
      {
        v27 = 608;
        goto LABEL_35;
      }
      if ( *((_QWORD *)a1 + 8) || *((_QWORD *)a1 + 9) )
      {
        v26 = sub_1400B6010(v43);
        v13 = v26;
        if ( v26 < 0 )
        {
          v27 = 612;
          goto LABEL_35;
        }
      }
      v49 = 0LL;
      if ( (int)sub_1400B6010(v43) >= 0 )
      {
        v29 = sub_1400B6010(v49);
        v13 = v29;
        if ( v29 < 0 )
        {
          sub_14000C2A8((int)retaddr, 621, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v29);
          sub_140056130(&v49);
          goto LABEL_36;
        }
      }
      sub_140056130(&v49);
      sub_140056130(&v47);
      sub_140056130(&v45);
      sub_140056130(&v46);
LABEL_51:
      *(_QWORD *)&v52 = 0LL;
      *(_QWORD *)&v53 = 0LL;
      v30 = sub_1400B6010(v44);
      v13 = v30;
      if ( v30 < 0 )
      {
        v31 = v30;
        v32 = 646;
LABEL_79:
        sub_14000C2A8((int)retaddr, v32, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v31);
        sub_140003238((__int64 *)&v53);
        goto LABEL_80;
      }
      memset(v57, 0, sizeof(v57));
      LODWORD(v57[0]) = 152;
      *(_OWORD *)&v57[1] = *((_OWORD *)a1 + 12);
      *(_OWORD *)&v57[3] = *((_OWORD *)a1 + 13);
      *(_OWORD *)&v57[5] = *((_OWORD *)a1 + 14);
      v57[7] = *((_QWORD *)a1 + 30);
      LODWORD(v57[8]) = 0;
      v57[9] = *((_QWORD *)a1 + 4);
      v35 = v48;
      v36 = v17 * (unsigned __int64)*(unsigned __int16 *)(v48 + 12);
      if ( v36 > 0xFFFFFFFF )
      {
        LODWORD(v57[10]) = -1;
        v13 = -2147024362;
        v31 = -2147024362;
        v32 = 653;
        goto LABEL_79;
      }
      v57[10] = __PAIR64__(v9, v36);
      LODWORD(v57[11]) = a1[3];
      v57[12] = v51[0];
      v57[14] = 0LL;
      v57[15] = *((_QWORD *)a1 + 16);
      v57[16] = *((_QWORD *)a1 + 14);
      *(_OWORD *)&v57[17] = *(_OWORD *)(a1 + 43);
      v57[13] = v43;
      v37 = sub_1400B6010(v53);
      v13 = v37;
      if ( v37 < 0 )
      {
        v31 = v37;
        v32 = 663;
        goto LABEL_79;
      }
      *(_OWORD *)a5 = xmmword_1400C98D8;
      *(_DWORD *)(a5 + 936) = 0;
      *(_DWORD *)(a5 + 16) = v17 * *(unsigned __int16 *)(v35 + 12);
      sub_140003238((__int64 *)&v53);
      if ( a4 )
      {
        v48 = 0LL;
        v38 = sub_1400B6010(v44);
        v13 = v38;
        if ( v38 < 0 )
        {
          v39 = 682;
LABEL_68:
          sub_14000C2A8((int)retaddr, v39, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v38);
          sub_140056130(&v48);
LABEL_80:
          sub_140003238((__int64 *)&v52);
          goto LABEL_81;
        }
        v38 = sub_1400B6010(v48);
        v13 = v38;
        if ( v38 < 0 )
        {
          v39 = 683;
          goto LABEL_68;
        }
        sub_140056130(&v48);
      }
      v40 = (_QWORD *)sub_140049338(24LL, (__int64)&unk_1400C75FC);
      v54 = (__int64)v40;
      if ( v40 )
        v41 = sub_1400126A4(v40, v44, 0LL);
      else
        v41 = 0LL;
      if ( v41 )
      {
        v54 = 0LL;
        *v55 = v41;
        sub_14003826C(v51, v56);
        sub_140003238((__int64 *)&v52);
        sub_140003238((__int64 *)&v43);
        sub_140003238(&v44);
        v13 = 0;
        goto LABEL_83;
      }
      v13 = -2147024882;
      sub_14000C2A8(
        (int)retaddr,
        690,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        -2147024882);
      goto LABEL_80;
    }
    if ( *((_QWORD *)a1 + 8) || *((_QWORD *)a1 + 9) )
    {
      v43 = 0LL;
      v33 = CoCreateInstance((const IID *const)a1 + 4, 0LL, 0x17u, &stru_1400C6FD8, &v43);
      v13 = v33;
      if ( v33 >= 0 )
      {
        v33 = sub_1400B6010(v43);
        v13 = v33;
        if ( v33 >= 0 )
          goto LABEL_51;
        v34 = 630;
      }
      else
      {
        v34 = 629;
      }
    }
    else
    {
      v43 = 0LL;
      v33 = sub_140067618((__int64 *)&v43, &v49);
      v13 = v33;
      if ( v33 >= 0 )
        goto LABEL_51;
      v34 = 635;
    }
    sub_14000C2A8((int)retaddr, v34, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v33);
    goto LABEL_81;
  }
  v19 = 583;
LABEL_17:
  sub_14000C2A8((int)retaddr, v19, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v18);
  sub_140003238((__int64 *)&ppv);
LABEL_83:
  sub_140003238(v51);
  return (unsigned int)v13;
}
