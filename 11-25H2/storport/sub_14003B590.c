/*
 * XREFs of sub_14003B590 @ 0x14003B590
 * Callers:
 *     sub_14003B440 @ 0x14003B440 (sub_14003B440.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140051AC8 @ 0x140051AC8 (sub_140051AC8.c)
 *     sub_140054CA4 @ 0x140054CA4 (sub_140054CA4.c)
 *     sub_1400AE318 @ 0x1400AE318 (sub_1400AE318.c)
 *     sub_1400B5694 @ 0x1400B5694 (sub_1400B5694.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_14003B590(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r15
  unsigned __int16 v4; // bx
  __int16 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // r13
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int i; // edx
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  bool v20; // cl
  int v21; // eax
  __int64 v22; // r10
  void *v23; // r13
  void *v24; // rdx
  void *v25; // rdx
  __int64 v26; // rax
  const int *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r9
  const int *v30; // rsi
  char v31; // [rsp+C8h] [rbp-80h]
  char v32; // [rsp+C9h] [rbp-7Fh]
  unsigned __int16 v33; // [rsp+CCh] [rbp-7Ch]
  __int64 v34; // [rsp+D0h] [rbp-78h]
  __int64 v35; // [rsp+D8h] [rbp-70h]
  __int64 v36; // [rsp+E0h] [rbp-68h]
  __int64 v37; // [rsp+F0h] [rbp-58h]
  _WORD *v38; // [rsp+F8h] [rbp-50h]
  PVOID P; // [rsp+100h] [rbp-48h]

  v2 = 0LL;
  v37 = 0LL;
  v33 = 0;
  v3 = 0LL;
  v4 = 0;
  v32 = 0;
  v5 = 0;
  v38 = 0LL;
  v6 = 0LL;
  v31 = 0;
  v36 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v7 = sub_1400143E0(256LL, 560LL, 1700028754LL, *(_QWORD *)(a1 + 8));
  P = (PVOID)v7;
  if ( v7 && (int)sub_140051AC8(*(PDEVICE_OBJECT *)(a1 + 8), 0x230u) >= 0 )
  {
    v33 = 216;
    v2 = v7 + 8 + *(unsigned int *)(v7 + 24);
    v37 = v2;
    v36 = *(_QWORD *)(v2 + 48);
    v35 = *(_QWORD *)(v2 + 56);
    v32 = *(_BYTE *)(a1 + 2124);
    *(_BYTE *)(a1 + 2124) = *(_BYTE *)v2;
  }
  if ( (*(_DWORD *)(a1 + 2120) & 8) == 0 )
  {
    v38 = (_WORD *)sub_1400143E0(256LL, 560LL, 1700028754LL, *(_QWORD *)(a1 + 8));
    if ( v38 )
    {
      v8 = sub_140051AC8(*(PDEVICE_OBJECT *)(a1 + 8), 0x230u);
      if ( v8 < 0 )
      {
        if ( v8 != -1073741670 )
        {
          v21 = *(_DWORD *)(a1 + 2120);
          if ( (v21 & 1) == 0 )
            *(_DWORD *)(a1 + 2120) = v21 | 8;
        }
      }
      else
      {
        v31 = -64;
        v3 = (__int64)v38 + *((unsigned int *)v38 + 6) + 8;
        if ( !*(_BYTE *)(v3 + 509) )
        {
          v5 = *(_WORD *)(v3 + 510);
          if ( !v5 )
          {
            v4 = 55;
LABEL_27:
            v6 = *(_QWORD *)v3;
            v34 = *(_QWORD *)(v3 + 8);
            goto LABEL_17;
          }
          if ( v5 == 1 )
          {
            v4 = 88;
            goto LABEL_27;
          }
LABEL_28:
          v4 = v38[14];
          v5 = -1;
          goto LABEL_17;
        }
        v9 = *(_QWORD *)(v3 + 496) + 0x5B0D4015D7EF503BLL;
        if ( *(_QWORD *)(v3 + 496) == 0xA4F2BFEA2810AFC5uLL )
          v9 = *(_QWORD *)(v3 + 504) + 0x502AEB368390B064LL;
        if ( v9 )
          goto LABEL_28;
        v5 = *(_WORD *)(v3 + 494);
        if ( v5 != 2 )
        {
          if ( v5 == 3 )
          {
            v4 = 494;
            goto LABEL_27;
          }
          goto LABEL_28;
        }
        v4 = 494;
        v6 = *(_QWORD *)v3;
        v34 = *(_QWORD *)(v3 + 8);
      }
    }
  }
LABEL_17:
  if ( v2 || v3 )
  {
    v10 = *(_QWORD *)(a1 + 2416);
    v11 = 0LL;
    v12 = 0LL;
    if ( v10 )
    {
      for ( i = 0; i < dword_140168DB0; v12 += *(_QWORD *)(v15 + v10 + 24) )
      {
        v14 = i++;
        v15 = dword_140169190 * v14;
        v11 += *(_QWORD *)(v15 + v10 + 16);
      }
    }
    v16 = *(_QWORD *)(a1 + 3336);
    v17 = *(_QWORD *)(a1 + 3344);
    *(_QWORD *)(a1 + 3336) = v11;
    v18 = v11 - v16;
    *(_QWORD *)(a1 + 3344) = v12;
    v19 = v12 - v17;
    if ( byte_140168DB8 == 1 && !dword_140168DBC || dword_140168DC0 >= (unsigned int)dword_140168488 )
    {
      v20 = 0;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 2120) & 0x20) != 0 )
        dword_140168DBC = -1;
      if ( *(_BYTE *)(a1 + 2124) )
        dword_140168DBC = -1;
      if ( (*(_BYTE *)(a1 + 506) & 2) != 0 )
        dword_140168DBC = -1;
      v20 = dword_140168DBC != 0;
    }
    v22 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5080LL);
    if ( v20 )
    {
      ++dword_140168DC0;
      v23 = &unk_140149394;
      v24 = &unk_140149394;
      if ( v22 )
        LODWORD(v24) = v22;
      sub_140054CA4(a1, (_DWORD)v24, v2, v33, v31, v5, v3, v4, v18, v19, v36, v35, v6, v34);
    }
    else
    {
      v23 = &unk_140149394;
      v25 = &unk_140149394;
      if ( v22 )
        LODWORD(v25) = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5080LL);
      sub_1400B5694(a1, (_DWORD)v25, v2, v33, v31, v5, v3, v4, v18, v19, v36, v35, v6, v34);
    }
    if ( !*(_BYTE *)(a1 + 2125) || *(_BYTE *)(a1 + 2124) != v32 )
    {
      v26 = *(_QWORD *)(a1 + 160);
      if ( v26 )
      {
        v27 = (const int *)(v26 + 90);
      }
      else
      {
        v28 = *(_QWORD *)(a1 + 152);
        if ( !v28
          || (v27 = (const int *)(v28 + 41), (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 608LL) + 184LL) & 0x40) == 0) )
        {
          v27 = 0LL;
        }
      }
      if ( (byte_1401694F4 & 0x40) != 0 )
      {
        v29 = *(_QWORD *)(a1 + 24);
        v30 = &dword_140149108;
        if ( v27 )
          v30 = v27;
        if ( *(_QWORD *)(v29 + 5080) )
          v23 = *(void **)(v29 + 5080);
        sub_1400AE318(
          v33,
          *(unsigned __int8 *)(a1 + 2124),
          *(_BYTE *)(a1 + 506) & 1,
          *(_DWORD *)(v29 + 56),
          *(_BYTE *)(a1 + 104),
          *(_BYTE *)(a1 + 105),
          *(_BYTE *)(a1 + 106),
          a1 + 2104,
          v29 + 5064,
          *(_QWORD *)(v29 + 4720),
          a1 + 168,
          a1 + 177,
          (__int64)v23,
          (__int64)v30,
          *(_BYTE *)(a1 + 506) & 1,
          qword_140168DC8,
          *(_BYTE *)(a1 + 2124),
          v33,
          v37,
          v31,
          v5,
          v4,
          v3);
      }
      *(_BYTE *)(a1 + 2125) = 0;
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0x65546152u);
  if ( v38 )
    ExFreePoolWithTag(v38, 0x65546152u);
}
