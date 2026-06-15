/*
 * XREFs of sub_140068AA8 @ 0x140068AA8
 * Callers:
 *     sub_14006B3B0 @ 0x14006B3B0 (sub_14006B3B0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400126A4 @ 0x1400126A4 (sub_1400126A4.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_140037FB0 @ 0x140037FB0 (sub_140037FB0.c)
 *     sub_14004510C @ 0x14004510C (sub_14004510C.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_1400674EC @ 0x1400674EC (sub_1400674EC.c)
 *     sub_140067618 @ 0x140067618 (sub_140067618.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall sub_140068AA8(int *a1, int a2, int a3, __int64 a4, _OWORD *a5, __int64 a6, __int64 a7, _QWORD *a8)
{
  __int64 v11; // r14
  int v12; // esi
  BOOL v13; // r15d
  int v14; // ebx
  unsigned int v15; // r11d
  int v16; // edx
  unsigned int v17; // r10d
  __int64 v18; // r11
  __int64 v19; // rax
  int v20; // r14d
  HRESULT v21; // eax
  int v22; // edx
  __int128 v23; // xmm6
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // edx
  int v30; // eax
  int v31; // eax
  int v32; // r9d
  int v33; // edx
  HRESULT v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // edx
  __int64 *p_pvData; // rcx
  _OWORD *v39; // rax
  __int64 *v40; // rcx
  int v41; // eax
  int v42; // edx
  _OWORD *v43; // rax
  int v44; // eax
  int v45; // edx
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  LPVOID v49; // [rsp+88h] [rbp-59h] BYREF
  __int64 v50; // [rsp+90h] [rbp-51h] BYREF
  __int64 v51; // [rsp+98h] [rbp-49h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-41h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-39h] BYREF
  DWORD pcbData[2]; // [rsp+B0h] [rbp-31h] BYREF
  LPVOID ppv; // [rsp+B8h] [rbp-29h] BYREF
  _QWORD *v56; // [rsp+C0h] [rbp-21h]
  __int128 v57; // [rsp+C8h] [rbp-19h] BYREF
  __int128 v58[2]; // [rsp+D8h] [rbp-9h] BYREF
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+3Fh]
  __int64 pvData; // [rsp+128h] [rbp+47h] BYREF

  v11 = *((_QWORD *)a1 + 16);
  v56 = (_QWORD *)v11;
  v12 = *a1;
  v13 = *a1 != 0;
  LODWORD(pvData) = 0;
  v14 = sub_140037FB0(a2, *(_DWORD *)(v11 + 8), *(unsigned __int16 *)(v11 + 12), &pvData);
  if ( v14 < 0 )
  {
    v16 = 305;
LABEL_98:
    sub_14000C2A8((int)retaddr, v16, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v14);
    return (unsigned int)v14;
  }
  if ( (int)pvData + a3 < (unsigned int)pvData )
  {
    v16 = 306;
    goto LABEL_97;
  }
  LODWORD(pvData) = 0;
  v14 = sub_140037FB0(*((_QWORD *)a1 + 3), *(_DWORD *)(v11 + 8), v15, &pvData);
  if ( v14 < 0 )
  {
    v16 = 310;
    goto LABEL_98;
  }
  if ( a1[2] == 1 )
  {
    v19 = (unsigned int)pvData;
  }
  else
  {
    v19 = (unsigned int)pvData;
    if ( v17 > (unsigned int)pvData )
      v19 = v17;
  }
  v20 = v19 * v18;
  if ( (unsigned __int64)(v19 * v18) > 0xFFFFFFFF )
  {
    v16 = 319;
LABEL_97:
    v14 = -2147024362;
    goto LABEL_98;
  }
  pvData = *((_QWORD *)a1 + 2);
  ppv = 0LL;
  if ( (a1[34] & 0x40000) == 0 || !*((_QWORD *)a1 + 10) && !*((_QWORD *)a1 + 11) )
    goto LABEL_19;
  ppv = 0LL;
  v21 = CoCreateInstance((const IID *const)a1 + 5, 0LL, 0x17u, &stru_1400C6FE8, &ppv);
  v14 = v21;
  if ( v21 >= 0 )
  {
    v21 = sub_1400B6010(ppv);
    v14 = v21;
    if ( v21 < 0 )
    {
      v22 = 329;
      goto LABEL_18;
    }
LABEL_19:
    v50 = 0LL;
    if ( a4 )
    {
      if ( v12 )
        v23 = xmmword_1400C9898;
      else
        v23 = xmmword_1400C98F8;
    }
    else if ( v12 )
    {
      v23 = xmmword_1400C98E8;
    }
    else
    {
      v23 = xmmword_1400C9938;
    }
    sub_140019444(&v50);
    v58[0] = *((_OWORD *)a1 + 3);
    v57 = v23;
    v24 = sub_14004510C((void **)&v57, v58, a1[78]);
    v14 = v24;
    if ( v24 < 0 )
    {
      sub_14000C2A8((int)retaddr, 345, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v24);
LABEL_93:
      sub_140003238(&v50);
      goto LABEL_94;
    }
    v49 = 0LL;
    if ( a4 )
    {
      v52 = 0LL;
      v25 = sub_1400674EC(a4, &v52);
      v14 = v25;
      if ( v25 < 0 )
      {
        sub_14000C2A8((int)retaddr, 353, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v25);
LABEL_31:
        sub_140056130(&v52);
LABEL_92:
        sub_140003238((__int64 *)&v49);
        goto LABEL_93;
      }
      v51 = 0LL;
      if ( v12 )
      {
        v51 = 0LL;
        v26 = sub_1400B6010(v52);
        v14 = v26;
        if ( v26 < 0 )
        {
          v27 = 362;
          goto LABEL_35;
        }
      }
      else
      {
        v51 = 0LL;
        v26 = sub_1400B6010(v52);
        v14 = v26;
        if ( v26 < 0 )
        {
          v27 = 358;
LABEL_35:
          sub_14000C2A8((int)retaddr, v27, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v26);
LABEL_36:
          sub_140056130(&v51);
          goto LABEL_31;
        }
      }
      v53 = 0LL;
      v28 = sub_1400B6010(v50);
      v14 = v28;
      if ( v28 < 0 )
      {
        v29 = 366;
LABEL_41:
        sub_14000C2A8((int)retaddr, v29, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v28);
LABEL_42:
        sub_140056130(&v53);
        goto LABEL_36;
      }
      v28 = sub_1400B6010(v53);
      v14 = v28;
      if ( v28 < 0 )
      {
        v29 = 367;
        goto LABEL_41;
      }
      v49 = 0LL;
      v28 = sub_1400B6010(v50);
      v14 = v28;
      if ( v28 < 0 )
      {
        v29 = 369;
        goto LABEL_41;
      }
      if ( *((_QWORD *)a1 + 8) || *((_QWORD *)a1 + 9) )
      {
        v28 = sub_1400B6010(v49);
        v14 = v28;
        if ( v28 < 0 )
        {
          v29 = 373;
          goto LABEL_41;
        }
      }
      *(_QWORD *)&v58[0] = 0LL;
      if ( (int)sub_1400B6010(v49) >= 0 )
      {
        v30 = sub_1400B6010(*(_QWORD *)&v58[0]);
        v14 = v30;
        if ( v30 < 0 )
        {
          sub_14000C2A8((int)retaddr, 382, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v30);
          sub_140056130((__int64 *)v58);
          goto LABEL_42;
        }
      }
      sub_140056130((__int64 *)v58);
      sub_140056130(&v53);
      sub_140056130(&v51);
      sub_140056130(&v52);
    }
    else if ( *((_QWORD *)a1 + 8) || *((_QWORD *)a1 + 9) )
    {
      v49 = 0LL;
      v34 = CoCreateInstance((const IID *const)a1 + 4, 0LL, 0x17u, &stru_1400C6FD8, &v49);
      v14 = v34;
      if ( v34 < 0 )
      {
        v32 = v34;
        v33 = 391;
        goto LABEL_91;
      }
      v35 = sub_1400B6010(v49);
      v14 = v35;
      if ( v35 < 0 )
      {
        v32 = v35;
        v33 = 392;
        goto LABEL_91;
      }
    }
    else
    {
      v49 = 0LL;
      v31 = sub_140067618((__int64 *)&v49, &pvData);
      v14 = v31;
      if ( v31 < 0 )
      {
        v32 = v31;
        v33 = 397;
        goto LABEL_91;
      }
    }
    if ( v13 )
    {
      pvData = 0LL;
      v36 = sub_1400B6010(v50);
      v14 = v36;
      if ( v36 < 0 )
      {
        v37 = 452;
LABEL_67:
        sub_14000C2A8((int)retaddr, v37, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v36);
        p_pvData = &pvData;
LABEL_68:
        sub_140003238(p_pvData);
        goto LABEL_92;
      }
      v36 = sub_1400B6010(pvData);
      v14 = v36;
      if ( v36 < 0 )
      {
        v37 = 474;
        goto LABEL_67;
      }
      v39 = a5;
      *a5 = xmmword_1400C9958;
      *((_DWORD *)v39 + 234) = 0;
      *((_DWORD *)v39 + 4) = v20;
      v40 = &pvData;
      goto LABEL_80;
    }
    *(_QWORD *)&v57 = 0LL;
    v41 = sub_1400B6010(v50);
    v14 = v41;
    if ( v41 >= 0 )
    {
      if ( a1[74] == 2 )
      {
        LODWORD(pvData) = 0;
        pcbData[0] = 4;
        RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"SuppressBridgeTargetGlitchLogging",
          0x18u,
          0LL,
          &pvData,
          pcbData);
      }
      v41 = sub_1400B6010(v57);
      v14 = v41;
      if ( v41 >= 0 )
      {
        v43 = a5;
        *a5 = xmmword_1400C9928;
        *((_DWORD *)v43 + 234) = 0;
        *((_DWORD *)v43 + 4) = v20;
        v40 = (__int64 *)&v57;
LABEL_80:
        sub_140003238(v40);
        if ( a4 )
        {
          *(_QWORD *)pcbData = 0LL;
          v44 = sub_1400B6010(v50);
          v14 = v44;
          if ( v44 < 0 )
          {
            v45 = 492;
LABEL_83:
            sub_14000C2A8((int)retaddr, v45, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v44);
            sub_140056130((__int64 *)pcbData);
            goto LABEL_92;
          }
          v44 = sub_1400B6010(*(_QWORD *)pcbData);
          v14 = v44;
          if ( v44 < 0 )
          {
            v45 = 493;
            goto LABEL_83;
          }
          sub_140056130((__int64 *)pcbData);
        }
        v46 = (_QWORD *)sub_140049338(24LL, (__int64)&unk_1400C75FC);
        v56 = v46;
        if ( v46 )
        {
          v47 = sub_1400126A4(v46, v50, 0LL);
          if ( v47 )
          {
            *a8 = v47;
            sub_140003238((__int64 *)&v49);
            sub_140003238(&v50);
            v14 = 0;
            goto LABEL_94;
          }
        }
        v14 = -2147024882;
        v33 = 500;
        v32 = -2147024882;
LABEL_91:
        sub_14000C2A8((int)retaddr, v33, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v32);
        goto LABEL_92;
      }
      v42 = 439;
    }
    else
    {
      v42 = 407;
    }
    sub_14000C2A8((int)retaddr, v42, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v41);
    p_pvData = (__int64 *)&v57;
    goto LABEL_68;
  }
  v22 = 328;
LABEL_18:
  sub_14000C2A8((int)retaddr, v22, (int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp", v21);
LABEL_94:
  sub_140003238((__int64 *)&ppv);
  return (unsigned int)v14;
}
