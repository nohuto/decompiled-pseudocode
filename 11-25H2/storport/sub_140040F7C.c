/*
 * XREFs of sub_140040F7C @ 0x140040F7C
 * Callers:
 *     sub_1400081BC @ 0x1400081BC (sub_1400081BC.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140040F7C(__int64 a1, __int64 a2)
{
  int v3; // ebx
  bool v4; // zf
  char *v5; // rcx
  __int64 v6; // rdx
  int *v7; // rax
  void *v8; // rdx
  unsigned __int64 v9; // rdx
  char v10; // r14
  _BYTE *v11; // r9
  unsigned __int8 v12; // r10
  char v13; // si
  char v14; // r12
  char v15; // r15
  char *v16; // r11
  unsigned int *v17; // r13
  __int64 v18; // rax
  unsigned __int64 v19; // rbp
  char v20; // cl
  char v21; // r8
  char *v22; // rax
  unsigned int v23; // eax
  char v24; // al
  char v26; // [rsp+60h] [rbp-68h]
  int v27; // [rsp+64h] [rbp-64h]
  unsigned int v28; // [rsp+68h] [rbp-60h]
  __int128 v29; // [rsp+70h] [rbp-58h] BYREF

  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0(off_140168120->AttachedDevice, 47LL, &unk_14014C778, a1, a2);
  }
  LOBYTE(v3) = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v4 = byte_140168DAA == 0;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v4 )
    goto LABEL_69;
  v29 = 0LL;
  IoGetActivityIdIrp(a2, &v29);
  v6 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v6 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_69;
    v8 = &unk_140148B18;
    goto LABEL_68;
  }
  if ( *(_BYTE *)v6 != 15 )
  {
    if ( *(_BYTE *)v6 != 27 )
      goto LABEL_69;
    if ( *(_BYTE *)(v6 + 1) == 7 && !*(_DWORD *)(v6 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v7 = *(int **)(a2 + 56);
        if ( v7 )
          v3 = *v7;
        sub_140056AB0((_DWORD)v5, v6, (unsigned int)&v29, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_69;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_69;
    v8 = &unk_140149FE8;
LABEL_68:
    sub_140052F3C(v5, v8, &v29, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_69;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_69;
  v9 = *(_QWORD *)(v6 + 8);
  v10 = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  if ( *(_BYTE *)(v9 + 2) != 40 )
  {
    v20 = *(_BYTE *)(v9 + 72);
    v11 = *(_BYTE **)(v9 + 32);
    v12 = *(_BYTE *)(v9 + 11);
    v10 = *(_BYTE *)(v9 + 4);
    if ( *(_BYTE *)(v9 + 2) )
      goto LABEL_69;
LABEL_47:
    LOBYTE(v5) = v20 - 8;
    if ( ((unsigned __int8)v5 & 0x5D) != 0 )
      goto LABEL_69;
    v21 = *(_BYTE *)(v9 + 3);
    if ( v21 == 1 || !v11 || !v12 )
      goto LABEL_64;
    LOBYTE(v9) = 0;
    v5 = &v11[v12];
    v22 = v11 + 8;
    if ( (unsigned __int8)((*v11 & 0x7F) - 114) <= 1u )
    {
      if ( v22 > v5 )
        goto LABEL_62;
      v14 = v11[2];
      v13 = v11[1] & 0xF;
      v15 = v11[3];
    }
    else
    {
      if ( v22 > v5 )
        goto LABEL_62;
      v13 = v11[2] & 0xF;
      v23 = v12;
      if ( (unsigned int)(unsigned __int8)v11[7] + 8 <= v12 )
        v23 = (unsigned __int8)v11[7] + 8;
      v5 = v11 + 13;
      v9 = (unsigned __int64)&v11[v23];
      if ( (unsigned __int64)(v11 + 13) <= v9 )
        v14 = v11[12];
      if ( (unsigned __int64)(v11 + 14) <= v9 )
        v15 = *v5;
    }
    LOBYTE(v9) = 1;
LABEL_62:
    if ( (_BYTE)v9 )
    {
      LOBYTE(v3) = v14;
      v24 = v15;
LABEL_65:
      sub_140052E64((_DWORD)v5, v9, (unsigned int)&v29, a2, *(_DWORD *)(a2 + 48), v21, v10, v13, v3, v24, a2);
      goto LABEL_69;
    }
LABEL_64:
    v13 = 0;
    v24 = 0;
    goto LABEL_65;
  }
  v16 = 0LL;
  v26 = 0;
  if ( *(_DWORD *)(v9 + 20) )
    goto LABEL_69;
  LODWORD(v5) = 0;
  v27 = 0;
  v28 = *(_DWORD *)(v9 + 56);
  if ( !v28 )
    goto LABEL_44;
  v17 = (unsigned int *)(v9 + 120);
  while ( 1 )
  {
    v18 = *v17;
    if ( (unsigned int)v18 >= 0x80 )
    {
      v19 = *(unsigned int *)(v9 + 16);
      if ( (unsigned int)v18 < (unsigned int)v19 )
        break;
    }
LABEL_38:
    LODWORD(v5) = (_DWORD)v5 + 1;
    ++v17;
    v27 = (int)v5;
    if ( (unsigned int)v5 >= v28 )
      goto LABEL_44;
  }
  if ( *(_DWORD *)(v18 + v9) != 64 )
  {
    LODWORD(v5) = *(_DWORD *)(v18 + v9) - 65;
    if ( *(_DWORD *)(v18 + v9) == 65 )
    {
      LODWORD(v5) = v18 + 56;
      if ( v18 + 56 <= v19 )
      {
        v26 = 1;
        if ( *(_BYTE *)(v18 + v9 + 10) )
          v16 = (char *)(v18 + v9 + 24);
        v10 = *(_BYTE *)(v18 + v9 + 8);
        v11 = *(_BYTE **)(v18 + v9 + 16);
        v12 = *(_BYTE *)(v18 + v9 + 9);
      }
    }
    else if ( *(_DWORD *)(v18 + v9) == 66 )
    {
      LODWORD(v5) = v18 + 40;
      if ( v18 + 40 <= v19 )
      {
        if ( *(_DWORD *)(v18 + v9 + 12) )
          v16 = (char *)(v18 + v9 + 32);
        v11 = *(_BYTE **)(v18 + v9 + 24);
        goto LABEL_43;
      }
    }
    goto LABEL_36;
  }
  LODWORD(v5) = v18 + 40;
  if ( v18 + 40 > v19 )
  {
LABEL_36:
    if ( v26 )
      goto LABEL_44;
    LODWORD(v5) = v27;
    goto LABEL_38;
  }
  if ( *(_BYTE *)(v18 + v9 + 10) )
    v16 = (char *)(v18 + v9 + 24);
  v11 = *(_BYTE **)(v18 + v9 + 16);
LABEL_43:
  v12 = *(_BYTE *)(v18 + v9 + 9);
  v10 = *(_BYTE *)(v18 + v9 + 8);
LABEL_44:
  if ( v16 )
  {
    v20 = *v16;
    goto LABEL_47;
  }
LABEL_69:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
