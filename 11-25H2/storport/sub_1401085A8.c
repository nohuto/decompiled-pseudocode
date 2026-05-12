/*
 * XREFs of sub_1401085A8 @ 0x1401085A8
 * Callers:
 *     sub_14010216C @ 0x14010216C (sub_14010216C.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400FA6EC @ 0x1400FA6EC (sub_1400FA6EC.c)
 *     sub_1400FB69C @ 0x1400FB69C (sub_1400FB69C.c)
 *     sub_1401114CC @ 0x1401114CC (sub_1401114CC.c)
 *     sub_140111914 @ 0x140111914 (sub_140111914.c)
 *     sub_14012C040 @ 0x14012C040 (sub_14012C040.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1401085A8(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  bool v6; // zf
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  int *v9; // rax
  const EVENT_DESCRIPTOR *v10; // rdx
  unsigned __int64 v11; // rdx
  char v12; // r15
  _BYTE *v13; // r9
  unsigned __int8 v14; // r10
  char v15; // si
  char v16; // r11
  char v17; // r12
  char *v18; // r11
  char v19; // r13
  unsigned int v20; // r14d
  unsigned __int64 v21; // rbp
  __int64 v22; // r8
  int v23; // ecx
  char v24; // cl
  char v25; // r8
  _BYTE *v26; // rax
  unsigned int v27; // eax
  char v28; // al
  int v30; // [rsp+20h] [rbp-98h]
  char v31; // [rsp+60h] [rbp-58h]
  unsigned int v32; // [rsp+64h] [rbp-54h]
  GUID v33; // [rsp+68h] [rbp-50h] BYREF

  if ( *(_DWORD *)(a1 + 96) != 6 )
  {
    LOBYTE(a3) = (*(_BYTE *)(a1 + 112) & 2) == 0;
    sub_140111914(a1, a2, a3);
    sub_1401114CC(a1);
    sub_14012C040(a1);
    if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
      return sub_1400FB69C(a1, a2);
    else
      return sub_1400FA6EC(a1, a2);
  }
  v5 = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v6 = byte_140168DAA == 0;
  *(_DWORD *)(a2 + 48) = -1073741810;
  if ( v6 )
    goto LABEL_66;
  v33 = 0LL;
  IoGetActivityIdIrp(a2, &v33);
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v8 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_66;
    v7 = *(unsigned int *)(a2 + 48);
    v10 = &stru_140148B18;
    v30 = *(_DWORD *)(a2 + 48);
    goto LABEL_65;
  }
  if ( *(_BYTE *)v8 != 15 )
  {
    if ( *(_BYTE *)v8 != 27 )
      goto LABEL_66;
    if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v9 = *(int **)(a2 + 56);
        if ( v9 )
          v5 = *v9;
        sub_140056AB0(v7, v8, &v33, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_66;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_66;
    v10 = &stru_140149FE8;
    v30 = *(_DWORD *)(a2 + 48);
LABEL_65:
    sub_140052F3C(v7, v10, &v33, a2, v30);
    goto LABEL_66;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_66;
  v11 = *(_QWORD *)(v8 + 8);
  v12 = 0;
  v13 = 0LL;
  v31 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( *(_BYTE *)(v11 + 2) != 40 )
  {
    v24 = *(_BYTE *)(v11 + 72);
    v13 = *(_BYTE **)(v11 + 32);
    v14 = *(_BYTE *)(v11 + 11);
    v12 = *(_BYTE *)(v11 + 4);
    if ( !*(_BYTE *)(v11 + 2) )
      goto LABEL_42;
    goto LABEL_66;
  }
  v18 = 0LL;
  v19 = 0;
  if ( *(_DWORD *)(v11 + 20) )
    goto LABEL_66;
  v20 = 0;
  v32 = *(_DWORD *)(v11 + 56);
  if ( !v32 )
    goto LABEL_39;
  while ( 1 )
  {
    v7 = *(unsigned int *)(v11 + 4LL * v20 + 120);
    if ( (unsigned int)v7 >= 0x80 )
    {
      v21 = *(unsigned int *)(v11 + 16);
      if ( (unsigned int)v7 < (unsigned int)v21 )
        break;
    }
LABEL_33:
    if ( ++v20 >= v32 )
      goto LABEL_39;
  }
  v22 = (unsigned int)v7;
  v23 = *(_DWORD *)(v7 + v11) - 64;
  if ( v23 )
  {
    v7 = (unsigned int)(v23 - 1);
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        v7 = v22 + 40;
        if ( v22 + 40 <= v21 )
        {
          if ( *(_DWORD *)(v22 + v11 + 12) )
            v18 = (char *)(v22 + v11 + 32);
          v13 = *(_BYTE **)(v22 + v11 + 24);
          goto LABEL_38;
        }
      }
    }
    else
    {
      v7 = v22 + 56;
      if ( v22 + 56 <= v21 )
      {
        v19 = 1;
        if ( *(_BYTE *)(v22 + v11 + 10) )
          v18 = (char *)(v22 + v11 + 24);
        v12 = *(_BYTE *)(v22 + v11 + 8);
        v13 = *(_BYTE **)(v22 + v11 + 16);
        v14 = *(_BYTE *)(v22 + v11 + 9);
      }
    }
    goto LABEL_32;
  }
  v7 = v22 + 40;
  if ( v22 + 40 > v21 )
  {
LABEL_32:
    if ( v19 )
      goto LABEL_39;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(v22 + v11 + 10) )
    v18 = (char *)(v22 + v11 + 24);
  v13 = *(_BYTE **)(v22 + v11 + 16);
LABEL_38:
  v14 = *(_BYTE *)(v22 + v11 + 9);
  v12 = *(_BYTE *)(v22 + v11 + 8);
LABEL_39:
  if ( v18 )
  {
    v24 = *v18;
    v16 = 0;
LABEL_42:
    LOBYTE(v7) = v24 - 8;
    if ( (v7 & 0x5D) == 0 )
    {
      v25 = *(_BYTE *)(v11 + 3);
      if ( v25 == 1 || !v13 || !v14 )
        goto LABEL_61;
      LOBYTE(v11) = 0;
      v7 = (unsigned __int64)&v13[v14];
      v26 = v13 + 8;
      if ( (unsigned __int8)((*v13 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v26 <= v7 )
        {
          LOBYTE(v11) = 1;
          v16 = v13[2];
          v15 = v13[1] & 0xF;
          v17 = v13[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v26 <= v7 )
        {
          v15 = v13[2] & 0xF;
          v27 = v14;
          if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v14 )
            v27 = (unsigned __int8)v13[7] + 8;
          v7 = (unsigned __int64)(v13 + 13);
          v11 = (unsigned __int64)&v13[v27];
          if ( (unsigned __int64)(v13 + 13) > v11 )
            v31 = 0;
          else
            v31 = v13[12];
          if ( (unsigned __int64)(v13 + 14) <= v11 )
            v17 = *(_BYTE *)v7;
          LOBYTE(v11) = 1;
        }
        v16 = v31;
      }
      if ( (_BYTE)v11 )
      {
        LOBYTE(v5) = v16;
        v28 = v17;
      }
      else
      {
LABEL_61:
        v15 = 0;
        v28 = 0;
      }
      sub_140052E64(v7, v11, &v33, a2, *(_DWORD *)(a2 + 48), v25, v12, v15, v5, v28, a2);
    }
  }
LABEL_66:
  IofCompleteRequest((PIRP)a2, 0);
  return 3221225486LL;
}
