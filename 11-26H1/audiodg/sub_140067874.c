/*
 * XREFs of sub_140067874 @ 0x140067874
 * Callers:
 *     sub_14006AEEC @ 0x14006AEEC (sub_14006AEEC.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400126A4 @ 0x1400126A4 (sub_1400126A4.c)
 *     sub_140014E60 @ 0x140014E60 (sub_140014E60.c)
 *     sub_14001588C @ 0x14001588C (sub_14001588C.c)
 *     sub_140016858 @ 0x140016858 (sub_140016858.c)
 *     sub_140016F18 @ 0x140016F18 (sub_140016F18.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_14001B01C @ 0x14001B01C (sub_14001B01C.c)
 *     sub_14003F5F8 @ 0x14003F5F8 (sub_14003F5F8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     sub_14005B568 @ 0x14005B568 (sub_14005B568.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=23
__int64 __fastcall sub_140067874(__int64 a1, wchar_t *a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  const wchar_t **v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  const wchar_t *v12; // rdx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  int v16; // r9d
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // eax
  int v21; // eax
  HRESULT v22; // eax
  HRESULT v23; // esi
  int v24; // ecx
  int v25; // r8d
  int v26; // eax
  int v27; // eax
  int v28; // r9d
  int v29; // edx
  int *v30; // rsi
  int v31; // eax
  __int64 v32; // rcx
  void *v33; // rax
  wchar_t *v34; // rbx
  int v35; // edx
  int v36; // eax
  void *v37; // rax
  int v38; // r9d
  int v39; // eax
  int v40; // edx
  __int64 v41; // rcx
  int v42; // eax
  int v43; // edx
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  wchar_t *v51; // rax
  _QWORD *v52; // rsi
  __int64 v53; // rbx
  int v54; // eax
  int v55; // edx
  int v56; // ecx
  int v57; // r8d
  __int64 v59; // [rsp+90h] [rbp-80h] BYREF
  __int64 v60; // [rsp+98h] [rbp-78h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-70h] BYREF
  wchar_t *v62; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v63; // [rsp+B0h] [rbp-60h] BYREF
  LPVOID ppv; // [rsp+B8h] [rbp-58h] BYREF
  wchar_t *v65; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v66; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v67; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v68; // [rsp+D8h] [rbp-38h] BYREF
  int v69; // [rsp+E0h] [rbp-30h]
  __int64 v70; // [rsp+E8h] [rbp-28h] BYREF
  char v71; // [rsp+F1h] [rbp-1Fh]
  __int128 v72; // [rsp+F8h] [rbp-18h]
  wchar_t *v73; // [rsp+108h] [rbp-8h]
  LARGE_INTEGER PerformanceCount; // [rsp+110h] [rbp+0h] BYREF
  _QWORD v75[2]; // [rsp+200h] [rbp+F0h] BYREF
  _UNKNOWN *retaddr; // [rsp+258h] [rbp+148h]

  v6 = sub_140006470(a1);
  sub_140006980(&PerformanceCount, (LARGE_INTEGER)v6, "EndpointInstance_CreateDeviceEndpointInstance", 0LL);
  v9 = (const wchar_t **)(a1 + 56);
  if ( (byte_1400E8400 & 0x20) != 0 )
    sub_14001588C(v8, v7, *v9, *(_DWORD *)(a1 + 100));
  v71 = 1;
  v59 = 0LL;
  v61 = 0LL;
  if ( a2 )
  {
    v10 = *(_QWORD *)(a1 + 32);
    v11 = *(_QWORD *)(a1 + 8);
    v12 = *v9;
    v59 = 0LL;
    v68 = v10;
    v67 = v11;
    v62 = (wchar_t *)v12;
    v65 = a2;
    v13 = sub_14005B568(&v59, &v65, &v62, &v67, &v68);
    v14 = v13;
    if ( v13 < 0 )
    {
      sub_14000C2A8((int)retaddr, 85, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audioendpoint_dsp.cpp", v13);
      sub_14000C2A8((int)retaddr, 78, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v14);
      goto LABEL_12;
    }
    sub_140019444(&v61);
    sub_1400B6010(v59);
    goto LABEL_73;
  }
  v60 = 0LL;
  if ( *(_DWORD *)(a1 + 100) != 1 )
  {
    ppv = 0LL;
    v22 = CoCreateInstance(&rclsid, 0LL, 0x17u, &riid, &ppv);
    v23 = v22;
    if ( v22 < 0 )
    {
      sub_14000C2A8((int)retaddr, 103, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v22);
      sub_140003238((__int64 *)&ppv);
      sub_140003238(&v60);
      sub_140003238(&v61);
      sub_140003238(&v59);
      if ( (byte_1400E8400 & 0x20) != 0 )
        sub_140014E60(v24, (unsigned int)&unk_1400C7260, v25, 1, (__int64)v75);
      v14 = v23;
      goto LABEL_88;
    }
    v63 = 0LL;
    v26 = sub_1400B6010(ppv);
    v14 = v26;
    if ( v26 < 0 )
    {
      sub_14000C2A8((int)retaddr, 107, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v26);
LABEL_24:
      sub_140003238(&v63);
      sub_140003238((__int64 *)&ppv);
      goto LABEL_11;
    }
    v66 = 0LL;
    v27 = sub_1400B6010(v63);
    v14 = v27;
    if ( v27 < 0 )
    {
      v28 = v27;
      v29 = 110;
LABEL_27:
      sub_14000C2A8((int)retaddr, v29, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v28);
LABEL_28:
      sub_140003238(&v66);
      goto LABEL_24;
    }
    if ( !v66 )
    {
      v14 = -2147024809;
      v28 = -2147024809;
      v29 = 111;
      goto LABEL_27;
    }
    v30 = *(int **)(a1 + 8);
    v72 = 0LL;
    v73 = 0LL;
    LOWORD(v72) = 65;
    v62 = 0LL;
    v65 = 0LL;
    v31 = sub_1400B6010(v66);
    v32 = *((unsigned __int16 *)v30 + 8);
    if ( v31 )
    {
      v37 = CoTaskMemAlloc(v32 + 32);
      sub_140008C08((void **)&v62, v37);
      v34 = v62;
      if ( !v62 )
      {
        v35 = 141;
        goto LABEL_37;
      }
      *(_DWORD *)v62 = *((unsigned __int16 *)v30 + 8) + 32;
      *((_DWORD *)v34 + 1) = MMDevAPI_9(*(_QWORD *)(a1 + 56));
      *((_DWORD *)v34 + 2) = *(_DWORD *)(a1 + 100);
      memcpy(v34 + 6, v30, *((unsigned __int16 *)v30 + 8) + 18LL);
      v36 = *((unsigned __int16 *)v30 + 8) + 32;
    }
    else
    {
      v33 = CoTaskMemAlloc(v32 + 64);
      sub_140008C08((void **)&v65, v33);
      v34 = v65;
      if ( !v65 )
      {
        v35 = 126;
LABEL_37:
        v14 = -2147024882;
        v38 = -2147024882;
LABEL_38:
        sub_14000C2A8((int)retaddr, v35, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v38);
LABEL_39:
        sub_140008C08((void **)&v65, 0LL);
        sub_140008C08((void **)&v62, 0LL);
        goto LABEL_28;
      }
      *(_DWORD *)v65 = *((unsigned __int16 *)v30 + 8) + 64;
      *((_DWORD *)v34 + 1) = MMDevAPI_9(*(_QWORD *)(a1 + 56));
      *((_DWORD *)v34 + 2) = *(_DWORD *)(a1 + 100);
      *(_OWORD *)(v34 + 6) = *(_OWORD *)(a1 + 104);
      *(_OWORD *)(v34 + 14) = *(_OWORD *)(a1 + 148);
      memcpy(v34 + 22, v30, *((unsigned __int16 *)v30 + 8) + 18LL);
      v36 = *((unsigned __int16 *)v30 + 8) + 64;
    }
    v73 = v34;
    DWORD2(v72) = v36;
    if ( !*(_DWORD *)(a1 + 72) )
    {
      v67 = 0LL;
      v39 = sub_1400B6010(v63);
      v14 = v39;
      if ( v39 < 0 )
      {
        v40 = 162;
LABEL_44:
        sub_14000C2A8((int)retaddr, v40, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v39);
        sub_140003238(&v67);
        goto LABEL_39;
      }
      v41 = v60;
      v60 = 0LL;
      if ( v41 )
        sub_1400B6010(v41);
      v39 = sub_1400B6010(v67);
      v14 = v39;
      if ( v39 < 0 )
      {
        v40 = 164;
        goto LABEL_44;
      }
      sub_140003238(&v67);
LABEL_58:
      sub_14003F5F8(
        *(_DWORD *)(a1 + 80) != 0,
        0LL,
        *((unsigned __int16 *)v30 + 7),
        *(unsigned __int16 *)v30,
        *(_DWORD *)(a1 + 136),
        *(_DWORD *)(a1 + 100),
        *(_DWORD *)(a1 + 72),
        *(_DWORD *)(a1 + 140),
        *(unsigned __int16 *)v30,
        v30[1],
        *((unsigned __int16 *)v30 + 7),
        *((unsigned __int16 *)v30 + 1),
        *(_DWORD *)(a1 + 32),
        *(_DWORD *)(a1 + 76),
        *(_DWORD *)(a1 + 80) != 0,
        *(_DWORD *)(a1 + 96),
        0);
      sub_140019444(&v61);
      v45 = sub_1400B6010(v60);
      v14 = v45;
      if ( v45 >= 0 )
      {
        v46 = v59;
        v59 = 0LL;
        if ( v46 )
          sub_1400B6010(v46);
        v47 = sub_1400B6010(v61);
        v14 = v47;
        if ( v47 >= 0 )
        {
          sub_140008C08((void **)&v65, 0LL);
          sub_140008C08((void **)&v62, 0LL);
          sub_140003238(&v66);
          sub_140003238(&v63);
          sub_140003238((__int64 *)&ppv);
          goto LABEL_65;
        }
        v38 = v47;
        v35 = 200;
      }
      else
      {
        v38 = v45;
        v35 = 197;
      }
      goto LABEL_38;
    }
    v68 = 0LL;
    v42 = sub_1400B6010(v63);
    v14 = v42;
    if ( v42 >= 0 )
    {
      v44 = v60;
      v60 = 0LL;
      if ( v44 )
        sub_1400B6010(v44);
      v42 = sub_1400B6010(v68);
      v14 = v42;
      if ( v42 >= 0 )
      {
        sub_140003238(&v68);
        goto LABEL_58;
      }
      v43 = 177;
    }
    else
    {
      v43 = 175;
    }
    sub_14000C2A8((int)retaddr, v43, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v42);
    sub_140003238(&v68);
    goto LABEL_39;
  }
  v15 = *(_QWORD *)(a1 + 64);
  if ( !v15 )
  {
    v14 = -2147024809;
    v16 = -2147024809;
    v17 = 88;
LABEL_10:
    sub_14000C2A8((int)retaddr, v17, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v16);
LABEL_11:
    sub_140003238(&v60);
    goto LABEL_12;
  }
  v59 = *(_QWORD *)(a1 + 64);
  sub_1400B6010(v15);
  v60 = 0LL;
  v20 = sub_1400B6010(v59);
  v14 = v20;
  if ( v20 < 0 )
  {
    v16 = v20;
    v17 = 94;
    goto LABEL_10;
  }
  sub_140019444(&v61);
  v21 = sub_1400B6010(v59);
  v14 = v21;
  if ( v21 < 0 )
  {
    v16 = v21;
    v17 = 97;
    goto LABEL_10;
  }
LABEL_65:
  v69 = 0;
  v48 = sub_1400B6010(v60);
  v14 = v48;
  if ( v48 < 0 )
  {
    v16 = v48;
    v17 = 205;
    goto LABEL_10;
  }
  if ( v69 )
  {
    v49 = sub_1400B6010(v59);
    v14 = v49;
    if ( v49 < 0 )
    {
      v16 = v49;
      v17 = 211;
      goto LABEL_10;
    }
  }
  v50 = sub_1400B6010(v60);
  v14 = v50;
  if ( v50 < 0 )
  {
    v16 = v50;
    v17 = 218;
    goto LABEL_10;
  }
  sub_140003238(&v60);
LABEL_73:
  v51 = (wchar_t *)sub_140049338(24LL, (__int64)&unk_1400C75FC);
  v62 = v51;
  if ( v51 )
    v52 = sub_1400126A4(v51, v61, *(_QWORD *)(a1 + 32));
  else
    v52 = 0LL;
  v75[0] = v52;
  if ( !v52 )
  {
    v14 = -2147024882;
    sub_14000C2A8((int)retaddr, 225, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", -2147024882);
    goto LABEL_12;
  }
  v70 = 0LL;
  if ( (int)sub_1400B6010(v59) >= 0 )
  {
    v62 = 0LL;
    v53 = v70;
    sub_140016858((void **)&v62, 0LL);
    v54 = sub_1400B6010(v53);
    v14 = v54;
    if ( v54 < 0 )
    {
      v55 = 235;
LABEL_81:
      sub_14000C2A8((int)retaddr, v55, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v54);
      sub_140016F18((void **)&v62);
      sub_140003238(&v70);
      sub_1400031E4((__int64)v52);
LABEL_12:
      sub_140003238(&v61);
      sub_140003238(&v59);
      if ( (byte_1400E8400 & 0x20) != 0 )
        sub_140014E60(v18, (unsigned int)&unk_1400C7260, v19, 1, (__int64)v75);
      goto LABEL_88;
    }
    v65 = v62;
    v54 = sub_14001B01C(v52 + 2, &v65);
    v14 = v54;
    if ( v54 < 0 )
    {
      v55 = 238;
      goto LABEL_81;
    }
    sub_140016F18((void **)&v62);
  }
  *a3 = v52;
  sub_140003238(&v70);
  sub_140003238(&v61);
  sub_140003238(&v59);
  if ( (byte_1400E8400 & 0x20) != 0 )
    sub_140014E60(v56, (unsigned int)&unk_1400C7260, v57, 1, (__int64)v75);
  v14 = 0;
LABEL_88:
  sub_1400066EC(&PerformanceCount);
  return v14;
}
