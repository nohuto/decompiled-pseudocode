/*
 * XREFs of sub_14019F9DC @ 0x14019F9DC
 * Callers:
 *     sub_140198640 @ 0x140198640 (sub_140198640.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_14019F9DC(__int64 a1, __int64 a2)
{
  int v2; // ebx
  bool v4; // zf
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  int *v7; // rax
  const EVENT_DESCRIPTOR *v8; // rdx
  unsigned __int64 v9; // rdx
  char v10; // r15
  _BYTE *v11; // r9
  unsigned __int8 v12; // r10
  char v13; // si
  char v14; // r11
  char v15; // r12
  char *v16; // r11
  char v17; // r13
  unsigned int v18; // r14d
  unsigned __int64 v19; // rbp
  __int64 v20; // r8
  int v21; // ecx
  char v22; // cl
  char v23; // r8
  _BYTE *v24; // rax
  unsigned int v25; // eax
  char v26; // al
  int v28; // [rsp+20h] [rbp-98h]
  char v29; // [rsp+60h] [rbp-58h]
  unsigned int v30; // [rsp+64h] [rbp-54h]
  GUID v31; // [rsp+68h] [rbp-50h] BYREF

  v2 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 136LL) & 2) == 0 )
  {
    ++*(_BYTE *)(a2 + 67);
    *(_QWORD *)(a2 + 184) += 72LL;
    return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 8LL), (PIRP)a2);
  }
  v4 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = -1073741637;
  if ( v4 )
    goto LABEL_66;
  v31 = 0LL;
  IoGetActivityIdIrp(a2, &v31);
  v6 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v6 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_66;
    v28 = *(_DWORD *)(a2 + 48);
    v8 = &stru_140148B18;
    goto LABEL_65;
  }
  if ( *(_BYTE *)v6 != 15 )
  {
    if ( *(_BYTE *)v6 != 27 )
      goto LABEL_66;
    if ( *(_BYTE *)(v6 + 1) == 7 && !*(_DWORD *)(v6 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v7 = *(int **)(a2 + 56);
        if ( v7 )
          v2 = *v7;
        sub_140056AB0(v5, v6, &v31, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_66;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_66;
    v8 = &stru_140149FE8;
    v28 = *(_DWORD *)(a2 + 48);
LABEL_65:
    sub_140052F3C(v5, v8, &v31, a2, v28);
    goto LABEL_66;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_66;
  v9 = *(_QWORD *)(v6 + 8);
  v10 = 0;
  v11 = 0LL;
  v29 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  if ( *(_BYTE *)(v9 + 2) != 40 )
  {
    v22 = *(_BYTE *)(v9 + 72);
    v11 = *(_BYTE **)(v9 + 32);
    v12 = *(_BYTE *)(v9 + 11);
    v10 = *(_BYTE *)(v9 + 4);
    if ( !*(_BYTE *)(v9 + 2) )
      goto LABEL_42;
    goto LABEL_66;
  }
  v16 = 0LL;
  v17 = 0;
  if ( *(_DWORD *)(v9 + 20) )
    goto LABEL_66;
  v18 = 0;
  v30 = *(_DWORD *)(v9 + 56);
  if ( !v30 )
    goto LABEL_39;
  while ( 1 )
  {
    v5 = *(unsigned int *)(v9 + 4LL * v18 + 120);
    if ( (unsigned int)v5 >= 0x80 )
    {
      v19 = *(unsigned int *)(v9 + 16);
      if ( (unsigned int)v5 < (unsigned int)v19 )
        break;
    }
LABEL_33:
    if ( ++v18 >= v30 )
      goto LABEL_39;
  }
  v20 = (unsigned int)v5;
  v21 = *(_DWORD *)(v5 + v9) - 64;
  if ( v21 )
  {
    v5 = (unsigned int)(v21 - 1);
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 == 1 )
      {
        v5 = v20 + 40;
        if ( v20 + 40 <= v19 )
        {
          if ( *(_DWORD *)(v20 + v9 + 12) )
            v16 = (char *)(v20 + v9 + 32);
          v11 = *(_BYTE **)(v20 + v9 + 24);
          goto LABEL_38;
        }
      }
    }
    else
    {
      v5 = v20 + 56;
      if ( v20 + 56 <= v19 )
      {
        v17 = 1;
        if ( *(_BYTE *)(v20 + v9 + 10) )
          v16 = (char *)(v20 + v9 + 24);
        v10 = *(_BYTE *)(v20 + v9 + 8);
        v11 = *(_BYTE **)(v20 + v9 + 16);
        v12 = *(_BYTE *)(v20 + v9 + 9);
      }
    }
    goto LABEL_32;
  }
  v5 = v20 + 40;
  if ( v20 + 40 > v19 )
  {
LABEL_32:
    if ( v17 )
      goto LABEL_39;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(v20 + v9 + 10) )
    v16 = (char *)(v20 + v9 + 24);
  v11 = *(_BYTE **)(v20 + v9 + 16);
LABEL_38:
  v12 = *(_BYTE *)(v20 + v9 + 9);
  v10 = *(_BYTE *)(v20 + v9 + 8);
LABEL_39:
  if ( v16 )
  {
    v22 = *v16;
    v14 = 0;
LABEL_42:
    LOBYTE(v5) = v22 - 8;
    if ( (v5 & 0x5D) == 0 )
    {
      v23 = *(_BYTE *)(v9 + 3);
      if ( v23 == 1 || !v11 || !v12 )
        goto LABEL_61;
      LOBYTE(v9) = 0;
      v5 = (unsigned __int64)&v11[v12];
      v24 = v11 + 8;
      if ( (unsigned __int8)((*v11 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v24 <= v5 )
        {
          LOBYTE(v9) = 1;
          v14 = v11[2];
          v13 = v11[1] & 0xF;
          v15 = v11[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v24 <= v5 )
        {
          v13 = v11[2] & 0xF;
          v25 = v12;
          if ( (unsigned int)(unsigned __int8)v11[7] + 8 <= v12 )
            v25 = (unsigned __int8)v11[7] + 8;
          v5 = (unsigned __int64)(v11 + 13);
          v9 = (unsigned __int64)&v11[v25];
          if ( (unsigned __int64)(v11 + 13) > v9 )
            v29 = 0;
          else
            v29 = v11[12];
          if ( (unsigned __int64)(v11 + 14) <= v9 )
            v15 = *(_BYTE *)v5;
          LOBYTE(v9) = 1;
        }
        v14 = v29;
      }
      if ( (_BYTE)v9 )
      {
        LOBYTE(v2) = v14;
        v26 = v15;
      }
      else
      {
LABEL_61:
        v13 = 0;
        v26 = 0;
      }
      sub_140052E64(v5, v9, &v31, a2, *(_DWORD *)(a2 + 48), v23, v10, v13, v2, v26, a2);
    }
  }
LABEL_66:
  IofCompleteRequest((PIRP)a2, 0);
  return -1073741637;
}
