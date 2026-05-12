/*
 * XREFs of sub_14002C910 @ 0x14002C910
 * Callers:
 *     sub_1400F9A04 @ 0x1400F9A04 (sub_1400F9A04.c)
 *     sub_1401AA480 @ 0x1401AA480 (sub_1401AA480.c)
 *     sub_1401AA590 @ 0x1401AA590 (sub_1401AA590.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14002C910(int a1, __int64 a2)
{
  _BYTE *v2; // rsi
  unsigned int v4; // edi
  bool v5; // zf
  int v6; // edx
  char *v7; // rcx
  char v8; // al
  _DWORD *v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int8 v12; // r8
  char v13; // r10
  char v14; // r12
  char v15; // r15
  char v16; // r11
  char *v17; // r9
  unsigned int v18; // ecx
  unsigned int *v19; // r13
  __int64 v20; // rax
  unsigned __int64 v21; // rbp
  int v22; // ecx
  int v23; // ecx
  char v24; // cl
  char v25; // r9
  _BYTE *v26; // rcx
  _BYTE *v27; // rax
  unsigned int v28; // eax
  int v29; // [rsp+64h] [rbp-44h]
  __int128 v30; // [rsp+68h] [rbp-40h] BYREF

  v2 = 0LL;
  if ( (unsigned int)(a1 - 6) <= 1 )
  {
    v4 = -1073741738;
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  else
  {
    v4 = 0;
  }
  v5 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v4;
  if ( v5 )
    goto LABEL_6;
  v30 = 0LL;
  IoGetActivityIdIrp(a2, &v30);
  v7 = *(char **)(a2 + 184);
  v8 = *v7;
  if ( *v7 != 15 )
  {
    if ( v8 == 14 )
    {
      if ( (byte_1401694F2 & 8) != 0 )
        sub_140052F3C(v7, &unk_140148B18, &v30, a2, *(_DWORD *)(a2 + 48));
    }
    else if ( v8 == 27 )
    {
      if ( v7[1] == 7 && !*((_DWORD *)v7 + 2) )
      {
        if ( (byte_1401694F2 & 0x40) != 0 )
        {
          v10 = *(_DWORD **)(a2 + 56);
          if ( v10 )
            LODWORD(v2) = *v10;
          sub_140056AB0((_DWORD)v7, v6, (unsigned int)&v30, a2, (char)v2, *(_DWORD *)(a2 + 48));
        }
      }
      else if ( (byte_1401694F2 & 0x20) != 0 )
      {
        sub_140052F3C(v7, &unk_140149FE8, &v30, a2, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_6;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_6;
  v11 = *((_QWORD *)v7 + 1);
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( *(_BYTE *)(v11 + 2) != 40 )
  {
    v24 = *(_BYTE *)(v11 + 72);
    v2 = *(_BYTE **)(v11 + 32);
    v12 = *(_BYTE *)(v11 + 11);
    v14 = *(_BYTE *)(v11 + 4);
    if ( *(_BYTE *)(v11 + 2) )
      goto LABEL_6;
LABEL_47:
    if ( ((v24 - 8) & 0x5D) != 0 )
      goto LABEL_6;
    v25 = *(_BYTE *)(v11 + 3);
    if ( v25 == 1 || !v2 || !v12 )
      goto LABEL_63;
    LOBYTE(v11) = 0;
    v26 = &v2[v12];
    v27 = v2 + 8;
    if ( (unsigned __int8)((*v2 & 0x7F) - 114) <= 1u )
    {
      if ( v27 > v26 )
        goto LABEL_62;
      v15 = v2[2];
      v13 = v2[1] & 0xF;
      v16 = v2[3];
    }
    else
    {
      if ( v27 > v26 )
        goto LABEL_62;
      v13 = v2[2] & 0xF;
      v28 = v12;
      if ( (unsigned int)(unsigned __int8)v2[7] + 8 <= v12 )
        v28 = (unsigned __int8)v2[7] + 8;
      v11 = (unsigned __int64)&v2[v28];
      if ( (unsigned __int64)(v2 + 13) <= v11 )
        v15 = v2[12];
      if ( (unsigned __int64)(v2 + 14) <= v11 )
        v16 = v2[13];
    }
    LOBYTE(v11) = 1;
LABEL_62:
    if ( (_BYTE)v11 )
    {
LABEL_64:
      sub_140052E64(
        *(_DWORD *)(a2 + 48),
        v11,
        (unsigned int)&v30,
        a2,
        *(_DWORD *)(a2 + 48),
        v25,
        v14,
        v13,
        v15,
        v16,
        a2);
      goto LABEL_6;
    }
LABEL_63:
    v16 = 0;
    v15 = 0;
    v13 = 0;
    goto LABEL_64;
  }
  v17 = 0LL;
  if ( *(_DWORD *)(v11 + 20) )
    goto LABEL_6;
  v29 = 0;
  if ( !*(_DWORD *)(v11 + 56) )
    goto LABEL_38;
  v18 = *(_DWORD *)(v11 + 56);
  v19 = (unsigned int *)(v11 + 120);
  while ( 1 )
  {
    v20 = *v19;
    if ( (unsigned int)v20 < 0x80 )
      goto LABEL_44;
    v21 = *(unsigned int *)(v11 + 16);
    if ( (unsigned int)v20 >= (unsigned int)v21 )
      goto LABEL_44;
    v22 = *(_DWORD *)(v20 + v11);
    if ( v22 != 64 )
      break;
    if ( v20 + 40 <= v21 )
    {
      if ( !*(_BYTE *)(v20 + v11 + 10) )
        goto LABEL_36;
LABEL_35:
      v17 = (char *)(v20 + v11 + 24);
LABEL_36:
      v2 = *(_BYTE **)(v20 + v11 + 16);
      goto LABEL_37;
    }
LABEL_43:
    v18 = *(_DWORD *)(v11 + 56);
LABEL_44:
    ++v19;
    if ( ++v29 >= v18 )
      goto LABEL_38;
  }
  v23 = v22 - 65;
  if ( !v23 )
  {
    if ( v20 + 56 <= v21 )
    {
      if ( *(_BYTE *)(v20 + v11 + 10) )
        goto LABEL_35;
      goto LABEL_36;
    }
    goto LABEL_43;
  }
  if ( v23 != 1 || v20 + 40 > v21 )
    goto LABEL_43;
  if ( *(_DWORD *)(v20 + v11 + 12) )
    v17 = (char *)(v20 + v11 + 32);
  v2 = *(_BYTE **)(v20 + v11 + 24);
LABEL_37:
  v14 = *(_BYTE *)(v20 + v11 + 8);
  v12 = *(_BYTE *)(v20 + v11 + 9);
LABEL_38:
  if ( v17 )
  {
    v24 = *v17;
    goto LABEL_47;
  }
LABEL_6:
  IofCompleteRequest((PIRP)a2, 0);
  return v4;
}
