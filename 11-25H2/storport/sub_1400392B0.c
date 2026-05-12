/*
 * XREFs of sub_1400392B0 @ 0x1400392B0
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140060AF4 @ 0x140060AF4 (sub_140060AF4.c)
 *     sub_14008A130 @ 0x14008A130 (sub_14008A130.c)
 *     sub_14008A93C @ 0x14008A93C (sub_14008A93C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400392B0(_QWORD *a1, __int64 a2)
{
  int v2; // ebx
  int v5; // esi
  bool v6; // zf
  char *v7; // rcx
  __int64 v8; // rdx
  __int64 v10; // r8
  void *v11; // rdx
  int *v12; // rax
  char v13; // r8
  char *v14; // rax
  char v15; // bp
  unsigned int v16; // eax
  unsigned __int64 v17; // r8
  char v18; // r12
  char v19; // r11
  char v20; // al
  __int64 v21; // rdx
  char v22; // r15
  _BYTE *v23; // r9
  unsigned __int8 v24; // r10
  char *v25; // r11
  unsigned int v26; // eax
  unsigned int *v27; // r13
  __int64 v28; // rax
  unsigned __int64 v29; // r14
  char v30; // cl
  char v31; // [rsp+60h] [rbp-68h] BYREF
  char v32[3]; // [rsp+61h] [rbp-67h] BYREF
  int v33; // [rsp+64h] [rbp-64h]
  unsigned int v34; // [rsp+68h] [rbp-60h]
  __int128 v35; // [rsp+70h] [rbp-58h] BYREF

  LOBYTE(v2) = 0;
  v31 = 0;
  v32[0] = 0;
  if ( !a1[76] || !a1[77] )
  {
    v5 = -1073741823;
LABEL_4:
    *(_QWORD *)(a2 + 56) = 0LL;
    goto LABEL_5;
  }
  v5 = sub_14008A93C(a1[1]);
  if ( v5 < 0 )
    goto LABEL_4;
  v5 = sub_14008A130(a1[1], a2, &v31, v32);
  if ( v5 < 0 )
    goto LABEL_4;
  LOBYTE(v10) = v31;
  v5 = sub_140060AF4(a1, a2, v10);
  if ( v5 < 0 )
    goto LABEL_4;
LABEL_5:
  v6 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v6 )
    goto LABEL_9;
  v35 = 0LL;
  IoGetActivityIdIrp(a2, &v35);
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v8 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_9;
    v11 = &unk_140148B18;
    goto LABEL_16;
  }
  if ( *(_BYTE *)v8 != 15 )
  {
    if ( *(_BYTE *)v8 != 27 )
      goto LABEL_9;
    if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v12 = *(int **)(a2 + 56);
        if ( v12 )
          v2 = *v12;
        sub_140056AB0((_DWORD)v7, v8, (unsigned int)&v35, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_9;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_9;
    v11 = &unk_140149FE8;
LABEL_16:
    sub_140052F3C(v7, v11, &v35, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_9;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_9;
  v21 = *(_QWORD *)(v8 + 8);
  v22 = 0;
  v23 = 0LL;
  v31 = 0;
  v24 = 0;
  v15 = 0;
  v19 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v21 + 2) != 40 )
  {
    v30 = *(_BYTE *)(v21 + 72);
    v23 = *(_BYTE **)(v21 + 32);
    v24 = *(_BYTE *)(v21 + 11);
    v22 = *(_BYTE *)(v21 + 4);
    if ( !*(_BYTE *)(v21 + 2) )
      goto LABEL_74;
    goto LABEL_9;
  }
  v25 = 0LL;
  v32[0] = 0;
  if ( *(_DWORD *)(v21 + 20) )
    goto LABEL_9;
  v26 = *(_DWORD *)(v21 + 56);
  LODWORD(v7) = 0;
  v33 = 0;
  v34 = v26;
  if ( !v26 )
    goto LABEL_71;
  v27 = (unsigned int *)(v21 + 120);
  while ( 1 )
  {
    v28 = *v27;
    if ( (unsigned int)v28 >= 0x80 )
    {
      v29 = *(unsigned int *)(v21 + 16);
      if ( (unsigned int)v28 < (unsigned int)v29 )
        break;
    }
LABEL_64:
    LODWORD(v7) = (_DWORD)v7 + 1;
    ++v27;
    v33 = (int)v7;
    if ( (unsigned int)v7 >= v34 )
      goto LABEL_71;
  }
  if ( *(_DWORD *)(v28 + v21) != 64 )
  {
    LODWORD(v7) = *(_DWORD *)(v28 + v21) - 65;
    if ( *(_DWORD *)(v28 + v21) == 65 )
    {
      LODWORD(v7) = v28 + 56;
      if ( v28 + 56 <= v29 )
      {
        v32[0] = 1;
        if ( *(_BYTE *)(v28 + v21 + 10) )
          v25 = (char *)(v28 + v21 + 24);
        v22 = *(_BYTE *)(v28 + v21 + 8);
        v23 = *(_BYTE **)(v28 + v21 + 16);
        v24 = *(_BYTE *)(v28 + v21 + 9);
      }
    }
    else if ( *(_DWORD *)(v28 + v21) == 66 )
    {
      LODWORD(v7) = v28 + 40;
      if ( v28 + 40 <= v29 )
      {
        if ( *(_DWORD *)(v28 + v21 + 12) )
          v25 = (char *)(v28 + v21 + 32);
        v23 = *(_BYTE **)(v28 + v21 + 24);
        goto LABEL_70;
      }
    }
    goto LABEL_62;
  }
  LODWORD(v7) = v28 + 40;
  if ( v28 + 40 > v29 )
  {
LABEL_62:
    if ( v32[0] )
      goto LABEL_71;
    LODWORD(v7) = v33;
    goto LABEL_64;
  }
  if ( *(_BYTE *)(v28 + v21 + 10) )
    v25 = (char *)(v28 + v21 + 24);
  v23 = *(_BYTE **)(v28 + v21 + 16);
LABEL_70:
  v24 = *(_BYTE *)(v28 + v21 + 9);
  v22 = *(_BYTE *)(v28 + v21 + 8);
LABEL_71:
  if ( v25 )
  {
    v30 = *v25;
    v19 = 0;
LABEL_74:
    LOBYTE(v7) = v30 - 8;
    if ( ((unsigned __int8)v7 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v21 + 3) == 1 || !v23 || !v24 )
        goto LABEL_37;
      v13 = 0;
      v7 = &v23[v24];
      v14 = v23 + 8;
      if ( (unsigned __int8)((*v23 & 0x7F) - 114) <= 1u )
      {
        if ( v14 <= v7 )
        {
          v13 = 1;
          v19 = v23[2];
          v15 = v23[1] & 0xF;
          v18 = v23[3];
        }
      }
      else
      {
        if ( v14 <= v7 )
        {
          v15 = v23[2] & 0xF;
          v16 = v24;
          if ( (unsigned int)(unsigned __int8)v23[7] + 8 <= v24 )
            v16 = (unsigned __int8)v23[7] + 8;
          v7 = v23 + 13;
          v17 = (unsigned __int64)&v23[v16];
          if ( (unsigned __int64)(v23 + 13) > v17 )
            v31 = 0;
          else
            v31 = v23[12];
          if ( (unsigned __int64)(v23 + 14) <= v17 )
            v18 = *v7;
          v13 = 1;
        }
        v19 = v31;
      }
      if ( v13 )
      {
        LOBYTE(v2) = v19;
        v20 = v18;
      }
      else
      {
LABEL_37:
        v15 = 0;
        v20 = 0;
      }
      sub_140052E64(
        (_DWORD)v7,
        v21,
        (unsigned int)&v35,
        a2,
        *(_DWORD *)(a2 + 48),
        *(_BYTE *)(v21 + 3),
        v22,
        v15,
        v2,
        v20,
        a2);
    }
  }
LABEL_9:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v5;
}
