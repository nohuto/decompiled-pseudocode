/*
 * XREFs of sub_140034798 @ 0x140034798
 * Callers:
 *     sub_1401B3ED0 @ 0x1401B3ED0 (sub_1401B3ED0.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14008D1F0 @ 0x14008D1F0 (sub_14008D1F0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140034798(__int64 a1, __int64 a2)
{
  int *v2; // rsi
  int v3; // ebx
  __int64 v4; // rax
  int v7; // ecx
  size_t v8; // r14
  unsigned int v9; // esi
  bool v10; // zf
  char *v11; // rcx
  __int64 v12; // rdx
  int v14; // eax
  int *v15; // rax
  unsigned __int64 v16; // rdx
  char *v17; // rax
  char v18; // bp
  unsigned int v19; // eax
  char v20; // r12
  char v21; // r11
  char v22; // al
  char v23; // r15
  _BYTE *v24; // r9
  unsigned __int8 v25; // r10
  char *v26; // r11
  unsigned int *v27; // r13
  int v28; // eax
  char v29; // al
  __int64 v30; // rax
  unsigned __int64 v31; // r14
  char v32; // cl
  char v33; // r8
  char v34; // [rsp+60h] [rbp-88h]
  char v35; // [rsp+61h] [rbp-87h]
  int v36; // [rsp+64h] [rbp-84h]
  unsigned int v37; // [rsp+68h] [rbp-80h]
  __int128 v38; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v39[32]; // [rsp+80h] [rbp-68h] BYREF

  v2 = *(int **)(a2 + 24);
  LOBYTE(v3) = 0;
  v4 = *(_QWORD *)(a2 + 184);
  memset(v39, 0, sizeof(v39));
  v7 = v2[1];
  v8 = *(unsigned int *)(v4 + 8);
  if ( !v7 )
  {
    memset_0(v2, 0, v8);
    if ( (unsigned int)v8 < 8 )
    {
      v9 = -1073741789;
      goto LABEL_56;
    }
    if ( (unsigned int)v8 < 0xC )
    {
      *v2 = 16;
      v2[1] = 16;
      *(_QWORD *)(a2 + 56) = 8LL;
      goto LABEL_3;
    }
    if ( (*(_BYTE *)(a1 + 136) & 1) != 0 )
    {
      v14 = (unsigned int)v8 < 0x10 ? 12 : 16;
      *v2 = v14;
      v2[1] = v14;
    }
    else
    {
      if ( (unsigned int)v8 >= 0x10 )
      {
        if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 3u) == 1 )
        {
          v9 = -2147483631;
          goto LABEL_56;
        }
        v28 = sub_14008D1F0(a1, v39);
        *v2 = 16;
        v2[1] = 16;
        if ( v28 >= 0 && **(_DWORD **)(a1 + 3592) == 512 )
        {
          v2[3] = 2;
          v29 = 1;
        }
        else
        {
          v29 = 0;
        }
        *((_BYTE *)v2 + 8) = v29;
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 3u);
LABEL_15:
        *(_QWORD *)(a2 + 56) = (unsigned int)v2[1];
        goto LABEL_3;
      }
      *v2 = 12;
      v2[1] = 12;
    }
    *((_BYTE *)v2 + 8) = 0;
    goto LABEL_15;
  }
  if ( v7 != 1 )
  {
    v9 = -1073741637;
LABEL_56:
    *(_QWORD *)(a2 + 56) = 0LL;
    goto LABEL_4;
  }
LABEL_3:
  v9 = 0;
LABEL_4:
  v10 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v10 )
    goto LABEL_8;
  v38 = 0LL;
  IoGetActivityIdIrp(a2, &v38);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_1401694F2 & 8) != 0 )
      sub_140052F3C(v11, &unk_140148B18, &v38, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_8;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 == 27 )
    {
      if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) != 0 )
        {
          v15 = *(int **)(a2 + 56);
          if ( v15 )
            v3 = *v15;
          sub_140056AB0((_DWORD)v11, v12, (unsigned int)&v38, a2, v3, *(_DWORD *)(a2 + 48));
        }
      }
      else if ( (byte_1401694F2 & 0x20) != 0 )
      {
        sub_140052F3C(v11, &unk_140149FE8, &v38, a2, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_8;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_8;
  v16 = *(_QWORD *)(v12 + 8);
  v23 = 0;
  v24 = 0LL;
  v34 = 0;
  v25 = 0;
  v18 = 0;
  v21 = 0;
  v20 = 0;
  if ( *(_BYTE *)(v16 + 2) != 40 )
  {
    v32 = *(_BYTE *)(v16 + 72);
    v24 = *(_BYTE **)(v16 + 32);
    v25 = *(_BYTE *)(v16 + 11);
    v23 = *(_BYTE *)(v16 + 4);
    if ( !*(_BYTE *)(v16 + 2) )
      goto LABEL_88;
    goto LABEL_8;
  }
  v26 = 0LL;
  v35 = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_8;
  LODWORD(v11) = 0;
  v36 = 0;
  v37 = *(_DWORD *)(v16 + 56);
  if ( !v37 )
    goto LABEL_85;
  v27 = (unsigned int *)(v16 + 120);
  while ( 1 )
  {
    v30 = *v27;
    if ( (unsigned int)v30 >= 0x80 )
    {
      v31 = *(unsigned int *)(v16 + 16);
      if ( (unsigned int)v30 < (unsigned int)v31 )
        break;
    }
LABEL_78:
    LODWORD(v11) = (_DWORD)v11 + 1;
    ++v27;
    v36 = (int)v11;
    if ( (unsigned int)v11 >= v37 )
      goto LABEL_85;
  }
  if ( *(_DWORD *)(v30 + v16) != 64 )
  {
    LODWORD(v11) = *(_DWORD *)(v30 + v16) - 65;
    if ( *(_DWORD *)(v30 + v16) == 65 )
    {
      LODWORD(v11) = v30 + 56;
      if ( v30 + 56 <= v31 )
      {
        v35 = 1;
        if ( *(_BYTE *)(v30 + v16 + 10) )
          v26 = (char *)(v30 + v16 + 24);
        v23 = *(_BYTE *)(v30 + v16 + 8);
        v24 = *(_BYTE **)(v30 + v16 + 16);
        v25 = *(_BYTE *)(v30 + v16 + 9);
      }
    }
    else if ( *(_DWORD *)(v30 + v16) == 66 )
    {
      LODWORD(v11) = v30 + 40;
      if ( v30 + 40 <= v31 )
      {
        if ( *(_DWORD *)(v30 + v16 + 12) )
          v26 = (char *)(v30 + v16 + 32);
        v24 = *(_BYTE **)(v30 + v16 + 24);
        goto LABEL_84;
      }
    }
    goto LABEL_76;
  }
  LODWORD(v11) = v30 + 40;
  if ( v30 + 40 > v31 )
  {
LABEL_76:
    if ( v35 )
      goto LABEL_85;
    LODWORD(v11) = v36;
    goto LABEL_78;
  }
  if ( *(_BYTE *)(v30 + v16 + 10) )
    v26 = (char *)(v30 + v16 + 24);
  v24 = *(_BYTE **)(v30 + v16 + 16);
LABEL_84:
  v25 = *(_BYTE *)(v30 + v16 + 9);
  v23 = *(_BYTE *)(v30 + v16 + 8);
LABEL_85:
  if ( v26 )
  {
    v32 = *v26;
    v21 = 0;
LABEL_88:
    LOBYTE(v11) = v32 - 8;
    if ( ((unsigned __int8)v11 & 0x5D) == 0 )
    {
      v33 = *(_BYTE *)(v16 + 3);
      if ( v33 == 1 || !v24 || !v25 )
        goto LABEL_40;
      LOBYTE(v16) = 0;
      v11 = &v24[v25];
      v17 = v24 + 8;
      if ( (unsigned __int8)((*v24 & 0x7F) - 114) <= 1u )
      {
        if ( v17 <= v11 )
        {
          LOBYTE(v16) = 1;
          v21 = v24[2];
          v18 = v24[1] & 0xF;
          v20 = v24[3];
        }
      }
      else
      {
        if ( v17 <= v11 )
        {
          v18 = v24[2] & 0xF;
          v19 = v25;
          if ( (unsigned int)(unsigned __int8)v24[7] + 8 <= v25 )
            v19 = (unsigned __int8)v24[7] + 8;
          v11 = v24 + 13;
          v16 = (unsigned __int64)&v24[v19];
          if ( (unsigned __int64)(v24 + 13) > v16 )
            v34 = 0;
          else
            v34 = v24[12];
          if ( (unsigned __int64)(v24 + 14) <= v16 )
            v20 = *v11;
          LOBYTE(v16) = 1;
        }
        v21 = v34;
      }
      if ( (_BYTE)v16 )
      {
        LOBYTE(v3) = v21;
        v22 = v20;
      }
      else
      {
LABEL_40:
        v18 = 0;
        v22 = 0;
      }
      sub_140052E64((_DWORD)v11, v16, (unsigned int)&v38, a2, *(_DWORD *)(a2 + 48), v33, v23, v18, v3, v22, a2);
    }
  }
LABEL_8:
  IofCompleteRequest((PIRP)a2, 0);
  return v9;
}
