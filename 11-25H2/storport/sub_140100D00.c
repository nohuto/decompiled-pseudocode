/*
 * XREFs of sub_140100D00 @ 0x140100D00
 * Callers:
 *     sub_140198640 @ 0x140198640 (sub_140198640.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140100D00(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  int v3; // ebx
  __int64 v6; // rdx
  unsigned int v7; // ebp
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  bool v12; // zf
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // rax
  const EVENT_DESCRIPTOR *v16; // rdx
  unsigned __int64 v17; // rdx
  char v18; // r15
  _BYTE *v19; // r9
  unsigned __int8 v20; // r10
  char v21; // si
  char v22; // r11
  char v23; // r12
  char *v24; // r11
  char v25; // r13
  unsigned int v26; // r14d
  unsigned __int64 v27; // rbp
  __int64 v28; // r8
  int v29; // ecx
  char v30; // cl
  char v31; // r8
  _BYTE *v32; // rax
  unsigned int v33; // eax
  char v34; // al
  int v36; // [rsp+20h] [rbp-98h]
  char v37; // [rsp+60h] [rbp-58h]
  unsigned int v38; // [rsp+64h] [rbp-54h]
  unsigned int v39; // [rsp+68h] [rbp-50h]
  GUID v40; // [rsp+70h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v6 = *(_QWORD *)(a2 + 24);
  if ( (*(_BYTE *)(v2 + 136) & 2) != 0 )
  {
    v7 = -1073741637;
  }
  else if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) >= 0x24u )
  {
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_DWORD *)(v6 + 32) = 0;
    *(_DWORD *)v6 = 36;
    *(_DWORD *)(v6 + 4) = 36;
    *(_BYTE *)(v6 + 8) = *(_BYTE *)(a1 + 648) & 1;
    *(_DWORD *)(v6 + 32) = *(_DWORD *)(a1 + 660);
    *(_DWORD *)(v6 + 12) = *(unsigned __int8 *)(a1 + 668);
    *(_DWORD *)(v6 + 20) = 1000 * *(unsigned __int16 *)(a1 + 652);
    *(_DWORD *)(v6 + 32) = *(_DWORD *)(v2 + 1444);
    *(_DWORD *)(v6 + 24) = 1000 * *(_DWORD *)(v2 + 1448);
    *(_DWORD *)(v6 + 28) = 500 * *(_DWORD *)(v2 + 1440);
    v8 = -1;
    v9 = *(_DWORD *)(a1 + 656);
    if ( v9 == -1 )
      v10 = -1;
    else
      v10 = 500 * v9;
    *(_DWORD *)(v6 + 28) = v10;
    v11 = *(_DWORD *)(a1 + 664);
    if ( v11 != -1 )
      v8 = 500 * v11;
    *(_DWORD *)(v6 + 16) = v8;
    v7 = 0;
    *(_DWORD *)(v6 + 24) = 1000 * *(unsigned __int16 *)(a1 + 654);
    *(_QWORD *)(a2 + 56) = 36LL;
  }
  else
  {
    v7 = -1073741789;
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  v38 = v7;
  v12 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v12 )
    goto LABEL_76;
  v40 = 0LL;
  IoGetActivityIdIrp(a2, &v40);
  v14 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v14 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_76;
    v36 = *(_DWORD *)(a2 + 48);
    v16 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_75;
  }
  if ( *(_BYTE *)v14 != 15 )
  {
    if ( *(_BYTE *)v14 != 27 )
      goto LABEL_76;
    if ( *(_BYTE *)(v14 + 1) == 7 && !*(_DWORD *)(v14 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v15 = *(int **)(a2 + 56);
        if ( v15 )
          v3 = *v15;
        sub_140056AB0(v13, v14, &v40, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_76;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_76;
    v16 = &stru_140149FE8;
    v36 = *(_DWORD *)(a2 + 48);
LABEL_75:
    sub_140052F3C(v13, v16, &v40, a2, v36);
    goto LABEL_76;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_76;
  v17 = *(_QWORD *)(v14 + 8);
  v18 = 0;
  v19 = 0LL;
  v37 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( *(_BYTE *)(v17 + 2) != 40 )
  {
    v30 = *(_BYTE *)(v17 + 72);
    v19 = *(_BYTE **)(v17 + 32);
    v20 = *(_BYTE *)(v17 + 11);
    v18 = *(_BYTE *)(v17 + 4);
    if ( !*(_BYTE *)(v17 + 2) )
      goto LABEL_52;
    goto LABEL_76;
  }
  v24 = 0LL;
  v25 = 0;
  if ( *(_DWORD *)(v17 + 20) )
    goto LABEL_76;
  v26 = 0;
  v39 = *(_DWORD *)(v17 + 56);
  if ( !v39 )
    goto LABEL_49;
  while ( 1 )
  {
    v13 = *(unsigned int *)(v17 + 4LL * v26 + 120);
    if ( (unsigned int)v13 >= 0x80 )
    {
      v27 = *(unsigned int *)(v17 + 16);
      if ( (unsigned int)v13 < (unsigned int)v27 )
        break;
    }
LABEL_42:
    if ( ++v26 >= v39 )
      goto LABEL_48;
  }
  v28 = (unsigned int)v13;
  v29 = *(_DWORD *)(v13 + v17) - 64;
  if ( v29 )
  {
    v13 = (unsigned int)(v29 - 1);
    if ( (_DWORD)v13 )
    {
      if ( (_DWORD)v13 == 1 )
      {
        v13 = v28 + 40;
        if ( v28 + 40 <= v27 )
        {
          if ( *(_DWORD *)(v28 + v17 + 12) )
            v24 = (char *)(v28 + v17 + 32);
          v19 = *(_BYTE **)(v28 + v17 + 24);
          goto LABEL_47;
        }
      }
    }
    else
    {
      v13 = v28 + 56;
      if ( v28 + 56 <= v27 )
      {
        v25 = 1;
        if ( *(_BYTE *)(v28 + v17 + 10) )
          v24 = (char *)(v28 + v17 + 24);
        v18 = *(_BYTE *)(v28 + v17 + 8);
        v19 = *(_BYTE **)(v28 + v17 + 16);
        v20 = *(_BYTE *)(v28 + v17 + 9);
      }
    }
    goto LABEL_41;
  }
  v13 = v28 + 40;
  if ( v28 + 40 > v27 )
  {
LABEL_41:
    if ( v25 )
      goto LABEL_48;
    goto LABEL_42;
  }
  if ( *(_BYTE *)(v28 + v17 + 10) )
    v24 = (char *)(v28 + v17 + 24);
  v19 = *(_BYTE **)(v28 + v17 + 16);
LABEL_47:
  v20 = *(_BYTE *)(v28 + v17 + 9);
  v18 = *(_BYTE *)(v28 + v17 + 8);
LABEL_48:
  v7 = v38;
LABEL_49:
  if ( v24 )
  {
    v30 = *v24;
    v22 = 0;
LABEL_52:
    LOBYTE(v13) = v30 - 8;
    if ( (v13 & 0x5D) == 0 )
    {
      v31 = *(_BYTE *)(v17 + 3);
      if ( v31 == 1 || !v19 || !v20 )
        goto LABEL_71;
      LOBYTE(v17) = 0;
      v13 = (unsigned __int64)&v19[v20];
      v32 = v19 + 8;
      if ( (unsigned __int8)((*v19 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v32 <= v13 )
        {
          LOBYTE(v17) = 1;
          v22 = v19[2];
          v21 = v19[1] & 0xF;
          v23 = v19[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v32 <= v13 )
        {
          v21 = v19[2] & 0xF;
          v33 = v20;
          if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
            v33 = (unsigned __int8)v19[7] + 8;
          v13 = (unsigned __int64)(v19 + 13);
          v17 = (unsigned __int64)&v19[v33];
          if ( (unsigned __int64)(v19 + 13) > v17 )
            v37 = 0;
          else
            v37 = v19[12];
          if ( (unsigned __int64)(v19 + 14) <= v17 )
            v23 = *(_BYTE *)v13;
          LOBYTE(v17) = 1;
        }
        v22 = v37;
      }
      if ( (_BYTE)v17 )
      {
        LOBYTE(v3) = v22;
        v34 = v23;
      }
      else
      {
LABEL_71:
        v21 = 0;
        v34 = 0;
      }
      sub_140052E64(v13, v17, &v40, a2, *(_DWORD *)(a2 + 48), v31, v18, v21, v3, v34, a2);
    }
  }
LABEL_76:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
