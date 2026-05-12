/*
 * XREFs of sub_1401A2214 @ 0x1401A2214
 * Callers:
 *     sub_1401A4D74 @ 0x1401A4D74 (sub_1401A4D74.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1401A2214(__int64 a1, __int64 a2)
{
  _DWORD *v3; // r14
  int v4; // ebx
  size_t v6; // r8
  int v7; // edx
  __int64 v8; // rsi
  unsigned int v9; // ebp
  int v10; // ecx
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  unsigned __int64 v16; // rdx
  char v17; // r15
  _BYTE *v18; // r9
  unsigned __int8 v19; // r10
  char v20; // si
  char v21; // r11
  char v22; // r12
  char *v23; // r11
  unsigned int *v24; // r13
  __int64 v25; // rax
  unsigned __int64 v26; // r14
  char v27; // cl
  char v28; // r8
  _BYTE *v29; // rax
  unsigned int v30; // eax
  char v31; // al
  int v33; // [rsp+20h] [rbp-98h]
  char v34; // [rsp+60h] [rbp-58h]
  char v35; // [rsp+61h] [rbp-57h]
  int v36; // [rsp+64h] [rbp-54h]
  unsigned int v37; // [rsp+68h] [rbp-50h]
  GUID v38; // [rsp+70h] [rbp-48h] BYREF

  v3 = *(_DWORD **)(a2 + 24);
  v4 = 0;
  v6 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  v7 = v3[1];
  if ( !v7 )
  {
    if ( (unsigned int)v6 < 8 )
    {
      v9 = -1073741789;
      v8 = 0LL;
      goto LABEL_10;
    }
    v8 = 16LL;
    if ( (unsigned int)v6 >= 0x10 )
    {
      memset_0(v3, 0, v6);
      *v3 = 16;
      v3[1] = 16;
      v10 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 22LL) * (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) - 1);
      v3[2] = v10;
      v3[3] = v10;
    }
    else
    {
      *v3 = 16;
      v3[1] = 16;
      v8 = 8LL;
    }
LABEL_9:
    v9 = 0;
    goto LABEL_10;
  }
  v8 = 0LL;
  if ( v7 == 1 )
    goto LABEL_9;
  v9 = -1073741637;
LABEL_10:
  *(_QWORD *)(a2 + 56) = v8;
  v11 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v11 )
    goto LABEL_76;
  v38 = 0LL;
  IoGetActivityIdIrp(a2, &v38);
  v13 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_76;
    v33 = *(_DWORD *)(a2 + 48);
    v15 = &stru_140148B18;
    goto LABEL_75;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_76;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v14 = *(int **)(a2 + 56);
        if ( v14 )
          v4 = *v14;
        sub_140056AB0(v12, v13, &v38, a2, v4, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_76;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_76;
    v15 = &stru_140149FE8;
    v33 = *(_DWORD *)(a2 + 48);
LABEL_75:
    sub_140052F3C(v12, v15, &v38, a2, v33);
    goto LABEL_76;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_76;
  v16 = *(_QWORD *)(v13 + 8);
  v17 = 0;
  v18 = 0LL;
  v34 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(v16 + 2) != 40 )
  {
    v27 = *(_BYTE *)(v16 + 72);
    v18 = *(_BYTE **)(v16 + 32);
    v19 = *(_BYTE *)(v16 + 11);
    v17 = *(_BYTE *)(v16 + 4);
    if ( !*(_BYTE *)(v16 + 2) )
      goto LABEL_52;
    goto LABEL_76;
  }
  v23 = 0LL;
  v35 = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_76;
  v12 = 0LL;
  v36 = 0;
  v37 = *(_DWORD *)(v16 + 56);
  if ( !v37 )
    goto LABEL_49;
  v24 = (unsigned int *)(v16 + 120);
  while ( 1 )
  {
    v25 = *v24;
    if ( (unsigned int)v25 >= 0x80 )
    {
      v26 = *(unsigned int *)(v16 + 16);
      if ( (unsigned int)v25 < (unsigned int)v26 )
        break;
    }
LABEL_43:
    v12 = (unsigned int)(v12 + 1);
    ++v24;
    v36 = v12;
    if ( (unsigned int)v12 >= v37 )
      goto LABEL_49;
  }
  if ( *(_DWORD *)(v25 + v16) != 64 )
  {
    v12 = (unsigned int)(*(_DWORD *)(v25 + v16) - 65);
    if ( *(_DWORD *)(v25 + v16) == 65 )
    {
      v12 = v25 + 56;
      if ( v25 + 56 <= v26 )
      {
        v35 = 1;
        if ( *(_BYTE *)(v25 + v16 + 10) )
          v23 = (char *)(v25 + v16 + 24);
        v17 = *(_BYTE *)(v25 + v16 + 8);
        v18 = *(_BYTE **)(v25 + v16 + 16);
        v19 = *(_BYTE *)(v25 + v16 + 9);
      }
    }
    else if ( *(_DWORD *)(v25 + v16) == 66 )
    {
      v12 = v25 + 40;
      if ( v25 + 40 <= v26 )
      {
        if ( *(_DWORD *)(v25 + v16 + 12) )
          v23 = (char *)(v25 + v16 + 32);
        v18 = *(_BYTE **)(v25 + v16 + 24);
        goto LABEL_48;
      }
    }
    goto LABEL_41;
  }
  v12 = v25 + 40;
  if ( v25 + 40 > v26 )
  {
LABEL_41:
    if ( v35 )
      goto LABEL_49;
    LODWORD(v12) = v36;
    goto LABEL_43;
  }
  if ( *(_BYTE *)(v25 + v16 + 10) )
    v23 = (char *)(v25 + v16 + 24);
  v18 = *(_BYTE **)(v25 + v16 + 16);
LABEL_48:
  v19 = *(_BYTE *)(v25 + v16 + 9);
  v17 = *(_BYTE *)(v25 + v16 + 8);
LABEL_49:
  if ( v23 )
  {
    v27 = *v23;
    v21 = 0;
LABEL_52:
    LOBYTE(v12) = v27 - 8;
    if ( (v12 & 0x5D) == 0 )
    {
      v28 = *(_BYTE *)(v16 + 3);
      if ( v28 == 1 || !v18 || !v19 )
        goto LABEL_71;
      LOBYTE(v16) = 0;
      v12 = (unsigned __int64)&v18[v19];
      v29 = v18 + 8;
      if ( (unsigned __int8)((*v18 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v29 <= v12 )
        {
          LOBYTE(v16) = 1;
          v21 = v18[2];
          v20 = v18[1] & 0xF;
          v22 = v18[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v29 <= v12 )
        {
          v20 = v18[2] & 0xF;
          v30 = v19;
          if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
            v30 = (unsigned __int8)v18[7] + 8;
          v12 = (unsigned __int64)(v18 + 13);
          v16 = (unsigned __int64)&v18[v30];
          if ( (unsigned __int64)(v18 + 13) > v16 )
            v34 = 0;
          else
            v34 = v18[12];
          if ( (unsigned __int64)(v18 + 14) <= v16 )
            v22 = *(_BYTE *)v12;
          LOBYTE(v16) = 1;
        }
        v21 = v34;
      }
      if ( (_BYTE)v16 )
      {
        LOBYTE(v4) = v21;
        v31 = v22;
      }
      else
      {
LABEL_71:
        v20 = 0;
        v31 = 0;
      }
      sub_140052E64(v12, v16, &v38, a2, *(_DWORD *)(a2 + 48), v28, v17, v20, v4, v31, a2);
    }
  }
LABEL_76:
  IofCompleteRequest((PIRP)a2, 0);
  return v9;
}
