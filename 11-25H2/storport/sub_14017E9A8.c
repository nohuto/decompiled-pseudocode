/*
 * XREFs of sub_14017E9A8 @ 0x14017E9A8
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_1401A93A4 @ 0x1401A93A4 (sub_1401A93A4.c)
 */

__int64 __fastcall sub_14017E9A8(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v4; // ebx
  __int64 v5; // rcx
  unsigned int v6; // esi
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  unsigned __int64 v12; // rdx
  char v13; // r14
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // si
  char v17; // r11
  char v18; // r15
  char *v19; // r11
  unsigned int v20; // r13d
  unsigned int *v21; // r12
  __int64 v22; // rax
  unsigned __int64 v23; // rbp
  char v24; // cl
  char v25; // r8
  _BYTE *v26; // rax
  unsigned int v27; // eax
  char v28; // al
  char v30; // [rsp+60h] [rbp-58h]
  char v31; // [rsp+61h] [rbp-57h]
  unsigned int v32; // [rsp+64h] [rbp-54h]
  GUID v33; // [rsp+68h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v4 = 0;
  if ( (int)sub_1401A93A4(*(_QWORD *)(v2 + 8)) >= 0 )
  {
    if ( byte_140168DAA )
    {
      v33 = 0LL;
      IoGetActivityIdIrp(a2, &v33);
      if ( (byte_1401694F2 & 8) != 0 )
        sub_140052F3C(v5, &stru_140148B18, &v33, a2, *(_DWORD *)(a2 + 48));
    }
    ++*(_BYTE *)(a2 + 67);
    *(_QWORD *)(a2 + 184) += 72LL;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 8), (PIRP)a2);
  }
  v7 = byte_140168DAA == 0;
  v6 = -1073741808;
  *(_DWORD *)(a2 + 48) = -1073741808;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v7 )
    goto LABEL_70;
  v33 = 0LL;
  IoGetActivityIdIrp(a2, &v33);
  v9 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_70;
    v11 = &stru_140148B18;
    goto LABEL_18;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_70;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v10 = *(int **)(a2 + 56);
        if ( v10 )
          v4 = *v10;
        sub_140056AB0(v8, v9, &v33, a2, v4, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_70;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_70;
    v11 = &stru_140149FE8;
LABEL_18:
    sub_140052F3C(v8, v11, &v33, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_70;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_70;
  v12 = *(_QWORD *)(v9 + 8);
  v13 = 0;
  v14 = 0LL;
  v30 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v24 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( !*(_BYTE *)(v12 + 2) )
      goto LABEL_48;
    goto LABEL_69;
  }
  v19 = 0LL;
  v31 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_69;
  v20 = 0;
  v32 = *(_DWORD *)(v12 + 56);
  if ( !v32 )
    goto LABEL_45;
  v21 = (unsigned int *)(v12 + 120);
  while ( 1 )
  {
    v22 = *v21;
    if ( (unsigned int)v22 >= 0x80 )
    {
      v23 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v22 < (unsigned int)v23 )
        break;
    }
LABEL_39:
    ++v20;
    ++v21;
    if ( v20 >= v32 )
      goto LABEL_45;
  }
  if ( *(_DWORD *)(v22 + v12) != 64 )
  {
    v8 = (unsigned int)(*(_DWORD *)(v22 + v12) - 65);
    if ( *(_DWORD *)(v22 + v12) == 65 )
    {
      v8 = v22 + 56;
      if ( v22 + 56 <= v23 )
      {
        v31 = 1;
        if ( *(_BYTE *)(v22 + v12 + 10) )
          v19 = (char *)(v22 + v12 + 24);
        v13 = *(_BYTE *)(v22 + v12 + 8);
        v14 = *(_BYTE **)(v22 + v12 + 16);
        v15 = *(_BYTE *)(v22 + v12 + 9);
      }
    }
    else if ( *(_DWORD *)(v22 + v12) == 66 )
    {
      v8 = v22 + 40;
      if ( v22 + 40 <= v23 )
      {
        if ( *(_DWORD *)(v22 + v12 + 12) )
          v19 = (char *)(v22 + v12 + 32);
        v14 = *(_BYTE **)(v22 + v12 + 24);
        goto LABEL_44;
      }
    }
    goto LABEL_38;
  }
  v8 = v22 + 40;
  if ( v22 + 40 > v23 )
  {
LABEL_38:
    if ( v31 )
      goto LABEL_45;
    goto LABEL_39;
  }
  if ( *(_BYTE *)(v22 + v12 + 10) )
    v19 = (char *)(v22 + v12 + 24);
  v14 = *(_BYTE **)(v22 + v12 + 16);
LABEL_44:
  v15 = *(_BYTE *)(v22 + v12 + 9);
  v13 = *(_BYTE *)(v22 + v12 + 8);
LABEL_45:
  if ( v19 )
  {
    v24 = *v19;
    v17 = 0;
LABEL_48:
    LOBYTE(v8) = v24 - 8;
    if ( (v8 & 0x5D) == 0 )
    {
      v25 = *(_BYTE *)(v12 + 3);
      if ( v25 == 1 || !v14 || !v15 )
        goto LABEL_67;
      LOBYTE(v12) = 0;
      v8 = (unsigned __int64)&v14[v15];
      v26 = v14 + 8;
      if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v26 <= v8 )
        {
          LOBYTE(v12) = 1;
          v17 = v14[2];
          v16 = v14[1] & 0xF;
          v18 = v14[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v26 <= v8 )
        {
          v16 = v14[2] & 0xF;
          v27 = v15;
          if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
            v27 = (unsigned __int8)v14[7] + 8;
          v8 = (unsigned __int64)(v14 + 13);
          v12 = (unsigned __int64)&v14[v27];
          if ( (unsigned __int64)(v14 + 13) > v12 )
            v30 = 0;
          else
            v30 = v14[12];
          if ( (unsigned __int64)(v14 + 14) <= v12 )
            v18 = *(_BYTE *)v8;
          LOBYTE(v12) = 1;
        }
        v17 = v30;
      }
      if ( (_BYTE)v12 )
      {
        LOBYTE(v4) = v17;
        v28 = v18;
      }
      else
      {
LABEL_67:
        v16 = 0;
        v28 = 0;
      }
      sub_140052E64(v8, v12, &v33, a2, *(_DWORD *)(a2 + 48), v25, v13, v16, v4, v28, a2);
    }
  }
LABEL_69:
  v6 = -1073741808;
LABEL_70:
  IofCompleteRequest((PIRP)a2, 0);
  return v6;
}
