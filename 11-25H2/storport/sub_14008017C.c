/*
 * XREFs of sub_14008017C @ 0x14008017C
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14007B5A0 @ 0x14007B5A0 (sub_14007B5A0.c)
 *     sub_14008AB58 @ 0x14008AB58 (sub_14008AB58.c)
 *     sub_14008D1F0 @ 0x14008D1F0 (sub_14008D1F0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14008017C(__int64 a1, __int64 a2)
{
  int v2; // r15d
  __int64 v4; // rdx
  __int64 v6; // rbx
  char v7; // di
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // r12d
  int v12; // edx
  int v13; // r8d
  char v14; // r11
  __int64 v15; // r9
  const wchar_t *v16; // rax
  __int64 v17; // rdi
  int v18; // r9d
  const wchar_t *v19; // r14
  bool v20; // zf
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  int *v23; // rax
  const EVENT_DESCRIPTOR *v24; // rdx
  __int64 v25; // rdx
  char v26; // si
  char v27; // r11
  _BYTE *v28; // r8
  unsigned __int8 v29; // r10
  char v30; // bl
  int v31; // eax
  char v32; // r14
  char *v33; // rdi
  unsigned int v34; // r9d
  unsigned int *v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // r14
  int v38; // edi
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
  int v54; // [rsp+D4h] [rbp-7Ch]
  int v55; // [rsp+D8h] [rbp-78h]
  unsigned int v56; // [rsp+DCh] [rbp-74h]
  __int128 v57; // [rsp+E0h] [rbp-70h] BYREF
  GUID v58; // [rsp+F0h] [rbp-60h] BYREF
  _OWORD v59[2]; // [rsp+100h] [rbp-50h] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 24);
  v6 = 0LL;
  v7 = 0;
  v57 = 0LL;
  memset(v59, 0, sizeof(v59));
  if ( !v4 )
    goto LABEL_14;
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL);
  if ( v8 < 0x18 )
    goto LABEL_14;
  v6 = v4;
  if ( *(_WORD *)v4 != 1 )
    goto LABEL_14;
  v9 = *(_DWORD *)(v4 + 16);
  if ( v9 > 0x20 )
    goto LABEL_14;
  v10 = v9 + 20;
  if ( v10 < 0x18 )
    v10 = 24;
  if ( *(_DWORD *)(v4 + 4) == v10 && v8 >= v10 )
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
    {
      v11 = -2147483631;
    }
    else
    {
      v7 = 1;
      v11 = sub_14008D1F0(a1, v59);
      if ( v11 >= 0 )
      {
        LOBYTE(v13) = *(_BYTE *)(v6 + 13);
        LOBYTE(v12) = *(_BYTE *)(v6 + 12);
        v11 = sub_14008AB58(a1, v12, v13, *(_DWORD *)(v6 + 16), v6 + 20, (__int64)v59);
      }
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
    }
  }
  else
  {
LABEL_14:
    v11 = -1073741811;
  }
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v11 < 0 )
  {
    if ( v7 )
    {
      v54 = *(_DWORD *)(a1 + 104);
      sub_1400403EC(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v57);
      v15 = *(_QWORD *)(a1 + 24);
      if ( (byte_1401694F7 & 2) != 0 )
      {
        v16 = *(const wchar_t **)(v15 + 5080);
        v17 = v15 + 5064;
        v18 = *(_DWORD *)(v15 + 56);
        v19 = (const wchar_t *)&unk_140149394;
        if ( v16 )
          v19 = v16;
        sub_14007B5A0(
          *(unsigned __int8 *)(v6 + 13),
          *(unsigned __int8 *)(v6 + 12),
          a1 + 242,
          v18,
          v14,
          SBYTE1(v54),
          SBYTE2(v54),
          a1 + 2104,
          v17,
          *((const wchar_t **)&v57 + 1),
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v19,
          "TcgActivateLocking",
          (const char *)v59,
          v11,
          *(_BYTE *)(v6 + 12),
          *(_BYTE *)(v6 + 13),
          *(_DWORD *)(v6 + 16),
          0,
          0);
      }
    }
  }
  v20 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v11;
  if ( v20 )
    goto LABEL_90;
  v58 = 0LL;
  IoGetActivityIdIrp(a2, &v58);
  v22 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v22 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_90;
    v24 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_89;
  }
  if ( *(_BYTE *)v22 != 15 )
  {
    if ( *(_BYTE *)v22 != 27 )
      goto LABEL_90;
    if ( *(_BYTE *)(v22 + 1) == 7 && !*(_DWORD *)(v22 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v23 = *(int **)(a2 + 56);
        if ( v23 )
          v2 = *v23;
        LODWORD(v46) = *(_DWORD *)(a2 + 48);
        LODWORD(v45) = v2;
        sub_140056AB0(v21, v22, &v58, a2, v45, v46);
      }
      goto LABEL_90;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_90;
    v24 = &stru_140149FE8;
LABEL_89:
    LODWORD(v45) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v21, v24, &v58, a2, v45);
    goto LABEL_90;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_90;
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
    goto LABEL_64;
  }
  v31 = *(_DWORD *)(v25 + 20);
  v33 = 0LL;
  v53 = 0;
  if ( v31 )
    goto LABEL_90;
  v34 = *(_DWORD *)(v25 + 56);
  v21 = 0LL;
  v55 = 0;
  v56 = v34;
  if ( !v34 )
    goto LABEL_61;
  v35 = (unsigned int *)(v25 + 120);
  *(_QWORD *)&v57 = v25 + 120;
  while ( 1 )
  {
    v36 = *v35;
    if ( (unsigned int)v36 >= 0x80 )
    {
      v37 = *(unsigned int *)(v25 + 16);
      if ( (unsigned int)v36 < (unsigned int)v37 )
        break;
    }
LABEL_54:
    v21 = (unsigned int)(v21 + 1);
    v35 = (unsigned int *)(v57 + 4);
    v55 = v21;
    *(_QWORD *)&v57 = v57 + 4;
    if ( (unsigned int)v21 >= v34 )
      goto LABEL_60;
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
        goto LABEL_59;
      }
    }
    goto LABEL_52;
  }
  v21 = v36 + 40;
  if ( v36 + 40 > v37 )
  {
LABEL_52:
    if ( v53 )
      goto LABEL_60;
    LODWORD(v21) = v55;
    v34 = v56;
    goto LABEL_54;
  }
  if ( *(_BYTE *)(v36 + v25 + 10) )
    v33 = (char *)(v36 + v25 + 24);
  v28 = *(_BYTE **)(v36 + v25 + 16);
LABEL_59:
  v29 = *(_BYTE *)(v36 + v25 + 9);
  v27 = *(_BYTE *)(v36 + v25 + 8);
LABEL_60:
  v31 = 0;
  v32 = 0;
LABEL_61:
  if ( !v33 )
  {
LABEL_64:
    v38 = v11;
    if ( !v31 )
      goto LABEL_65;
    goto LABEL_90;
  }
  v26 = *v33;
  v38 = v11;
LABEL_65:
  if ( ((v26 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v25 + 3) == 1 || !v28 || !v29 )
      goto LABEL_85;
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
      v11 = v38;
      v43 = v32;
    }
    else
    {
LABEL_85:
      v30 = 0;
      v43 = 0;
    }
    LOBYTE(v50) = v43;
    LOBYTE(v49) = v2;
    LOBYTE(v48) = v30;
    LOBYTE(v47) = v27;
    LOBYTE(v46) = *(_BYTE *)(v25 + 3);
    LODWORD(v45) = *(_DWORD *)(a2 + 48);
    sub_140052E64(v21, v25, &v58, a2, v45, v46, v47, v48, v49, v50, a2);
  }
LABEL_90:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v11;
}
