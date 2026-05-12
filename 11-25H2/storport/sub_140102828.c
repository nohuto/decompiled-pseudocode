/*
 * XREFs of sub_140102828 @ 0x140102828
 * Callers:
 *     sub_140198640 @ 0x140198640 (sub_140198640.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140102828(__int64 a1, __int64 a2)
{
  int v3; // ebx
  int v4; // esi
  __int64 v5; // r8
  _DWORD *v6; // rax
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  __int64 v13; // rdx
  char v14; // r12
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // bp
  char v18; // r11
  char v19; // r13
  char *v20; // r11
  unsigned int v21; // r15d
  unsigned __int64 v22; // r14
  __int64 v23; // r8
  int v24; // ecx
  char v25; // cl
  char v26; // r8
  _BYTE *v27; // rax
  unsigned int v28; // eax
  unsigned __int64 v29; // r8
  char v30; // al
  int v31; // [rsp+20h] [rbp-98h]
  char v32; // [rsp+60h] [rbp-58h]
  char v33; // [rsp+61h] [rbp-57h]
  unsigned int v34; // [rsp+64h] [rbp-54h]
  GUID v35; // [rsp+68h] [rbp-50h] BYREF

  v3 = 0;
  v4 = -1073741808;
  v5 = *(_QWORD *)(a2 + 184);
  v6 = *(_DWORD **)(a2 + 24);
  if ( *(_DWORD *)(v5 + 16) >= 0x18u )
  {
    if ( v6 && *v6 == 1 && v6[1] >= 0x18u && v6[2] <= 1u )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) != 1
         || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 160LL) + 176LL) & 0x20) != 0)
        && **(_BYTE **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 160LL) == 1 )
      {
        ++*(_BYTE *)(a2 + 67);
        *(_QWORD *)(a2 + 184) = v5 + 72;
        return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 8LL), (PIRP)a2);
      }
    }
    else
    {
      v4 = -1073741811;
    }
  }
  else
  {
    v4 = -1073741820;
  }
  v8 = byte_140168DAA == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v4;
  if ( v8 )
    goto LABEL_76;
  v35 = 0LL;
  IoGetActivityIdIrp(a2, &v35);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_76;
    v9 = *(unsigned int *)(a2 + 48);
    v12 = &stru_140148B18;
    v31 = *(_DWORD *)(a2 + 48);
    goto LABEL_75;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_76;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v3 = *v11;
        sub_140056AB0(v9, v10, &v35, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_76;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_76;
    v12 = &stru_140149FE8;
    v31 = *(_DWORD *)(a2 + 48);
LABEL_75:
    sub_140052F3C(v9, v12, &v35, a2, v31);
    goto LABEL_76;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_76;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0;
  v15 = 0LL;
  v32 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v13 + 2) != 40 )
  {
    v25 = *(_BYTE *)(v13 + 72);
    v15 = *(_BYTE **)(v13 + 32);
    v16 = *(_BYTE *)(v13 + 11);
    v14 = *(_BYTE *)(v13 + 4);
    if ( !*(_BYTE *)(v13 + 2) )
      goto LABEL_52;
    goto LABEL_76;
  }
  v20 = 0LL;
  v33 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_76;
  v21 = 0;
  v34 = *(_DWORD *)(v13 + 56);
  if ( !v34 )
    goto LABEL_49;
  while ( 1 )
  {
    v9 = *(unsigned int *)(v13 + 4LL * v21 + 120);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v22 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v9 < (unsigned int)v22 )
        break;
    }
LABEL_43:
    if ( ++v21 >= v34 )
      goto LABEL_49;
  }
  v23 = (unsigned int)v9;
  v24 = *(_DWORD *)(v9 + v13) - 64;
  if ( v24 )
  {
    v9 = (unsigned int)(v24 - 1);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        v9 = v23 + 40;
        if ( v23 + 40 <= v22 )
        {
          if ( *(_DWORD *)(v23 + v13 + 12) )
            v20 = (char *)(v23 + v13 + 32);
          v15 = *(_BYTE **)(v23 + v13 + 24);
          goto LABEL_48;
        }
      }
    }
    else
    {
      v9 = v23 + 56;
      if ( v23 + 56 <= v22 )
      {
        v33 = 1;
        if ( *(_BYTE *)(v23 + v13 + 10) )
          v20 = (char *)(v23 + v13 + 24);
        v14 = *(_BYTE *)(v23 + v13 + 8);
        v15 = *(_BYTE **)(v23 + v13 + 16);
        v16 = *(_BYTE *)(v23 + v13 + 9);
      }
    }
    goto LABEL_42;
  }
  v9 = v23 + 40;
  if ( v23 + 40 > v22 )
  {
LABEL_42:
    if ( v33 )
      goto LABEL_49;
    goto LABEL_43;
  }
  if ( *(_BYTE *)(v23 + v13 + 10) )
    v20 = (char *)(v23 + v13 + 24);
  v15 = *(_BYTE **)(v23 + v13 + 16);
LABEL_48:
  v16 = *(_BYTE *)(v23 + v13 + 9);
  v14 = *(_BYTE *)(v23 + v13 + 8);
LABEL_49:
  if ( v20 )
  {
    v25 = *v20;
    v18 = 0;
LABEL_52:
    LOBYTE(v9) = v25 - 8;
    if ( (v9 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v13 + 3) == 1 || !v15 || !v16 )
        goto LABEL_71;
      v26 = 0;
      v9 = (unsigned __int64)&v15[v16];
      v27 = v15 + 8;
      if ( (unsigned __int8)((*v15 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v27 <= v9 )
        {
          v26 = 1;
          v18 = v15[2];
          v17 = v15[1] & 0xF;
          v19 = v15[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v27 <= v9 )
        {
          v17 = v15[2] & 0xF;
          v28 = v16;
          if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
            v28 = (unsigned __int8)v15[7] + 8;
          v9 = (unsigned __int64)(v15 + 13);
          v29 = (unsigned __int64)&v15[v28];
          if ( (unsigned __int64)(v15 + 13) > v29 )
            v32 = 0;
          else
            v32 = v15[12];
          if ( (unsigned __int64)(v15 + 14) <= v29 )
            v19 = *(_BYTE *)v9;
          v26 = 1;
        }
        v18 = v32;
      }
      if ( v26 )
      {
        LOBYTE(v3) = v18;
        v30 = v19;
      }
      else
      {
LABEL_71:
        v17 = 0;
        v30 = 0;
      }
      sub_140052E64(v9, v13, &v35, a2, *(_DWORD *)(a2 + 48), *(_BYTE *)(v13 + 3), v14, v17, v3, v30, a2);
    }
  }
LABEL_76:
  IofCompleteRequest((PIRP)a2, 0);
  return v4;
}
