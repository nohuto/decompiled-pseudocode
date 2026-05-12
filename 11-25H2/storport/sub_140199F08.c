/*
 * XREFs of sub_140199F08 @ 0x140199F08
 * Callers:
 *     sub_140198640 @ 0x140198640 (sub_140198640.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400C6900 @ 0x1400C6900 (sub_1400C6900.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140199F08(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rbp
  int v6; // r15d
  __int64 v7; // r14
  __int64 v8; // rsi
  bool v9; // cl
  bool v10; // zf
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx
  unsigned __int64 v15; // rdx
  char v16; // r12
  _BYTE *v17; // r9
  unsigned __int8 v18; // r10
  char v19; // si
  char v20; // r11
  char v21; // r13
  char *v22; // r11
  unsigned int v23; // r14d
  unsigned __int64 v24; // rbp
  __int64 v25; // r8
  int v26; // ecx
  char v27; // cl
  char v28; // r8
  _BYTE *v29; // rax
  unsigned int v30; // eax
  char v31; // al
  char v33; // [rsp+60h] [rbp-58h]
  char v34; // [rsp+61h] [rbp-57h]
  unsigned int v35; // [rsp+64h] [rbp-54h]
  GUID v36; // [rsp+68h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  v6 = 0;
  v7 = *(_QWORD *)(v4 + 592);
  if ( *(_DWORD *)(v2 + 8) >= 0x18u )
  {
    if ( v7 )
    {
      v8 = *(_QWORD *)(a2 + 24);
      if ( v8 )
      {
        memset_0(*(void **)(a2 + 24), 0, *(unsigned int *)(v2 + 8));
        *(_BYTE *)(v8 + 2) = 0;
        if ( (*(_BYTE *)(v7 + 525) & 1) != 0 )
        {
          v6 = sub_1400C6900((PVOID)v4, 0);
          if ( v6 >= 0 )
          {
            v9 = (*(_DWORD *)(v4 + 136) & 0x80000LL) != 0;
            *(_QWORD *)(v8 + 4) = 0LL;
            *(_BYTE *)(v8 + 2) = v9;
            *(_BYTE *)(v8 + 1) = 1;
            *(_QWORD *)(a2 + 56) = 24LL;
          }
        }
        goto LABEL_11;
      }
      v6 = -1073741811;
    }
    else
    {
      v6 = -1073741637;
    }
  }
  else
  {
    v6 = -1073741789;
  }
  *(_QWORD *)(a2 + 56) = 0LL;
LABEL_11:
  v10 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v10 )
    goto LABEL_75;
  v36 = 0LL;
  IoGetActivityIdIrp(a2, &v36);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_75;
    v14 = &stru_140148B18;
    goto LABEL_74;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_75;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v3 = *v13;
        sub_140056AB0(v11, v12, &v36, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_75;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_75;
    v14 = &stru_140149FE8;
LABEL_74:
    sub_140052F3C(v11, v14, &v36, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_75;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_75;
  v15 = *(_QWORD *)(v12 + 8);
  v16 = 0;
  v17 = 0LL;
  v33 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v27 = *(_BYTE *)(v15 + 72);
    v17 = *(_BYTE **)(v15 + 32);
    v18 = *(_BYTE *)(v15 + 11);
    v16 = *(_BYTE *)(v15 + 4);
    if ( !*(_BYTE *)(v15 + 2) )
      goto LABEL_51;
    goto LABEL_75;
  }
  v22 = 0LL;
  v34 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_75;
  v23 = 0;
  v35 = *(_DWORD *)(v15 + 56);
  if ( !v35 )
    goto LABEL_48;
  while ( 1 )
  {
    v11 = *(unsigned int *)(v15 + 4LL * v23 + 120);
    if ( (unsigned int)v11 >= 0x80 )
    {
      v24 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v11 < (unsigned int)v24 )
        break;
    }
LABEL_42:
    if ( ++v23 >= v35 )
      goto LABEL_48;
  }
  v25 = (unsigned int)v11;
  v26 = *(_DWORD *)(v11 + v15) - 64;
  if ( v26 )
  {
    v11 = (unsigned int)(v26 - 1);
    if ( (_DWORD)v11 )
    {
      if ( (_DWORD)v11 == 1 )
      {
        v11 = v25 + 40;
        if ( v25 + 40 <= v24 )
        {
          if ( *(_DWORD *)(v25 + v15 + 12) )
            v22 = (char *)(v25 + v15 + 32);
          v17 = *(_BYTE **)(v25 + v15 + 24);
          goto LABEL_47;
        }
      }
    }
    else
    {
      v11 = v25 + 56;
      if ( v25 + 56 <= v24 )
      {
        v34 = 1;
        if ( *(_BYTE *)(v25 + v15 + 10) )
          v22 = (char *)(v25 + v15 + 24);
        v16 = *(_BYTE *)(v25 + v15 + 8);
        v17 = *(_BYTE **)(v25 + v15 + 16);
        v18 = *(_BYTE *)(v25 + v15 + 9);
      }
    }
    goto LABEL_41;
  }
  v11 = v25 + 40;
  if ( v25 + 40 > v24 )
  {
LABEL_41:
    if ( v34 )
      goto LABEL_48;
    goto LABEL_42;
  }
  if ( *(_BYTE *)(v25 + v15 + 10) )
    v22 = (char *)(v25 + v15 + 24);
  v17 = *(_BYTE **)(v25 + v15 + 16);
LABEL_47:
  v18 = *(_BYTE *)(v25 + v15 + 9);
  v16 = *(_BYTE *)(v25 + v15 + 8);
LABEL_48:
  if ( v22 )
  {
    v27 = *v22;
    v20 = 0;
LABEL_51:
    LOBYTE(v11) = v27 - 8;
    if ( (v11 & 0x5D) == 0 )
    {
      v28 = *(_BYTE *)(v15 + 3);
      if ( v28 == 1 || !v17 || !v18 )
        goto LABEL_70;
      LOBYTE(v15) = 0;
      v11 = (unsigned __int64)&v17[v18];
      v29 = v17 + 8;
      if ( (unsigned __int8)((*v17 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v29 <= v11 )
        {
          LOBYTE(v15) = 1;
          v20 = v17[2];
          v19 = v17[1] & 0xF;
          v21 = v17[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v29 <= v11 )
        {
          v19 = v17[2] & 0xF;
          v30 = v18;
          if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
            v30 = (unsigned __int8)v17[7] + 8;
          v11 = (unsigned __int64)(v17 + 13);
          v15 = (unsigned __int64)&v17[v30];
          if ( (unsigned __int64)(v17 + 13) > v15 )
            v33 = 0;
          else
            v33 = v17[12];
          if ( (unsigned __int64)(v17 + 14) <= v15 )
            v21 = *(_BYTE *)v11;
          LOBYTE(v15) = 1;
        }
        v20 = v33;
      }
      if ( (_BYTE)v15 )
      {
        LOBYTE(v3) = v20;
        v31 = v21;
      }
      else
      {
LABEL_70:
        v19 = 0;
        v31 = 0;
      }
      sub_140052E64(v11, v15, &v36, a2, *(_DWORD *)(a2 + 48), v28, v16, v19, v3, v31, a2);
    }
  }
LABEL_75:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v6;
}
