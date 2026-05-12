/*
 * XREFs of sub_1401A4934 @ 0x1401A4934
 * Callers:
 *     sub_1401A4D74 @ 0x1401A4D74 (sub_1401A4D74.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1401A4934(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rsi
  int v3; // ebx
  __int64 v4; // r14
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // r15
  unsigned int v9; // edx
  __int64 v10; // rbp
  unsigned int v11; // esi
  int v12; // eax
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  unsigned __int64 v18; // rdx
  char v19; // r12
  _BYTE *v20; // r9
  unsigned __int8 v21; // r10
  char v22; // bp
  char v23; // r11
  char v24; // r13
  char *v25; // r11
  unsigned int v26; // r15d
  unsigned __int64 v27; // r14
  __int64 v28; // r8
  int v29; // ecx
  char v30; // cl
  char v31; // r8
  _BYTE *v32; // rax
  unsigned int v33; // eax
  char v34; // al
  int v36; // [rsp+20h] [rbp-88h]
  char v37; // [rsp+60h] [rbp-48h]
  char v38; // [rsp+61h] [rbp-47h]
  unsigned int v39; // [rsp+64h] [rbp-44h]
  GUID v40; // [rsp+68h] [rbp-40h] BYREF

  v2 = *(_DWORD **)(a2 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a2 + 184);
  v7 = v2[1];
  v8 = *(_QWORD *)(v4 + 592);
  v9 = *(_DWORD *)(v6 + 8);
  if ( !v7 )
  {
    if ( v9 < 8 )
    {
      v11 = -1073741789;
      v10 = 0LL;
      goto LABEL_13;
    }
    v10 = 28LL;
    if ( v9 >= 0x1C )
    {
      memset_0(v2, 0, *(unsigned int *)(v6 + 8));
      *v2 = 28;
      *(_QWORD *)(v2 + 1) = 28LL;
      *(_WORD *)((char *)v2 + 25) = 0;
      v2[3] = 0;
      v2[4] = 1;
      if ( (*(_BYTE *)(v8 + 525) & 1) != 0 )
      {
        v2[3] = ((*(_DWORD *)(v4 + 136) & 0x80000) != 0LL) + 1;
        v12 = (*(_DWORD *)(v4 + 136) >> 18) & 2;
        v2[4] = 2;
        v2[2] = v12;
        if ( (*(_BYTE *)(v4 + 136) & 2) == 0 )
          *((_BYTE *)v2 + 24) = 1;
      }
      v2[5] = 2;
    }
    else
    {
      *v2 = 28;
      v2[1] = 28;
      v10 = 8LL;
    }
LABEL_12:
    v11 = 0;
    goto LABEL_13;
  }
  v10 = 0LL;
  if ( v7 == 1 )
    goto LABEL_12;
  v11 = -1073741637;
LABEL_13:
  *(_QWORD *)(a2 + 56) = v10;
  v13 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v11;
  if ( v13 )
    goto LABEL_77;
  v40 = 0LL;
  IoGetActivityIdIrp(a2, &v40);
  v15 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_77;
    v36 = *(_DWORD *)(a2 + 48);
    v17 = &stru_140148B18;
    goto LABEL_76;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_77;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v16 = *(int **)(a2 + 56);
        if ( v16 )
          v3 = *v16;
        sub_140056AB0(v14, v15, &v40, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_77;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_77;
    v17 = &stru_140149FE8;
    v36 = *(_DWORD *)(a2 + 48);
LABEL_76:
    sub_140052F3C(v14, v17, &v40, a2, v36);
    goto LABEL_77;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_77;
  v18 = *(_QWORD *)(v15 + 8);
  v19 = 0;
  v20 = 0LL;
  v37 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( *(_BYTE *)(v18 + 2) != 40 )
  {
    v30 = *(_BYTE *)(v18 + 72);
    v20 = *(_BYTE **)(v18 + 32);
    v21 = *(_BYTE *)(v18 + 11);
    v19 = *(_BYTE *)(v18 + 4);
    if ( !*(_BYTE *)(v18 + 2) )
      goto LABEL_53;
    goto LABEL_77;
  }
  v25 = 0LL;
  v38 = 0;
  if ( *(_DWORD *)(v18 + 20) )
    goto LABEL_77;
  v26 = 0;
  v39 = *(_DWORD *)(v18 + 56);
  if ( !v39 )
    goto LABEL_50;
  while ( 1 )
  {
    v14 = *(unsigned int *)(v18 + 4LL * v26 + 120);
    if ( (unsigned int)v14 >= 0x80 )
    {
      v27 = *(unsigned int *)(v18 + 16);
      if ( (unsigned int)v14 < (unsigned int)v27 )
        break;
    }
LABEL_44:
    if ( ++v26 >= v39 )
      goto LABEL_50;
  }
  v28 = (unsigned int)v14;
  v29 = *(_DWORD *)(v14 + v18) - 64;
  if ( v29 )
  {
    v14 = (unsigned int)(v29 - 1);
    if ( (_DWORD)v14 )
    {
      if ( (_DWORD)v14 == 1 )
      {
        v14 = v28 + 40;
        if ( v28 + 40 <= v27 )
        {
          if ( *(_DWORD *)(v28 + v18 + 12) )
            v25 = (char *)(v28 + v18 + 32);
          v20 = *(_BYTE **)(v28 + v18 + 24);
          goto LABEL_49;
        }
      }
    }
    else
    {
      v14 = v28 + 56;
      if ( v28 + 56 <= v27 )
      {
        v38 = 1;
        if ( *(_BYTE *)(v28 + v18 + 10) )
          v25 = (char *)(v28 + v18 + 24);
        v19 = *(_BYTE *)(v28 + v18 + 8);
        v20 = *(_BYTE **)(v28 + v18 + 16);
        v21 = *(_BYTE *)(v28 + v18 + 9);
      }
    }
    goto LABEL_43;
  }
  v14 = v28 + 40;
  if ( v28 + 40 > v27 )
  {
LABEL_43:
    if ( v38 )
      goto LABEL_50;
    goto LABEL_44;
  }
  if ( *(_BYTE *)(v28 + v18 + 10) )
    v25 = (char *)(v28 + v18 + 24);
  v20 = *(_BYTE **)(v28 + v18 + 16);
LABEL_49:
  v21 = *(_BYTE *)(v28 + v18 + 9);
  v19 = *(_BYTE *)(v28 + v18 + 8);
LABEL_50:
  if ( v25 )
  {
    v30 = *v25;
    v23 = 0;
LABEL_53:
    LOBYTE(v14) = v30 - 8;
    if ( (v14 & 0x5D) == 0 )
    {
      v31 = *(_BYTE *)(v18 + 3);
      if ( v31 == 1 || !v20 || !v21 )
        goto LABEL_72;
      LOBYTE(v18) = 0;
      v14 = (unsigned __int64)&v20[v21];
      v32 = v20 + 8;
      if ( (unsigned __int8)((*v20 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v32 <= v14 )
        {
          LOBYTE(v18) = 1;
          v23 = v20[2];
          v22 = v20[1] & 0xF;
          v24 = v20[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v32 <= v14 )
        {
          v22 = v20[2] & 0xF;
          v33 = v21;
          if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
            v33 = (unsigned __int8)v20[7] + 8;
          v14 = (unsigned __int64)(v20 + 13);
          v18 = (unsigned __int64)&v20[v33];
          if ( (unsigned __int64)(v20 + 13) > v18 )
            v37 = 0;
          else
            v37 = v20[12];
          if ( (unsigned __int64)(v20 + 14) <= v18 )
            v24 = *(_BYTE *)v14;
          LOBYTE(v18) = 1;
        }
        v23 = v37;
      }
      if ( (_BYTE)v18 )
      {
        LOBYTE(v3) = v23;
        v34 = v24;
      }
      else
      {
LABEL_72:
        v22 = 0;
        v34 = 0;
      }
      sub_140052E64(v14, v18, &v40, a2, *(_DWORD *)(a2 + 48), v31, v19, v22, v3, v34, a2);
    }
  }
LABEL_77:
  IofCompleteRequest((PIRP)a2, 0);
  return v11;
}
