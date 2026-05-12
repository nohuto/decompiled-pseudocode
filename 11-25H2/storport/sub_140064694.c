/*
 * XREFs of sub_140064694 @ 0x140064694
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14008C878 @ 0x14008C878 (sub_14008C878.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140064694(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rcx
  int v6; // r14d
  __int64 v7; // rcx
  int *v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx
  unsigned __int64 v15; // rdx
  char v16; // r13
  _BYTE *v17; // r9
  unsigned __int8 v18; // r10
  char v19; // si
  char v20; // r15
  char v21; // r11
  char *v22; // r11
  unsigned int v23; // r12d
  unsigned __int64 v24; // r15
  __int64 v25; // r8
  int v26; // ecx
  char v27; // cl
  char v28; // r8
  _BYTE *v29; // rax
  unsigned int v30; // eax
  char v31; // al
  __int64 v33; // [rsp+20h] [rbp-49h]
  char v34; // [rsp+60h] [rbp-9h]
  char v35; // [rsp+61h] [rbp-8h]
  char v36; // [rsp+62h] [rbp-7h] BYREF
  char v37; // [rsp+63h] [rbp-6h]
  int v38; // [rsp+64h] [rbp-5h] BYREF
  __int64 v39; // [rsp+68h] [rbp-1h] BYREF
  GUID v40; // [rsp+70h] [rbp+7h] BYREF

  v2 = 0;
  v38 = 6;
  *(_QWORD *)(a2 + 56) = 0LL;
  v4 = *(_QWORD *)(a2 + 184);
  v36 = 0;
  v39 = 0LL;
  if ( *(_QWORD *)(a1 + 6224) )
  {
    v6 = -2147483631;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 4276) != 17 || (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
    {
      v6 = -1073741637;
      goto LABEL_20;
    }
    if ( *(_QWORD *)(a2 + 24) )
    {
      if ( *(_DWORD *)(v4 + 16) < 4u || *(_DWORD *)(v4 + 8) < 0xCu )
      {
        v6 = -1073741789;
        goto LABEL_20;
      }
      v7 = *(_QWORD *)(a1 + 6216);
      if ( !v7 )
      {
        v6 = sub_14008C878(*(_QWORD *)(a1 + 8), &v39);
        if ( v6 < 0 )
          goto LABEL_20;
        v7 = v39;
        if ( !v39 )
        {
          v6 = -1073741438;
          goto LABEL_20;
        }
        *(_QWORD *)(a1 + 6216) = v39;
      }
      v8 = &v38;
      LOBYTE(v8) = 1;
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, char *, int *))(v7 + 32))(
             *(_QWORD *)(v7 + 8),
             **(unsigned int **)(a2 + 24),
             v8,
             &v36,
             &v38);
      if ( v6 >= 0 )
      {
        v9 = *(_QWORD *)(a2 + 24);
        *(_QWORD *)(v9 + 4) = 0LL;
        *(_DWORD *)v9 = 786433;
        *(_DWORD *)(v9 + 8) = v38;
        if ( v36 )
          *(_DWORD *)(v9 + 4) |= 1u;
        *(_QWORD *)(a2 + 56) = 12LL;
      }
      goto LABEL_20;
    }
    v6 = -1073741811;
  }
LABEL_20:
  v10 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v10 )
    goto LABEL_86;
  v40 = 0LL;
  IoGetActivityIdIrp(a2, &v40);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_86;
    v14 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_85;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_86;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v2 = *v13;
        LODWORD(v33) = v2;
        sub_140056AB0(v11, v12, &v40, a2, v33, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_86;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_86;
    v14 = &stru_140149FE8;
LABEL_85:
    LODWORD(v33) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v11, v14, &v40, a2, v33);
    goto LABEL_86;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_86;
  v15 = *(_QWORD *)(v12 + 8);
  v16 = 0;
  v17 = 0LL;
  v34 = 0;
  v18 = 0;
  v35 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v27 = *(_BYTE *)(v15 + 72);
    v17 = *(_BYTE **)(v15 + 32);
    v18 = *(_BYTE *)(v15 + 11);
    v16 = *(_BYTE *)(v15 + 4);
    if ( !*(_BYTE *)(v15 + 2) )
      goto LABEL_61;
    goto LABEL_86;
  }
  v22 = 0LL;
  v37 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_86;
  v23 = 0;
  LODWORD(v39) = *(_DWORD *)(v15 + 56);
  if ( !(_DWORD)v39 )
    goto LABEL_58;
  while ( 1 )
  {
    v11 = *(unsigned int *)(v15 + 4LL * v23 + 120);
    if ( (unsigned int)v11 >= 0x80 )
    {
      v24 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v11 < (unsigned int)v24 )
        break;
    }
LABEL_51:
    if ( ++v23 >= (unsigned int)v39 )
      goto LABEL_57;
  }
  v25 = (unsigned int)v11;
  v26 = *(_DWORD *)(v11 + v15) - 64;
  if ( v26 )
  {
    v11 = (unsigned int)(v26 - 1);
    if ( (_DWORD)v11 )
    {
      if ( (_DWORD)v11 == 1 )
      {
        v11 = v25 + 40;
        if ( v25 + 40 <= v24 )
        {
          if ( *(_DWORD *)(v25 + v15 + 12) )
            v22 = (char *)(v25 + v15 + 32);
          v17 = *(_BYTE **)(v25 + v15 + 24);
          goto LABEL_56;
        }
      }
    }
    else
    {
      v11 = v25 + 56;
      if ( v25 + 56 <= v24 )
      {
        v37 = 1;
        if ( *(_BYTE *)(v25 + v15 + 10) )
          v22 = (char *)(v25 + v15 + 24);
        v16 = *(_BYTE *)(v25 + v15 + 8);
        v17 = *(_BYTE **)(v25 + v15 + 16);
        v18 = *(_BYTE *)(v25 + v15 + 9);
      }
    }
    goto LABEL_50;
  }
  v11 = v25 + 40;
  if ( v25 + 40 > v24 )
  {
LABEL_50:
    if ( v37 )
      goto LABEL_57;
    goto LABEL_51;
  }
  if ( *(_BYTE *)(v25 + v15 + 10) )
    v22 = (char *)(v25 + v15 + 24);
  v17 = *(_BYTE **)(v25 + v15 + 16);
LABEL_56:
  v18 = *(_BYTE *)(v25 + v15 + 9);
  v16 = *(_BYTE *)(v25 + v15 + 8);
LABEL_57:
  v20 = 0;
LABEL_58:
  if ( v22 )
  {
    v27 = *v22;
    v21 = 0;
LABEL_61:
    LOBYTE(v11) = v27 - 8;
    if ( (v11 & 0x5D) == 0 )
    {
      v28 = *(_BYTE *)(v15 + 3);
      if ( v28 == 1 || !v17 || !v18 )
        goto LABEL_81;
      LOBYTE(v15) = 0;
      v11 = (unsigned __int64)&v17[v18];
      v29 = v17 + 8;
      if ( (unsigned __int8)((*v17 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v29 <= v11 )
        {
          LOBYTE(v15) = 1;
          v20 = v17[2];
          v19 = v17[1] & 0xF;
          v21 = v17[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v29 <= v11 )
        {
          v19 = v17[2] & 0xF;
          v30 = v18;
          if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
            v30 = (unsigned __int8)v17[7] + 8;
          v11 = (unsigned __int64)(v17 + 13);
          v15 = (unsigned __int64)&v17[v30];
          if ( (unsigned __int64)(v17 + 13) > v15 )
            v34 = 0;
          else
            v34 = v17[12];
          if ( (unsigned __int64)(v17 + 14) > v15 )
            v35 = 0;
          else
            v35 = *(_BYTE *)v11;
          LOBYTE(v15) = 1;
        }
        v21 = v35;
        v20 = v34;
      }
      if ( (_BYTE)v15 )
      {
        LOBYTE(v2) = v20;
        v31 = v21;
      }
      else
      {
LABEL_81:
        v19 = 0;
        v31 = 0;
      }
      LODWORD(v33) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v11, v15, &v40, a2, v33, v28, v16, v19, v2, v31, a2);
    }
  }
LABEL_86:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v6;
}
