/*
 * XREFs of sub_14005CBB0 @ 0x14005CBB0
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140077D58 @ 0x140077D58 (sub_140077D58.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14005CBB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  int v7; // esi
  unsigned int v8; // ecx
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  bool v12; // zf
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // rax
  const EVENT_DESCRIPTOR *v16; // rdx
  __int64 v17; // rdx
  char v18; // r15
  _BYTE *v19; // r9
  unsigned __int8 v20; // r10
  char v21; // bp
  char v22; // r11
  char v23; // r12
  char *v24; // r11
  unsigned int *v25; // r13
  __int64 v26; // rax
  unsigned __int64 v27; // r14
  char v28; // cl
  char v29; // r8
  _BYTE *v30; // rax
  unsigned int v31; // eax
  unsigned __int64 v32; // r8
  char v33; // al
  char v35; // [rsp+60h] [rbp-68h]
  char v36; // [rsp+61h] [rbp-67h]
  int v37; // [rsp+64h] [rbp-64h]
  __int64 v38; // [rsp+68h] [rbp-60h] BYREF
  GUID v39; // [rsp+70h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 16) < 0x18u || *(_DWORD *)(v3 + 8) < 0x18u )
  {
    v7 = -1073741820;
LABEL_14:
    v9 = 0;
    goto LABEL_15;
  }
  if ( *(_DWORD *)v4 != 1 || *(_DWORD *)(v4 + 4) < 0x18u )
  {
    v7 = -1073741811;
    goto LABEL_14;
  }
  v8 = *(_DWORD *)(v4 + 8);
  v9 = 0;
  if ( v8 <= 1 )
  {
    v10 = *(_QWORD *)(a1 + 4960);
    if ( v10 && *(_QWORD *)(v10 + 32) )
    {
      v38 = *(_QWORD *)(v4 + 16);
      LOBYTE(a3) = v8 == 0;
      v7 = sub_140077D58(a1, &v38, a3);
      v11 = 0LL;
      if ( v7 >= 0 )
      {
        v11 = 24LL;
        *(_QWORD *)(v4 + 16) = v38;
      }
      goto LABEL_16;
    }
    v7 = -1073741637;
  }
  else
  {
    v7 = -1073741811;
  }
LABEL_15:
  v11 = 0LL;
LABEL_16:
  v12 = byte_140168DAA == 0;
  *(_QWORD *)(a2 + 56) = v11;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v12 )
    goto LABEL_82;
  v39 = 0LL;
  IoGetActivityIdIrp(a2, &v39);
  v14 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v14 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_82;
    v16 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_81;
  }
  if ( *(_BYTE *)v14 != 15 )
  {
    if ( *(_BYTE *)v14 != 27 )
      goto LABEL_82;
    if ( *(_BYTE *)(v14 + 1) == 7 && !*(_DWORD *)(v14 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v15 = *(int **)(a2 + 56);
        if ( v15 )
          v9 = *v15;
        sub_140056AB0(v13, v14, &v39, a2, v9, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_82;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_82;
    v16 = (const EVENT_DESCRIPTOR *)&unk_140149FE8;
LABEL_81:
    sub_140052F3C(v13, v16, &v39, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_82;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_82;
  v17 = *(_QWORD *)(v14 + 8);
  v18 = 0;
  v19 = 0LL;
  v35 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( *(_BYTE *)(v17 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v17 + 72);
    v19 = *(_BYTE **)(v17 + 32);
    v20 = *(_BYTE *)(v17 + 11);
    v18 = *(_BYTE *)(v17 + 4);
    if ( !*(_BYTE *)(v17 + 2) )
      goto LABEL_58;
    goto LABEL_82;
  }
  v24 = 0LL;
  v36 = 0;
  if ( *(_DWORD *)(v17 + 20) )
    goto LABEL_82;
  v13 = 0LL;
  v37 = 0;
  LODWORD(v38) = *(_DWORD *)(v17 + 56);
  if ( !(_DWORD)v38 )
    goto LABEL_55;
  v25 = (unsigned int *)(v17 + 120);
  while ( 1 )
  {
    v26 = *v25;
    if ( (unsigned int)v26 >= 0x80 )
    {
      v27 = *(unsigned int *)(v17 + 16);
      if ( (unsigned int)v26 < (unsigned int)v27 )
        break;
    }
LABEL_49:
    v13 = (unsigned int)(v13 + 1);
    ++v25;
    v37 = v13;
    if ( (unsigned int)v13 >= (unsigned int)v38 )
      goto LABEL_55;
  }
  if ( *(_DWORD *)(v26 + v17) != 64 )
  {
    v13 = (unsigned int)(*(_DWORD *)(v26 + v17) - 65);
    if ( *(_DWORD *)(v26 + v17) == 65 )
    {
      v13 = v26 + 56;
      if ( v26 + 56 <= v27 )
      {
        v36 = 1;
        if ( *(_BYTE *)(v26 + v17 + 10) )
          v24 = (char *)(v26 + v17 + 24);
        v18 = *(_BYTE *)(v26 + v17 + 8);
        v19 = *(_BYTE **)(v26 + v17 + 16);
        v20 = *(_BYTE *)(v26 + v17 + 9);
      }
    }
    else if ( *(_DWORD *)(v26 + v17) == 66 )
    {
      v13 = v26 + 40;
      if ( v26 + 40 <= v27 )
      {
        if ( *(_DWORD *)(v26 + v17 + 12) )
          v24 = (char *)(v26 + v17 + 32);
        v19 = *(_BYTE **)(v26 + v17 + 24);
        goto LABEL_54;
      }
    }
    goto LABEL_47;
  }
  v13 = v26 + 40;
  if ( v26 + 40 > v27 )
  {
LABEL_47:
    if ( v36 )
      goto LABEL_55;
    LODWORD(v13) = v37;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(v26 + v17 + 10) )
    v24 = (char *)(v26 + v17 + 24);
  v19 = *(_BYTE **)(v26 + v17 + 16);
LABEL_54:
  v20 = *(_BYTE *)(v26 + v17 + 9);
  v18 = *(_BYTE *)(v26 + v17 + 8);
LABEL_55:
  if ( v24 )
  {
    v28 = *v24;
    v22 = 0;
LABEL_58:
    LOBYTE(v13) = v28 - 8;
    if ( (v13 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v17 + 3) == 1 || !v19 || !v20 )
        goto LABEL_77;
      v29 = 0;
      v13 = (unsigned __int64)&v19[v20];
      v30 = v19 + 8;
      if ( (unsigned __int8)((*v19 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v30 <= v13 )
        {
          v29 = 1;
          v22 = v19[2];
          v21 = v19[1] & 0xF;
          v23 = v19[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v30 <= v13 )
        {
          v21 = v19[2] & 0xF;
          v31 = v20;
          if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
            v31 = (unsigned __int8)v19[7] + 8;
          v13 = (unsigned __int64)(v19 + 13);
          v32 = (unsigned __int64)&v19[v31];
          if ( (unsigned __int64)(v19 + 13) > v32 )
            v35 = 0;
          else
            v35 = v19[12];
          if ( (unsigned __int64)(v19 + 14) <= v32 )
            v23 = *(_BYTE *)v13;
          v29 = 1;
        }
        v22 = v35;
      }
      if ( v29 )
      {
        LOBYTE(v9) = v22;
        v33 = v23;
      }
      else
      {
LABEL_77:
        v21 = 0;
        v33 = 0;
      }
      sub_140052E64(v13, v17, &v39, a2, *(_DWORD *)(a2 + 48), *(_BYTE *)(v17 + 3), v18, v21, v9, v33, a2);
    }
  }
LABEL_82:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v7;
}
