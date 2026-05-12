/*
 * XREFs of sub_140004290 @ 0x140004290
 * Callers:
 *     sub_140004890 @ 0x140004890 (sub_140004890.c)
 *     sub_140005A20 @ 0x140005A20 (sub_140005A20.c)
 * Callees:
 *     sub_140021810 @ 0x140021810 (sub_140021810.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140004290(__int64 a1, __int64 a2)
{
  signed __int64 v3; // rax
  signed __int64 v4; // rtt
  int v5; // ebx
  bool v6; // zf
  char *v7; // rcx
  __int64 v8; // rdx
  void *v10; // rdx
  int *v11; // rax
  unsigned __int64 v12; // rdx
  char *v13; // rax
  char v14; // si
  unsigned int v15; // eax
  char v16; // r15
  char v17; // r11
  char v18; // al
  char v19; // r14
  _BYTE *v20; // r9
  unsigned __int8 v21; // r10
  char *v22; // r11
  unsigned int v23; // r13d
  unsigned int *v24; // r12
  __int64 v25; // rax
  unsigned __int64 v26; // rbp
  char v27; // cl
  char v28; // r8
  char v29; // [rsp+60h] [rbp-58h]
  char v30; // [rsp+61h] [rbp-57h]
  unsigned int v31; // [rsp+64h] [rbp-54h]
  __int128 v32; // [rsp+68h] [rbp-50h] BYREF

  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) + 3LL) = 1;
  *(_BYTE *)(a1 + 757) = 1;
  v3 = *(_QWORD *)(a1 + 808);
  do
  {
    if ( (v3 & 3) != 0 )
      break;
    v4 = v3;
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v3 | 2, v3);
  }
  while ( v4 != v3 );
  sub_140021810(a1, 1LL);
  LOBYTE(v5) = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v6 = byte_140168DAA == 0;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v6 )
    goto LABEL_8;
  v32 = 0LL;
  IoGetActivityIdIrp(a2, &v32);
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v8 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_8;
    v10 = &unk_140148B18;
    goto LABEL_11;
  }
  if ( *(_BYTE *)v8 != 15 )
  {
    if ( *(_BYTE *)v8 != 27 )
      goto LABEL_8;
    if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v5 = *v11;
        sub_140056AB0((_DWORD)v7, v8, (unsigned int)&v32, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_8;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_8;
    v10 = &unk_140149FE8;
LABEL_11:
    sub_140052F3C(v7, v10, &v32, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_8;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_8;
  v12 = *(_QWORD *)(v8 + 8);
  v19 = 0;
  v20 = 0LL;
  v29 = 0;
  v21 = 0;
  v14 = 0;
  v17 = 0;
  v16 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v27 = *(_BYTE *)(v12 + 72);
    v20 = *(_BYTE **)(v12 + 32);
    v21 = *(_BYTE *)(v12 + 11);
    v19 = *(_BYTE *)(v12 + 4);
    if ( !*(_BYTE *)(v12 + 2) )
      goto LABEL_68;
    goto LABEL_8;
  }
  v22 = 0LL;
  v30 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_8;
  v23 = 0;
  v31 = *(_DWORD *)(v12 + 56);
  if ( !v31 )
    goto LABEL_65;
  v24 = (unsigned int *)(v12 + 120);
  while ( 1 )
  {
    v25 = *v24;
    if ( (unsigned int)v25 >= 0x80 )
    {
      v26 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v25 < (unsigned int)v26 )
        break;
    }
LABEL_58:
    ++v23;
    ++v24;
    if ( v23 >= v31 )
      goto LABEL_65;
  }
  if ( *(_DWORD *)(v25 + v12) != 64 )
  {
    LODWORD(v7) = *(_DWORD *)(v25 + v12) - 65;
    if ( *(_DWORD *)(v25 + v12) == 65 )
    {
      LODWORD(v7) = v25 + 56;
      if ( v25 + 56 <= v26 )
      {
        v30 = 1;
        if ( *(_BYTE *)(v25 + v12 + 10) )
          v22 = (char *)(v25 + v12 + 24);
        v19 = *(_BYTE *)(v25 + v12 + 8);
        v20 = *(_BYTE **)(v25 + v12 + 16);
        v21 = *(_BYTE *)(v25 + v12 + 9);
      }
    }
    else if ( *(_DWORD *)(v25 + v12) == 66 )
    {
      LODWORD(v7) = v25 + 40;
      if ( v25 + 40 <= v26 )
      {
        if ( *(_DWORD *)(v25 + v12 + 12) )
          v22 = (char *)(v25 + v12 + 32);
        v20 = *(_BYTE **)(v25 + v12 + 24);
        goto LABEL_64;
      }
    }
    goto LABEL_57;
  }
  LODWORD(v7) = v25 + 40;
  if ( v25 + 40 > v26 )
  {
LABEL_57:
    if ( v30 )
      goto LABEL_65;
    goto LABEL_58;
  }
  if ( *(_BYTE *)(v25 + v12 + 10) )
    v22 = (char *)(v25 + v12 + 24);
  v20 = *(_BYTE **)(v25 + v12 + 16);
LABEL_64:
  v21 = *(_BYTE *)(v25 + v12 + 9);
  v19 = *(_BYTE *)(v25 + v12 + 8);
LABEL_65:
  if ( v22 )
  {
    v27 = *v22;
    v17 = 0;
LABEL_68:
    LOBYTE(v7) = v27 - 8;
    if ( ((unsigned __int8)v7 & 0x5D) == 0 )
    {
      v28 = *(_BYTE *)(v12 + 3);
      if ( v28 == 1 || !v20 || !v21 )
        goto LABEL_32;
      LOBYTE(v12) = 0;
      v7 = &v20[v21];
      v13 = v20 + 8;
      if ( (unsigned __int8)((*v20 & 0x7F) - 114) <= 1u )
      {
        if ( v13 <= v7 )
        {
          LOBYTE(v12) = 1;
          v17 = v20[2];
          v14 = v20[1] & 0xF;
          v16 = v20[3];
        }
      }
      else
      {
        if ( v13 <= v7 )
        {
          v14 = v20[2] & 0xF;
          v15 = v21;
          if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
            v15 = (unsigned __int8)v20[7] + 8;
          v7 = v20 + 13;
          v12 = (unsigned __int64)&v20[v15];
          if ( (unsigned __int64)(v20 + 13) > v12 )
            v29 = 0;
          else
            v29 = v20[12];
          if ( (unsigned __int64)(v20 + 14) <= v12 )
            v16 = *v7;
          LOBYTE(v12) = 1;
        }
        v17 = v29;
      }
      if ( (_BYTE)v12 )
      {
        LOBYTE(v5) = v17;
        v18 = v16;
      }
      else
      {
LABEL_32:
        v14 = 0;
        v18 = 0;
      }
      sub_140052E64((_DWORD)v7, v12, (unsigned int)&v32, a2, *(_DWORD *)(a2 + 48), v28, v19, v14, v5, v18, a2);
    }
  }
LABEL_8:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
