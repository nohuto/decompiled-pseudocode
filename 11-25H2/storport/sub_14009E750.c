/*
 * XREFs of sub_14009E750 @ 0x14009E750
 * Callers:
 *     sub_1401B3ED0 @ 0x1401B3ED0 (sub_1401B3ED0.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14006A6C4 @ 0x14006A6C4 (sub_14006A6C4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14009E750(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  int v4; // ebx
  unsigned int v5; // eax
  bool v6; // zf
  unsigned int v7; // ebp
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  __int64 v12; // rdx
  char v13; // r15
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // si
  char v17; // r11
  char v18; // r12
  char *v19; // r11
  char v20; // r13
  unsigned int v21; // r14d
  unsigned __int64 v22; // rbp
  __int64 v23; // r8
  int v24; // ecx
  char v25; // cl
  char v26; // r8
  _BYTE *v27; // rax
  unsigned int v28; // eax
  unsigned __int64 v29; // r8
  char v30; // al
  char v32; // [rsp+60h] [rbp-68h]
  unsigned int v33; // [rsp+64h] [rbp-64h]
  __int64 v34; // [rsp+68h] [rbp-60h] BYREF
  GUID v35; // [rsp+70h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 3600);
  v4 = 0;
  v34 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( !v3 || !*(_QWORD *)(v3 + 104) )
    return 3221225659LL;
  v5 = sub_14006A6C4(a2, &v34, *(unsigned __int16 **)(v3 + 104), 2);
  v6 = byte_140168DAA == 0;
  v7 = v5;
  *(_QWORD *)(a2 + 56) = v34;
  v33 = v5;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v6 )
    goto LABEL_68;
  v35 = 0LL;
  IoGetActivityIdIrp(a2, &v35);
  v9 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_68;
    v11 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_67;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_68;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v10 = *(int **)(a2 + 56);
        if ( v10 )
          v4 = *v10;
        sub_140056AB0(v8, v9, &v35, a2, v4, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_68;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_68;
    v11 = &stru_140149FE8;
LABEL_67:
    sub_140052F3C(v8, v11, &v35, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_68;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_68;
  v12 = *(_QWORD *)(v9 + 8);
  v13 = 0;
  v14 = 0LL;
  v32 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v25 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( !*(_BYTE *)(v12 + 2) )
      goto LABEL_44;
    goto LABEL_68;
  }
  v19 = 0LL;
  v20 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_68;
  v21 = 0;
  LODWORD(v34) = *(_DWORD *)(v12 + 56);
  if ( !(_DWORD)v34 )
    goto LABEL_41;
  while ( 1 )
  {
    v8 = *(unsigned int *)(v12 + 4LL * v21 + 120);
    if ( (unsigned int)v8 >= 0x80 )
    {
      v22 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v8 < (unsigned int)v22 )
        break;
    }
LABEL_34:
    if ( ++v21 >= (unsigned int)v34 )
      goto LABEL_40;
  }
  v23 = (unsigned int)v8;
  v24 = *(_DWORD *)(v8 + v12) - 64;
  if ( v24 )
  {
    v8 = (unsigned int)(v24 - 1);
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 == 1 )
      {
        v8 = v23 + 40;
        if ( v23 + 40 <= v22 )
        {
          if ( *(_DWORD *)(v23 + v12 + 12) )
            v19 = (char *)(v23 + v12 + 32);
          v14 = *(_BYTE **)(v23 + v12 + 24);
          goto LABEL_39;
        }
      }
    }
    else
    {
      v8 = v23 + 56;
      if ( v23 + 56 <= v22 )
      {
        v20 = 1;
        if ( *(_BYTE *)(v23 + v12 + 10) )
          v19 = (char *)(v23 + v12 + 24);
        v13 = *(_BYTE *)(v23 + v12 + 8);
        v14 = *(_BYTE **)(v23 + v12 + 16);
        v15 = *(_BYTE *)(v23 + v12 + 9);
      }
    }
    goto LABEL_33;
  }
  v8 = v23 + 40;
  if ( v23 + 40 > v22 )
  {
LABEL_33:
    if ( v20 )
      goto LABEL_40;
    goto LABEL_34;
  }
  if ( *(_BYTE *)(v23 + v12 + 10) )
    v19 = (char *)(v23 + v12 + 24);
  v14 = *(_BYTE **)(v23 + v12 + 16);
LABEL_39:
  v15 = *(_BYTE *)(v23 + v12 + 9);
  v13 = *(_BYTE *)(v23 + v12 + 8);
LABEL_40:
  v7 = v33;
LABEL_41:
  if ( v19 )
  {
    v25 = *v19;
    v17 = 0;
LABEL_44:
    LOBYTE(v8) = v25 - 8;
    if ( (v8 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v12 + 3) == 1 || !v14 || !v15 )
        goto LABEL_63;
      v26 = 0;
      v8 = (unsigned __int64)&v14[v15];
      v27 = v14 + 8;
      if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v27 <= v8 )
        {
          v26 = 1;
          v17 = v14[2];
          v16 = v14[1] & 0xF;
          v18 = v14[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v27 <= v8 )
        {
          v16 = v14[2] & 0xF;
          v28 = v15;
          if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
            v28 = (unsigned __int8)v14[7] + 8;
          v8 = (unsigned __int64)(v14 + 13);
          v29 = (unsigned __int64)&v14[v28];
          if ( (unsigned __int64)(v14 + 13) > v29 )
            v32 = 0;
          else
            v32 = v14[12];
          if ( (unsigned __int64)(v14 + 14) <= v29 )
            v18 = *(_BYTE *)v8;
          v26 = 1;
        }
        v17 = v32;
      }
      if ( v26 )
      {
        LOBYTE(v4) = v17;
        v30 = v18;
      }
      else
      {
LABEL_63:
        v16 = 0;
        v30 = 0;
      }
      sub_140052E64(v8, v12, &v35, a2, *(_DWORD *)(a2 + 48), *(_BYTE *)(v12 + 3), v13, v16, v4, v30, a2);
    }
  }
LABEL_68:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
