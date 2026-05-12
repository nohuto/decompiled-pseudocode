/*
 * XREFs of sub_14009BE34 @ 0x14009BE34
 * Callers:
 *     sub_1401B3ED0 @ 0x1401B3ED0 (sub_1401B3ED0.c)
 * Callees:
 *     sub_140012334 @ 0x140012334 (sub_140012334.c)
 *     sub_1400153FC @ 0x1400153FC (sub_1400153FC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14009BE34(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r12
  int v3; // esi
  __int64 v4; // rax
  int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // r15d
  int v10; // eax
  unsigned int *v11; // r13
  __int64 v12; // rbx
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  unsigned __int64 v18; // rdx
  char v19; // r12
  _BYTE *v20; // r9
  unsigned __int8 v21; // r10
  char v22; // bl
  char v23; // r11
  char v24; // r13
  char *v25; // r11
  int v26; // eax
  unsigned int v27; // r8d
  unsigned int *v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rdi
  char v31; // cl
  char v32; // r8
  _BYTE *v33; // rax
  unsigned int v34; // eax
  char v35; // al
  __int64 v37; // [rsp+20h] [rbp-49h]
  __int64 v38; // [rsp+28h] [rbp-41h]
  __int64 v39; // [rsp+30h] [rbp-39h]
  char v40; // [rsp+60h] [rbp-9h]
  char v41; // [rsp+61h] [rbp-8h]
  int v42; // [rsp+64h] [rbp-5h] BYREF
  size_t Size; // [rsp+68h] [rbp-1h]
  PVOID P; // [rsp+70h] [rbp+7h] BYREF
  GUID v45; // [rsp+78h] [rbp+Fh] BYREF

  v2 = *(_DWORD **)(a2 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  P = 0LL;
  v42 = 0;
  v7 = v2[1];
  v8 = *(_DWORD *)(v4 + 8);
  LODWORD(Size) = v8;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      v9 = -1073741637;
LABEL_19:
      *(_QWORD *)(a2 + 56) = 0LL;
      goto LABEL_20;
    }
  }
  else
  {
    if ( v8 >= 0x38 )
    {
      v10 = sub_140012334(*(_QWORD *)(a1 + 8), a2, (__int64 *)&P, &v42);
      v11 = (unsigned int *)P;
      v9 = v10;
      if ( v10 >= 0 )
      {
        v9 = sub_1400153FC(a1, a2, (__int64)P, v42, 0LL, 0, 64);
        if ( ((v9 + 0x80000000) & 0x80000000) != 0 || v9 == -2147483643 )
        {
          v12 = v11[8];
          if ( (unsigned int)Size < (unsigned int)v12 )
            v12 = (unsigned int)Size;
          memset_0(v2, 0, (unsigned int)Size);
          memmove(v2, v11 + 7, (unsigned int)v12);
          *v2 = 56;
          *(_QWORD *)(a2 + 56) = v12;
        }
      }
      if ( v11 )
        ExFreePoolWithTag(v11, 0x72536152u);
      if ( ((v9 + 0x80000000) & 0x80000000) != 0 || v9 == -2147483643 )
        goto LABEL_20;
      goto LABEL_19;
    }
    if ( v8 < 8 )
    {
      v9 = -1073741789;
      goto LABEL_19;
    }
    *v2 = 56;
    v2[1] = 56;
    *(_QWORD *)(a2 + 56) = 8LL;
  }
  v9 = 0;
LABEL_20:
  v13 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v13 )
    goto LABEL_86;
  v45 = 0LL;
  IoGetActivityIdIrp(a2, &v45);
  v15 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_86;
    v17 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_85;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_86;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v16 = *(int **)(a2 + 56);
        if ( v16 )
          v3 = *v16;
        LODWORD(v38) = *(_DWORD *)(a2 + 48);
        LODWORD(v37) = v3;
        sub_140056AB0(v14, v15, &v45, a2, v37, v38);
      }
      goto LABEL_86;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_86;
    v17 = &stru_140149FE8;
LABEL_85:
    LODWORD(v37) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v14, v17, &v45, a2, v37);
    goto LABEL_86;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_86;
  v18 = *(_QWORD *)(v15 + 8);
  v19 = 0;
  v20 = 0LL;
  v40 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( *(_BYTE *)(v18 + 2) != 40 )
  {
    v31 = *(_BYTE *)(v18 + 72);
    v20 = *(_BYTE **)(v18 + 32);
    v21 = *(_BYTE *)(v18 + 11);
    v19 = *(_BYTE *)(v18 + 4);
    if ( !*(_BYTE *)(v18 + 2) )
      goto LABEL_62;
    goto LABEL_86;
  }
  v25 = 0LL;
  v41 = 0;
  if ( *(_DWORD *)(v18 + 20) )
    goto LABEL_86;
  v26 = *(_DWORD *)(v18 + 56);
  v14 = 0LL;
  LODWORD(Size) = 0;
  v42 = v26;
  if ( !v26 )
    goto LABEL_59;
  v27 = v42;
  v28 = (unsigned int *)(v18 + 120);
  P = (PVOID)(v18 + 120);
  while ( 1 )
  {
    v29 = *v28;
    if ( (unsigned int)v29 >= 0x80 )
    {
      v30 = *(unsigned int *)(v18 + 16);
      if ( (unsigned int)v29 < (unsigned int)v30 )
        break;
    }
LABEL_53:
    v14 = (unsigned int)(v14 + 1);
    v28 = (unsigned int *)((char *)P + 4);
    LODWORD(Size) = v14;
    P = (char *)P + 4;
    if ( (unsigned int)v14 >= v27 )
      goto LABEL_59;
  }
  if ( *(_DWORD *)(v29 + v18) != 64 )
  {
    v14 = (unsigned int)(*(_DWORD *)(v29 + v18) - 65);
    if ( *(_DWORD *)(v29 + v18) == 65 )
    {
      v14 = v29 + 56;
      if ( v29 + 56 <= v30 )
      {
        v41 = 1;
        if ( *(_BYTE *)(v29 + v18 + 10) )
          v25 = (char *)(v29 + v18 + 24);
        v19 = *(_BYTE *)(v29 + v18 + 8);
        v20 = *(_BYTE **)(v29 + v18 + 16);
        v21 = *(_BYTE *)(v29 + v18 + 9);
      }
    }
    else if ( *(_DWORD *)(v29 + v18) == 66 )
    {
      v14 = v29 + 40;
      if ( v29 + 40 <= v30 )
      {
        if ( *(_DWORD *)(v29 + v18 + 12) )
          v25 = (char *)(v29 + v18 + 32);
        v20 = *(_BYTE **)(v29 + v18 + 24);
        goto LABEL_58;
      }
    }
    goto LABEL_51;
  }
  v14 = v29 + 40;
  if ( v29 + 40 > v30 )
  {
LABEL_51:
    if ( v41 )
      goto LABEL_59;
    LODWORD(v14) = Size;
    v27 = v42;
    goto LABEL_53;
  }
  if ( *(_BYTE *)(v29 + v18 + 10) )
    v25 = (char *)(v29 + v18 + 24);
  v20 = *(_BYTE **)(v29 + v18 + 16);
LABEL_58:
  v21 = *(_BYTE *)(v29 + v18 + 9);
  v19 = *(_BYTE *)(v29 + v18 + 8);
LABEL_59:
  if ( v25 )
  {
    v31 = *v25;
    v23 = 0;
LABEL_62:
    LOBYTE(v14) = v31 - 8;
    if ( (v14 & 0x5D) == 0 )
    {
      v32 = *(_BYTE *)(v18 + 3);
      if ( v32 == 1 || !v20 || !v21 )
        goto LABEL_81;
      LOBYTE(v18) = 0;
      v14 = (unsigned __int64)&v20[v21];
      v33 = v20 + 8;
      if ( (unsigned __int8)((*v20 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v33 <= v14 )
        {
          LOBYTE(v18) = 1;
          v23 = v20[2];
          v22 = v20[1] & 0xF;
          v24 = v20[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v33 <= v14 )
        {
          v22 = v20[2] & 0xF;
          v34 = v21;
          if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
            v34 = (unsigned __int8)v20[7] + 8;
          v14 = (unsigned __int64)(v20 + 13);
          v18 = (unsigned __int64)&v20[v34];
          if ( (unsigned __int64)(v20 + 13) > v18 )
            v40 = 0;
          else
            v40 = v20[12];
          if ( (unsigned __int64)(v20 + 14) <= v18 )
            v24 = *(_BYTE *)v14;
          LOBYTE(v18) = 1;
        }
        v23 = v40;
      }
      if ( (_BYTE)v18 )
      {
        LOBYTE(v3) = v23;
        v35 = v24;
      }
      else
      {
LABEL_81:
        v22 = 0;
        v35 = 0;
      }
      LOBYTE(v39) = v19;
      LOBYTE(v38) = v32;
      LODWORD(v37) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v14, v18, &v45, a2, v37, v38, v39, v22, v3, v35, a2);
    }
  }
LABEL_86:
  IofCompleteRequest((PIRP)a2, 0);
  return v9;
}
