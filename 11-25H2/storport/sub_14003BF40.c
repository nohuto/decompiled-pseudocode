/*
 * XREFs of sub_14003BF40 @ 0x14003BF40
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_1401AEB68 @ 0x1401AEB68 (sub_1401AEB68.c)
 */

__int64 __fastcall sub_14003BF40(void *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  unsigned int v5; // ebp
  bool v6; // zf
  char *v7; // rcx
  __int64 v8; // rdx
  int *v9; // rax
  void *v10; // rdx
  unsigned __int64 v11; // rdx
  char v12; // r14
  _BYTE *v13; // r9
  unsigned __int8 v14; // r10
  char v15; // si
  char v16; // r11
  char v17; // r15
  char *v18; // r11
  unsigned int v19; // r13d
  unsigned int *v20; // r12
  __int64 v21; // rax
  unsigned __int64 v22; // rbp
  char v23; // cl
  char v24; // r8
  char *v25; // rax
  unsigned int v26; // eax
  char v27; // al
  char v29; // [rsp+60h] [rbp-68h]
  char v30; // [rsp+61h] [rbp-67h]
  unsigned int v31; // [rsp+64h] [rbp-64h]
  unsigned int v32; // [rsp+68h] [rbp-60h]
  __int128 v33; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  LOBYTE(v3) = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( *(_DWORD *)(v2 + 16) < 0x10u )
    v5 = -1073741811;
  else
    v5 = sub_1401AEB68(a1);
  v6 = byte_140168DAA == 0;
  v31 = v5;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v6 )
    goto LABEL_70;
  v33 = 0LL;
  IoGetActivityIdIrp(a2, &v33);
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v8 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_70;
    v10 = &unk_140148B18;
    goto LABEL_69;
  }
  if ( *(_BYTE *)v8 != 15 )
  {
    if ( *(_BYTE *)v8 != 27 )
      goto LABEL_70;
    if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v9 = *(int **)(a2 + 56);
        if ( v9 )
          v3 = *v9;
        sub_140056AB0((_DWORD)v7, v8, (unsigned int)&v33, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_70;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_70;
    v10 = &unk_140149FE8;
LABEL_69:
    sub_140052F3C(v7, v10, &v33, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_70;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_70;
  v11 = *(_QWORD *)(v8 + 8);
  v12 = 0;
  v13 = 0LL;
  v29 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( *(_BYTE *)(v11 + 2) != 40 )
  {
    v23 = *(_BYTE *)(v11 + 72);
    v13 = *(_BYTE **)(v11 + 32);
    v14 = *(_BYTE *)(v11 + 11);
    v12 = *(_BYTE *)(v11 + 4);
    if ( !*(_BYTE *)(v11 + 2) )
      goto LABEL_46;
    goto LABEL_70;
  }
  v18 = 0LL;
  v30 = 0;
  if ( *(_DWORD *)(v11 + 20) )
    goto LABEL_70;
  v19 = 0;
  v32 = *(_DWORD *)(v11 + 56);
  if ( !v32 )
    goto LABEL_43;
  v20 = (unsigned int *)(v11 + 120);
  while ( 1 )
  {
    v21 = *v20;
    if ( (unsigned int)v21 >= 0x80 )
    {
      v22 = *(unsigned int *)(v11 + 16);
      if ( (unsigned int)v21 < (unsigned int)v22 )
        break;
    }
LABEL_36:
    ++v19;
    ++v20;
    if ( v19 >= v32 )
      goto LABEL_42;
  }
  if ( *(_DWORD *)(v21 + v11) != 64 )
  {
    LODWORD(v7) = *(_DWORD *)(v21 + v11) - 65;
    if ( *(_DWORD *)(v21 + v11) == 65 )
    {
      LODWORD(v7) = v21 + 56;
      if ( v21 + 56 <= v22 )
      {
        v30 = 1;
        if ( *(_BYTE *)(v21 + v11 + 10) )
          v18 = (char *)(v21 + v11 + 24);
        v12 = *(_BYTE *)(v21 + v11 + 8);
        v13 = *(_BYTE **)(v21 + v11 + 16);
        v14 = *(_BYTE *)(v21 + v11 + 9);
      }
    }
    else if ( *(_DWORD *)(v21 + v11) == 66 )
    {
      LODWORD(v7) = v21 + 40;
      if ( v21 + 40 <= v22 )
      {
        if ( *(_DWORD *)(v21 + v11 + 12) )
          v18 = (char *)(v21 + v11 + 32);
        v13 = *(_BYTE **)(v21 + v11 + 24);
        goto LABEL_41;
      }
    }
    goto LABEL_35;
  }
  LODWORD(v7) = v21 + 40;
  if ( v21 + 40 > v22 )
  {
LABEL_35:
    if ( v30 )
      goto LABEL_42;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v21 + v11 + 10) )
    v18 = (char *)(v21 + v11 + 24);
  v13 = *(_BYTE **)(v21 + v11 + 16);
LABEL_41:
  v14 = *(_BYTE *)(v21 + v11 + 9);
  v12 = *(_BYTE *)(v21 + v11 + 8);
LABEL_42:
  v5 = v31;
LABEL_43:
  if ( v18 )
  {
    v23 = *v18;
    v16 = 0;
LABEL_46:
    LOBYTE(v7) = v23 - 8;
    if ( ((unsigned __int8)v7 & 0x5D) == 0 )
    {
      v24 = *(_BYTE *)(v11 + 3);
      if ( v24 == 1 || !v13 || !v14 )
        goto LABEL_65;
      LOBYTE(v11) = 0;
      v7 = &v13[v14];
      v25 = v13 + 8;
      if ( (unsigned __int8)((*v13 & 0x7F) - 114) <= 1u )
      {
        if ( v25 <= v7 )
        {
          LOBYTE(v11) = 1;
          v16 = v13[2];
          v15 = v13[1] & 0xF;
          v17 = v13[3];
        }
      }
      else
      {
        if ( v25 <= v7 )
        {
          v15 = v13[2] & 0xF;
          v26 = v14;
          if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v14 )
            v26 = (unsigned __int8)v13[7] + 8;
          v7 = v13 + 13;
          v11 = (unsigned __int64)&v13[v26];
          if ( (unsigned __int64)(v13 + 13) > v11 )
            v29 = 0;
          else
            v29 = v13[12];
          if ( (unsigned __int64)(v13 + 14) <= v11 )
            v17 = *v7;
          LOBYTE(v11) = 1;
        }
        v16 = v29;
      }
      if ( (_BYTE)v11 )
      {
        LOBYTE(v3) = v16;
        v27 = v17;
      }
      else
      {
LABEL_65:
        v15 = 0;
        v27 = 0;
      }
      sub_140052E64((_DWORD)v7, v11, (unsigned int)&v33, a2, *(_DWORD *)(a2 + 48), v24, v12, v15, v3, v27, a2);
    }
  }
LABEL_70:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
