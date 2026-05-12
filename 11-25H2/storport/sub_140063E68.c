/*
 * XREFs of sub_140063E68 @ 0x140063E68
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_1401A74B0 @ 0x1401A74B0 (sub_1401A74B0.c)
 *     sub_1401A756C @ 0x1401A756C (sub_1401A756C.c)
 *     sub_1401A7654 @ 0x1401A7654 (sub_1401A7654.c)
 *     sub_1401A7724 @ 0x1401A7724 (sub_1401A7724.c)
 */

__int64 __fastcall sub_140063E68(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // ebp
  unsigned int v7; // eax
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  unsigned __int64 v13; // rdx
  char v14; // r15
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // di
  char v18; // r11
  char v19; // r12
  char *v20; // r11
  unsigned int *v21; // r13
  __int64 v22; // rax
  unsigned __int64 v23; // r14
  char v24; // cl
  char v25; // r8
  _BYTE *v26; // rax
  unsigned int v27; // eax
  char v28; // al
  char v30; // [rsp+60h] [rbp-68h]
  char v31; // [rsp+61h] [rbp-67h]
  int v32; // [rsp+64h] [rbp-64h]
  unsigned int v33; // [rsp+68h] [rbp-60h]
  GUID v34; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v4 = *(_QWORD *)(a2 + 24);
  v34 = 0LL;
  if ( !v4 || *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x40u || *(_WORD *)v4 != 1 || *(_WORD *)(v4 + 2) != 64 )
    goto LABEL_21;
  v5 = *(_QWORD *)(v4 + 40) - *(_QWORD *)&v34.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(v4 + 48) - *(_QWORD *)v34.Data4;
  if ( !v5 )
    goto LABEL_21;
  switch ( *(_DWORD *)(v4 + 8) )
  {
    case 1:
      if ( (*(_QWORD *)(v4 + 32) || *(_QWORD *)(v4 + 24)) && (unsigned __int8)(*(_BYTE *)(v4 + 16) - 1) <= 0x7Fu )
      {
        v7 = sub_1401A7724(*(PDEVICE_OBJECT *)(a1 + 8));
        goto LABEL_14;
      }
LABEL_21:
      v6 = -1073741811;
      goto LABEL_22;
    case 2:
      v7 = sub_1401A7654(*(_QWORD *)(a1 + 8));
      goto LABEL_14;
    case 3:
      v7 = sub_1401A74B0(*(_QWORD *)(a1 + 8));
      goto LABEL_14;
    case 4:
      v7 = sub_1401A756C(*(_QWORD *)(a1 + 8));
LABEL_14:
      v6 = v7;
      goto LABEL_22;
  }
  v6 = -1073741808;
LABEL_22:
  v8 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v8 )
    goto LABEL_88;
  v34 = 0LL;
  IoGetActivityIdIrp(a2, &v34);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_88;
    v12 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_87;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_88;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v2 = *v11;
        sub_140056AB0(v9, v10, &v34, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_88;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_88;
    v12 = &stru_140149FE8;
LABEL_87:
    sub_140052F3C(v9, v12, &v34, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_88;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_88;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0;
  v15 = 0LL;
  v30 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v13 + 2) != 40 )
  {
    v24 = *(_BYTE *)(v13 + 72);
    v15 = *(_BYTE **)(v13 + 32);
    v16 = *(_BYTE *)(v13 + 11);
    v14 = *(_BYTE *)(v13 + 4);
    if ( !*(_BYTE *)(v13 + 2) )
      goto LABEL_64;
    goto LABEL_88;
  }
  v20 = 0LL;
  v31 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_88;
  v9 = 0LL;
  v32 = 0;
  v33 = *(_DWORD *)(v13 + 56);
  if ( !v33 )
    goto LABEL_61;
  v21 = (unsigned int *)(v13 + 120);
  while ( 1 )
  {
    v22 = *v21;
    if ( (unsigned int)v22 >= 0x80 )
    {
      v23 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v22 < (unsigned int)v23 )
        break;
    }
LABEL_55:
    v9 = (unsigned int)(v9 + 1);
    ++v21;
    v32 = v9;
    if ( (unsigned int)v9 >= v33 )
      goto LABEL_61;
  }
  if ( *(_DWORD *)(v22 + v13) != 64 )
  {
    v9 = (unsigned int)(*(_DWORD *)(v22 + v13) - 65);
    if ( *(_DWORD *)(v22 + v13) == 65 )
    {
      v9 = v22 + 56;
      if ( v22 + 56 <= v23 )
      {
        v31 = 1;
        if ( *(_BYTE *)(v22 + v13 + 10) )
          v20 = (char *)(v22 + v13 + 24);
        v14 = *(_BYTE *)(v22 + v13 + 8);
        v15 = *(_BYTE **)(v22 + v13 + 16);
        v16 = *(_BYTE *)(v22 + v13 + 9);
      }
    }
    else if ( *(_DWORD *)(v22 + v13) == 66 )
    {
      v9 = v22 + 40;
      if ( v22 + 40 <= v23 )
      {
        if ( *(_DWORD *)(v22 + v13 + 12) )
          v20 = (char *)(v22 + v13 + 32);
        v15 = *(_BYTE **)(v22 + v13 + 24);
        goto LABEL_60;
      }
    }
    goto LABEL_53;
  }
  v9 = v22 + 40;
  if ( v22 + 40 > v23 )
  {
LABEL_53:
    if ( v31 )
      goto LABEL_61;
    LODWORD(v9) = v32;
    goto LABEL_55;
  }
  if ( *(_BYTE *)(v22 + v13 + 10) )
    v20 = (char *)(v22 + v13 + 24);
  v15 = *(_BYTE **)(v22 + v13 + 16);
LABEL_60:
  v16 = *(_BYTE *)(v22 + v13 + 9);
  v14 = *(_BYTE *)(v22 + v13 + 8);
LABEL_61:
  if ( v20 )
  {
    v24 = *v20;
    v18 = 0;
LABEL_64:
    LOBYTE(v9) = v24 - 8;
    if ( (v9 & 0x5D) == 0 )
    {
      v25 = *(_BYTE *)(v13 + 3);
      if ( v25 == 1 || !v15 || !v16 )
        goto LABEL_83;
      LOBYTE(v13) = 0;
      v9 = (unsigned __int64)&v15[v16];
      v26 = v15 + 8;
      if ( (unsigned __int8)((*v15 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v26 <= v9 )
        {
          LOBYTE(v13) = 1;
          v18 = v15[2];
          v17 = v15[1] & 0xF;
          v19 = v15[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v26 <= v9 )
        {
          v17 = v15[2] & 0xF;
          v27 = v16;
          if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
            v27 = (unsigned __int8)v15[7] + 8;
          v9 = (unsigned __int64)(v15 + 13);
          v13 = (unsigned __int64)&v15[v27];
          if ( (unsigned __int64)(v15 + 13) > v13 )
            v30 = 0;
          else
            v30 = v15[12];
          if ( (unsigned __int64)(v15 + 14) <= v13 )
            v19 = *(_BYTE *)v9;
          LOBYTE(v13) = 1;
        }
        v18 = v30;
      }
      if ( (_BYTE)v13 )
      {
        LOBYTE(v2) = v18;
        v28 = v19;
      }
      else
      {
LABEL_83:
        v17 = 0;
        v28 = 0;
      }
      sub_140052E64(v9, v13, &v34, a2, *(_DWORD *)(a2 + 48), v25, v14, v17, v2, v28, a2);
    }
  }
LABEL_88:
  IofCompleteRequest((PIRP)a2, 0);
  return v6;
}
