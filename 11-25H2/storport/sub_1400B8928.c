/*
 * XREFs of sub_1400B8928 @ 0x1400B8928
 * Callers:
 *     sub_1400B1180 @ 0x1400B1180 (sub_1400B1180.c)
 * Callees:
 *     sub_1400AC034 @ 0x1400AC034 (sub_1400AC034.c)
 *     sub_1400B5134 @ 0x1400B5134 (sub_1400B5134.c)
 *     sub_1400B53E4 @ 0x1400B53E4 (sub_1400B53E4.c)
 *     sub_1400C55C0 @ 0x1400C55C0 (sub_1400C55C0.c)
 *     sub_1400C5CF4 @ 0x1400C5CF4 (sub_1400C5CF4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

char __fastcall sub_1400B8928(unsigned __int8 *SystemArgument2)
{
  unsigned __int8 *v2; // r12
  __int64 v3; // rsi
  unsigned __int16 v4; // r15
  __int64 v5; // rax
  __int16 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  char v12; // dl
  __int64 v13; // rcx
  __int16 v14; // ax
  char v15; // al
  unsigned __int8 v16; // al
  char v17; // al
  unsigned __int8 v18; // al
  char v19; // al
  unsigned __int8 v20; // al
  unsigned __int8 v21; // al
  unsigned __int16 v22; // r13
  __int64 v23; // rbx
  const char *v24; // r10
  __int64 v25; // r11
  __int64 v27; // [rsp+70h] [rbp-D8h]
  __int64 v28; // [rsp+70h] [rbp-D8h]
  int v29; // [rsp+80h] [rbp-C8h]
  char v30; // [rsp+C8h] [rbp-80h]
  unsigned __int8 v31; // [rsp+C9h] [rbp-7Fh]
  unsigned __int16 v32; // [rsp+CCh] [rbp-7Ch]
  __int64 v33; // [rsp+D0h] [rbp-78h]
  __int64 v34; // [rsp+D8h] [rbp-70h]
  char v35[13]; // [rsp+F0h] [rbp-58h] BYREF
  int v36; // [rsp+FDh] [rbp-4Bh]
  __int64 v37; // [rsp+108h] [rbp-40h] BYREF
  char v38; // [rsp+110h] [rbp-38h]
  __int128 v39; // [rsp+118h] [rbp-30h] BYREF
  __int128 v40; // [rsp+128h] [rbp-20h]
  __int64 v41; // [rsp+138h] [rbp-10h]
  char v42; // [rsp+140h] [rbp-8h]

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  LOBYTE(v5) = 0;
  strcpy(v35, "PCI vendor: ");
  v32 = 0;
  v31 = 0;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v30 = 0;
  v34 = 0LL;
  v33 = 0LL;
  v36 = 0;
  v41 = 0LL;
  v42 = 0;
  v37 = 0LL;
  v38 = 0;
  v39 = 0LL;
  v40 = 0LL;
  if ( !SystemArgument2 )
    return v5;
  if ( *((_QWORD *)SystemArgument2 + 159) )
  {
    v5 = *((_QWORD *)SystemArgument2 + 159);
    if ( *(_DWORD *)v5 )
      return v5;
  }
  v5 = *((_QWORD *)SystemArgument2 + 121);
  if ( (v5 & 1) == 0 )
    return v5;
  v5 = *((_QWORD *)SystemArgument2 + 16);
  if ( *(_DWORD *)(*(_QWORD *)(v5 + 160) + 68LL) != 1 )
    return v5;
  if ( (*((_DWORD *)SystemArgument2 + 234) & 4) == 0 )
  {
    v9 = sub_1400C5CF4(SystemArgument2);
    if ( v9 < 0 )
    {
      if ( v9 == -1073741670 )
        goto LABEL_13;
    }
    else
    {
      v10 = *((_QWORD *)SystemArgument2 + 156);
      if ( v10 )
      {
        v2 = (unsigned __int8 *)*((_QWORD *)SystemArgument2 + 156);
        v32 = 512;
        v34 = *(_QWORD *)(v10 + 48);
        v33 = *(_QWORD *)(v10 + 56);
        v31 = SystemArgument2[946];
        SystemArgument2[946] = *v2;
        goto LABEL_13;
      }
    }
    v11 = *((_DWORD *)SystemArgument2 + 234);
    if ( (v11 & 1) == 0 )
      *((_DWORD *)SystemArgument2 + 234) = v11 | 4;
  }
LABEL_13:
  LODWORD(v5) = *((_DWORD *)SystemArgument2 + 234);
  if ( (v5 & 2) != 0 )
    goto LABEL_30;
  LODWORD(v5) = sub_1400C55C0(SystemArgument2);
  if ( (int)v5 < 0 )
  {
    if ( (_DWORD)v5 != -1073741670 )
    {
LABEL_28:
      LODWORD(v5) = *((_DWORD *)SystemArgument2 + 234);
      v12 = 0;
      if ( (v5 & 1) == 0 )
      {
        LODWORD(v5) = v5 | 2;
        *((_DWORD *)SystemArgument2 + 234) = v5;
      }
      goto LABEL_31;
    }
LABEL_30:
    v12 = 0;
    goto LABEL_31;
  }
  v5 = *((_QWORD *)SystemArgument2 + 157);
  if ( !v5 )
    goto LABEL_28;
  v12 = -64;
  v3 = *((_QWORD *)SystemArgument2 + 157);
  v30 = -64;
  if ( *(_BYTE *)(v5 + 509) )
  {
    v5 = *(_QWORD *)(v5 + 496);
    if ( v5 == 0xA4F2BFEA2810AFC5uLL )
    {
      v5 = *(_QWORD *)(v3 + 504);
      if ( v5 == 0xAFD514C97C6F4F9CuLL )
      {
        v6 = *(_WORD *)(v3 + 494);
        if ( v6 == 2 || (LOBYTE(v5) = 3, v6 == 3) )
        {
          v7 = *(_QWORD *)v3;
          v4 = 494;
          v8 = *(_QWORD *)(v3 + 8);
          goto LABEL_31;
        }
      }
    }
    goto LABEL_26;
  }
  v6 = *(_WORD *)(v5 + 510);
  if ( v6 )
  {
    LOBYTE(v5) = 1;
    if ( v6 == 1 )
    {
      v7 = *(_QWORD *)v3;
      v4 = 88;
      v8 = *(_QWORD *)(v3 + 8);
      goto LABEL_31;
    }
LABEL_26:
    v4 = 512;
    v6 = -1;
    goto LABEL_31;
  }
  v7 = *(_QWORD *)v5;
  v4 = 55;
  v8 = *(_QWORD *)(v5 + 8);
LABEL_31:
  if ( v2 || v3 )
  {
    v13 = *((_QWORD *)SystemArgument2 + 74);
    if ( v13 )
    {
      v14 = *(_WORD *)v13 >> 12;
      if ( (unsigned __int8)v14 > 9u )
        v15 = v14 + 55;
      else
        v15 = v14 + 48;
      v35[12] = v15;
      v16 = *(_BYTE *)(v13 + 1) & 0xF;
      if ( v16 > 9u )
        v17 = v16 + 55;
      else
        v17 = v16 + 48;
      LOBYTE(v36) = v17;
      v18 = (*(_BYTE *)v13 >> 4) & 0xF;
      if ( v18 > 9u )
        v19 = v18 + 55;
      else
        v19 = v18 + 48;
      BYTE1(v36) = v19;
      v20 = *(_BYTE *)v13 & 0xF;
      if ( v20 > 9u )
        v21 = v20 + 55;
      else
        v21 = v20 + 48;
      HIWORD(v36) = v21;
      v39 = *(_OWORD *)(v13 + 24);
      v40 = *(_OWORD *)(v13 + 40);
      v41 = *(_QWORD *)(v13 + 56);
      v37 = *(_QWORD *)(v13 + 64);
    }
    if ( SystemArgument2[947] && SystemArgument2[946] == v31 )
    {
      v22 = v32;
    }
    else if ( (byte_140168DB8 != 1 || dword_140168DBC)
           && dword_140168DC4 < (unsigned int)dword_140168488
           && SystemArgument2[946] )
    {
      v27 = v8;
      v22 = v32;
      ++dword_140168DC4;
      sub_1400B5134(
        (__int64)SystemArgument2,
        (__int64)v35,
        (__int64)&v39,
        &v37,
        (__int64)v2,
        v32,
        v12,
        v6,
        v3,
        v4,
        v34,
        v33,
        v7,
        v27);
    }
    else
    {
      v28 = v8;
      v22 = v32;
      sub_1400B53E4(
        (__int64)SystemArgument2,
        (__int64)v35,
        (__int64)&v39,
        &v37,
        (__int64)v2,
        v32,
        v12,
        v6,
        v3,
        v4,
        v34,
        v33,
        v7,
        v28);
    }
    LOBYTE(v5) = byte_1401694F9;
    if ( byte_1401694F9 < 0 )
    {
      v23 = *((_QWORD *)SystemArgument2 + 16);
      v24 = (const char *)&dword_140149108;
      v25 = *(_QWORD *)(v23 + 144);
      if ( *((_QWORD *)SystemArgument2 + 94) )
        v24 = (const char *)*((_QWORD *)SystemArgument2 + 94);
      LOBYTE(v5) = sub_1400AC034(
                     v22,
                     SystemArgument2[946],
                     v23 + 1032,
                     *(_DWORD *)(v23 + 56),
                     v23 + 1032,
                     *(const wchar_t **)(v23 + 1016),
                     *((const char **)SystemArgument2 + 99),
                     *((_WORD *)SystemArgument2 + 2),
                     SystemArgument2[744],
                     v24,
                     v35,
                     (const char *)&v39,
                     (const char *)&v37,
                     (v25 & 1) != 0 ? 20 : 17,
                     (v25 & 0x2000) != 0,
                     v29,
                     SystemArgument2[946],
                     v22,
                     (__int64)v2,
                     v30,
                     v6,
                     v4,
                     v3);
    }
    SystemArgument2[947] = 0;
    *((_DWORD *)SystemArgument2 + 234) |= 1u;
  }
  return v5;
}
