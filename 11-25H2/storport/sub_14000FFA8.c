/*
 * XREFs of sub_14000FFA8 @ 0x14000FFA8
 * Callers:
 *     sub_14000FC20 @ 0x14000FC20 (sub_14000FC20.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14000FFA8(__int64 a1, __int64 a2)
{
  int v3; // ebx
  bool v4; // zf
  char *v5; // rcx
  __int64 v6; // rdx
  int *v7; // rax
  unsigned __int64 v8; // rdx
  char v9; // r14
  _BYTE *v10; // r9
  unsigned __int8 v11; // r10
  char v12; // si
  char v13; // r11
  char v14; // r15
  char *v15; // r11
  unsigned int v16; // r13d
  unsigned int *v17; // r12
  __int64 v18; // rax
  unsigned __int64 v19; // rbp
  char v20; // cl
  char v21; // r8
  char *v22; // rax
  unsigned int v23; // eax
  char v24; // al
  char v26; // [rsp+60h] [rbp-58h]
  char v27; // [rsp+61h] [rbp-57h]
  unsigned int v28; // [rsp+64h] [rbp-54h]
  __int128 v29; // [rsp+68h] [rbp-50h] BYREF

  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 8) != 0
    && BYTE1(off_140168120->Timer) >= 3u )
  {
    sub_1400680F0(off_140168120->AttachedDevice, 31LL, &unk_14014A2D8, a1, a2);
  }
  LOBYTE(v3) = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v4 = byte_140168DAA == 0;
  *(_DWORD *)(a2 + 48) = -1073741823;
  if ( v4 )
    goto LABEL_69;
  v29 = 0LL;
  IoGetActivityIdIrp(a2, &v29);
  v6 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v6 == 14 )
  {
    if ( (byte_1401694F2 & 8) != 0 )
      sub_140052F3C(v5, &unk_140148B18, &v29, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_69;
  }
  if ( *(_BYTE *)v6 != 15 )
  {
    if ( *(_BYTE *)v6 == 27 )
    {
      if ( *(_BYTE *)(v6 + 1) != 7 || *(_DWORD *)(v6 + 8) )
      {
        if ( (byte_1401694F2 & 0x20) != 0 )
          sub_140052F3C(v5, &unk_140149FE8, &v29, a2, *(_DWORD *)(a2 + 48));
      }
      else if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v7 = *(int **)(a2 + 56);
        if ( v7 )
          v3 = *v7;
        sub_140056AB0((_DWORD)v5, v6, (unsigned int)&v29, a2, v3, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_69;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_69;
  v8 = *(_QWORD *)(v6 + 8);
  v9 = 0;
  v10 = 0LL;
  v26 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  if ( *(_BYTE *)(v8 + 2) != 40 )
  {
    v20 = *(_BYTE *)(v8 + 72);
    v10 = *(_BYTE **)(v8 + 32);
    v11 = *(_BYTE *)(v8 + 11);
    v9 = *(_BYTE *)(v8 + 4);
    if ( !*(_BYTE *)(v8 + 2) )
      goto LABEL_46;
    goto LABEL_69;
  }
  v15 = 0LL;
  v27 = 0;
  if ( *(_DWORD *)(v8 + 20) )
    goto LABEL_69;
  v16 = 0;
  v28 = *(_DWORD *)(v8 + 56);
  if ( !v28 )
    goto LABEL_43;
  v17 = (unsigned int *)(v8 + 120);
  while ( 1 )
  {
    v18 = *v17;
    if ( (unsigned int)v18 >= 0x80 )
    {
      v19 = *(unsigned int *)(v8 + 16);
      if ( (unsigned int)v18 < (unsigned int)v19 )
        break;
    }
LABEL_37:
    ++v16;
    ++v17;
    if ( v16 >= v28 )
      goto LABEL_43;
  }
  if ( *(_DWORD *)(v18 + v8) != 64 )
  {
    LODWORD(v5) = *(_DWORD *)(v18 + v8) - 65;
    if ( *(_DWORD *)(v18 + v8) == 65 )
    {
      LODWORD(v5) = v18 + 56;
      if ( v18 + 56 <= v19 )
      {
        v27 = 1;
        if ( *(_BYTE *)(v18 + v8 + 10) )
          v15 = (char *)(v18 + v8 + 24);
        v9 = *(_BYTE *)(v18 + v8 + 8);
        v10 = *(_BYTE **)(v18 + v8 + 16);
        v11 = *(_BYTE *)(v18 + v8 + 9);
      }
    }
    else if ( *(_DWORD *)(v18 + v8) == 66 )
    {
      LODWORD(v5) = v18 + 40;
      if ( v18 + 40 <= v19 )
      {
        if ( *(_DWORD *)(v18 + v8 + 12) )
          v15 = (char *)(v18 + v8 + 32);
        v10 = *(_BYTE **)(v18 + v8 + 24);
        goto LABEL_42;
      }
    }
    goto LABEL_36;
  }
  LODWORD(v5) = v18 + 40;
  if ( v18 + 40 > v19 )
  {
LABEL_36:
    if ( v27 )
      goto LABEL_43;
    goto LABEL_37;
  }
  if ( *(_BYTE *)(v18 + v8 + 10) )
    v15 = (char *)(v18 + v8 + 24);
  v10 = *(_BYTE **)(v18 + v8 + 16);
LABEL_42:
  v11 = *(_BYTE *)(v18 + v8 + 9);
  v9 = *(_BYTE *)(v18 + v8 + 8);
LABEL_43:
  if ( v15 )
  {
    v20 = *v15;
    v13 = 0;
LABEL_46:
    LOBYTE(v5) = v20 - 8;
    if ( ((unsigned __int8)v5 & 0x5D) == 0 )
    {
      v21 = *(_BYTE *)(v8 + 3);
      if ( v21 == 1 || !v10 || !v11 )
        goto LABEL_65;
      LOBYTE(v8) = 0;
      v5 = &v10[v11];
      v22 = v10 + 8;
      if ( (unsigned __int8)((*v10 & 0x7F) - 114) <= 1u )
      {
        if ( v22 <= v5 )
        {
          LOBYTE(v8) = 1;
          v13 = v10[2];
          v12 = v10[1] & 0xF;
          v14 = v10[3];
        }
      }
      else
      {
        if ( v22 <= v5 )
        {
          v12 = v10[2] & 0xF;
          v23 = v11;
          if ( (unsigned int)(unsigned __int8)v10[7] + 8 <= v11 )
            v23 = (unsigned __int8)v10[7] + 8;
          v5 = v10 + 13;
          v8 = (unsigned __int64)&v10[v23];
          if ( (unsigned __int64)(v10 + 13) > v8 )
            v26 = 0;
          else
            v26 = v10[12];
          if ( (unsigned __int64)(v10 + 14) <= v8 )
            v14 = *v5;
          LOBYTE(v8) = 1;
        }
        v13 = v26;
      }
      if ( (_BYTE)v8 )
      {
        LOBYTE(v3) = v13;
        v24 = v14;
      }
      else
      {
LABEL_65:
        v12 = 0;
        v24 = 0;
      }
      sub_140052E64((_DWORD)v5, v8, (unsigned int)&v29, a2, *(_DWORD *)(a2 + 48), v21, v9, v12, v3, v24, a2);
    }
  }
LABEL_69:
  IofCompleteRequest((PIRP)a2, 0);
  return 3221225473LL;
}
