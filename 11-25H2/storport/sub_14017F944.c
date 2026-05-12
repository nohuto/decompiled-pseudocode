/*
 * XREFs of sub_14017F944 @ 0x14017F944
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_14003E598 @ 0x14003E598 (sub_14003E598.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14005A4F0 @ 0x14005A4F0 (sub_14005A4F0.c)
 *     sub_14009E340 @ 0x14009E340 (sub_14009E340.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_1401AFF24 @ 0x1401AFF24 (sub_1401AFF24.c)
 *     sub_1401B0FDC @ 0x1401B0FDC (sub_1401B0FDC.c)
 */

__int64 __fastcall sub_14017F944(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // ebx
  int v6; // r15d
  __int64 v7; // rsi
  int v8; // eax
  _DWORD *v9; // rcx
  _QWORD *v10; // rdx
  _QWORD *v11; // r9
  _QWORD *v12; // rax
  _QWORD *v13; // r10
  _DWORD *v14; // rcx
  _QWORD *v15; // r9
  _QWORD *v16; // rax
  _QWORD *v17; // r9
  _QWORD *v18; // rax
  PVOID v19; // r14
  bool v20; // zf
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  int *v23; // rax
  const EVENT_DESCRIPTOR *v24; // rdx
  unsigned __int64 v25; // rdx
  char v26; // r13
  _BYTE *v27; // r9
  unsigned __int8 v28; // r10
  char v29; // si
  char v30; // r14
  char v31; // r11
  char *v32; // r11
  unsigned int v33; // r12d
  unsigned __int64 v34; // r14
  __int64 v35; // r8
  int v36; // ecx
  char v37; // cl
  char v38; // r8
  _BYTE *v39; // rax
  unsigned int v40; // eax
  char v41; // al
  __int64 v43; // [rsp+20h] [rbp-49h]
  __int64 v44; // [rsp+28h] [rbp-41h]
  char v45; // [rsp+60h] [rbp-9h] BYREF
  char v46; // [rsp+61h] [rbp-8h] BYREF
  char v47; // [rsp+62h] [rbp-7h]
  _DWORD *v48; // [rsp+68h] [rbp-1h] BYREF
  PVOID v49; // [rsp+70h] [rbp+7h] BYREF
  GUID v50; // [rsp+78h] [rbp+Fh] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v45 = 0;
  v49 = 0LL;
  *(_QWORD *)&v50.Data1 = 0LL;
  v46 = 0;
  v48 = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( !*(_BYTE *)(a2 + 64) )
  {
    if ( *(_DWORD *)(v2 + 16) < 0x48u )
    {
      v6 = -1073741789;
      goto LABEL_30;
    }
    v7 = *(_QWORD *)(v2 + 32);
    if ( *(_DWORD *)v7 != 72 )
    {
      v6 = -1073741811;
      goto LABEL_30;
    }
    v6 = sub_1401B0FDC(a1, a2, &v50);
    if ( v6 >= 0 )
    {
      v6 = sub_1401AFF24(*(_QWORD *)(a1 + 24), v7, (unsigned int)&v49, (unsigned int)&v45, (__int64)&v48, (__int64)&v46);
      if ( v6 < 0 )
      {
        v19 = v49;
        v14 = v48;
      }
      else
      {
        v8 = sub_1400567A0();
        v9 = v48;
        v10 = *(_QWORD **)&v50.Data1;
        if ( v8 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v50.Data1 + 48LL) + 96LL) )
          v48[16] |= 4u;
        if ( !v46 )
        {
          v11 = *(_QWORD **)(v7 + 64);
          v12 = v9 + 2;
          if ( *v11 != v7 + 56 )
            goto LABEL_19;
          *v12 = v7 + 56;
          *((_QWORD *)v9 + 2) = v11;
          *v11 = v12;
          *(_QWORD *)(v7 + 64) = v12;
        }
        v13 = v49;
        v10[8] = v9;
        v14 = 0LL;
        v48 = 0LL;
        if ( !v45 )
        {
          v15 = *(_QWORD **)(v7 + 48);
          v16 = v13 + 1;
          if ( *v15 != v7 + 40 )
            goto LABEL_19;
          *v16 = v7 + 40;
          v13[2] = v15;
          *v15 = v16;
          *(_QWORD *)(v7 + 48) = v16;
        }
        v10[7] = v13;
        v17 = *(_QWORD **)(v7 + 32);
        v18 = v10 + 1;
        v19 = 0LL;
        v49 = 0LL;
        if ( *v17 != v7 + 24 )
LABEL_19:
          __fastfail(3u);
        *v18 = v7 + 24;
        v10[2] = v17;
        *v17 = v18;
        *(_QWORD *)(v7 + 32) = v18;
        *(_QWORD *)(v7 + 16) = v10;
        *(_QWORD *)&v50.Data1 = 0LL;
      }
      if ( !v46 && v14 )
        sub_14005A4F0((PVOID *)&v48);
      if ( !v45 && v19 )
        sub_14003E598(&v49);
    }
    if ( *(_QWORD *)&v50.Data1 )
      sub_14009E340((PVOID *)&v50);
    goto LABEL_30;
  }
  v6 = -1073741790;
