/*
 * XREFs of sub_14007BE40 @ 0x14007BE40
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14007B5A0 @ 0x14007B5A0 (sub_14007B5A0.c)
 *     sub_14008AE74 @ 0x14008AE74 (sub_14008AE74.c)
 *     sub_14008B1CC @ 0x14008B1CC (sub_14008B1CC.c)
 *     sub_14008D1F0 @ 0x14008D1F0 (sub_14008D1F0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14007BE40(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v4; // rdx
  char v6; // r8
  __int64 v7; // r15
  char v8; // r12
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // esi
  __int64 v13; // r12
  int v14; // ecx
  int v15; // r9d
  int v16; // eax
  __int64 v17; // r8
  char v18; // r11
  const wchar_t *v19; // rcx
  bool v20; // zf
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  int *v23; // rax
  const EVENT_DESCRIPTOR *v24; // rdx
  __int64 v25; // rdx
  char v26; // r12
  char v27; // bl
  _BYTE *v28; // r8
  unsigned __int8 v29; // r10
  char v30; // r11
  int v31; // eax
  char v32; // r13
  char *v33; // r15
  unsigned int v34; // r9d
  unsigned int *v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // r13
  int v38; // r15d
  char v39; // r9
  _BYTE *v40; // rax
  unsigned int v41; // eax
  unsigned __int64 v42; // r9
  char v43; // al
  __int64 v45; // [rsp+20h] [rbp-130h]
  __int64 v46; // [rsp+28h] [rbp-128h]
  __int64 v47; // [rsp+30h] [rbp-120h]
  __int64 v48; // [rsp+38h] [rbp-118h]
  __int64 v49; // [rsp+40h] [rbp-110h]
  __int64 v50; // [rsp+48h] [rbp-108h]
  char v51; // [rsp+D0h] [rbp-80h]
  char v52; // [rsp+D1h] [rbp-7Fh]
  char v53; // [rsp+D2h] [rbp-7Eh]
  int v54; // [rsp+D8h] [rbp-78h]
  unsigned int v55; // [rsp+E0h] [rbp-70h]
  int v56; // [rsp+E8h] [rbp-68h]
  __int64 v57; // [rsp+E8h] [rbp-68h]
  __int64 v58; // [rsp+F0h] [rbp-60h]
  int v59; // [rsp+F8h] [rbp-58h]
  __int128 v60; // [rsp+100h] [rbp-50h] BYREF
  GUID v61; // [rsp+110h] [rbp-40h] BYREF
  __int128 v62; // [rsp+120h] [rbp-30h] BYREF
  _OWORD v63[2]; // [rsp+130h] [rbp-20h] BYREF

  v2 = 0;
  LOBYTE(v56) = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v62 = 0LL;
  v6 = 0;
  LOBYTE(v59) = 0;
  v7 = *(_QWORD *)(a2 + 24);
  v8 = 0;
  v60 = 0LL;
  memset(v63, 0, sizeof(v63));
  if ( !v7 )
    goto LABEL_29;
  v9 = *(_DWORD *)(v4 + 16);
  if ( v9 < 0x28 )
    goto LABEL_29;
  if ( *(_WORD *)v7 != 1 )
    goto LABEL_29;
  v10 = *(_DWORD *)(v7 + 32);
  if ( v10 > 0x20 )
    goto LABEL_29;
  v11 = v10 + 36;
  if ( v11 < 0x28 )
    v11 = 40;
  if ( *(_DWORD *)(v7 + 4) != v11 || v9 < v11 || (*(_DWORD *)(v7 + 8) & 6) == 2 )
  {
LABEL_29:
    v12 = -1073741811;
    goto LABEL_30;
  }
  if ( *(_DWORD *)(v4 + 8) < 0x40u )
  {
    v12 = -1073741789;
    goto LABEL_30;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
  {
    v12 = -2147483631;
    goto LABEL_30;
  }
  v13 = *(_QWORD *)(a2 + 24);
  v56 = *(_DWORD *)(v7 + 8);
  v59 = *(_DWORD *)(v7 + 32);
  if ( (v56 & 1) != 0 )
    v58 = *(_QWORD *)(v7 + 24);
  else
    LOBYTE(v58) = 0;
  v12 = sub_14008D1F0(a1, v63);
  if ( v12 >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 6064) + 53LL) )
    {
      v14 = *(_DWORD *)(v7 + 8);
      v15 = 1;
      if ( (v14 & 1) != 0 )
      {
        LOBYTE(v15) = (*(_DWORD *)(v7 + 8) & 4) != 0;
        v16 = sub_14008B1CC(
                a1,
                *(_QWORD *)(v7 + 16),
                *(_QWORD *)(v7 + 24),
                v15,
                *(_DWORD *)(v7 + 32),
                v7 + 36,
                v13,
                (__int64)v63);
      }
      else
      {
        if ( (v14 & 2) == 0 )
        {
          v12 = -1073741811;
          goto LABEL_27;
        }
        v16 = sub_14008AE74(a1, *(_DWORD *)(v7 + 16), *(_DWORD *)(v7 + 32), (int)v7 + 36, v13, (__int64)v63);
      }
      v12 = v16;
      if ( v16 >= 0 )
        *(_QWORD *)(a2 + 56) = 64LL;
      goto LABEL_27;
    }
    v12 = -1073741637;
  }
LABEL_27:
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
  if ( v12 >= 0 )
    goto LABEL_35;
  v8 = v58;
  v6 = 1;
LABEL_30:
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v6 )
  {
    sub_1400403EC(*(_QWORD *)(a1 + 16), (__int64)&v60);
    if ( (byte_1401694F7 & 2) != 0 )
    {
      v19 = (const wchar_t *)&unk_140149394;
      if ( *(_QWORD *)(a1 + 5080) )
        v19 = *(const wchar_t **)(a1 + 5080);
      sub_14007B5A0(
        (__int64)v19,
        a1 + 5064,
        v17,
        *(_DWORD *)(a1 + 56),
        -1,
        255,
        255,
        (__int64)&v62,
        a1 + 5064,
        *((const wchar_t **)&v60 + 1),
        byte_1401489C4,
        byte_1401489C4,
        byte_1401489C4,
        v19,
        "TcgAssignLockingObject",
        (const char *)v63,
        v12,
        v56,
        v59,
        v18,
        v8,
        0);
    }
  }
LABEL_35:
  v20 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v12;
  if ( v20 )
    goto LABEL_104;
  v61 = 0LL;
  IoGetActivityIdIrp(a2, &v61);
  v22 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v22 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_104;
    LODWORD(v45) = *(_DWORD *)(a2 + 48);
    v24 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_103;
  }
  if ( *(_BYTE *)v22 != 15 )
  {
    if ( *(_BYTE *)v22 != 27 )
      goto LABEL_104;
    if ( *(_BYTE *)(v22 + 1) == 7 && !*(_DWORD *)(v22 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v23 = *(int **)(a2 + 56);
        if ( v23 )
          v2 = *v23;
        LODWORD(v46) = *(_DWORD *)(a2 + 48);
        LODWORD(v45) = v2;
        sub_140056AB0(v21, v22, &v61, a2, v45, v46);
      }
      goto LABEL_104;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_104;
    v24 = &stru_140149FE8;
    LODWORD(v45) = *(_DWORD *)(a2 + 48);
LABEL_103:
    sub_140052F3C(v21, v24, &v61, a2, v45);
    goto LABEL_104;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_104;
  v25 = *(_QWORD *)(v22 + 8);
  v26 = 0;
  v27 = 0;
  v52 = 0;
  v28 = 0LL;
  v51 = 0;
  v29 = 0;
  v30 = 0;
  v31 = *(unsigned __int8 *)(v25 + 2);
  v32 = 0;
  if ( (_BYTE)v31 != 40 )
  {
    v26 = *(_BYTE *)(v25 + 72);
    v28 = *(_BYTE **)(v25 + 32);
    v29 = *(_BYTE *)(v25 + 11);
    v27 = *(_BYTE *)(v25 + 4);
    goto LABEL_78;
  }
  v31 = *(_DWORD *)(v25 + 20);
  v33 = 0LL;
  v53 = 0;
  if ( v31 )
    goto LABEL_104;
  v34 = *(_DWORD *)(v25 + 56);
  v21 = 0LL;
  v54 = 0;
  v55 = v34;
  if ( !v34 )
    goto LABEL_75;
  v35 = (unsigned int *)(v25 + 120);
  v57 = v25 + 120;
  while ( 1 )
  {
    v36 = *v35;
    if ( (unsigned int)v36 >= 0x80 )
    {
      v37 = *(unsigned int *)(v25 + 16);
      if ( (unsigned int)v36 < (unsigned int)v37 )
        break;
    }
LABEL_68:
    v21 = (unsigned int)(v21 + 1);
    v35 = (unsigned int *)(v57 + 4);
    v54 = v21;
    v57 += 4LL;
    if ( (unsigned int)v21 >= v34 )
      goto LABEL_74;
  }
  if ( *(_DWORD *)(v36 + v25) != 64 )
  {
    v21 = (unsigned int)(*(_DWORD *)(v36 + v25) - 65);
    if ( *(_DWORD *)(v36 + v25) == 65 )
    {
      v21 = v36 + 56;
      if ( v36 + 56 <= v37 )
      {
        v53 = 1;
        if ( *(_BYTE *)(v36 + v25 + 10) )
          v33 = (char *)(v36 + v25 + 24);
        v27 = *(_BYTE *)(v36 + v25 + 8);
        v28 = *(_BYTE **)(v36 + v25 + 16);
        v29 = *(_BYTE *)(v36 + v25 + 9);
      }
    }
    else if ( *(_DWORD *)(v36 + v25) == 66 )
    {
      v21 = v36 + 40;
      if ( v36 + 40 <= v37 )
      {
        if ( *(_DWORD *)(v36 + v25 + 12) )
          v33 = (char *)(v36 + v25 + 32);
        v28 = *(_BYTE **)(v36 + v25 + 24);
        goto LABEL_73;
      }
    }
    goto LABEL_66;
  }
  v21 = v36 + 40;
  if ( v36 + 40 > v37 )
  {
LABEL_66:
    if ( v53 )
      goto LABEL_74;
    LODWORD(v21) = v54;
    v34 = v55;
    goto LABEL_68;
  }
  if ( *(_BYTE *)(v36 + v25 + 10) )
    v33 = (char *)(v36 + v25 + 24);
  v28 = *(_BYTE **)(v36 + v25 + 16);
LABEL_73:
  v29 = *(_BYTE *)(v36 + v25 + 9);
  v27 = *(_BYTE *)(v36 + v25 + 8);
LABEL_74:
  v31 = 0;
  v32 = 0;
LABEL_75:
  if ( !v33 )
  {
LABEL_78:
    v38 = v12;
    if ( !v31 )
      goto LABEL_79;
    goto LABEL_104;
  }
  v26 = *v33;
  v38 = v12;
LABEL_79:
  if ( ((v26 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v25 + 3) == 1 || !v28 || !v29 )
      goto LABEL_99;
    v39 = 0;
    v21 = (unsigned __int64)&v28[v29];
    v40 = v28 + 8;
    if ( (unsigned __int8)((*v28 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v40 <= v21 )
      {
        v39 = 1;
        v30 = v28[1] & 0xF;
        v32 = v28[3];
        v52 = v28[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v40 <= v21 )
      {
        v30 = v28[2] & 0xF;
        v41 = v29;
        if ( (unsigned int)(unsigned __int8)v28[7] + 8 <= v29 )
          v41 = (unsigned __int8)v28[7] + 8;
        v21 = (unsigned __int64)(v28 + 13);
        v42 = (unsigned __int64)&v28[v41];
        if ( (unsigned __int64)(v28 + 13) > v42 )
          v52 = 0;
        else
          v52 = v28[12];
        if ( (unsigned __int64)(v28 + 14) > v42 )
          v51 = 0;
        else
          v51 = *(_BYTE *)v21;
        v39 = 1;
      }
      v32 = v51;
    }
    if ( v39 )
    {
      LOBYTE(v2) = v52;
      v12 = v38;
      v43 = v32;
    }
    else
    {
LABEL_99:
      v30 = 0;
      v43 = 0;
    }
    LOBYTE(v50) = v43;
    LOBYTE(v49) = v2;
    LOBYTE(v48) = v30;
    LOBYTE(v47) = v27;
    LOBYTE(v46) = *(_BYTE *)(v25 + 3);
    LODWORD(v45) = *(_DWORD *)(a2 + 48);
    sub_140052E64(v21, v25, &v61, a2, v45, v46, v47, v48, v49, v50, a2);
  }
LABEL_104:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v12;
}
