/*
 * XREFs of sub_1400366C8 @ 0x1400366C8
 * Callers:
 *     sub_1401B3ED0 @ 0x1401B3ED0 (sub_1401B3ED0.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400366C8(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rsi
  int v3; // ebx
  int v5; // ecx
  unsigned int v6; // edx
  __int64 v7; // rax
  unsigned int v8; // ebp
  bool v9; // zf
  char *v10; // rcx
  __int64 v11; // rdx
  int *v13; // rax
  unsigned __int64 v14; // rdx
  char *v15; // rax
  char v16; // si
  unsigned int v17; // eax
  char v18; // r12
  char v19; // r11
  char v20; // al
  char v21; // r15
  _BYTE *v22; // r9
  unsigned __int8 v23; // r10
  char *v24; // r11
  unsigned int *v25; // r13
  __int64 v26; // rax
  unsigned __int64 v27; // r14
  char v28; // cl
  char v29; // r8
  char v30; // [rsp+60h] [rbp-58h]
  char v31; // [rsp+61h] [rbp-57h]
  int v32; // [rsp+64h] [rbp-54h]
  unsigned int v33; // [rsp+68h] [rbp-50h]
  __int128 v34; // [rsp+70h] [rbp-48h] BYREF

  v2 = *(_DWORD **)(a2 + 24);
  LOBYTE(v3) = 0;
  v5 = v2[1];
  v6 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( v5 )
  {
    v7 = 0LL;
    if ( v5 != 1 )
    {
      v8 = -1073741637;
      goto LABEL_7;
    }
  }
  else
  {
    if ( v6 < 8 )
    {
      v8 = -1073741789;
      v7 = 0LL;
      goto LABEL_7;
    }
    if ( v6 < 0xC )
    {
      v7 = 8LL;
    }
    else
    {
      memset_0(v2, 0, v6);
      v7 = 12LL;
      v2[2] = 1;
    }
    v2[1] = 12;
    *v2 = 12;
  }
  v8 = 0;
LABEL_7:
  *(_QWORD *)(a2 + 56) = v7;
  v9 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v9 )
    goto LABEL_11;
  v34 = 0LL;
  IoGetActivityIdIrp(a2, &v34);
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v11 == 14 )
  {
    if ( (byte_1401694F2 & 8) != 0 )
      sub_140052F3C(v10, &unk_140148B18, &v34, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_11;
  }
  if ( *(_BYTE *)v11 != 15 )
  {
    if ( *(_BYTE *)v11 == 27 )
    {
      if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) != 0 )
        {
          v13 = *(int **)(a2 + 56);
          if ( v13 )
            v3 = *v13;
          sub_140056AB0((_DWORD)v10, v11, (unsigned int)&v34, a2, v3, *(_DWORD *)(a2 + 48));
        }
      }
      else if ( (byte_1401694F2 & 0x20) != 0 )
      {
        sub_140052F3C(v10, &unk_140149FE8, &v34, a2, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_11;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_11;
  v14 = *(_QWORD *)(v11 + 8);
  v21 = 0;
  v22 = 0LL;
  v30 = 0;
  v23 = 0;
  v16 = 0;
  v19 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v14 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v14 + 72);
    v22 = *(_BYTE **)(v14 + 32);
    v23 = *(_BYTE *)(v14 + 11);
    v21 = *(_BYTE *)(v14 + 4);
    if ( !*(_BYTE *)(v14 + 2) )
      goto LABEL_76;
    goto LABEL_11;
  }
  v24 = 0LL;
  v31 = 0;
  if ( *(_DWORD *)(v14 + 20) )
    goto LABEL_11;
  LODWORD(v10) = 0;
  v32 = 0;
  v33 = *(_DWORD *)(v14 + 56);
  if ( !v33 )
    goto LABEL_73;
  v25 = (unsigned int *)(v14 + 120);
  while ( 1 )
  {
    v26 = *v25;
    if ( (unsigned int)v26 >= 0x80 )
    {
      v27 = *(unsigned int *)(v14 + 16);
      if ( (unsigned int)v26 < (unsigned int)v27 )
        break;
    }
LABEL_66:
    LODWORD(v10) = (_DWORD)v10 + 1;
    ++v25;
    v32 = (int)v10;
    if ( (unsigned int)v10 >= v33 )
      goto LABEL_73;
  }
  if ( *(_DWORD *)(v26 + v14) != 64 )
  {
    LODWORD(v10) = *(_DWORD *)(v26 + v14) - 65;
    if ( *(_DWORD *)(v26 + v14) == 65 )
    {
      LODWORD(v10) = v26 + 56;
      if ( v26 + 56 <= v27 )
      {
        v31 = 1;
        if ( *(_BYTE *)(v26 + v14 + 10) )
          v24 = (char *)(v26 + v14 + 24);
        v21 = *(_BYTE *)(v26 + v14 + 8);
        v22 = *(_BYTE **)(v26 + v14 + 16);
        v23 = *(_BYTE *)(v26 + v14 + 9);
      }
    }
    else if ( *(_DWORD *)(v26 + v14) == 66 )
    {
      LODWORD(v10) = v26 + 40;
      if ( v26 + 40 <= v27 )
      {
        if ( *(_DWORD *)(v26 + v14 + 12) )
          v24 = (char *)(v26 + v14 + 32);
        v22 = *(_BYTE **)(v26 + v14 + 24);
        goto LABEL_72;
      }
    }
    goto LABEL_64;
  }
  LODWORD(v10) = v26 + 40;
  if ( v26 + 40 > v27 )
  {
LABEL_64:
    if ( v31 )
      goto LABEL_73;
    LODWORD(v10) = v32;
    goto LABEL_66;
  }
  if ( *(_BYTE *)(v26 + v14 + 10) )
    v24 = (char *)(v26 + v14 + 24);
  v22 = *(_BYTE **)(v26 + v14 + 16);
LABEL_72:
  v23 = *(_BYTE *)(v26 + v14 + 9);
  v21 = *(_BYTE *)(v26 + v14 + 8);
LABEL_73:
  if ( v24 )
  {
    v28 = *v24;
    v19 = 0;
LABEL_76:
    LOBYTE(v10) = v28 - 8;
    if ( ((unsigned __int8)v10 & 0x5D) == 0 )
    {
      v29 = *(_BYTE *)(v14 + 3);
      if ( v29 == 1 || !v22 || !v23 )
        goto LABEL_37;
      LOBYTE(v14) = 0;
      v10 = &v22[v23];
      v15 = v22 + 8;
      if ( (unsigned __int8)((*v22 & 0x7F) - 114) <= 1u )
      {
        if ( v15 <= v10 )
        {
          LOBYTE(v14) = 1;
          v19 = v22[2];
          v16 = v22[1] & 0xF;
          v18 = v22[3];
        }
      }
      else
      {
        if ( v15 <= v10 )
        {
          v16 = v22[2] & 0xF;
          v17 = v23;
          if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
            v17 = (unsigned __int8)v22[7] + 8;
          v10 = v22 + 13;
          v14 = (unsigned __int64)&v22[v17];
          if ( (unsigned __int64)(v22 + 13) > v14 )
            v30 = 0;
          else
            v30 = v22[12];
          if ( (unsigned __int64)(v22 + 14) <= v14 )
            v18 = *v10;
          LOBYTE(v14) = 1;
        }
        v19 = v30;
      }
      if ( (_BYTE)v14 )
      {
        LOBYTE(v3) = v19;
        v20 = v18;
      }
      else
      {
LABEL_37:
        v16 = 0;
        v20 = 0;
      }
      sub_140052E64((_DWORD)v10, v14, (unsigned int)&v34, a2, *(_DWORD *)(a2 + 48), v29, v21, v16, v3, v20, a2);
    }
  }
LABEL_11:
  IofCompleteRequest((PIRP)a2, 0);
  return v8;
}
