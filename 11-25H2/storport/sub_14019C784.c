/*
 * XREFs of sub_14019C784 @ 0x14019C784
 * Callers:
 *     sub_14010216C @ 0x14010216C (sub_14010216C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14019C784(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // r12d
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  unsigned __int64 v13; // rdx
  char v14; // r14
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // si
  char v18; // r11
  char v19; // r15
  char *v20; // r11
  unsigned int *v21; // r13
  __int64 v22; // rax
  unsigned __int64 v23; // rbp
  char v24; // cl
  char v25; // r8
  _BYTE *v26; // rax
  unsigned int v27; // eax
  char v28; // al
  int v30; // [rsp+20h] [rbp-A8h]
  char v31; // [rsp+60h] [rbp-68h]
  char v32; // [rsp+61h] [rbp-67h]
  int v33; // [rsp+64h] [rbp-64h]
  unsigned int v34; // [rsp+68h] [rbp-60h]
  GUID v35; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) == 4 )
  {
    v5 = sub_1400143E0(256LL, 16LL, 1380213074LL, *(_QWORD *)(a1 + 8));
    v6 = v5;
    if ( v5 )
    {
      *(_DWORD *)v5 = 1;
      *(_QWORD *)(v5 + 8) = *(_QWORD *)(a1 + 8);
      ObfReferenceObject(*(PVOID *)(a1 + 8));
      *(_QWORD *)(a2 + 56) = v6;
      v7 = 0;
    }
    else
    {
      v7 = -1073741801;
    }
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 48);
  }
  v8 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v8 )
    goto LABEL_72;
  v35 = 0LL;
  IoGetActivityIdIrp(a2, &v35);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_72;
    v30 = *(_DWORD *)(a2 + 48);
    v12 = &stru_140148B18;
    goto LABEL_71;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_72;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v2 = *v11;
        sub_140056AB0(v9, v10, &v35, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_72;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_72;
    v12 = &stru_140149FE8;
    v30 = *(_DWORD *)(a2 + 48);
LABEL_71:
    sub_140052F3C(v9, v12, &v35, a2, v30);
    goto LABEL_72;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_72;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0;
  v15 = 0LL;
  v31 = 0;
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
      goto LABEL_48;
    goto LABEL_72;
  }
  v20 = 0LL;
  v32 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_72;
  v9 = 0LL;
  v33 = 0;
  v34 = *(_DWORD *)(v13 + 56);
  if ( !v34 )
    goto LABEL_45;
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
LABEL_39:
    v9 = (unsigned int)(v9 + 1);
    ++v21;
    v33 = v9;
    if ( (unsigned int)v9 >= v34 )
      goto LABEL_45;
  }
  if ( *(_DWORD *)(v22 + v13) != 64 )
  {
    v9 = (unsigned int)(*(_DWORD *)(v22 + v13) - 65);
    if ( *(_DWORD *)(v22 + v13) == 65 )
    {
      v9 = v22 + 56;
      if ( v22 + 56 <= v23 )
      {
        v32 = 1;
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
        goto LABEL_44;
      }
    }
    goto LABEL_37;
  }
  v9 = v22 + 40;
  if ( v22 + 40 > v23 )
  {
LABEL_37:
    if ( v32 )
      goto LABEL_45;
    LODWORD(v9) = v33;
    goto LABEL_39;
  }
  if ( *(_BYTE *)(v22 + v13 + 10) )
    v20 = (char *)(v22 + v13 + 24);
  v15 = *(_BYTE **)(v22 + v13 + 16);
LABEL_44:
  v16 = *(_BYTE *)(v22 + v13 + 9);
  v14 = *(_BYTE *)(v22 + v13 + 8);
LABEL_45:
  if ( v20 )
  {
    v24 = *v20;
    v18 = 0;
LABEL_48:
    LOBYTE(v9) = v24 - 8;
    if ( (v9 & 0x5D) == 0 )
    {
      v25 = *(_BYTE *)(v13 + 3);
      if ( v25 == 1 || !v15 || !v16 )
        goto LABEL_67;
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
            v31 = 0;
          else
            v31 = v15[12];
          if ( (unsigned __int64)(v15 + 14) <= v13 )
            v19 = *(_BYTE *)v9;
          LOBYTE(v13) = 1;
        }
        v18 = v31;
      }
      if ( (_BYTE)v13 )
      {
        LOBYTE(v2) = v18;
        v28 = v19;
      }
      else
      {
LABEL_67:
        v17 = 0;
        v28 = 0;
      }
      sub_140052E64(v9, v13, &v35, a2, *(_DWORD *)(a2 + 48), v25, v14, v17, v2, v28, a2);
    }
  }
LABEL_72:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
