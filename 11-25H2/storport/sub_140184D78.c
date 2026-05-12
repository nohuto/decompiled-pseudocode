/*
 * XREFs of sub_140184D78 @ 0x140184D78
 * Callers:
 *     sub_140180B24 @ 0x140180B24 (sub_140180B24.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140184D78(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rax
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  unsigned __int64 v13; // rdx
  char v14; // r12
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // bp
  char v18; // r11
  char v19; // r13
  char *v20; // r11
  unsigned int v21; // r15d
  unsigned __int64 v22; // r14
  __int64 v23; // r8
  int v24; // ecx
  char v25; // cl
  char v26; // r8
  _BYTE *v27; // rax
  unsigned int v28; // eax
  char v29; // al
  int v31; // [rsp+20h] [rbp-98h]
  char v32; // [rsp+60h] [rbp-58h]
  char v33; // [rsp+61h] [rbp-57h]
  unsigned int v34; // [rsp+64h] [rbp-54h]
  GUID v35; // [rsp+68h] [rbp-50h] BYREF

  v2 = 0;
  v5 = 0;
  if ( (*(_DWORD *)(a1 + 1952) & 0x20) == 0 )
    goto LABEL_2;
  v6 = *(_QWORD *)(a2 + 24);
  if ( !v6 )
    goto LABEL_9;
  if ( *(_DWORD *)(v6 + 4) )
  {
LABEL_2:
    v5 = -1073741637;
LABEL_10:
    *(_QWORD *)(a2 + 56) = 0LL;
    goto LABEL_11;
  }
  if ( !*(_QWORD *)(v6 + 8) || !*(_QWORD *)(v6 + 16) || !*(_QWORD *)(v6 + 24) )
  {
LABEL_9:
    v5 = -1073741811;
    goto LABEL_10;
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 111LL) |= 0x80u;
  v7 = *(_QWORD *)(a1 + 24);
  *(_OWORD *)(v7 + 6080) = *(_OWORD *)(v6 + 8);
  *(_QWORD *)(v7 + 6096) = *(_QWORD *)(v6 + 24);
LABEL_11:
  v8 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v8 )
    goto LABEL_75;
  v35 = 0LL;
  IoGetActivityIdIrp(a2, &v35);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_75;
    v31 = *(_DWORD *)(a2 + 48);
    v12 = &stru_140148B18;
    goto LABEL_74;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_75;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v2 = *v11;
        sub_140056AB0(v9, v10, &v35, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_75;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_75;
    v12 = &stru_140149FE8;
    v31 = *(_DWORD *)(a2 + 48);
LABEL_74:
    sub_140052F3C(v9, v12, &v35, a2, v31);
    goto LABEL_75;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_75;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0;
  v15 = 0LL;
  v32 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v13 + 2) != 40 )
  {
    v25 = *(_BYTE *)(v13 + 72);
    v15 = *(_BYTE **)(v13 + 32);
    v16 = *(_BYTE *)(v13 + 11);
    v14 = *(_BYTE *)(v13 + 4);
    if ( !*(_BYTE *)(v13 + 2) )
      goto LABEL_51;
    goto LABEL_75;
  }
  v20 = 0LL;
  v33 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_75;
  v21 = 0;
  v34 = *(_DWORD *)(v13 + 56);
  if ( !v34 )
    goto LABEL_48;
  while ( 1 )
  {
    v9 = *(unsigned int *)(v13 + 4LL * v21 + 120);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v22 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v9 < (unsigned int)v22 )
        break;
    }
LABEL_42:
    if ( ++v21 >= v34 )
      goto LABEL_48;
  }
  v23 = (unsigned int)v9;
  v24 = *(_DWORD *)(v9 + v13) - 64;
  if ( v24 )
  {
    v9 = (unsigned int)(v24 - 1);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        v9 = v23 + 40;
        if ( v23 + 40 <= v22 )
        {
          if ( *(_DWORD *)(v23 + v13 + 12) )
            v20 = (char *)(v23 + v13 + 32);
          v15 = *(_BYTE **)(v23 + v13 + 24);
          goto LABEL_47;
        }
      }
    }
    else
    {
      v9 = v23 + 56;
      if ( v23 + 56 <= v22 )
      {
        v33 = 1;
        if ( *(_BYTE *)(v23 + v13 + 10) )
          v20 = (char *)(v23 + v13 + 24);
        v14 = *(_BYTE *)(v23 + v13 + 8);
        v15 = *(_BYTE **)(v23 + v13 + 16);
        v16 = *(_BYTE *)(v23 + v13 + 9);
      }
    }
    goto LABEL_41;
  }
  v9 = v23 + 40;
  if ( v23 + 40 > v22 )
  {
LABEL_41:
    if ( v33 )
      goto LABEL_48;
    goto LABEL_42;
  }
  if ( *(_BYTE *)(v23 + v13 + 10) )
    v20 = (char *)(v23 + v13 + 24);
  v15 = *(_BYTE **)(v23 + v13 + 16);
LABEL_47:
  v16 = *(_BYTE *)(v23 + v13 + 9);
  v14 = *(_BYTE *)(v23 + v13 + 8);
LABEL_48:
  if ( v20 )
  {
    v25 = *v20;
    v18 = 0;
LABEL_51:
    LOBYTE(v9) = v25 - 8;
    if ( (v9 & 0x5D) == 0 )
    {
      v26 = *(_BYTE *)(v13 + 3);
      if ( v26 == 1 || !v15 || !v16 )
        goto LABEL_70;
      LOBYTE(v13) = 0;
      v9 = (unsigned __int64)&v15[v16];
      v27 = v15 + 8;
      if ( (unsigned __int8)((*v15 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v27 <= v9 )
        {
          LOBYTE(v13) = 1;
          v18 = v15[2];
          v17 = v15[1] & 0xF;
          v19 = v15[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v27 <= v9 )
        {
          v17 = v15[2] & 0xF;
          v28 = v16;
          if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
            v28 = (unsigned __int8)v15[7] + 8;
          v9 = (unsigned __int64)(v15 + 13);
          v13 = (unsigned __int64)&v15[v28];
          if ( (unsigned __int64)(v15 + 13) > v13 )
            v32 = 0;
          else
            v32 = v15[12];
          if ( (unsigned __int64)(v15 + 14) <= v13 )
            v19 = *(_BYTE *)v9;
          LOBYTE(v13) = 1;
        }
        v18 = v32;
      }
      if ( (_BYTE)v13 )
      {
        LOBYTE(v2) = v18;
        v29 = v19;
      }
      else
      {
LABEL_70:
        v17 = 0;
        v29 = 0;
      }
      sub_140052E64(v9, v13, &v35, a2, *(_DWORD *)(a2 + 48), v26, v14, v17, v2, v29, a2);
    }
  }
LABEL_75:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
