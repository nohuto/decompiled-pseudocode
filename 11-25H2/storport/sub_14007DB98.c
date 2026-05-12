/*
 * XREFs of sub_14007DB98 @ 0x14007DB98
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14007B5A0 @ 0x14007B5A0 (sub_14007B5A0.c)
 *     sub_14008CA58 @ 0x14008CA58 (sub_14008CA58.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14007DB98(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v4; // rcx
  unsigned int v6; // edi
  void *v7; // rdi
  int v8; // eax
  char v9; // r12
  __int64 v10; // r8
  const wchar_t *v11; // rcx
  bool v12; // zf
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // rax
  const EVENT_DESCRIPTOR *v16; // rdx
  unsigned __int64 v17; // rdx
  char v18; // r13
  char v19; // r11
  _BYTE *v20; // r8
  unsigned __int8 v21; // r10
  char v22; // bl
  int v23; // eax
  char v24; // r12
  char *v25; // r15
  unsigned int v26; // r9d
  unsigned int *v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // r12
  unsigned int v30; // r15d
  char v31; // r9
  _BYTE *v32; // rax
  unsigned int v33; // eax
  char v34; // al
  __int64 v36; // [rsp+20h] [rbp-130h]
  __int64 v37; // [rsp+28h] [rbp-128h]
  __int64 v38; // [rsp+30h] [rbp-120h]
  __int64 v39; // [rsp+38h] [rbp-118h]
  __int64 v40; // [rsp+40h] [rbp-110h]
  __int64 v41; // [rsp+48h] [rbp-108h]
  char v42; // [rsp+D0h] [rbp-80h]
  char v43; // [rsp+D1h] [rbp-7Fh]
  char v44; // [rsp+D2h] [rbp-7Eh]
  int v45; // [rsp+D8h] [rbp-78h]
  unsigned int v46; // [rsp+DCh] [rbp-74h]
  __int128 v47; // [rsp+E0h] [rbp-70h] BYREF
  GUID v48; // [rsp+F0h] [rbp-60h] BYREF
  __int128 v49; // [rsp+100h] [rbp-50h] BYREF
  _OWORD v50[2]; // [rsp+110h] [rbp-40h] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)(a2 + 56) = 0LL;
  v49 = 0LL;
  v47 = 0LL;
  memset(v50, 0, sizeof(v50));
  if ( *(_QWORD *)(a2 + 24) )
  {
    if ( *(_DWORD *)(v4 + 8) >= 0x34u )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
      {
        v6 = -2147483631;
      }
      else
      {
        v7 = *(void **)(a2 + 24);
        memset_0(v7, 0, *(unsigned int *)(v4 + 8));
        v8 = sub_14008CA58(a1, v7, v50);
        v6 = v8;
        if ( v8 >= 0 )
          *(_QWORD *)(a2 + 56) = 52LL;
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
        v9 = v8;
        if ( v8 < 0 )
        {
          sub_1400403EC(*(_QWORD *)(a1 + 16), (__int64)&v47);
          if ( (byte_1401694F7 & 2) != 0 )
          {
            v11 = (const wchar_t *)&unk_140149394;
            if ( *(_QWORD *)(a1 + 5080) )
              v11 = *(const wchar_t **)(a1 + 5080);
            sub_14007B5A0(
              (__int64)v11,
              a1 + 5064,
              v10,
              *(_DWORD *)(a1 + 56),
              -1,
              255,
              255,
              (__int64)&v49,
              a1 + 5064,
              *((const wchar_t **)&v47 + 1),
              byte_1401489C4,
              byte_1401489C4,
              byte_1401489C4,
              v11,
              "TcgQueryCapabilityConfiguration",
              (const char *)v50,
              v9,
              (*(_BYTE *)(a1 + 111) & 0x10) != 0,
              0,
              0,
              0,
              0);
          }
        }
      }
    }
    else
    {
      v6 = -1073741789;
    }
  }
  else
  {
    v6 = -1073741811;
  }
  v12 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v12 )
    goto LABEL_83;
  v48 = 0LL;
  IoGetActivityIdIrp(a2, &v48);
  v14 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v14 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_83;
    LODWORD(v36) = *(_DWORD *)(a2 + 48);
    v16 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_82;
  }
  if ( *(_BYTE *)v14 != 15 )
  {
    if ( *(_BYTE *)v14 != 27 )
      goto LABEL_83;
    if ( *(_BYTE *)(v14 + 1) == 7 && !*(_DWORD *)(v14 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v15 = *(int **)(a2 + 56);
        if ( v15 )
          v2 = *v15;
        LODWORD(v37) = *(_DWORD *)(a2 + 48);
        LODWORD(v36) = v2;
        sub_140056AB0(v13, v14, &v48, a2, v36, v37);
      }
      goto LABEL_83;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_83;
    v16 = &stru_140149FE8;
    LODWORD(v36) = *(_DWORD *)(a2 + 48);
LABEL_82:
    sub_140052F3C(v13, v16, &v48, a2, v36);
    goto LABEL_83;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_83;
  v17 = *(_QWORD *)(v14 + 8);
  v18 = 0;
  v19 = 0;
  v43 = 0;
  v20 = 0LL;
  v42 = 0;
  v21 = 0;
  v22 = 0;
  v23 = *(unsigned __int8 *)(v17 + 2);
  v24 = 0;
  if ( (_BYTE)v23 != 40 )
  {
    v18 = *(_BYTE *)(v17 + 72);
    v20 = *(_BYTE **)(v17 + 32);
    v21 = *(_BYTE *)(v17 + 11);
    v19 = *(_BYTE *)(v17 + 4);
    goto LABEL_57;
  }
  v23 = *(_DWORD *)(v17 + 20);
  v25 = 0LL;
  v44 = 0;
  if ( v23 )
    goto LABEL_83;
  v26 = *(_DWORD *)(v17 + 56);
  v13 = 0LL;
  v45 = 0;
  v46 = v26;
  if ( !v26 )
    goto LABEL_54;
  v27 = (unsigned int *)(v17 + 120);
  *(_QWORD *)&v47 = v17 + 120;
  while ( 1 )
  {
    v28 = *v27;
    if ( (unsigned int)v28 >= 0x80 )
    {
      v29 = *(unsigned int *)(v17 + 16);
      if ( (unsigned int)v28 < (unsigned int)v29 )
        break;
    }
LABEL_47:
    v13 = (unsigned int)(v13 + 1);
    v27 = (unsigned int *)(v47 + 4);
    v45 = v13;
    *(_QWORD *)&v47 = v47 + 4;
    if ( (unsigned int)v13 >= v26 )
      goto LABEL_53;
  }
  if ( *(_DWORD *)(v28 + v17) != 64 )
  {
    v13 = (unsigned int)(*(_DWORD *)(v28 + v17) - 65);
    if ( *(_DWORD *)(v28 + v17) == 65 )
    {
      v13 = v28 + 56;
      if ( v28 + 56 <= v29 )
      {
        v44 = 1;
        if ( *(_BYTE *)(v28 + v17 + 10) )
          v25 = (char *)(v28 + v17 + 24);
        v19 = *(_BYTE *)(v28 + v17 + 8);
        v20 = *(_BYTE **)(v28 + v17 + 16);
        v21 = *(_BYTE *)(v28 + v17 + 9);
      }
    }
    else if ( *(_DWORD *)(v28 + v17) == 66 )
    {
      v13 = v28 + 40;
      if ( v28 + 40 <= v29 )
      {
        if ( *(_DWORD *)(v28 + v17 + 12) )
          v25 = (char *)(v28 + v17 + 32);
        v20 = *(_BYTE **)(v28 + v17 + 24);
        goto LABEL_52;
      }
    }
    goto LABEL_45;
  }
  v13 = v28 + 40;
  if ( v28 + 40 > v29 )
  {
LABEL_45:
    if ( v44 )
      goto LABEL_53;
    LODWORD(v13) = v45;
    v26 = v46;
    goto LABEL_47;
  }
  if ( *(_BYTE *)(v28 + v17 + 10) )
    v25 = (char *)(v28 + v17 + 24);
  v20 = *(_BYTE **)(v28 + v17 + 16);
LABEL_52:
  v21 = *(_BYTE *)(v28 + v17 + 9);
  v19 = *(_BYTE *)(v28 + v17 + 8);
LABEL_53:
  v23 = 0;
  v24 = 0;
LABEL_54:
  if ( !v25 )
  {
LABEL_57:
    v30 = v6;
    if ( !v23 )
      goto LABEL_58;
    goto LABEL_83;
  }
  v18 = *v25;
  v30 = v6;
LABEL_58:
  if ( ((v18 - 8) & 0x5D) == 0 )
  {
    v31 = *(_BYTE *)(v17 + 3);
    if ( v31 == 1 || !v20 || !v21 )
      goto LABEL_78;
    LOBYTE(v17) = 0;
    v13 = (unsigned __int64)&v20[v21];
    v32 = v20 + 8;
    if ( (unsigned __int8)((*v20 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v32 <= v13 )
      {
        LOBYTE(v17) = 1;
        v22 = v20[1] & 0xF;
        v24 = v20[3];
        v43 = v20[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v32 <= v13 )
      {
        v22 = v20[2] & 0xF;
        v33 = v21;
        if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
          v33 = (unsigned __int8)v20[7] + 8;
        v13 = (unsigned __int64)(v20 + 13);
        v17 = (unsigned __int64)&v20[v33];
        if ( (unsigned __int64)(v20 + 13) > v17 )
          v43 = 0;
        else
          v43 = v20[12];
        if ( (unsigned __int64)(v20 + 14) > v17 )
          v42 = 0;
        else
          v42 = *(_BYTE *)v13;
        LOBYTE(v17) = 1;
      }
      v24 = v42;
    }
    if ( (_BYTE)v17 )
    {
      LOBYTE(v2) = v43;
      v6 = v30;
      v34 = v24;
    }
    else
    {
LABEL_78:
      v22 = 0;
      v34 = 0;
    }
    LOBYTE(v41) = v34;
    LOBYTE(v40) = v2;
    LOBYTE(v39) = v22;
    LOBYTE(v38) = v19;
    LOBYTE(v37) = v31;
    LODWORD(v36) = *(_DWORD *)(a2 + 48);
    sub_140052E64(v13, v17, &v48, a2, v36, v37, v38, v39, v40, v41, a2);
  }
LABEL_83:
  IofCompleteRequest((PIRP)a2, 0);
  return v6;
}
