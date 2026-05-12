/*
 * XREFs of sub_14009C2C8 @ 0x14009C2C8
 * Callers:
 *     sub_1401B3ED0 @ 0x1401B3ED0 (sub_1401B3ED0.c)
 * Callees:
 *     sub_1400153FC @ 0x1400153FC (sub_1400153FC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400899DC @ 0x1400899DC (sub_1400899DC.c)
 *     sub_14009FBD0 @ 0x14009FBD0 (sub_14009FBD0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14009C2C8(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r12
  int v3; // esi
  __int64 v4; // rax
  unsigned int *v7; // r13
  int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // r15d
  _DWORD *v11; // rax
  __int64 v12; // rax
  int v13; // eax
  int v14; // ecx
  bool v15; // zf
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  int *v18; // rax
  __int64 v19; // rbx
  const EVENT_DESCRIPTOR *v20; // rdx
  unsigned __int64 v21; // rdx
  char v22; // r12
  _BYTE *v23; // r9
  unsigned __int8 v24; // r10
  char v25; // bl
  char v26; // r11
  char v27; // r13
  char *v28; // r11
  int v29; // eax
  unsigned int v30; // r8d
  unsigned int *v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rdi
  char v34; // cl
  char v35; // r8
  _BYTE *v36; // rax
  unsigned int v37; // eax
  char v38; // al
  __int64 v40; // [rsp+20h] [rbp-49h]
  __int64 v41; // [rsp+28h] [rbp-41h]
  __int64 v42; // [rsp+30h] [rbp-39h]
  char v43; // [rsp+60h] [rbp-9h]
  char v44; // [rsp+61h] [rbp-8h]
  int v45; // [rsp+64h] [rbp-5h] BYREF
  size_t Size; // [rsp+68h] [rbp-1h]
  PVOID P; // [rsp+70h] [rbp+7h] BYREF
  GUID v48; // [rsp+78h] [rbp+Fh] BYREF

  v2 = *(_DWORD **)(a2 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  P = 0LL;
  v7 = 0LL;
  v45 = 0;
  v8 = v2[1];
  v9 = *(_DWORD *)(v4 + 8);
  LODWORD(Size) = v9;
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      v10 = -1073741637;
LABEL_26:
      *(_QWORD *)(a2 + 56) = 0LL;
      goto LABEL_27;
    }
    goto LABEL_7;
  }
  if ( v9 >= 0x28 )
  {
    v11 = *(_DWORD **)(a1 + 24);
    if ( *v11 == 1094997074 )
    {
      v12 = (__int64)(v11 + 151);
    }
    else if ( *v11 == 1314275652 )
    {
      v12 = (__int64)(v11 + 99);
    }
    else
    {
      v12 = 228LL;
    }
    if ( (*(_DWORD *)v12 & 0x20) == 0 )
      goto LABEL_21;
    v13 = sub_1400899DC(*(_QWORD *)(a1 + 8), a2, &P, &v45);
    v7 = (unsigned int *)P;
    v10 = v13;
    if ( v13 < 0 )
      goto LABEL_22;
    v10 = sub_1400153FC(a1, a2, (__int64)P, v45, 0LL, 0, 64);
    if ( ((v10 + 0x80000000) & 0x80000000) != 0 || v10 == -2147483643 )
    {
      v19 = v7[8];
      if ( (unsigned int)Size < (unsigned int)v19 )
        v19 = (unsigned int)Size;
      memset_0(v2, 0, (unsigned int)Size);
      memmove(v2, v7 + 7, (unsigned int)v19);
      *v2 = 40;
      *(_QWORD *)(a2 + 56) = v19;
    }
    else if ( v10 + 1073741822 <= 0xE && (v14 = 18433, _bittest(&v14, v10 + 1073741822)) || v10 == -1073741637 )
    {
LABEL_21:
      v10 = sub_14009FBD0(a1, a2);
    }
LABEL_22:
    if ( v7 )
      ExFreePoolWithTag(v7, 0x72536152u);
    if ( ((v10 + 0x80000000) & 0x80000000) != 0 || v10 == -2147483643 )
      goto LABEL_27;
    goto LABEL_26;
  }
  if ( v9 < 8 )
  {
    v10 = -1073741789;
    goto LABEL_26;
  }
  *v2 = 40;
  v2[1] = 40;
  *(_QWORD *)(a2 + 56) = 8LL;
LABEL_7:
  v10 = 0;
LABEL_27:
  v15 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v10;
  if ( v15 )
    goto LABEL_96;
  v48 = 0LL;
  IoGetActivityIdIrp(a2, &v48);
  v17 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v17 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_96;
    v20 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_95;
  }
  if ( *(_BYTE *)v17 != 15 )
  {
    if ( *(_BYTE *)v17 != 27 )
      goto LABEL_96;
    if ( *(_BYTE *)(v17 + 1) == 7 && !*(_DWORD *)(v17 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v18 = *(int **)(a2 + 56);
        if ( v18 )
          v3 = *v18;
        LODWORD(v41) = *(_DWORD *)(a2 + 48);
        LODWORD(v40) = v3;
        sub_140056AB0(v16, v17, &v48, a2, v40, v41);
      }
      goto LABEL_96;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_96;
    v20 = &stru_140149FE8;
LABEL_95:
    LODWORD(v40) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v16, v20, &v48, a2, v40);
    goto LABEL_96;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_96;
  v21 = *(_QWORD *)(v17 + 8);
  v22 = 0;
  v23 = 0LL;
  v43 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  if ( *(_BYTE *)(v21 + 2) != 40 )
  {
    v34 = *(_BYTE *)(v21 + 72);
    v23 = *(_BYTE **)(v21 + 32);
    v24 = *(_BYTE *)(v21 + 11);
    v22 = *(_BYTE *)(v21 + 4);
    if ( !*(_BYTE *)(v21 + 2) )
      goto LABEL_72;
    goto LABEL_96;
  }
  v28 = 0LL;
  v44 = 0;
  if ( *(_DWORD *)(v21 + 20) )
    goto LABEL_96;
  v29 = *(_DWORD *)(v21 + 56);
  v16 = 0LL;
  LODWORD(Size) = 0;
  v45 = v29;
  if ( !v29 )
    goto LABEL_69;
  v30 = v45;
  v31 = (unsigned int *)(v21 + 120);
  P = (PVOID)(v21 + 120);
  while ( 1 )
  {
    v32 = *v31;
    if ( (unsigned int)v32 >= 0x80 )
    {
      v33 = *(unsigned int *)(v21 + 16);
      if ( (unsigned int)v32 < (unsigned int)v33 )
        break;
    }
LABEL_63:
    v16 = (unsigned int)(v16 + 1);
    v31 = (unsigned int *)((char *)P + 4);
    LODWORD(Size) = v16;
    P = (char *)P + 4;
    if ( (unsigned int)v16 >= v30 )
      goto LABEL_69;
  }
  if ( *(_DWORD *)(v32 + v21) != 64 )
  {
    v16 = (unsigned int)(*(_DWORD *)(v32 + v21) - 65);
    if ( *(_DWORD *)(v32 + v21) == 65 )
    {
      v16 = v32 + 56;
      if ( v32 + 56 <= v33 )
      {
        v44 = 1;
        if ( *(_BYTE *)(v32 + v21 + 10) )
          v28 = (char *)(v32 + v21 + 24);
        v22 = *(_BYTE *)(v32 + v21 + 8);
        v23 = *(_BYTE **)(v32 + v21 + 16);
        v24 = *(_BYTE *)(v32 + v21 + 9);
      }
    }
    else if ( *(_DWORD *)(v32 + v21) == 66 )
    {
      v16 = v32 + 40;
      if ( v32 + 40 <= v33 )
      {
        if ( *(_DWORD *)(v32 + v21 + 12) )
          v28 = (char *)(v32 + v21 + 32);
        v23 = *(_BYTE **)(v32 + v21 + 24);
        goto LABEL_68;
      }
    }
    goto LABEL_61;
  }
  v16 = v32 + 40;
  if ( v32 + 40 > v33 )
  {
LABEL_61:
    if ( v44 )
      goto LABEL_69;
    LODWORD(v16) = Size;
    v30 = v45;
    goto LABEL_63;
  }
  if ( *(_BYTE *)(v32 + v21 + 10) )
    v28 = (char *)(v32 + v21 + 24);
  v23 = *(_BYTE **)(v32 + v21 + 16);
LABEL_68:
  v24 = *(_BYTE *)(v32 + v21 + 9);
  v22 = *(_BYTE *)(v32 + v21 + 8);
LABEL_69:
  if ( v28 )
  {
    v34 = *v28;
    v26 = 0;
LABEL_72:
    LOBYTE(v16) = v34 - 8;
    if ( (v16 & 0x5D) == 0 )
    {
      v35 = *(_BYTE *)(v21 + 3);
      if ( v35 == 1 || !v23 || !v24 )
        goto LABEL_91;
      LOBYTE(v21) = 0;
      v16 = (unsigned __int64)&v23[v24];
      v36 = v23 + 8;
      if ( (unsigned __int8)((*v23 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v36 <= v16 )
        {
          LOBYTE(v21) = 1;
          v26 = v23[2];
          v25 = v23[1] & 0xF;
          v27 = v23[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v36 <= v16 )
        {
          v25 = v23[2] & 0xF;
          v37 = v24;
          if ( (unsigned int)(unsigned __int8)v23[7] + 8 <= v24 )
            v37 = (unsigned __int8)v23[7] + 8;
          v16 = (unsigned __int64)(v23 + 13);
          v21 = (unsigned __int64)&v23[v37];
          if ( (unsigned __int64)(v23 + 13) > v21 )
            v43 = 0;
          else
            v43 = v23[12];
          if ( (unsigned __int64)(v23 + 14) <= v21 )
            v27 = *(_BYTE *)v16;
          LOBYTE(v21) = 1;
        }
        v26 = v43;
      }
      if ( (_BYTE)v21 )
      {
        LOBYTE(v3) = v26;
        v38 = v27;
      }
      else
      {
LABEL_91:
        v25 = 0;
        v38 = 0;
      }
      LOBYTE(v42) = v22;
      LOBYTE(v41) = v35;
      LODWORD(v40) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v16, v21, &v48, a2, v40, v41, v42, v25, v3, v38, a2);
    }
  }
LABEL_96:
  IofCompleteRequest((PIRP)a2, 0);
  return v10;
}
