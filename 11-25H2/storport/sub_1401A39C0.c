/*
 * XREFs of sub_1401A39C0 @ 0x1401A39C0
 * Callers:
 *     sub_1401A4D74 @ 0x1401A4D74 (sub_1401A4D74.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1401A39C0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r14
  int v3; // ebx
  __int64 v4; // rax
  int v6; // ecx
  unsigned int v7; // edx
  __int64 v8; // rsi
  unsigned int v9; // ebp
  bool v10; // zf
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx
  unsigned __int64 v15; // rdx
  char v16; // r15
  _BYTE *v17; // r9
  unsigned __int8 v18; // r10
  char v19; // si
  char v20; // r11
  char v21; // r12
  char *v22; // r11
  unsigned int *v23; // r13
  __int64 v24; // rax
  unsigned __int64 v25; // r14
  char v26; // cl
  char v27; // r8
  _BYTE *v28; // rax
  unsigned int v29; // eax
  char v30; // al
  int v32; // [rsp+20h] [rbp-98h]
  char v33; // [rsp+60h] [rbp-58h]
  char v34; // [rsp+61h] [rbp-57h]
  int v35; // [rsp+64h] [rbp-54h]
  unsigned int v36; // [rsp+68h] [rbp-50h]
  GUID v37; // [rsp+70h] [rbp-48h] BYREF

  v2 = *(_DWORD **)(a2 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v6 = v2[1];
  v7 = *(_DWORD *)(v4 + 8);
  if ( !v6 )
  {
    if ( v7 < 8 )
    {
      v9 = -1073741789;
      v8 = 0LL;
      goto LABEL_10;
    }
    v8 = 20LL;
    if ( v7 >= 0x14 )
    {
      memset_0(v2, 0, *(unsigned int *)(v4 + 8));
      *v2 = 20;
      v2[1] = 20;
    }
    else
    {
      *v2 = 20;
      v2[1] = 20;
      v8 = 8LL;
    }
LABEL_9:
    v9 = 0;
    goto LABEL_10;
  }
  v8 = 0LL;
  if ( v6 == 1 )
    goto LABEL_9;
  v9 = -1073741637;
LABEL_10:
  *(_QWORD *)(a2 + 56) = v8;
  v10 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v10 )
    goto LABEL_76;
  v37 = 0LL;
  IoGetActivityIdIrp(a2, &v37);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_76;
    v32 = *(_DWORD *)(a2 + 48);
    v14 = &stru_140148B18;
    goto LABEL_75;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_76;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v3 = *v13;
        sub_140056AB0(v11, v12, &v37, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_76;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_76;
    v14 = &stru_140149FE8;
    v32 = *(_DWORD *)(a2 + 48);
LABEL_75:
    sub_140052F3C(v11, v14, &v37, a2, v32);
    goto LABEL_76;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_76;
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
    v26 = *(_BYTE *)(v15 + 72);
    v17 = *(_BYTE **)(v15 + 32);
    v18 = *(_BYTE *)(v15 + 11);
    v16 = *(_BYTE *)(v15 + 4);
    if ( !*(_BYTE *)(v15 + 2) )
      goto LABEL_52;
    goto LABEL_76;
  }
  v22 = 0LL;
  v34 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_76;
  v11 = 0LL;
  v35 = 0;
  v36 = *(_DWORD *)(v15 + 56);
  if ( !v36 )
    goto LABEL_49;
  v23 = (unsigned int *)(v15 + 120);
  while ( 1 )
  {
    v24 = *v23;
    if ( (unsigned int)v24 >= 0x80 )
    {
      v25 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v24 < (unsigned int)v25 )
        break;
    }
LABEL_43:
    v11 = (unsigned int)(v11 + 1);
    ++v23;
    v35 = v11;
    if ( (unsigned int)v11 >= v36 )
      goto LABEL_49;
  }
  if ( *(_DWORD *)(v24 + v15) != 64 )
  {
    v11 = (unsigned int)(*(_DWORD *)(v24 + v15) - 65);
    if ( *(_DWORD *)(v24 + v15) == 65 )
    {
      v11 = v24 + 56;
      if ( v24 + 56 <= v25 )
      {
        v34 = 1;
        if ( *(_BYTE *)(v24 + v15 + 10) )
          v22 = (char *)(v24 + v15 + 24);
        v16 = *(_BYTE *)(v24 + v15 + 8);
        v17 = *(_BYTE **)(v24 + v15 + 16);
        v18 = *(_BYTE *)(v24 + v15 + 9);
      }
    }
    else if ( *(_DWORD *)(v24 + v15) == 66 )
    {
      v11 = v24 + 40;
      if ( v24 + 40 <= v25 )
      {
        if ( *(_DWORD *)(v24 + v15 + 12) )
          v22 = (char *)(v24 + v15 + 32);
        v17 = *(_BYTE **)(v24 + v15 + 24);
        goto LABEL_48;
      }
    }
    goto LABEL_41;
  }
  v11 = v24 + 40;
  if ( v24 + 40 > v25 )
  {
LABEL_41:
    if ( v34 )
      goto LABEL_49;
    LODWORD(v11) = v35;
    goto LABEL_43;
  }
  if ( *(_BYTE *)(v24 + v15 + 10) )
    v22 = (char *)(v24 + v15 + 24);
  v17 = *(_BYTE **)(v24 + v15 + 16);
LABEL_48:
  v18 = *(_BYTE *)(v24 + v15 + 9);
  v16 = *(_BYTE *)(v24 + v15 + 8);
LABEL_49:
  if ( v22 )
  {
    v26 = *v22;
    v20 = 0;
LABEL_52:
    LOBYTE(v11) = v26 - 8;
    if ( (v11 & 0x5D) == 0 )
    {
      v27 = *(_BYTE *)(v15 + 3);
      if ( v27 == 1 || !v17 || !v18 )
        goto LABEL_71;
      LOBYTE(v15) = 0;
      v11 = (unsigned __int64)&v17[v18];
      v28 = v17 + 8;
      if ( (unsigned __int8)((*v17 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v28 <= v11 )
        {
          LOBYTE(v15) = 1;
          v20 = v17[2];
          v19 = v17[1] & 0xF;
          v21 = v17[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v28 <= v11 )
        {
          v19 = v17[2] & 0xF;
          v29 = v18;
          if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
            v29 = (unsigned __int8)v17[7] + 8;
          v11 = (unsigned __int64)(v17 + 13);
          v15 = (unsigned __int64)&v17[v29];
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
        v30 = v21;
      }
      else
      {
LABEL_71:
        v19 = 0;
        v30 = 0;
      }
      sub_140052E64(v11, v15, &v37, a2, *(_DWORD *)(a2 + 48), v27, v16, v19, v3, v30, a2);
    }
  }
LABEL_76:
  IofCompleteRequest((PIRP)a2, 0);
  return v9;
}
