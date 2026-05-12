/*
 * XREFs of sub_1400845D8 @ 0x1400845D8
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14007B5A0 @ 0x14007B5A0 (sub_14007B5A0.c)
 *     sub_14008D1F0 @ 0x14008D1F0 (sub_14008D1F0.c)
 *     sub_14008EAAC @ 0x14008EAAC (sub_14008EAAC.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400845D8(__int64 a1, __int64 a2)
{
  int v2; // r12d
  _DWORD *v4; // rdx
  _DWORD *v6; // rdi
  char v7; // si
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // eax
  int v12; // ebx
  char v13; // r11
  __int64 v14; // r9
  const wchar_t *v15; // rax
  __int64 v16; // rsi
  const wchar_t *v17; // r15
  int v18; // r9d
  bool v19; // zf
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  int *v22; // rax
  const EVENT_DESCRIPTOR *v23; // rdx
  __int64 v24; // rdx
  char v25; // r14
  char v26; // di
  _BYTE *v27; // r8
  unsigned __int8 v28; // r10
  char v29; // r11
  int v30; // eax
  char v31; // r15
  char *v32; // rsi
  unsigned int v33; // r9d
  unsigned int *v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // r15
  int v37; // esi
  char v38; // r9
  _BYTE *v39; // rax
  unsigned int v40; // eax
  unsigned __int64 v41; // r9
  char v42; // al
  __int64 v44; // [rsp+20h] [rbp-130h]
  __int64 v45; // [rsp+28h] [rbp-128h]
  __int64 v46; // [rsp+30h] [rbp-120h]
  __int64 v47; // [rsp+38h] [rbp-118h]
  __int64 v48; // [rsp+40h] [rbp-110h]
  __int64 v49; // [rsp+48h] [rbp-108h]
  char v50; // [rsp+D0h] [rbp-80h]
  char v51; // [rsp+D1h] [rbp-7Fh]
  int v52; // [rsp+D4h] [rbp-7Ch]
  char v53; // [rsp+D8h] [rbp-78h]
  int v54; // [rsp+DCh] [rbp-74h]
  int v55; // [rsp+DCh] [rbp-74h]
  unsigned int v56; // [rsp+E0h] [rbp-70h]
  __int128 v57; // [rsp+E8h] [rbp-68h] BYREF
  GUID v58; // [rsp+F8h] [rbp-58h] BYREF
  _OWORD v59[2]; // [rsp+108h] [rbp-48h] BYREF

  v2 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  v6 = 0LL;
  v7 = 0;
  v57 = 0LL;
  memset(v59, 0, sizeof(v59));
  if ( !v4 )
    goto LABEL_15;
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL);
  if ( v8 < 0x20 )
    goto LABEL_15;
  v6 = v4;
  if ( *(_WORD *)v4 != 1 )
    goto LABEL_15;
  v9 = v4[5];
  if ( v9 > 0x20 )
    goto LABEL_15;
  v10 = v4[6];
  if ( v10 > 0x20 )
    goto LABEL_15;
  v11 = v10 + v9 + 28;
  if ( v11 < 0x20 )
    v11 = 32;
  if ( v6[1] != v11 || v8 < v11 )
  {
LABEL_15:
    v12 = -1073741811;
    goto LABEL_16;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
  {
    v12 = -2147483631;
LABEL_16:
    v52 = v12;
    goto LABEL_17;
  }
  v7 = 1;
  v52 = sub_14008D1F0(a1, v59);
  v12 = v52;
  if ( v52 >= 0 )
  {
    v12 = sub_14008EAAC(
            a1,
            v6[3],
            v6[4],
            v6[5],
            (__int64)(v6 + 7),
            v6[6],
            (__int64)v6 + (unsigned int)v6[5] + 28,
            (__int64)v59);
    v52 = v12;
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
LABEL_17:
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v12 < 0 )
  {
    if ( v7 )
    {
      v54 = *(_DWORD *)(a1 + 104);
      sub_1400403EC(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v57);
      v14 = *(_QWORD *)(a1 + 24);
      if ( (byte_1401694F7 & 2) != 0 )
      {
        v15 = *(const wchar_t **)(v14 + 5080);
        v16 = v14 + 5064;
        v17 = (const wchar_t *)&unk_140149394;
        v18 = *(_DWORD *)(v14 + 56);
        if ( v15 )
          v17 = v15;
        sub_14007B5A0(
          (unsigned int)v6[5],
          (int)v6[4],
          (int)v6[3],
          v18,
          v13,
          SBYTE1(v54),
          SBYTE2(v54),
          a1 + 2104,
          v16,
          *((const wchar_t **)&v57 + 1),
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v17,
          "TcgSetSpAuthorityKey",
          (const char *)v59,
          v52,
          v6[3],
          v6[4],
          v6[5],
          v6[6],
          0);
        v12 = v52;
      }
    }
  }
  v19 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v12;
  if ( v19 )
    goto LABEL_92;
  v58 = 0LL;
  IoGetActivityIdIrp(a2, &v58);
  v21 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v21 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_92;
    v23 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_91;
  }
  if ( *(_BYTE *)v21 != 15 )
  {
    if ( *(_BYTE *)v21 != 27 )
      goto LABEL_92;
    if ( *(_BYTE *)(v21 + 1) == 7 && !*(_DWORD *)(v21 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v22 = *(int **)(a2 + 56);
        if ( v22 )
          v2 = *v22;
        LODWORD(v45) = *(_DWORD *)(a2 + 48);
        LODWORD(v44) = v2;
        sub_140056AB0(v20, v21, &v58, a2, v44, v45);
      }
      goto LABEL_92;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_92;
    v23 = &stru_140149FE8;
LABEL_91:
    LODWORD(v44) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v20, v23, &v58, a2, v44);
    goto LABEL_92;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_92;
  v24 = *(_QWORD *)(v21 + 8);
  v25 = 0;
  v26 = 0;
  v51 = 0;
  v27 = 0LL;
  v50 = 0;
  v28 = 0;
  v29 = 0;
  v30 = *(unsigned __int8 *)(v24 + 2);
  v31 = 0;
  if ( (_BYTE)v30 != 40 )
  {
    v25 = *(_BYTE *)(v24 + 72);
    v27 = *(_BYTE **)(v24 + 32);
    v28 = *(_BYTE *)(v24 + 11);
    v26 = *(_BYTE *)(v24 + 4);
    goto LABEL_66;
  }
  v30 = *(_DWORD *)(v24 + 20);
  v32 = 0LL;
  v53 = 0;
  if ( v30 )
    goto LABEL_92;
  v33 = *(_DWORD *)(v24 + 56);
  v20 = 0LL;
  v55 = 0;
  v56 = v33;
  if ( !v33 )
    goto LABEL_63;
  v34 = (unsigned int *)(v24 + 120);
  *(_QWORD *)&v57 = v24 + 120;
  while ( 1 )
  {
    v35 = *v34;
    if ( (unsigned int)v35 >= 0x80 )
    {
      v36 = *(unsigned int *)(v24 + 16);
      if ( (unsigned int)v35 < (unsigned int)v36 )
        break;
    }
LABEL_56:
    v20 = (unsigned int)(v20 + 1);
    v34 = (unsigned int *)(v57 + 4);
    v55 = v20;
    *(_QWORD *)&v57 = v57 + 4;
    if ( (unsigned int)v20 >= v33 )
      goto LABEL_62;
  }
  if ( *(_DWORD *)(v35 + v24) != 64 )
  {
    v20 = (unsigned int)(*(_DWORD *)(v35 + v24) - 65);
    if ( *(_DWORD *)(v35 + v24) == 65 )
    {
      v20 = v35 + 56;
      if ( v35 + 56 <= v36 )
      {
        v53 = 1;
        if ( *(_BYTE *)(v35 + v24 + 10) )
          v32 = (char *)(v35 + v24 + 24);
        v26 = *(_BYTE *)(v35 + v24 + 8);
        v27 = *(_BYTE **)(v35 + v24 + 16);
        v28 = *(_BYTE *)(v35 + v24 + 9);
      }
    }
    else if ( *(_DWORD *)(v35 + v24) == 66 )
    {
      v20 = v35 + 40;
      if ( v35 + 40 <= v36 )
      {
        if ( *(_DWORD *)(v35 + v24 + 12) )
          v32 = (char *)(v35 + v24 + 32);
        v27 = *(_BYTE **)(v35 + v24 + 24);
        goto LABEL_61;
      }
    }
    goto LABEL_54;
  }
  v20 = v35 + 40;
  if ( v35 + 40 > v36 )
  {
LABEL_54:
    if ( v53 )
      goto LABEL_62;
    LODWORD(v20) = v55;
    v33 = v56;
    goto LABEL_56;
  }
  if ( *(_BYTE *)(v35 + v24 + 10) )
    v32 = (char *)(v35 + v24 + 24);
  v27 = *(_BYTE **)(v35 + v24 + 16);
LABEL_61:
  v28 = *(_BYTE *)(v35 + v24 + 9);
  v26 = *(_BYTE *)(v35 + v24 + 8);
LABEL_62:
  v30 = 0;
  v31 = 0;
LABEL_63:
  if ( !v32 )
  {
LABEL_66:
    v37 = v12;
    if ( !v30 )
      goto LABEL_67;
    goto LABEL_92;
  }
  v25 = *v32;
  v37 = v12;
LABEL_67:
  if ( ((v25 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v24 + 3) == 1 || !v27 || !v28 )
      goto LABEL_87;
    v38 = 0;
    v20 = (unsigned __int64)&v27[v28];
    v39 = v27 + 8;
    if ( (unsigned __int8)((*v27 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v39 <= v20 )
      {
        v38 = 1;
        v29 = v27[1] & 0xF;
        v31 = v27[3];
        v51 = v27[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v39 <= v20 )
      {
        v29 = v27[2] & 0xF;
        v40 = v28;
        if ( (unsigned int)(unsigned __int8)v27[7] + 8 <= v28 )
          v40 = (unsigned __int8)v27[7] + 8;
        v20 = (unsigned __int64)(v27 + 13);
        v41 = (unsigned __int64)&v27[v40];
        if ( (unsigned __int64)(v27 + 13) > v41 )
          v51 = 0;
        else
          v51 = v27[12];
        if ( (unsigned __int64)(v27 + 14) > v41 )
          v50 = 0;
        else
          v50 = *(_BYTE *)v20;
        v38 = 1;
      }
      v31 = v50;
    }
    if ( v38 )
    {
      LOBYTE(v2) = v51;
      v12 = v37;
      v42 = v31;
    }
    else
    {
LABEL_87:
      v29 = 0;
      v42 = 0;
    }
    LOBYTE(v49) = v42;
    LOBYTE(v48) = v2;
    LOBYTE(v47) = v29;
    LOBYTE(v46) = v26;
    LOBYTE(v45) = *(_BYTE *)(v24 + 3);
    LODWORD(v44) = *(_DWORD *)(a2 + 48);
    sub_140052E64(v20, v24, &v58, a2, v44, v45, v46, v47, v48, v49, a2);
  }
LABEL_92:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v12;
}
