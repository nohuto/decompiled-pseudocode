/*
 * XREFs of sub_14005E958 @ 0x14005E958
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14005E958(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  unsigned int v5; // ebp
  char v6; // al
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  unsigned __int64 v12; // rdx
  char v13; // r14
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // si
  char v17; // r11
  char v18; // r15
  char *v19; // r11
  unsigned int v20; // r13d
  unsigned int *v21; // r12
  __int64 v22; // rax
  unsigned __int64 v23; // rbp
  char v24; // cl
  char v25; // r8
  _BYTE *v26; // rax
  unsigned int v27; // eax
  char v28; // al
  int v30; // [rsp+20h] [rbp-98h]
  char v31; // [rsp+60h] [rbp-58h]
  char v32; // [rsp+61h] [rbp-57h]
  unsigned int v33; // [rsp+64h] [rbp-54h]
  unsigned int v34; // [rsp+68h] [rbp-50h]
  GUID v35; // [rsp+70h] [rbp-48h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) >= 8u )
  {
    *(_DWORD *)v4 = 8;
    v5 = 0;
    v6 = *(_BYTE *)(a1 + 56);
    *(_WORD *)(v4 + 5) = -1;
    *(_BYTE *)(v4 + 4) = v6;
    *(_BYTE *)(v4 + 7) = -1;
    *(_QWORD *)(a2 + 56) = 8LL;
  }
  else
  {
    v5 = -1073741789;
  }
  v7 = byte_140168DAA == 0;
  v33 = v5;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v7 )
    goto LABEL_70;
  v35 = 0LL;
  IoGetActivityIdIrp(a2, &v35);
  v9 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_70;
    v30 = *(_DWORD *)(a2 + 48);
    v11 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_69;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_70;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v10 = *(int **)(a2 + 56);
        if ( v10 )
          v3 = *v10;
        sub_140056AB0(v8, v9, &v35, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_70;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_70;
    v11 = &stru_140149FE8;
    v30 = *(_DWORD *)(a2 + 48);
LABEL_69:
    sub_140052F3C(v8, v11, &v35, a2, v30);
    goto LABEL_70;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_70;
  v12 = *(_QWORD *)(v9 + 8);
  v13 = 0;
  v14 = 0LL;
  v31 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v24 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( !*(_BYTE *)(v12 + 2) )
      goto LABEL_46;
    goto LABEL_70;
  }
  v19 = 0LL;
  v32 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_70;
  v20 = 0;
  v34 = *(_DWORD *)(v12 + 56);
  if ( !v34 )
    goto LABEL_43;
  v21 = (unsigned int *)(v12 + 120);
  while ( 1 )
  {
    v22 = *v21;
    if ( (unsigned int)v22 >= 0x80 )
    {
      v23 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v22 < (unsigned int)v23 )
        break;
    }
LABEL_36:
    ++v20;
    ++v21;
    if ( v20 >= v34 )
      goto LABEL_42;
  }
  if ( *(_DWORD *)(v22 + v12) != 64 )
  {
    v8 = (unsigned int)(*(_DWORD *)(v22 + v12) - 65);
    if ( *(_DWORD *)(v22 + v12) == 65 )
    {
      v8 = v22 + 56;
      if ( v22 + 56 <= v23 )
      {
        v32 = 1;
        if ( *(_BYTE *)(v22 + v12 + 10) )
          v19 = (char *)(v22 + v12 + 24);
        v13 = *(_BYTE *)(v22 + v12 + 8);
        v14 = *(_BYTE **)(v22 + v12 + 16);
        v15 = *(_BYTE *)(v22 + v12 + 9);
      }
    }
    else if ( *(_DWORD *)(v22 + v12) == 66 )
    {
      v8 = v22 + 40;
      if ( v22 + 40 <= v23 )
      {
        if ( *(_DWORD *)(v22 + v12 + 12) )
          v19 = (char *)(v22 + v12 + 32);
        v14 = *(_BYTE **)(v22 + v12 + 24);
        goto LABEL_41;
      }
    }
    goto LABEL_35;
  }
  v8 = v22 + 40;
  if ( v22 + 40 > v23 )
  {
LABEL_35:
    if ( v32 )
      goto LABEL_42;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v22 + v12 + 10) )
    v19 = (char *)(v22 + v12 + 24);
  v14 = *(_BYTE **)(v22 + v12 + 16);
LABEL_41:
  v15 = *(_BYTE *)(v22 + v12 + 9);
  v13 = *(_BYTE *)(v22 + v12 + 8);
LABEL_42:
  v5 = v33;
LABEL_43:
  if ( v19 )
  {
    v24 = *v19;
    v17 = 0;
LABEL_46:
    LOBYTE(v8) = v24 - 8;
    if ( (v8 & 0x5D) == 0 )
    {
      v25 = *(_BYTE *)(v12 + 3);
      if ( v25 == 1 || !v14 || !v15 )
        goto LABEL_65;
      LOBYTE(v12) = 0;
      v8 = (unsigned __int64)&v14[v15];
      v26 = v14 + 8;
      if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v26 <= v8 )
        {
          LOBYTE(v12) = 1;
          v17 = v14[2];
          v16 = v14[1] & 0xF;
          v18 = v14[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v26 <= v8 )
        {
          v16 = v14[2] & 0xF;
          v27 = v15;
          if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
            v27 = (unsigned __int8)v14[7] + 8;
          v8 = (unsigned __int64)(v14 + 13);
          v12 = (unsigned __int64)&v14[v27];
          if ( (unsigned __int64)(v14 + 13) > v12 )
            v31 = 0;
          else
            v31 = v14[12];
          if ( (unsigned __int64)(v14 + 14) <= v12 )
            v18 = *(_BYTE *)v8;
          LOBYTE(v12) = 1;
        }
        v17 = v31;
      }
      if ( (_BYTE)v12 )
      {
        LOBYTE(v3) = v17;
        v28 = v18;
      }
      else
      {
LABEL_65:
        v16 = 0;
        v28 = 0;
      }
      sub_140052E64(v8, v12, &v35, a2, *(_DWORD *)(a2 + 48), v25, v13, v16, v3, v28, a2);
    }
  }
LABEL_70:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
