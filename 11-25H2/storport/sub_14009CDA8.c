/*
 * XREFs of sub_14009CDA8 @ 0x14009CDA8
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400153FC @ 0x1400153FC (sub_1400153FC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_14009CDA8(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v5; // r14d
  size_t v6; // r15
  unsigned int v7; // ebp
  unsigned int v8; // r13d
  _DWORD *v9; // rax
  _DWORD *v10; // rsi
  unsigned int v11; // r13d
  unsigned int v12; // ecx
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  unsigned __int64 v18; // rdx
  char v19; // r14
  _BYTE *v20; // r9
  unsigned __int8 v21; // r10
  char v22; // si
  char v23; // r11
  char v24; // r15
  char *v25; // r11
  unsigned int *v26; // r12
  __int64 v27; // rax
  unsigned __int64 v28; // rbp
  char v29; // cl
  char v30; // r8
  _BYTE *v31; // rax
  unsigned int v32; // eax
  char v33; // al
  __int64 v35; // [rsp+20h] [rbp-A8h]
  __int64 v36; // [rsp+28h] [rbp-A0h]
  __int64 v37; // [rsp+30h] [rbp-98h]
  char v38; // [rsp+60h] [rbp-68h]
  char v39; // [rsp+61h] [rbp-67h]
  int v40; // [rsp+68h] [rbp-60h]
  _DWORD *v41; // [rsp+70h] [rbp-58h]
  unsigned int v42; // [rsp+70h] [rbp-58h]
  GUID v43; // [rsp+78h] [rbp-50h] BYREF

  v2 = 0;
  v41 = *(_DWORD **)(a2 + 184);
  *(_QWORD *)&v43.Data1 = a1;
  v5 = 0;
  v6 = (unsigned int)v41[4];
  v7 = v41[2];
  v8 = v6;
  if ( (unsigned int)v6 <= v7 )
    v8 = v41[2];
  if ( v8 >= 0xFFFFFFE4 )
  {
    v11 = -1073741675;
  }
  else
  {
    v9 = (_DWORD *)sub_1400143E0(64LL, v8 + 28, 1918067026LL, *(_QWORD *)(a1 + 8));
    v10 = v9;
    if ( v9 )
    {
      v9[4] = v41[6];
      *v9 = 8;
      v9[3] = *(_DWORD *)(a1 + 1392);
      v9[6] = v8;
      if ( (_DWORD)v6 )
        memmove(v9 + 7, *(const void **)(a2 + 24), v6);
      v11 = sub_1400153FC(
              *(__int64 *)&v43.Data1,
              a2,
              (__int64)v10,
              v8 + 28,
              0LL,
              0,
              (v7 != 0 ? 0x40 : 0) | ((_DWORD)v6 != 0 ? 0x80 : 0));
      if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147483643 )
      {
        if ( v7 )
        {
          v12 = v10[6];
          if ( v12 )
          {
            v5 = v10[6];
            if ( v7 < v12 )
              v5 = v7;
            memmove(*(void **)(a2 + 24), v10 + 7, v5);
          }
        }
      }
      ExFreePoolWithTag(v10, 0x72536152u);
    }
    else
    {
      v11 = -1073741670;
    }
  }
  v13 = byte_140168DAA == 0;
  *(_QWORD *)(a2 + 56) = v5;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v11;
  if ( v13 )
    goto LABEL_83;
  v43 = 0LL;
  IoGetActivityIdIrp(a2, &v43);
  v15 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_83;
    v17 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_82;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_83;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v16 = *(int **)(a2 + 56);
        if ( v16 )
          v2 = *v16;
        LODWORD(v36) = *(_DWORD *)(a2 + 48);
        LODWORD(v35) = v2;
        sub_140056AB0(v14, v15, &v43, a2, v35, v36);
      }
      goto LABEL_83;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_83;
    v17 = &stru_140149FE8;
LABEL_82:
    LODWORD(v35) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v14, v17, &v43, a2, v35);
    goto LABEL_83;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_83;
  v18 = *(_QWORD *)(v15 + 8);
  v19 = 0;
  v20 = 0LL;
  v38 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( *(_BYTE *)(v18 + 2) != 40 )
  {
    v29 = *(_BYTE *)(v18 + 72);
    v20 = *(_BYTE **)(v18 + 32);
    v21 = *(_BYTE *)(v18 + 11);
    v19 = *(_BYTE *)(v18 + 4);
    if ( !*(_BYTE *)(v18 + 2) )
      goto LABEL_59;
    goto LABEL_83;
  }
  v25 = 0LL;
  v39 = 0;
  if ( *(_DWORD *)(v18 + 20) )
    goto LABEL_83;
  v14 = 0LL;
  v40 = 0;
  v42 = *(_DWORD *)(v18 + 56);
  if ( !v42 )
    goto LABEL_56;
  v26 = (unsigned int *)(v18 + 120);
  while ( 1 )
  {
    v27 = *v26;
    if ( (unsigned int)v27 >= 0x80 )
    {
      v28 = *(unsigned int *)(v18 + 16);
      if ( (unsigned int)v27 < (unsigned int)v28 )
        break;
    }
LABEL_50:
    v14 = (unsigned int)(v14 + 1);
    ++v26;
    v40 = v14;
    if ( (unsigned int)v14 >= v42 )
      goto LABEL_56;
  }
  if ( *(_DWORD *)(v27 + v18) != 64 )
  {
    v14 = (unsigned int)(*(_DWORD *)(v27 + v18) - 65);
    if ( *(_DWORD *)(v27 + v18) == 65 )
    {
      v14 = v27 + 56;
      if ( v27 + 56 <= v28 )
      {
        v39 = 1;
        if ( *(_BYTE *)(v27 + v18 + 10) )
          v25 = (char *)(v27 + v18 + 24);
        v19 = *(_BYTE *)(v27 + v18 + 8);
        v20 = *(_BYTE **)(v27 + v18 + 16);
        v21 = *(_BYTE *)(v27 + v18 + 9);
      }
    }
    else if ( *(_DWORD *)(v27 + v18) == 66 )
    {
      v14 = v27 + 40;
      if ( v27 + 40 <= v28 )
      {
        if ( *(_DWORD *)(v27 + v18 + 12) )
          v25 = (char *)(v27 + v18 + 32);
        v20 = *(_BYTE **)(v27 + v18 + 24);
        goto LABEL_55;
      }
    }
    goto LABEL_48;
  }
  v14 = v27 + 40;
  if ( v27 + 40 > v28 )
  {
LABEL_48:
    if ( v39 )
      goto LABEL_56;
    LODWORD(v14) = v40;
    goto LABEL_50;
  }
  if ( *(_BYTE *)(v27 + v18 + 10) )
    v25 = (char *)(v27 + v18 + 24);
  v20 = *(_BYTE **)(v27 + v18 + 16);
LABEL_55:
  v21 = *(_BYTE *)(v27 + v18 + 9);
  v19 = *(_BYTE *)(v27 + v18 + 8);
LABEL_56:
  if ( v25 )
  {
    v29 = *v25;
    v23 = 0;
LABEL_59:
    LOBYTE(v14) = v29 - 8;
    if ( (v14 & 0x5D) == 0 )
    {
      v30 = *(_BYTE *)(v18 + 3);
      if ( v30 == 1 || !v20 || !v21 )
        goto LABEL_78;
      LOBYTE(v18) = 0;
      v14 = (unsigned __int64)&v20[v21];
      v31 = v20 + 8;
      if ( (unsigned __int8)((*v20 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v31 <= v14 )
        {
          LOBYTE(v18) = 1;
          v23 = v20[2];
          v22 = v20[1] & 0xF;
          v24 = v20[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v31 <= v14 )
        {
          v22 = v20[2] & 0xF;
          v32 = v21;
          if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
            v32 = (unsigned __int8)v20[7] + 8;
          v14 = (unsigned __int64)(v20 + 13);
          v18 = (unsigned __int64)&v20[v32];
          if ( (unsigned __int64)(v20 + 13) > v18 )
            v38 = 0;
          else
            v38 = v20[12];
          if ( (unsigned __int64)(v20 + 14) <= v18 )
            v24 = *(_BYTE *)v14;
          LOBYTE(v18) = 1;
        }
        v23 = v38;
      }
      if ( (_BYTE)v18 )
      {
        LOBYTE(v2) = v23;
        v33 = v24;
      }
      else
      {
LABEL_78:
        v22 = 0;
        v33 = 0;
      }
      LOBYTE(v37) = v19;
      LOBYTE(v36) = v30;
      LODWORD(v35) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v14, v18, &v43, a2, v35, v36, v37, v22, v2, v33, a2);
    }
  }
LABEL_83:
  IofCompleteRequest((PIRP)a2, 0);
  return v11;
}
