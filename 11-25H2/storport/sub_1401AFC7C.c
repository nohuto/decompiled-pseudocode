/*
 * XREFs of sub_1401AFC7C @ 0x1401AFC7C
 * Callers:
 *     sub_140019650 @ 0x140019650 (sub_140019650.c)
 * Callees:
 *     sub_14003CEE0 @ 0x14003CEE0 (sub_14003CEE0.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1401AFC7C(_DWORD *a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  bool v6; // zf
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  const EVENT_DESCRIPTOR *v10; // rdx
  int *v11; // rax
  char v12; // r8
  _BYTE *v13; // rax
  char v14; // r11
  unsigned int v15; // eax
  unsigned __int64 v16; // r8
  char v17; // r12
  char v18; // r15
  char v19; // al
  __int64 v20; // rdx
  char v21; // r14
  _BYTE *v22; // r9
  unsigned __int8 v23; // r10
  char *v24; // rsi
  unsigned int *v25; // r13
  __int64 v26; // rax
  unsigned __int64 v27; // rbp
  char v28; // cl
  char v29; // [rsp+60h] [rbp-68h]
  int v30; // [rsp+64h] [rbp-64h]
  unsigned int v31; // [rsp+68h] [rbp-60h]
  GUID v32; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  if ( a1[259] || a1[260] || a1[261] )
    *(_DWORD *)(a2 + 56) |= 0x20u;
  if ( (unsigned int)sub_14003CEE0((__int64)a1) )
    *(_DWORD *)(v4 + 56) |= 2u;
  if ( (*(_BYTE *)(v5 + 506) & 0x20) != 0 )
    *(_DWORD *)(v4 + 56) |= 4u;
  v6 = byte_140168DAA == 0;
  *(_BYTE *)(v4 + 141) = -84;
  *(_DWORD *)(v4 + 48) = 0;
  if ( v6 )
    goto LABEL_11;
  v32 = 0LL;
  IoGetActivityIdIrp(a2, &v32);
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v8 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_11;
    v10 = &stru_140148B18;
    goto LABEL_14;
  }
  if ( *(_BYTE *)v8 != 15 )
  {
    if ( *(_BYTE *)v8 != 27 )
      goto LABEL_11;
    if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v2 = *v11;
        sub_140056AB0(v7, v8, &v32, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_11;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_11;
    v10 = &stru_140149FE8;
LABEL_14:
    sub_140052F3C(v7, v10, &v32, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_11;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_11;
  v20 = *(_QWORD *)(v8 + 8);
  v21 = 0;
  v22 = 0LL;
  v23 = 0;
  v14 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v20 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v20 + 72);
    v22 = *(_BYTE **)(v20 + 32);
    v23 = *(_BYTE *)(v20 + 11);
    v21 = *(_BYTE *)(v20 + 4);
    if ( *(_BYTE *)(v20 + 2) )
      goto LABEL_11;
LABEL_73:
    LOBYTE(v7) = v28 - 8;
    if ( (v7 & 0x5D) != 0 )
      goto LABEL_11;
    if ( *(_BYTE *)(v20 + 3) == 1 || !v22 || !v23 )
      goto LABEL_36;
    v12 = 0;
    v7 = (unsigned __int64)&v22[v23];
    v13 = v22 + 8;
    if ( (unsigned __int8)((*v22 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v13 > v7 )
      {
LABEL_34:
        if ( v12 )
        {
          LOBYTE(v2) = v17;
          v19 = v18;
LABEL_37:
          sub_140052E64(v7, v20, &v32, a2, *(_DWORD *)(a2 + 48), *(_BYTE *)(v20 + 3), v21, v14, v2, v19, a2);
          goto LABEL_11;
        }
LABEL_36:
        v14 = 0;
        v19 = 0;
        goto LABEL_37;
      }
      v17 = v22[2];
      v14 = v22[1] & 0xF;
      v18 = v22[3];
    }
    else
    {
      if ( (unsigned __int64)v13 > v7 )
        goto LABEL_34;
      v14 = v22[2] & 0xF;
      v15 = v23;
      if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
        v15 = (unsigned __int8)v22[7] + 8;
      v7 = (unsigned __int64)(v22 + 13);
      v16 = (unsigned __int64)&v22[v15];
      if ( (unsigned __int64)(v22 + 13) <= v16 )
        v17 = v22[12];
      if ( (unsigned __int64)(v22 + 14) <= v16 )
        v18 = *(_BYTE *)v7;
    }
    v12 = 1;
    goto LABEL_34;
  }
  v24 = 0LL;
  v29 = 0;
  if ( *(_DWORD *)(v20 + 20) )
    goto LABEL_11;
  v7 = 0LL;
  v30 = 0;
  v31 = *(_DWORD *)(v20 + 56);
  if ( !v31 )
    goto LABEL_70;
  v25 = (unsigned int *)(v20 + 120);
  while ( 1 )
  {
    v26 = *v25;
    if ( (unsigned int)v26 >= 0x80 )
    {
      v27 = *(unsigned int *)(v20 + 16);
      if ( (unsigned int)v26 < (unsigned int)v27 )
        break;
    }
LABEL_63:
    v7 = (unsigned int)(v7 + 1);
    ++v25;
    v30 = v7;
    if ( (unsigned int)v7 >= v31 )
      goto LABEL_70;
  }
  if ( *(_DWORD *)(v26 + v20) != 64 )
  {
    v7 = (unsigned int)(*(_DWORD *)(v26 + v20) - 65);
    if ( *(_DWORD *)(v26 + v20) == 65 )
    {
      v7 = v26 + 56;
      if ( v26 + 56 <= v27 )
      {
        v29 = 1;
        if ( *(_BYTE *)(v26 + v20 + 10) )
          v24 = (char *)(v26 + v20 + 24);
        v21 = *(_BYTE *)(v26 + v20 + 8);
        v22 = *(_BYTE **)(v26 + v20 + 16);
        v23 = *(_BYTE *)(v26 + v20 + 9);
      }
    }
    else if ( *(_DWORD *)(v26 + v20) == 66 )
    {
      v7 = v26 + 40;
      if ( v26 + 40 <= v27 )
      {
        if ( *(_DWORD *)(v26 + v20 + 12) )
          v24 = (char *)(v26 + v20 + 32);
        v22 = *(_BYTE **)(v26 + v20 + 24);
        goto LABEL_69;
      }
    }
    goto LABEL_61;
  }
  v7 = v26 + 40;
  if ( v26 + 40 > v27 )
  {
LABEL_61:
    if ( v29 )
      goto LABEL_70;
    LODWORD(v7) = v30;
    goto LABEL_63;
  }
  if ( *(_BYTE *)(v26 + v20 + 10) )
    v24 = (char *)(v26 + v20 + 24);
  v22 = *(_BYTE **)(v26 + v20 + 16);
LABEL_69:
  v23 = *(_BYTE *)(v26 + v20 + 9);
  v21 = *(_BYTE *)(v26 + v20 + 8);
LABEL_70:
  if ( v24 )
  {
    v28 = *v24;
    goto LABEL_73;
  }
LABEL_11:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
