/*
 * XREFs of sub_140014708 @ 0x140014708
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 * Callees:
 *     sub_14001467C @ 0x14001467C (sub_14001467C.c)
 *     sub_140014A00 @ 0x140014A00 (sub_140014A00.c)
 *     sub_140015208 @ 0x140015208 (sub_140015208.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140014708(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r15
  int v3; // ebx
  _DWORD *v5; // r13
  PVOID v7; // rsi
  int v8; // r14d
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rax
  bool v12; // zf
  char *v13; // rcx
  __int64 v14; // rdx
  void *v16; // rdx
  int *v17; // rax
  unsigned __int64 v18; // rdx
  char *v19; // rax
  char v20; // si
  unsigned int v21; // eax
  char v22; // r13
  char v23; // r11
  char v24; // al
  char v25; // r12
  _BYTE *v26; // r9
  unsigned __int8 v27; // r10
  char *v28; // r11
  unsigned int v29; // eax
  unsigned int v30; // r8d
  unsigned int *v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // r15
  char v34; // cl
  char v35; // r8
  char v36; // [rsp+60h] [rbp-9h]
  char v37; // [rsp+61h] [rbp-8h]
  unsigned int v38; // [rsp+64h] [rbp-5h] BYREF
  PVOID P; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v40; // [rsp+70h] [rbp+7h]
  __int128 v41; // [rsp+78h] [rbp+Fh] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  LOBYTE(v3) = 0;
  v5 = *(_DWORD **)(a2 + 24);
  v7 = 0LL;
  P = 0LL;
  v38 = 0;
  if ( !a1[76] || !a1[77] )
  {
    v8 = -1073741823;
    goto LABEL_18;
  }
  if ( *(_DWORD *)(v2 + 16) < 0x10u )
  {
    v8 = -1073741820;
    goto LABEL_18;
  }
  if ( *(_DWORD *)(v2 + 8) < 0x38u )
  {
    v8 = -1073741789;
    goto LABEL_18;
  }
  sub_140014A00(a1[1], a2, &P, &v38);
  v7 = P;
  if ( !P )
  {
    v8 = -1073741801;
    goto LABEL_18;
  }
  v8 = sub_14001467C((__int64)a1, (IRP *)a2, (__int64)P);
  if ( v8 < 0 )
  {
LABEL_18:
    v11 = 0LL;
    goto LABEL_10;
  }
  memset_0(v5, 0, *(unsigned int *)(v2 + 8));
  v9 = sub_140015208(a2, v7);
  v10 = *(_DWORD *)(v2 + 8);
  v8 = v9;
  if ( v10 >= v5[1] )
    v10 = v5[1];
  v11 = v10;
LABEL_10:
  *(_QWORD *)(a2 + 56) = v11;
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72536152u);
  v12 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v12 )
    goto LABEL_16;
  v41 = 0LL;
  IoGetActivityIdIrp(a2, &v41);
  v14 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v14 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_16;
    v16 = &unk_140148B18;
    goto LABEL_21;
  }
  if ( *(_BYTE *)v14 != 15 )
  {
    if ( *(_BYTE *)v14 != 27 )
      goto LABEL_16;
    if ( *(_BYTE *)(v14 + 1) == 7 && !*(_DWORD *)(v14 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v17 = *(int **)(a2 + 56);
        if ( v17 )
          v3 = *v17;
        sub_140056AB0((_DWORD)v13, v14, (unsigned int)&v41, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_16;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_16;
    v16 = &unk_140149FE8;
LABEL_21:
    sub_140052F3C(v13, v16, &v41, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_16;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_16;
  v18 = *(_QWORD *)(v14 + 8);
  v25 = 0;
  v26 = 0LL;
  v36 = 0;
  v27 = 0;
  v20 = 0;
  v23 = 0;
  v22 = 0;
  if ( *(_BYTE *)(v18 + 2) != 40 )
  {
    v34 = *(_BYTE *)(v18 + 72);
    v26 = *(_BYTE **)(v18 + 32);
    v27 = *(_BYTE *)(v18 + 11);
    v25 = *(_BYTE *)(v18 + 4);
    if ( !*(_BYTE *)(v18 + 2) )
      goto LABEL_82;
    goto LABEL_16;
  }
  v28 = 0LL;
  v37 = 0;
  if ( *(_DWORD *)(v18 + 20) )
    goto LABEL_16;
  v29 = *(_DWORD *)(v18 + 56);
  LODWORD(v13) = 0;
  LODWORD(P) = 0;
  v38 = v29;
  if ( !v29 )
    goto LABEL_79;
  v30 = v38;
  v31 = (unsigned int *)(v18 + 120);
  v40 = v18 + 120;
  while ( 1 )
  {
    v32 = *v31;
    if ( (unsigned int)v32 >= 0x80 )
    {
      v33 = *(unsigned int *)(v18 + 16);
      if ( (unsigned int)v32 < (unsigned int)v33 )
        break;
    }
LABEL_72:
    LODWORD(v13) = (_DWORD)v13 + 1;
    v31 = (unsigned int *)(v40 + 4);
    LODWORD(P) = (_DWORD)v13;
    v40 += 4LL;
    if ( (unsigned int)v13 >= v30 )
      goto LABEL_79;
  }
  if ( *(_DWORD *)(v32 + v18) != 64 )
  {
    LODWORD(v13) = *(_DWORD *)(v32 + v18) - 65;
    if ( *(_DWORD *)(v32 + v18) == 65 )
    {
      LODWORD(v13) = v32 + 56;
      if ( v32 + 56 <= v33 )
      {
        v37 = 1;
        if ( *(_BYTE *)(v32 + v18 + 10) )
          v28 = (char *)(v32 + v18 + 24);
        v25 = *(_BYTE *)(v32 + v18 + 8);
        v26 = *(_BYTE **)(v32 + v18 + 16);
        v27 = *(_BYTE *)(v32 + v18 + 9);
      }
    }
    else if ( *(_DWORD *)(v32 + v18) == 66 )
    {
      LODWORD(v13) = v32 + 40;
      if ( v32 + 40 <= v33 )
      {
        if ( *(_DWORD *)(v32 + v18 + 12) )
          v28 = (char *)(v32 + v18 + 32);
        v26 = *(_BYTE **)(v32 + v18 + 24);
        goto LABEL_78;
      }
    }
    goto LABEL_70;
  }
  LODWORD(v13) = v32 + 40;
  if ( v32 + 40 > v33 )
  {
LABEL_70:
    if ( v37 )
      goto LABEL_79;
    LODWORD(v13) = (_DWORD)P;
    v30 = v38;
    goto LABEL_72;
  }
  if ( *(_BYTE *)(v32 + v18 + 10) )
    v28 = (char *)(v32 + v18 + 24);
  v26 = *(_BYTE **)(v32 + v18 + 16);
LABEL_78:
  v27 = *(_BYTE *)(v32 + v18 + 9);
  v25 = *(_BYTE *)(v32 + v18 + 8);
LABEL_79:
  if ( v28 )
  {
    v34 = *v28;
    v23 = 0;
LABEL_82:
    LOBYTE(v13) = v34 - 8;
    if ( ((unsigned __int8)v13 & 0x5D) == 0 )
    {
      v35 = *(_BYTE *)(v18 + 3);
      if ( v35 == 1 || !v26 || !v27 )
        goto LABEL_42;
      LOBYTE(v18) = 0;
      v13 = &v26[v27];
      v19 = v26 + 8;
      if ( (unsigned __int8)((*v26 & 0x7F) - 114) <= 1u )
      {
        if ( v19 <= v13 )
        {
          LOBYTE(v18) = 1;
          v23 = v26[2];
          v20 = v26[1] & 0xF;
          v22 = v26[3];
        }
      }
      else
      {
        if ( v19 <= v13 )
        {
          v20 = v26[2] & 0xF;
          v21 = v27;
          if ( (unsigned int)(unsigned __int8)v26[7] + 8 <= v27 )
            v21 = (unsigned __int8)v26[7] + 8;
          v13 = v26 + 13;
          v18 = (unsigned __int64)&v26[v21];
          if ( (unsigned __int64)(v26 + 13) > v18 )
            v36 = 0;
          else
            v36 = v26[12];
          if ( (unsigned __int64)(v26 + 14) <= v18 )
            v22 = *v13;
          LOBYTE(v18) = 1;
        }
        v23 = v36;
      }
      if ( (_BYTE)v18 )
      {
        LOBYTE(v3) = v23;
        v24 = v22;
      }
      else
      {
LABEL_42:
        v20 = 0;
        v24 = 0;
      }
      sub_140052E64((_DWORD)v13, v18, (unsigned int)&v41, a2, *(_DWORD *)(a2 + 48), v35, v25, v20, v3, v24, a2);
    }
  }
LABEL_16:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v8;
}
