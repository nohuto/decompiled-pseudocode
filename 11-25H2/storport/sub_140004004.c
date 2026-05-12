/*
 * XREFs of sub_140004004 @ 0x140004004
 * Callers:
 *     sub_140004890 @ 0x140004890 (sub_140004890.c)
 *     sub_140005A20 @ 0x140005A20 (sub_140005A20.c)
 * Callees:
 *     sub_14000C020 @ 0x14000C020 (sub_14000C020.c)
 *     sub_14000D760 @ 0x14000D760 (sub_14000D760.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140004004(__int64 a1, __int64 a2)
{
  int v3; // edi
  bool v5; // zf
  char *v6; // rcx
  __int64 v7; // rdx
  void *v9; // rdx
  int *v10; // rax
  unsigned __int64 v11; // rdx
  char *v12; // rax
  char v13; // bl
  unsigned int v14; // eax
  char v15; // r15
  char v16; // r11
  char v17; // al
  char v18; // r14
  _BYTE *v19; // r9
  unsigned __int8 v20; // r10
  char *v21; // r11
  unsigned int v22; // r13d
  unsigned int *v23; // r12
  __int64 v24; // rax
  unsigned __int64 v25; // rbp
  char v26; // cl
  char v27; // r8
  char v28; // [rsp+60h] [rbp-58h]
  char v29; // [rsp+61h] [rbp-57h]
  unsigned int v30; // [rsp+64h] [rbp-54h]
  __int128 v31; // [rsp+68h] [rbp-50h] BYREF

  LOBYTE(v3) = 0;
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) + 3LL) = 1;
  *(_BYTE *)(a1 + 757) = 0;
  sub_14000D760(a1, 1LL);
  sub_14000C020(a1, 0LL);
  v5 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v5 )
    goto LABEL_5;
  v31 = 0LL;
  IoGetActivityIdIrp(a2, &v31);
  v7 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v7 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_5;
    v9 = &unk_140148B18;
    goto LABEL_8;
  }
  if ( *(_BYTE *)v7 != 15 )
  {
    if ( *(_BYTE *)v7 != 27 )
      goto LABEL_5;
    if ( *(_BYTE *)(v7 + 1) == 7 && !*(_DWORD *)(v7 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v10 = *(int **)(a2 + 56);
        if ( v10 )
          v3 = *v10;
        sub_140056AB0((_DWORD)v6, v7, (unsigned int)&v31, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_5;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_5;
    v9 = &unk_140149FE8;
LABEL_8:
    sub_140052F3C(v6, v9, &v31, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_5;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_5;
  v11 = *(_QWORD *)(v7 + 8);
  v18 = 0;
  v19 = 0LL;
  v28 = 0;
  v20 = 0;
  v13 = 0;
  v16 = 0;
  v15 = 0;
  if ( *(_BYTE *)(v11 + 2) != 40 )
  {
    v26 = *(_BYTE *)(v11 + 72);
    v19 = *(_BYTE **)(v11 + 32);
    v20 = *(_BYTE *)(v11 + 11);
    v18 = *(_BYTE *)(v11 + 4);
    if ( !*(_BYTE *)(v11 + 2) )
      goto LABEL_65;
    goto LABEL_5;
  }
  v21 = 0LL;
  v29 = 0;
  if ( *(_DWORD *)(v11 + 20) )
    goto LABEL_5;
  v22 = 0;
  v30 = *(_DWORD *)(v11 + 56);
  if ( !v30 )
    goto LABEL_62;
  v23 = (unsigned int *)(v11 + 120);
  while ( 1 )
  {
    v24 = *v23;
    if ( (unsigned int)v24 >= 0x80 )
    {
      v25 = *(unsigned int *)(v11 + 16);
      if ( (unsigned int)v24 < (unsigned int)v25 )
        break;
    }
LABEL_55:
    ++v22;
    ++v23;
    if ( v22 >= v30 )
      goto LABEL_62;
  }
  if ( *(_DWORD *)(v24 + v11) != 64 )
  {
    LODWORD(v6) = *(_DWORD *)(v24 + v11) - 65;
    if ( *(_DWORD *)(v24 + v11) == 65 )
    {
      LODWORD(v6) = v24 + 56;
      if ( v24 + 56 <= v25 )
      {
        v29 = 1;
        if ( *(_BYTE *)(v24 + v11 + 10) )
          v21 = (char *)(v24 + v11 + 24);
        v18 = *(_BYTE *)(v24 + v11 + 8);
        v19 = *(_BYTE **)(v24 + v11 + 16);
        v20 = *(_BYTE *)(v24 + v11 + 9);
      }
    }
    else if ( *(_DWORD *)(v24 + v11) == 66 )
    {
      LODWORD(v6) = v24 + 40;
      if ( v24 + 40 <= v25 )
      {
        if ( *(_DWORD *)(v24 + v11 + 12) )
          v21 = (char *)(v24 + v11 + 32);
        v19 = *(_BYTE **)(v24 + v11 + 24);
        goto LABEL_61;
      }
    }
    goto LABEL_54;
  }
  LODWORD(v6) = v24 + 40;
  if ( v24 + 40 > v25 )
  {
LABEL_54:
    if ( v29 )
      goto LABEL_62;
    goto LABEL_55;
  }
  if ( *(_BYTE *)(v24 + v11 + 10) )
    v21 = (char *)(v24 + v11 + 24);
  v19 = *(_BYTE **)(v24 + v11 + 16);
LABEL_61:
  v20 = *(_BYTE *)(v24 + v11 + 9);
  v18 = *(_BYTE *)(v24 + v11 + 8);
LABEL_62:
  if ( v21 )
  {
    v26 = *v21;
    v16 = 0;
LABEL_65:
    LOBYTE(v6) = v26 - 8;
    if ( ((unsigned __int8)v6 & 0x5D) == 0 )
    {
      v27 = *(_BYTE *)(v11 + 3);
      if ( v27 == 1 || !v19 || !v20 )
        goto LABEL_29;
      LOBYTE(v11) = 0;
      v6 = &v19[v20];
      v12 = v19 + 8;
      if ( (unsigned __int8)((*v19 & 0x7F) - 114) <= 1u )
      {
        if ( v12 <= v6 )
        {
          LOBYTE(v11) = 1;
          v16 = v19[2];
          v13 = v19[1] & 0xF;
          v15 = v19[3];
        }
      }
      else
      {
        if ( v12 <= v6 )
        {
          v13 = v19[2] & 0xF;
          v14 = v20;
          if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
            v14 = (unsigned __int8)v19[7] + 8;
          v6 = v19 + 13;
          v11 = (unsigned __int64)&v19[v14];
          if ( (unsigned __int64)(v19 + 13) > v11 )
            v28 = 0;
          else
            v28 = v19[12];
          if ( (unsigned __int64)(v19 + 14) <= v11 )
            v15 = *v6;
          LOBYTE(v11) = 1;
        }
        v16 = v28;
      }
      if ( (_BYTE)v11 )
      {
        LOBYTE(v3) = v16;
        v17 = v15;
      }
      else
      {
LABEL_29:
        v13 = 0;
        v17 = 0;
      }
      sub_140052E64((_DWORD)v6, v11, (unsigned int)&v31, a2, *(_DWORD *)(a2 + 48), v27, v18, v13, v3, v17, a2);
    }
  }
LABEL_5:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
