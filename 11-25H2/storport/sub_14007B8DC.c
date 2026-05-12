/*
 * XREFs of sub_14007B8DC @ 0x14007B8DC
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
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

__int64 __fastcall sub_14007B8DC(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v4; // rdx
  __int64 v6; // r15
  char v7; // r12
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // r14d
  int v12; // edx
  int v13; // r8d
  const wchar_t *v14; // r8
  bool v15; // zf
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  int *v18; // rax
  const EVENT_DESCRIPTOR *v19; // rdx
  __int64 v20; // rdx
  char v21; // r12
  char v22; // r11
  _BYTE *v23; // r8
  unsigned __int8 v24; // r10
  char v25; // bl
  int v26; // eax
  char v27; // r13
  char *v28; // r15
  unsigned int v29; // r9d
  unsigned int *v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // r13
  int v33; // r15d
  char v34; // r9
  _BYTE *v35; // rax
  unsigned int v36; // eax
  unsigned __int64 v37; // r9
  char v38; // al
  __int64 v40; // [rsp+20h] [rbp-130h]
  __int64 v41; // [rsp+28h] [rbp-128h]
  __int64 v42; // [rsp+30h] [rbp-120h]
  __int64 v43; // [rsp+38h] [rbp-118h]
  __int64 v44; // [rsp+40h] [rbp-110h]
  __int64 v45; // [rsp+48h] [rbp-108h]
  char v46; // [rsp+D0h] [rbp-80h]
  char v47; // [rsp+D1h] [rbp-7Fh]
  char v48; // [rsp+D2h] [rbp-7Eh]
  int v49; // [rsp+D8h] [rbp-78h]
  unsigned int v50; // [rsp+DCh] [rbp-74h]
  __int128 v51; // [rsp+E0h] [rbp-70h] BYREF
  GUID v52; // [rsp+F0h] [rbp-60h] BYREF
  __int128 v53; // [rsp+100h] [rbp-50h] BYREF
  _OWORD v54[2]; // [rsp+110h] [rbp-40h] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 24);
  v6 = 0LL;
  v7 = 0;
  v53 = 0LL;
  v51 = 0LL;
  memset(v54, 0, sizeof(v54));
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
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
    {
      v11 = -2147483631;
    }
    else
    {
      v7 = 1;
      v11 = sub_14008D1F0(a1, v54);
      if ( v11 >= 0 )
      {
        LOBYTE(v13) = *(_BYTE *)(v6 + 13);
        LOBYTE(v12) = *(_BYTE *)(v6 + 12);
        v11 = sub_14008AB58(a1, v12, v13, *(_DWORD *)(v6 + 16), v6 + 20, (__int64)v54);
      }
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
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
      sub_1400403EC(*(_QWORD *)(a1 + 16), (__int64)&v51);
      if ( (byte_1401694F7 & 2) != 0 )
      {
        v14 = (const wchar_t *)&unk_140149394;
        if ( *(_QWORD *)(a1 + 5080) )
          v14 = *(const wchar_t **)(a1 + 5080);
        sub_14007B5A0(
          *(unsigned __int8 *)(v6 + 13),
          *(unsigned __int8 *)(v6 + 12),
          (__int64)v14,
          *(_DWORD *)(a1 + 56),
          -1,
          255,
          255,
          (__int64)&v53,
          a1 + 5064,
          *((const wchar_t **)&v51 + 1),
          byte_1401489C4,
          byte_1401489C4,
          byte_1401489C4,
          v14,
          "TcgActivateLocking",
          (const char *)v54,
          v11,
          *(_BYTE *)(v6 + 12),
          *(_BYTE *)(v6 + 13),
          *(_DWORD *)(v6 + 16),
          0,
          0);
      }
    }
  }
  v15 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v11;
  if ( v15 )
    goto LABEL_90;
  v52 = 0LL;
  IoGetActivityIdIrp(a2, &v52);
  v17 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v17 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_90;
    v19 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_89;
  }
  if ( *(_BYTE *)v17 != 15 )
  {
    if ( *(_BYTE *)v17 != 27 )
      goto LABEL_90;
    if ( *(_BYTE *)(v17 + 1) == 7 && !*(_DWORD *)(v17 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v18 = *(int **)(a2 + 56);
        if ( v18 )
          v2 = *v18;
        LODWORD(v41) = *(_DWORD *)(a2 + 48);
        LODWORD(v40) = v2;
        sub_140056AB0(v16, v17, &v52, a2, v40, v41);
      }
      goto LABEL_90;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_90;
    v19 = &stru_140149FE8;
LABEL_89:
    LODWORD(v40) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v16, v19, &v52, a2, v40);
    goto LABEL_90;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_90;
  v20 = *(_QWORD *)(v17 + 8);
  v21 = 0;
  v22 = 0;
  v47 = 0;
  v23 = 0LL;
  v46 = 0;
  v24 = 0;
  v25 = 0;
  v26 = *(unsigned __int8 *)(v20 + 2);
  v27 = 0;
  if ( (_BYTE)v26 != 40 )
  {
    v21 = *(_BYTE *)(v20 + 72);
    v23 = *(_BYTE **)(v20 + 32);
    v24 = *(_BYTE *)(v20 + 11);
    v22 = *(_BYTE *)(v20 + 4);
    goto LABEL_64;
  }
  v26 = *(_DWORD *)(v20 + 20);
  v28 = 0LL;
  v48 = 0;
  if ( v26 )
    goto LABEL_90;
  v29 = *(_DWORD *)(v20 + 56);
  v16 = 0LL;
  v49 = 0;
  v50 = v29;
  if ( !v29 )
    goto LABEL_61;
  v30 = (unsigned int *)(v20 + 120);
  *(_QWORD *)&v51 = v20 + 120;
  while ( 1 )
  {
    v31 = *v30;
    if ( (unsigned int)v31 >= 0x80 )
    {
      v32 = *(unsigned int *)(v20 + 16);
      if ( (unsigned int)v31 < (unsigned int)v32 )
        break;
    }
LABEL_54:
    v16 = (unsigned int)(v16 + 1);
    v30 = (unsigned int *)(v51 + 4);
    v49 = v16;
    *(_QWORD *)&v51 = v51 + 4;
    if ( (unsigned int)v16 >= v29 )
      goto LABEL_60;
  }
  if ( *(_DWORD *)(v31 + v20) != 64 )
  {
    v16 = (unsigned int)(*(_DWORD *)(v31 + v20) - 65);
    if ( *(_DWORD *)(v31 + v20) == 65 )
    {
      v16 = v31 + 56;
      if ( v31 + 56 <= v32 )
      {
        v48 = 1;
        if ( *(_BYTE *)(v31 + v20 + 10) )
          v28 = (char *)(v31 + v20 + 24);
        v22 = *(_BYTE *)(v31 + v20 + 8);
        v23 = *(_BYTE **)(v31 + v20 + 16);
        v24 = *(_BYTE *)(v31 + v20 + 9);
      }
    }
    else if ( *(_DWORD *)(v31 + v20) == 66 )
    {
      v16 = v31 + 40;
      if ( v31 + 40 <= v32 )
      {
        if ( *(_DWORD *)(v31 + v20 + 12) )
          v28 = (char *)(v31 + v20 + 32);
        v23 = *(_BYTE **)(v31 + v20 + 24);
        goto LABEL_59;
      }
    }
    goto LABEL_52;
  }
  v16 = v31 + 40;
  if ( v31 + 40 > v32 )
  {
LABEL_52:
    if ( v48 )
      goto LABEL_60;
    LODWORD(v16) = v49;
    v29 = v50;
    goto LABEL_54;
  }
  if ( *(_BYTE *)(v31 + v20 + 10) )
    v28 = (char *)(v31 + v20 + 24);
  v23 = *(_BYTE **)(v31 + v20 + 16);
LABEL_59:
  v24 = *(_BYTE *)(v31 + v20 + 9);
  v22 = *(_BYTE *)(v31 + v20 + 8);
LABEL_60:
  v26 = 0;
  v27 = 0;
LABEL_61:
  if ( !v28 )
  {
LABEL_64:
    v33 = v11;
    if ( !v26 )
      goto LABEL_65;
    goto LABEL_90;
  }
  v21 = *v28;
  v33 = v11;
LABEL_65:
  if ( ((v21 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v20 + 3) == 1 || !v23 || !v24 )
      goto LABEL_85;
    v34 = 0;
    v16 = (unsigned __int64)&v23[v24];
    v35 = v23 + 8;
    if ( (unsigned __int8)((*v23 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v35 <= v16 )
      {
        v34 = 1;
        v25 = v23[1] & 0xF;
        v27 = v23[3];
        v47 = v23[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v35 <= v16 )
      {
        v25 = v23[2] & 0xF;
        v36 = v24;
        if ( (unsigned int)(unsigned __int8)v23[7] + 8 <= v24 )
          v36 = (unsigned __int8)v23[7] + 8;
        v16 = (unsigned __int64)(v23 + 13);
        v37 = (unsigned __int64)&v23[v36];
        if ( (unsigned __int64)(v23 + 13) > v37 )
          v47 = 0;
        else
          v47 = v23[12];
        if ( (unsigned __int64)(v23 + 14) > v37 )
          v46 = 0;
        else
          v46 = *(_BYTE *)v16;
        v34 = 1;
      }
      v27 = v46;
    }
    if ( v34 )
    {
      LOBYTE(v2) = v47;
      v11 = v33;
      v38 = v27;
    }
    else
    {
LABEL_85:
      v25 = 0;
      v38 = 0;
    }
    LOBYTE(v45) = v38;
    LOBYTE(v44) = v2;
    LOBYTE(v43) = v25;
    LOBYTE(v42) = v22;
    LOBYTE(v41) = *(_BYTE *)(v20 + 3);
    LODWORD(v40) = *(_DWORD *)(a2 + 48);
    sub_140052E64(v16, v20, &v52, a2, v40, v41, v42, v43, v44, v45, a2);
  }
LABEL_90:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v11;
}
