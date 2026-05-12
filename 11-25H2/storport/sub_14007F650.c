/*
 * XREFs of sub_14007F650 @ 0x14007F650
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14007B5A0 @ 0x14007B5A0 (sub_14007B5A0.c)
 *     sub_14008D1F0 @ 0x14008D1F0 (sub_14008D1F0.c)
 *     sub_14008E83C @ 0x14008E83C (sub_14008E83C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14007F650(__int64 a1, __int64 a2)
{
  int v2; // edi
  _DWORD *v4; // rcx
  _DWORD *v6; // r15
  char v7; // r12
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  int v11; // esi
  const wchar_t *v12; // r9
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  __int64 v18; // rdx
  char v19; // r12
  char v20; // bl
  _BYTE *v21; // r8
  unsigned __int8 v22; // r10
  char v23; // r11
  int v24; // eax
  char v25; // r13
  char *v26; // r15
  unsigned int v27; // r9d
  unsigned int *v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // r13
  int v31; // r15d
  char v32; // r9
  _BYTE *v33; // rax
  unsigned int v34; // eax
  unsigned __int64 v35; // r9
  char v36; // al
  __int64 v38; // [rsp+20h] [rbp-130h]
  __int64 v39; // [rsp+28h] [rbp-128h]
  __int64 v40; // [rsp+30h] [rbp-120h]
  __int64 v41; // [rsp+38h] [rbp-118h]
  __int64 v42; // [rsp+40h] [rbp-110h]
  __int64 v43; // [rsp+48h] [rbp-108h]
  char v44; // [rsp+D0h] [rbp-80h]
  char v45; // [rsp+D1h] [rbp-7Fh]
  char v46; // [rsp+D2h] [rbp-7Eh]
  int v47; // [rsp+D8h] [rbp-78h]
  unsigned int v48; // [rsp+DCh] [rbp-74h]
  __int128 v49; // [rsp+E0h] [rbp-70h] BYREF
  GUID v50; // [rsp+F0h] [rbp-60h] BYREF
  __int128 v51; // [rsp+100h] [rbp-50h] BYREF
  _OWORD v52[2]; // [rsp+110h] [rbp-40h] BYREF

  v2 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  v6 = 0LL;
  v7 = 0;
  v51 = 0LL;
  v49 = 0LL;
  memset(v52, 0, sizeof(v52));
  if ( !v4 )
    goto LABEL_18;
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL);
  if ( v8 < 0x1C )
    goto LABEL_18;
  v6 = v4;
  if ( *(_WORD *)v4 != 1 )
    goto LABEL_18;
  v9 = v4[5];
  if ( v9 > 0x20 )
    goto LABEL_18;
  v10 = v6[4] + v9 + 24;
  if ( v10 < 0x1C )
    v10 = 28;
  if ( v6[1] == v10 && v8 >= v10 )
  {
    if ( v6[3] )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
      {
        v11 = -2147483631;
      }
      else
      {
        v7 = 1;
        v11 = sub_14008D1F0(a1, v52);
        if ( v11 >= 0 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 6064) + 53LL) )
            v11 = sub_14008E83C(
                    a1,
                    (unsigned int)v6[3],
                    (unsigned int)v6[4],
                    (char *)v6 + (unsigned int)v6[5] + 24,
                    v6[5],
                    v6 + 6,
                    v52);
          else
            v11 = -1073741637;
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
      sub_1400403EC(*(_QWORD *)(a1 + 16), (__int64)&v49);
      if ( (byte_1401694F7 & 2) != 0 )
      {
        v12 = (const wchar_t *)&unk_140149394;
        if ( *(_QWORD *)(a1 + 5080) )
          v12 = *(const wchar_t **)(a1 + 5080);
        sub_14007B5A0(
          (unsigned int)v6[5],
          (unsigned int)v6[4],
          (unsigned int)v6[2],
          *(_DWORD *)(a1 + 56),
          -1,
          255,
          255,
          (__int64)&v51,
          a1 + 5064,
          *((const wchar_t **)&v49 + 1),
          byte_1401489C4,
          byte_1401489C4,
          byte_1401489C4,
          v12,
          "TcgSetLockingObjectMetadata",
          (const char *)v52,
          v11,
          v6[2],
          v6[4],
          v6[5],
          v6[3],
          0);
      }
    }
  }
  v13 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v11;
  if ( v13 )
    goto LABEL_94;
  v50 = 0LL;
  IoGetActivityIdIrp(a2, &v50);
  v15 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_94;
    v17 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_93;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_94;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v16 = *(int **)(a2 + 56);
        if ( v16 )
          v2 = *v16;
        LODWORD(v39) = *(_DWORD *)(a2 + 48);
        LODWORD(v38) = v2;
        sub_140056AB0(v14, v15, &v50, a2, v38, v39);
      }
      goto LABEL_94;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_94;
    v17 = &stru_140149FE8;
LABEL_93:
    LODWORD(v38) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v14, v17, &v50, a2, v38);
    goto LABEL_94;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_94;
  v18 = *(_QWORD *)(v15 + 8);
  v19 = 0;
  v20 = 0;
  v45 = 0;
  v21 = 0LL;
  v44 = 0;
  v22 = 0;
  v23 = 0;
  v24 = *(unsigned __int8 *)(v18 + 2);
  v25 = 0;
  if ( (_BYTE)v24 != 40 )
  {
    v19 = *(_BYTE *)(v18 + 72);
    v21 = *(_BYTE **)(v18 + 32);
    v22 = *(_BYTE *)(v18 + 11);
    v20 = *(_BYTE *)(v18 + 4);
    goto LABEL_68;
  }
  v24 = *(_DWORD *)(v18 + 20);
  v26 = 0LL;
  v46 = 0;
  if ( v24 )
    goto LABEL_94;
  v27 = *(_DWORD *)(v18 + 56);
  v14 = 0LL;
  v47 = 0;
  v48 = v27;
  if ( !v27 )
    goto LABEL_65;
  v28 = (unsigned int *)(v18 + 120);
  *(_QWORD *)&v49 = v18 + 120;
  while ( 1 )
  {
    v29 = *v28;
    if ( (unsigned int)v29 >= 0x80 )
    {
      v30 = *(unsigned int *)(v18 + 16);
      if ( (unsigned int)v29 < (unsigned int)v30 )
        break;
    }
LABEL_58:
    v14 = (unsigned int)(v14 + 1);
    v28 = (unsigned int *)(v49 + 4);
    v47 = v14;
    *(_QWORD *)&v49 = v49 + 4;
    if ( (unsigned int)v14 >= v27 )
      goto LABEL_64;
  }
  if ( *(_DWORD *)(v29 + v18) != 64 )
  {
    v14 = (unsigned int)(*(_DWORD *)(v29 + v18) - 65);
    if ( *(_DWORD *)(v29 + v18) == 65 )
    {
      v14 = v29 + 56;
      if ( v29 + 56 <= v30 )
      {
        v46 = 1;
        if ( *(_BYTE *)(v29 + v18 + 10) )
          v26 = (char *)(v29 + v18 + 24);
        v20 = *(_BYTE *)(v29 + v18 + 8);
        v21 = *(_BYTE **)(v29 + v18 + 16);
        v22 = *(_BYTE *)(v29 + v18 + 9);
      }
    }
    else if ( *(_DWORD *)(v29 + v18) == 66 )
    {
      v14 = v29 + 40;
      if ( v29 + 40 <= v30 )
      {
        if ( *(_DWORD *)(v29 + v18 + 12) )
          v26 = (char *)(v29 + v18 + 32);
        v21 = *(_BYTE **)(v29 + v18 + 24);
        goto LABEL_63;
      }
    }
    goto LABEL_56;
  }
  v14 = v29 + 40;
  if ( v29 + 40 > v30 )
  {
LABEL_56:
    if ( v46 )
      goto LABEL_64;
    LODWORD(v14) = v47;
    v27 = v48;
    goto LABEL_58;
  }
  if ( *(_BYTE *)(v29 + v18 + 10) )
    v26 = (char *)(v29 + v18 + 24);
  v21 = *(_BYTE **)(v29 + v18 + 16);
LABEL_63:
  v22 = *(_BYTE *)(v29 + v18 + 9);
  v20 = *(_BYTE *)(v29 + v18 + 8);
LABEL_64:
  v24 = 0;
  v25 = 0;
LABEL_65:
  if ( !v26 )
  {
LABEL_68:
    v31 = v11;
    if ( !v24 )
      goto LABEL_69;
    goto LABEL_94;
  }
  v19 = *v26;
  v31 = v11;
LABEL_69:
  if ( ((v19 - 8) & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v18 + 3) == 1 || !v21 || !v22 )
      goto LABEL_89;
    v32 = 0;
    v14 = (unsigned __int64)&v21[v22];
    v33 = v21 + 8;
    if ( (unsigned __int8)((*v21 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v33 <= v14 )
      {
        v32 = 1;
        v23 = v21[1] & 0xF;
        v25 = v21[3];
        v45 = v21[2];
      }
    }
    else
    {
      if ( (unsigned __int64)v33 <= v14 )
      {
        v23 = v21[2] & 0xF;
        v34 = v22;
        if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
          v34 = (unsigned __int8)v21[7] + 8;
        v14 = (unsigned __int64)(v21 + 13);
        v35 = (unsigned __int64)&v21[v34];
        if ( (unsigned __int64)(v21 + 13) > v35 )
          v45 = 0;
        else
          v45 = v21[12];
        if ( (unsigned __int64)(v21 + 14) > v35 )
          v44 = 0;
        else
          v44 = *(_BYTE *)v14;
        v32 = 1;
      }
      v25 = v44;
    }
    if ( v32 )
    {
      LOBYTE(v2) = v45;
      v11 = v31;
      v36 = v25;
    }
    else
    {
LABEL_89:
      v23 = 0;
      v36 = 0;
    }
    LOBYTE(v43) = v36;
    LOBYTE(v42) = v2;
    LOBYTE(v41) = v23;
    LOBYTE(v40) = v20;
    LOBYTE(v39) = *(_BYTE *)(v18 + 3);
    LODWORD(v38) = *(_DWORD *)(a2 + 48);
    sub_140052E64(v14, v18, &v50, a2, v38, v39, v40, v41, v42, v43, a2);
  }
LABEL_94:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v11;
}
