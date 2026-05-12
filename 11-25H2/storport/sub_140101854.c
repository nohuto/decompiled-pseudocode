/*
 * XREFs of sub_140101854 @ 0x140101854
 * Callers:
 *     sub_140198640 @ 0x140198640 (sub_140198640.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140109588 @ 0x140109588 (sub_140109588.c)
 *     sub_140109D34 @ 0x140109D34 (sub_140109D34.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140101854(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  int v5; // ebx
  unsigned int v7; // edx
  unsigned int v8; // edi
  unsigned int v9; // eax
  bool v10; // zf
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx
  unsigned __int64 v15; // rdx
  char v16; // r15
  _BYTE *v17; // r9
  unsigned __int8 v18; // r10
  char v19; // bp
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
  char v32; // [rsp+60h] [rbp-68h]
  char v33; // [rsp+61h] [rbp-67h]
  int v34; // [rsp+64h] [rbp-64h]
  unsigned int v35; // [rsp+68h] [rbp-60h]
  GUID v36; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0;
  if ( *(_DWORD *)(v4 + 16) < 0xCu || *(_DWORD *)(v2 + 4) < 0xCu )
  {
    v8 = -1073741820;
    goto LABEL_17;
  }
  v7 = *(unsigned __int16 *)(v2 + 10);
  if ( *(_DWORD *)(v4 + 8) < v7
    || (*(_BYTE *)(v2 + 8) & 0x1F) != 0 && (*(_BYTE *)(v2 + 8) & 0x1F) != 1 && (*(_BYTE *)(v2 + 8) & 0x1Fu) - 2 > 1
    || v7 < 8 )
  {
    v8 = -1073741811;
  }
  else
  {
    if ( (*(_BYTE *)(v2 + 8) & 0x1F) == 2 )
    {
      v9 = sub_140109D34(a1, a2);
    }
    else
    {
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 592LL) + 520LL) & 0x20) == 0
        || !*(_BYTE *)(*(_QWORD *)(a1 + 176) + 31LL) )
      {
        v8 = -1073741808;
        goto LABEL_17;
      }
      v9 = sub_140109588(a1, a2);
    }
    v8 = v9;
  }
LABEL_17:
  v10 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v10 )
    goto LABEL_83;
  v36 = 0LL;
  IoGetActivityIdIrp(a2, &v36);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_83;
    v14 = &stru_140148B18;
    goto LABEL_82;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_83;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v5 = *v13;
        sub_140056AB0(v11, v12, &v36, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_83;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_83;
    v14 = &stru_140149FE8;
LABEL_82:
    sub_140052F3C(v11, v14, &v36, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_83;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_83;
  v15 = *(_QWORD *)(v12 + 8);
  v16 = 0;
  v17 = 0LL;
  v32 = 0;
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
      goto LABEL_59;
    goto LABEL_83;
  }
  v22 = 0LL;
  v33 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_83;
  v11 = 0LL;
  v34 = 0;
  v35 = *(_DWORD *)(v15 + 56);
  if ( !v35 )
    goto LABEL_56;
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
LABEL_50:
    v11 = (unsigned int)(v11 + 1);
    ++v23;
    v34 = v11;
    if ( (unsigned int)v11 >= v35 )
      goto LABEL_56;
  }
  if ( *(_DWORD *)(v24 + v15) != 64 )
  {
    v11 = (unsigned int)(*(_DWORD *)(v24 + v15) - 65);
    if ( *(_DWORD *)(v24 + v15) == 65 )
    {
      v11 = v24 + 56;
      if ( v24 + 56 <= v25 )
      {
        v33 = 1;
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
        goto LABEL_55;
      }
    }
    goto LABEL_48;
  }
  v11 = v24 + 40;
  if ( v24 + 40 > v25 )
  {
LABEL_48:
    if ( v33 )
      goto LABEL_56;
    LODWORD(v11) = v34;
    goto LABEL_50;
  }
  if ( *(_BYTE *)(v24 + v15 + 10) )
    v22 = (char *)(v24 + v15 + 24);
  v17 = *(_BYTE **)(v24 + v15 + 16);
LABEL_55:
  v18 = *(_BYTE *)(v24 + v15 + 9);
  v16 = *(_BYTE *)(v24 + v15 + 8);
LABEL_56:
  if ( v22 )
  {
    v26 = *v22;
    v20 = 0;
LABEL_59:
    LOBYTE(v11) = v26 - 8;
    if ( (v11 & 0x5D) == 0 )
    {
      v27 = *(_BYTE *)(v15 + 3);
      if ( v27 == 1 || !v17 || !v18 )
        goto LABEL_78;
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
            v32 = 0;
          else
            v32 = v17[12];
          if ( (unsigned __int64)(v17 + 14) <= v15 )
            v21 = *(_BYTE *)v11;
          LOBYTE(v15) = 1;
        }
        v20 = v32;
      }
      if ( (_BYTE)v15 )
      {
        LOBYTE(v5) = v20;
        v30 = v21;
      }
      else
      {
LABEL_78:
        v19 = 0;
        v30 = 0;
      }
      sub_140052E64(v11, v15, &v36, a2, *(_DWORD *)(a2 + 48), v27, v16, v19, v5, v30, a2);
    }
  }
LABEL_83:
  IofCompleteRequest((PIRP)a2, 0);
  return v8;
}
