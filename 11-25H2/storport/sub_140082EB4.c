/*
 * XREFs of sub_140082EB4 @ 0x140082EB4
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14007B5A0 @ 0x14007B5A0 (sub_14007B5A0.c)
 *     sub_14008D1F0 @ 0x14008D1F0 (sub_14008D1F0.c)
 *     sub_14008E060 @ 0x14008E060 (sub_14008E060.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140082EB4(__int64 a1, __int64 a2)
{
  int v2; // r14d
  __int64 v4; // rdx
  __int64 v6; // rbx
  char v7; // si
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // r12d
  int v12; // edx
  char v13; // r11
  __int64 v14; // r9
  const wchar_t *v15; // rsi
  bool v16; // zf
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  int *v19; // rax
  const EVENT_DESCRIPTOR *v20; // rdx
  __int64 v21; // rdx
  char v22; // si
  char v23; // r11
  _BYTE *v24; // r8
  unsigned __int8 v25; // r10
  char v26; // bl
  int v27; // eax
  char v28; // r13
  char *v29; // rdi
  unsigned int v30; // r9d
  unsigned int *v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // r13
  int v34; // edi
  char v35; // r9
  _BYTE *v36; // rax
  unsigned int v37; // eax
  unsigned __int64 v38; // r9
  char v39; // al
  __int64 v41; // [rsp+20h] [rbp-130h]
  __int64 v42; // [rsp+28h] [rbp-128h]
  __int64 v43; // [rsp+30h] [rbp-120h]
  __int64 v44; // [rsp+38h] [rbp-118h]
  __int64 v45; // [rsp+40h] [rbp-110h]
  __int64 v46; // [rsp+48h] [rbp-108h]
  char v47; // [rsp+D0h] [rbp-80h]
  char v48; // [rsp+D1h] [rbp-7Fh]
  char v49; // [rsp+D2h] [rbp-7Eh]
  int v50; // [rsp+D4h] [rbp-7Ch]
  int v51; // [rsp+D8h] [rbp-78h]
  unsigned int v52; // [rsp+DCh] [rbp-74h]
  __int128 v53; // [rsp+E0h] [rbp-70h] BYREF
  GUID v54; // [rsp+F0h] [rbp-60h] BYREF
  _OWORD v55[2]; // [rsp+100h] [rbp-50h] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 24);
  v6 = 0LL;
  v7 = 0;
  v53 = 0LL;
  memset(v55, 0, sizeof(v55));
  if ( !v4 )
    goto LABEL_14;
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL);
  if ( v8 < 0x14 )
    goto LABEL_14;
  v6 = v4;
  if ( *(_WORD *)v4 != 1 )
    goto LABEL_14;
  v9 = *(_DWORD *)(v4 + 12);
  if ( v9 > 0x20 )
    goto LABEL_14;
  v10 = v9 + 16;
  if ( v10 < 0x14 )
    v10 = 20;
  if ( *(_DWORD *)(v4 + 4) == v10 && v8 >= v10 )
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
    {
      v11 = -2147483631;
    }
    else
    {
      v7 = 1;
      v11 = sub_14008D1F0(a1, v55);
      if ( v11 >= 0 )
      {
        LOBYTE(v12) = *(_BYTE *)(v6 + 8) & 1;
        v11 = sub_14008E060(a1, v12, *(_DWORD *)(v6 + 12), (int)v6 + 16, (__int64)v55);
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
      v50 = *(_DWORD *)(a1 + 104);
      sub_1400403EC(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v53);
      v14 = *(_QWORD *)(a1 + 24);
      if ( (byte_1401694F7 & 2) != 0 )
      {
        v15 = (const wchar_t *)&unk_140149394;
        if ( *(_QWORD *)(v14 + 5080) )
          v15 = *(const wchar_t **)(v14 + 5080);
        sub_14007B5A0(
          *(unsigned int *)(v6 + 8),
          a1 + 242,
          a1 + 177,
          *(_DWORD *)(v14 + 56),
          v13,
          SBYTE1(v50),
          SBYTE2(v50),
          a1 + 2104,
          v14 + 5064,
          *((const wchar_t **)&v53 + 1),
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          v15,
          "TcgRevertConfiguration",
          (const char *)v55,
          v11,
          *(_DWORD *)(v6 + 8),
          *(_DWORD *)(v6 + 12),
          0,
          0,
          0);
      }
    }
  }
  v16 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v11;
  if ( v16 )
    goto LABEL_90;
  v54 = 0LL;
  IoGetActivityIdIrp(a2, &v54);
  v18 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v18 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_90;
    v20 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_89;
  }
  if ( *(_BYTE *)v18 != 15 )
  {
    if ( *(_BYTE *)v18 != 27 )
      goto LABEL_90;
    if ( *(_BYTE *)(v18 + 1) == 7 && !*(_DWORD *)(v18 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v19 = *(int **)(a2 + 56);
        if ( v19 )
          v2 = *v19;
        LODWORD(v42) = *(_DWORD *)(a2 + 48);
        LODWORD(v41) = v2;
        sub_140056AB0(v17, v18, &v54, a2, v41, v42);
      }
      goto LABEL_90;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_90;
    v20 = &stru_140149FE8;
LABEL_89:
    LODWORD(v41) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v17, v20, &v54, a2, v41);
    goto LABEL_90;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_90;
  v21 = *(_QWORD *)(v18 + 8);
  v22 = 0;
  v23 = 0;
  v48 = 0;
  v24 = 0LL;
  v47 = 0;
  v25 = 0;
  v26 = 0;
  v27 = *(unsigned __int8 *)(v21 + 2);
  v28 = 0;
  if ( (_BYTE)v27 != 40 )
  {
    v22 = *(_BYTE *)(v21 + 72);
    v24 = *(_BYTE **)(v21 + 32);
    v25 = *(_BYTE *)(v21 + 11);
    v23 = *(_BYTE *)(v21 + 4);
    goto LABEL_64;
  }
  v27 = *(_DWORD *)(v21 + 20);
  v29 = 0LL;
  v49 = 0;
  if ( v27 )
    goto LABEL_90;
  v30 = *(_DWORD *)(v21 + 56);
  v17 = 0LL;
  v51 = 0;
  v52 = v30;
  if ( !v30 )
    goto LABEL_61;
  v31 = (unsigned int *)(v21 + 120);
  *(_QWORD *)&v53 = v21 + 120;
  while ( 1 )
  {
    v32 = *v31;
    if ( (unsigned int)v32 >= 0x80 )
    {
      v33 = *(unsigned int *)(v21 + 16);
      if ( (unsigned int)v32 < (unsigned int)v33 )
        break;
    }
LABEL_54:
    v17 = (unsigned int)(v17 + 1);
    v31 = (unsigned int *)(v53 + 4);
    v51 = v17;
    *(_QWORD *)&v53 = v53 + 4;
    if ( (unsigned int)v17 >= v30 )
      goto LABEL_60;
  }
  if ( *(_DWORD *)(v32 + v21) != 64 )
  {
    v17 = (unsigned int)(*(_DWORD *)(v32 + v21) - 65);
    if ( *(_DWORD *)(v32 + v21) == 65 )
    {
      v17 = v32 + 56;
      if ( v32 + 56 <= v33 )
      {
        v49 = 1;
        if ( *(_BYTE *)(v32 + v21 + 10) )
          v29 = (char *)(v32 + v21 + 24);
        v23 = *(_BYTE *)(v32 + v21 + 8);
        v24 = *(_BYTE **)(v32 + v21 + 16);
        v25 = *(_BYTE *)(v32 + v21 + 9);
      }
    }
    else if ( *(_DWORD *)(v32 + v21) == 66 )
    {
      v17 = v32 + 40;
      if ( v32 + 40 <= v33 )
      {
        if ( *(_DWORD *)(v32 + v21 + 12) )
          v29 = (char *)(v32 + v21 + 32);
        v24 = *(_BYTE **)(v32 + v21 + 24);
        goto LABEL_59;
      }
    }
    goto LABEL_52;
  }
  v17 = v32 + 40;
  if ( v32 + 40 > v33 )
  {
LABEL_52:
    if ( v49 )
      goto LABEL_60;
    LODWORD(v17) = v51;
    v30 = v52;
    goto LABEL_54;
  }
  if ( *(_BYTE *)(v32 + v21 + 10) )
    v29 = (char *)(v32 + v21 + 24);
  v24 = *(_BYTE **)(v32 + v21 + 16);
LABEL_59:
  v25 = *(_BYTE *)(v32 + v21 + 9);
  v23 = *(_BYTE *)(v32 + v21 + 8);
LABEL_60:
  v27 = 0;
  v28 = 0;
LABEL_61:
  if ( !v29 )
  {
LABEL_64:
    v34 = v11;
    if ( !v27 )
      goto LABEL_65;
    goto LABEL_90;
  }
  v22 = *v29;
  v34 = v11;
LABEL_65:
  if ( ((v22 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v21 + 3) == 1 || !v24 || !v25 )
      goto LABEL_85;
    v35 = 0;
    v17 = (unsigned __int64)&v24[v25];
    v36 = v24 + 8;
    if ( (unsigned __int8)((*v24 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v36 <= v17 )
      {
        v35 = 1;
        v26 = v24[1] & 0xF;
        v28 = v24[3];
        v48 = v24[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v36 <= v17 )
      {
        v26 = v24[2] & 0xF;
        v37 = v25;
        if ( (unsigned int)(unsigned __int8)v24[7] + 8 <= v25 )
          v37 = (unsigned __int8)v24[7] + 8;
        v17 = (unsigned __int64)(v24 + 13);
        v38 = (unsigned __int64)&v24[v37];
        if ( (unsigned __int64)(v24 + 13) > v38 )
          v48 = 0;
        else
          v48 = v24[12];
        if ( (unsigned __int64)(v24 + 14) > v38 )
          v47 = 0;
        else
          v47 = *(_BYTE *)v17;
        v35 = 1;
      }
      v28 = v47;
    }
    if ( v35 )
    {
      LOBYTE(v2) = v48;
      v11 = v34;
      v39 = v28;
    }
    else
    {
LABEL_85:
      v26 = 0;
      v39 = 0;
    }
    LOBYTE(v46) = v39;
    LOBYTE(v45) = v2;
    LOBYTE(v44) = v26;
    LOBYTE(v43) = v23;
    LOBYTE(v42) = *(_BYTE *)(v21 + 3);
    LODWORD(v41) = *(_DWORD *)(a2 + 48);
    sub_140052E64(v17, v21, &v54, a2, v41, v42, v43, v44, v45, v46, a2);
  }
LABEL_90:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v11;
}