LABEL_30:
  v20 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v20 )
    goto LABEL_96;
  v50 = 0LL;
  IoGetActivityIdIrp(a2, &v50);
  v22 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v22 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_96;
    v24 = &stru_140148B18;
    goto LABEL_95;
  }
  if ( *(_BYTE *)v22 != 15 )
  {
    if ( *(_BYTE *)v22 != 27 )
      goto LABEL_96;
    if ( *(_BYTE *)(v22 + 1) == 7 && !*(_DWORD *)(v22 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v23 = *(int **)(a2 + 56);
        if ( v23 )
          v3 = *v23;
        LODWORD(v44) = *(_DWORD *)(a2 + 48);
        LODWORD(v43) = v3;
        sub_140056AB0(v21, v22, &v50, a2, v43, v44);
      }
      goto LABEL_96;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_96;
    v24 = &stru_140149FE8;
LABEL_95:
    LODWORD(v43) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v21, v24, &v50, a2, v43);
    goto LABEL_96;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_96;
  v25 = *(_QWORD *)(v22 + 8);
  v26 = 0;
  v27 = 0LL;
  v45 = 0;
  v28 = 0;
  v46 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  if ( *(_BYTE *)(v25 + 2) != 40 )
  {
    v37 = *(_BYTE *)(v25 + 72);
    v27 = *(_BYTE **)(v25 + 32);
    v28 = *(_BYTE *)(v25 + 11);
    v26 = *(_BYTE *)(v25 + 4);
    if ( !*(_BYTE *)(v25 + 2) )
      goto LABEL_71;
    goto LABEL_96;
  }
  v32 = 0LL;
  v47 = 0;
  if ( *(_DWORD *)(v25 + 20) )
    goto LABEL_96;
  v33 = 0;
  LODWORD(v48) = *(_DWORD *)(v25 + 56);
  if ( !(_DWORD)v48 )
    goto LABEL_68;
  while ( 1 )
  {
    v21 = *(unsigned int *)(v25 + 4LL * v33 + 120);
    if ( (unsigned int)v21 >= 0x80 )
    {
      v34 = *(unsigned int *)(v25 + 16);
      if ( (unsigned int)v21 < (unsigned int)v34 )
        break;
    }
LABEL_61:
    if ( ++v33 >= (unsigned int)v48 )
      goto LABEL_67;
  }
  v35 = (unsigned int)v21;
  v36 = *(_DWORD *)(v21 + v25) - 64;
  if ( v36 )
  {
    v21 = (unsigned int)(v36 - 1);
    if ( (_DWORD)v21 )
    {
      if ( (_DWORD)v21 == 1 )
      {
        v21 = v35 + 40;
        if ( v35 + 40 <= v34 )
        {
          if ( *(_DWORD *)(v35 + v25 + 12) )
            v32 = (char *)(v35 + v25 + 32);
          v27 = *(_BYTE **)(v35 + v25 + 24);
          goto LABEL_66;
        }
      }
    }
    else
    {
      v21 = v35 + 56;
      if ( v35 + 56 <= v34 )
      {
        v47 = 1;
        if ( *(_BYTE *)(v35 + v25 + 10) )
          v32 = (char *)(v35 + v25 + 24);
        v26 = *(_BYTE *)(v35 + v25 + 8);
        v27 = *(_BYTE **)(v35 + v25 + 16);
        v28 = *(_BYTE *)(v35 + v25 + 9);
      }
    }
    goto LABEL_60;
  }
  v21 = v35 + 40;
  if ( v35 + 40 > v34 )
  {
LABEL_60:
    if ( v47 )
      goto LABEL_67;
    goto LABEL_61;
  }
  if ( *(_BYTE *)(v35 + v25 + 10) )
    v32 = (char *)(v35 + v25 + 24);
  v27 = *(_BYTE **)(v35 + v25 + 16);
LABEL_66:
  v28 = *(_BYTE *)(v35 + v25 + 9);
  v26 = *(_BYTE *)(v35 + v25 + 8);
LABEL_67:
  v30 = 0;
LABEL_68:
  if ( v32 )
  {
    v37 = *v32;
    v31 = 0;
LABEL_71:
    LOBYTE(v21) = v37 - 8;
    if ( (v21 & 0x5D) == 0 )
    {
      v38 = *(_BYTE *)(v25 + 3);
      if ( v38 == 1 || !v27 || !v28 )
        goto LABEL_91;
      LOBYTE(v25) = 0;
      v21 = (unsigned __int64)&v27[v28];
      v39 = v27 + 8;
      if ( (unsigned __int8)((*v27 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v39 <= v21 )
        {
          LOBYTE(v25) = 1;
          v30 = v27[2];
          v29 = v27[1] & 0xF;
          v31 = v27[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v39 <= v21 )
        {
          v29 = v27[2] & 0xF;
          v40 = v28;
          if ( (unsigned int)(unsigned __int8)v27[7] + 8 <= v28 )
            v40 = (unsigned __int8)v27[7] + 8;
          v21 = (unsigned __int64)(v27 + 13);
          v25 = (unsigned __int64)&v27[v40];
          if ( (unsigned __int64)(v27 + 13) > v25 )
            v45 = 0;
          else
            v45 = v27[12];
          if ( (unsigned __int64)(v27 + 14) > v25 )
            v46 = 0;
          else
            v46 = *(_BYTE *)v21;
          LOBYTE(v25) = 1;
        }
        v31 = v46;
        v30 = v45;
      }
      if ( (_BYTE)v25 )
      {
        LOBYTE(v3) = v30;
        v41 = v31;
      }
      else
      {
LABEL_91:
        v29 = 0;
        v41 = 0;
      }
      LOBYTE(v44) = v38;
      LODWORD(v43) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v21, v25, &v50, a2, v43, v44, v26, v29, v3, v41, a2);
    }
  }
LABEL_96:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v6;
}
