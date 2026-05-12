/*
 * XREFs of sub_140188B8C @ 0x140188B8C
 * Callers:
 *     sub_140063854 @ 0x140063854 (sub_140063854.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140056088 @ 0x140056088 (sub_140056088.c)
 *     sub_140067EAC @ 0x140067EAC (sub_140067EAC.c)
 *     sub_1400C3F18 @ 0x1400C3F18 (sub_1400C3F18.c)
 *     sub_1400C4F10 @ 0x1400C4F10 (sub_1400C4F10.c)
 *     sub_1400C4FBC @ 0x1400C4FBC (sub_1400C4FBC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

__int64 __fastcall sub_140188B8C(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdi
  char v7; // r13
  void *v8; // rsi
  unsigned __int16 v9; // r12
  __int64 v10; // r14
  __int64 i; // rcx
  int v12; // ebx
  ULONG v13; // ebx
  char *v14; // rax
  _BYTE *v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // r8
  _QWORD *v21; // rcx
  int v22; // ecx
  int v23; // eax
  __int64 v25; // [rsp+28h] [rbp-51h]
  _OWORD Dst[2]; // [rsp+60h] [rbp-19h] BYREF
  ULONG v27; // [rsp+88h] [rbp+Fh]
  unsigned int v28; // [rsp+9Ch] [rbp+23h]
  int v29; // [rsp+E8h] [rbp+6Fh] BYREF
  int v30; // [rsp+F0h] [rbp+77h] BYREF

  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  memset_0(Dst, 0, 0x40uLL);
  *a3 = 0LL;
  v9 = 0;
  v30 = 0;
  if ( sub_140056088(a1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 6160) + 36LL) != 1 )
    {
      v29 = -1073741436;
      goto LABEL_45;
    }
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x18u )
    {
      v29 = -1073741585;
      goto LABEL_45;
    }
    v6 = *(_QWORD *)(a2 + 24) + 8LL;
    if ( *(_WORD *)v6 == 1
      && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) >= 0x54u
      && (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a2 + 24) + 16LL) - 1) <= 0xFFFDu )
    {
      v10 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 24) + 32LL)
          + (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a2 + 24) + 34LL);
      if ( *(_WORD *)(v6 + 16) != 1 || *(unsigned int *)(v6 + 20) < (unsigned __int64)(24 * v10 + 44) )
      {
        v29 = -1073741584;
        goto LABEL_45;
      }
      for ( i = 0LL; (unsigned int)i < (unsigned int)v10; i = (unsigned int)(i + 1) )
      {
        if ( *(_WORD *)(v6 + 24 * i + 60) != 1
          || *(_DWORD *)(v6 + 24 * i + 64) != 24
          || (unsigned __int8)(*(_BYTE *)(v6 + 24 * i + 68) - 1) > 1u )
        {
          v29 = -1073741583;
          goto LABEL_45;
        }
      }
      v7 = 1;
      v29 = sub_1400C4F10(a1);
      v12 = v29;
      if ( v29 < 0 )
      {
LABEL_44:
        if ( v12 >= 0 )
          goto LABEL_46;
        goto LABEL_45;
      }
      v13 = 8 * v10 + 40;
      v14 = (char *)sub_1400143E0(64LL, v13, 1179476306LL, *(_QWORD *)(a1 + 8));
      v8 = v14;
      if ( !v14 )
      {
        v29 = -1073741670;
        goto LABEL_45;
      }
      *(_DWORD *)v14 = v13;
      v15 = v14 + 32;
      *((_WORD *)v14 + 2) = *(_WORD *)(v6 + 24);
      *((_WORD *)v14 + 3) = *(_WORD *)(v6 + 26);
      *((_QWORD *)v14 + 1) = *(_QWORD *)(v6 + 28);
      *((_QWORD *)v14 + 2) = *(_QWORD *)(v6 + 36);
      *((_WORD *)v14 + 12) = *(_WORD *)(v6 + 44);
      *((_WORD *)v14 + 13) = *(_WORD *)(v6 + 46);
      *((_WORD *)v14 + 14) = *(_WORD *)(v6 + 48);
      *((_WORD *)v14 + 15) = *(_WORD *)(v6 + 50);
      if ( (*(_BYTE *)(v6 + 52) & 1) != 0 )
        *v15 |= 1u;
      if ( (*(_BYTE *)(v6 + 52) & 2) != 0 )
        *v15 |= 2u;
      if ( (*(_BYTE *)(v6 + 52) & 4) != 0 )
        *v15 |= 4u;
      if ( (*(_BYTE *)(v6 + 52) & 8) != 0 )
        v14[32] = *v15 | 8;
      if ( (_DWORD)v10 )
      {
        v16 = v14 + 40;
        v17 = (unsigned int)v10;
        v18 = (_QWORD *)(v6 + 76);
        do
        {
          if ( *((_BYTE *)v18 - 8) == 1 )
            *v16 = *v18;
          ++v16;
          v18 += 3;
          --v17;
        }
        while ( v17 );
        v19 = v14 + 40;
        v20 = (unsigned int)v10;
        v21 = (_QWORD *)(v6 + 76);
        do
        {
          if ( *((_BYTE *)v21 - 8) == 2 )
            *v19 = *v21;
          ++v19;
          v21 += 3;
          --v20;
        }
        while ( v20 );
      }
      v22 = *(unsigned __int16 *)(v6 + 8);
      LOBYTE(v28) = 13;
      LODWORD(Dst[0]) = Dst[0] & 0xFFFFFF00 | 0xD1;
      v27 = v13 >> 2;
      v28 = v28 & 0xFF0000FF | (v22 << 8);
      v23 = sub_140187D84(a1, v14, 0LL, v13, Dst, v25, 2u, 0, 0, 0LL, &v30);
      v9 = v30;
      v12 = v23;
    }
    else
    {
      v12 = -1073741811;
    }
    v29 = v12;
    if ( v8 )
      ExFreePoolWithTag(v8, 0x464D6152u);
    goto LABEL_44;
  }
  v29 = -1073741637;
LABEL_45:
  sub_140067EAC(v9, &v29);
  v12 = v29;
LABEL_46:
  if ( v7 )
    sub_1400C4FBC(a1);
  sub_1400C3F18(a1, v6, v9, v12);
  return (unsigned int)v12;
}
