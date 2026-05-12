/*
 * XREFs of sub_14007C48C @ 0x14007C48C
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14007B5A0 @ 0x14007B5A0 (sub_14007B5A0.c)
 *     sub_14008BC18 @ 0x14008BC18 (sub_14008BC18.c)
 *     sub_14008D1F0 @ 0x14008D1F0 (sub_14008D1F0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14007C48C(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v4; // rdx
  __int64 v6; // r13
  char v7; // r12
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // esi
  int v12; // r8d
  const wchar_t *v13; // r8
  bool v14; // zf
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int *v17; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  __int64 v19; // rdx
  char v20; // r12
  char v21; // r11
  _BYTE *v22; // r8
  unsigned __int8 v23; // r10
  char v24; // bl
  int v25; // eax
  char v26; // r13
  char *v27; // r15
  unsigned int v28; // r9d
  unsigned int *v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // r13
  int v32; // r15d
  char v33; // r9
  _BYTE *v34; // rax
  unsigned int v35; // eax
  unsigned __int64 v36; // r9
  char v37; // al
  __int64 v39; // [rsp+20h] [rbp-130h]
  __int64 v40; // [rsp+28h] [rbp-128h]
  __int64 v41; // [rsp+30h] [rbp-120h]
  __int64 v42; // [rsp+38h] [rbp-118h]
  __int64 v43; // [rsp+40h] [rbp-110h]
  __int64 v44; // [rsp+48h] [rbp-108h]
  char v45; // [rsp+D0h] [rbp-80h]
  char v46; // [rsp+D1h] [rbp-7Fh]
  char v47; // [rsp+D2h] [rbp-7Eh]
  int v48; // [rsp+D8h] [rbp-78h]
  unsigned int v49; // [rsp+DCh] [rbp-74h]
  __int128 v50; // [rsp+E0h] [rbp-70h] BYREF
  GUID v51; // [rsp+F0h] [rbp-60h] BYREF
  __int128 v52; // [rsp+100h] [rbp-50h] BYREF
  _OWORD v53[2]; // [rsp+110h] [rbp-40h] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 24);
  v6 = 0LL;
  v7 = 0;
  v52 = 0LL;
  v50 = 0LL;
  memset(v53, 0, sizeof(v53));
  if ( !v4 )
    goto LABEL_18;
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL);
  if ( v8 < 0x18 )
    goto LABEL_18;
  v6 = v4;
  if ( *(_WORD *)v4 != 1 )
    goto LABEL_18;
  v9 = *(_DWORD *)(v4 + 16);
  if ( v9 > 0x20 )
    goto LABEL_18;
  v10 = v9 + 20;
  if ( v10 < 0x18 )
    v10 = 24;
  if ( *(_DWORD *)(v4 + 4) == v10 && v8 >= v10 )
  {
    if ( *(_DWORD *)(v4 + 12) )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
      {
        v11 = -2147483631;
      }
      else
      {
        v7 = 1;
        v11 = sub_14008D1F0(a1, v53);
        if ( v11 >= 0 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 6064) + 53LL) )
          {
            LOBYTE(v12) = *(_BYTE *)(v6 + 8) & 1;
            v11 = sub_14008BC18(a1, *(_DWORD *)(v6 + 12), v12, *(_DWORD *)(v6 + 16), v6 + 20, (__int64)v53);
          }
          else
          {
            v11 = -1073741637;
          }
        }
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
      }
    }
    else
    {
      v11 = -1073741637;
    }
  }
  else
  {
LABEL_18:
    v11 = -1073741811;
  }
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v11 < 0 )
  {
    if ( v7 )
    {
      sub_1400403EC(*(_QWORD *)(a1 + 16), (__int64)&v50);
      if ( (byte_1401694F7 & 2) != 0 )
      {
        v13 = (const wchar_t *)&unk_140149394;
        if ( *(_QWORD *)(a1 + 5080) )
          v13 = *(const wchar_t **)(a1 + 5080);
        sub_14007B5A0(
          *(unsigned int *)(v6 + 16),
          *(unsigned int *)(v6 + 8),
          (__int64)v13,
          *(_DWORD *)(a1 + 56),
          -1,
          255,
          255,
          (__int64)&v52,
          a1 + 5064,
          *((const wchar_t **)&v50 + 1),
          byte_1401489C4,
          byte_1401489C4,
          byte_1401489C4,
          v13,
          "TcgDeassignLockingObject",
          (const char *)v53,
          v11,
          *(_DWORD *)(v6 + 8),
          *(_DWORD *)(v6 + 16),
          *(_DWORD *)(v6 + 12),
          0,
          0);
      }
    }
  }
  v14 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v11;
  if ( v14 )
    goto LABEL_94;
  v51 = 0LL;
  IoGetActivityIdIrp(a2, &v51);
  v16 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v16 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_94;
    v18 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_93;
  }
  if ( *(_BYTE *)v16 != 15 )
  {
    if ( *(_BYTE *)v16 != 27 )
      goto LABEL_94;
    if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v17 = *(int **)(a2 + 56);
        if ( v17 )
          v2 = *v17;
        LODWORD(v40) = *(_DWORD *)(a2 + 48);
        LODWORD(v39) = v2;
        sub_140056AB0(v15, v16, &v51, a2, v39, v40);
      }
      goto LABEL_94;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_94;
    v18 = &stru_140149FE8;
LABEL_93:
    LODWORD(v39) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v15, v18, &v51, a2, v39);
    goto LABEL_94;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_94;
  v19 = *(_QWORD *)(v16 + 8);
  v20 = 0;
  v21 = 0;
  v46 = 0;
  v22 = 0LL;
  v45 = 0;
  v23 = 0;
  v24 = 0;
  v25 = *(unsigned __int8 *)(v19 + 2);
  v26 = 0;
  if ( (_BYTE)v25 != 40 )
  {
    v20 = *(_BYTE *)(v19 + 72);
    v22 = *(_BYTE **)(v19 + 32);
    v23 = *(_BYTE *)(v19 + 11);
    v21 = *(_BYTE *)(v19 + 4);
    goto LABEL_68;
  }
  v25 = *(_DWORD *)(v19 + 20);
  v27 = 0LL;
  v47 = 0;
  if ( v25 )
    goto LABEL_94;
  v28 = *(_DWORD *)(v19 + 56);
  v15 = 0LL;
  v48 = 0;
  v49 = v28;
  if ( !v28 )
    goto LABEL_65;
  v29 = (unsigned int *)(v19 + 120);
  *(_QWORD *)&v50 = v19 + 120;
  while ( 1 )
  {
    v30 = *v29;
    if ( (unsigned int)v30 >= 0x80 )
    {
      v31 = *(unsigned int *)(v19 + 16);
      if ( (unsigned int)v30 < (unsigned int)v31 )
        break;
    }
LABEL_58:
    v15 = (unsigned int)(v15 + 1);
    v29 = (unsigned int *)(v50 + 4);
    v48 = v15;
    *(_QWORD *)&v50 = v50 + 4;
    if ( (unsigned int)v15 >= v28 )
      goto LABEL_64;
  }
  if ( *(_DWORD *)(v30 + v19) != 64 )
  {
    v15 = (unsigned int)(*(_DWORD *)(v30 + v19) - 65);
    if ( *(_DWORD *)(v30 + v19) == 65 )
    {
      v15 = v30 + 56;
      if ( v30 + 56 <= v31 )
      {
        v47 = 1;
        if ( *(_BYTE *)(v30 + v19 + 10) )
          v27 = (char *)(v30 + v19 + 24);
        v21 = *(_BYTE *)(v30 + v19 + 8);
        v22 = *(_BYTE **)(v30 + v19 + 16);
        v23 = *(_BYTE *)(v30 + v19 + 9);
      }
    }
    else if ( *(_DWORD *)(v30 + v19) == 66 )
    {
      v15 = v30 + 40;
      if ( v30 + 40 <= v31 )
      {
        if ( *(_DWORD *)(v30 + v19 + 12) )
          v27 = (char *)(v30 + v19 + 32);
        v22 = *(_BYTE **)(v30 + v19 + 24);
        goto LABEL_63;
      }
    }
    goto LABEL_56;
  }
  v15 = v30 + 40;
  if ( v30 + 40 > v31 )
  {
LABEL_56:
    if ( v47 )
      goto LABEL_64;
    LODWORD(v15) = v48;
    v28 = v49;
    goto LABEL_58;
  }
  if ( *(_BYTE *)(v30 + v19 + 10) )
    v27 = (char *)(v30 + v19 + 24);
  v22 = *(_BYTE **)(v30 + v19 + 16);
LABEL_63:
  v23 = *(_BYTE *)(v30 + v19 + 9);
  v21 = *(_BYTE *)(v30 + v19 + 8);
LABEL_64:
  v25 = 0;
  v26 = 0;
LABEL_65:
  if ( !v27 )
  {
LABEL_68:
    v32 = v11;
    if ( !v25 )
      goto LABEL_69;
    goto LABEL_94;
  }
  v20 = *v27;
  v32 = v11;
LABEL_69:
  if ( ((v20 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v19 + 3) == 1 || !v22 || !v23 )
      goto LABEL_89;
    v33 = 0;
    v15 = (unsigned __int64)&v22[v23];
    v34 = v22 + 8;
    if ( (unsigned __int8)((*v22 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v34 <= v15 )
      {
        v33 = 1;
        v24 = v22[1] & 0xF;
        v26 = v22[3];
        v46 = v22[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v34 <= v15 )
      {
        v24 = v22[2] & 0xF;
        v35 = v23;
        if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
          v35 = (unsigned __int8)v22[7] + 8;
        v15 = (unsigned __int64)(v22 + 13);
        v36 = (unsigned __int64)&v22[v35];
        if ( (unsigned __int64)(v22 + 13) > v36 )
          v46 = 0;
        else
          v46 = v22[12];
        if ( (unsigned __int64)(v22 + 14) > v36 )
          v45 = 0;
        else
          v45 = *(_BYTE *)v15;
        v33 = 1;
      }
      v26 = v45;
    }
    if ( v33 )
    {
      LOBYTE(v2) = v46;
      v11 = v32;
      v37 = v26;
    }
    else
    {
LABEL_89:
      v24 = 0;
      v37 = 0;
    }
    LOBYTE(v44) = v37;
    LOBYTE(v43) = v2;
    LOBYTE(v42) = v24;
    LOBYTE(v41) = v21;
    LOBYTE(v40) = *(_BYTE *)(v19 + 3);
    LODWORD(v39) = *(_DWORD *)(a2 + 48);
    sub_140052E64(v15, v19, &v51, a2, v39, v40, v41, v42, v43, v44, a2);
  }
LABEL_94:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v11;
}
