/*
 * XREFs of ?vSrcCopyS32D16@@YAXPEAUBLTINFO@@@Z @ 0x1401E0130
 * Callers:
 *     EngCopyBits @ 0x140070750 (EngCopyBits.c)
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400F9EFC (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x14012ECC4 (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall vSrcCopyS32D16(struct BLTINFO *a1)
{
  unsigned int v1; // r14d
  XLATE *v2; // rbp
  int v3; // esi
  unsigned __int8 *v4; // rbx
  _WORD *v5; // rdi
  int v6; // r12d
  int v7; // r13d
  int v8; // ecx
  unsigned int v9; // eax
  char v10; // r9
  unsigned __int64 v11; // r8
  int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  unsigned __int64 v18; // r8
  unsigned int v19; // eax
  char v20; // r9
  unsigned int (__fastcall *v21)(struct _XLATEOBJ *, unsigned int); // r13
  unsigned int v22; // r15d
  int v23; // [rsp+60h] [rbp+8h]
  unsigned int (__fastcall *i)(struct _XLATEOBJ *, unsigned int); // [rsp+68h] [rbp+10h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = *(XLATE **)a1;
  v3 = *((_DWORD *)a1 + 8);
  v4 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 12));
  v5 = (_WORD *)(*((_QWORD *)a1 + 2) + 2 * *((_DWORD *)a1 + 14));
  v6 = *((_DWORD *)a1 + 10) - 4 * v1;
  v7 = *((_DWORD *)a1 + 11) - 2 * v1;
  v23 = v7;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 24LL) & 8) == 0 )
    goto LABEL_23;
  v8 = *(_DWORD *)(*((_QWORD *)v2 + 6) + 24LL);
  if ( (v8 & 0x400000) != 0 )
  {
    while ( 1 )
    {
      v9 = v1;
      if ( ((unsigned __int8)v5 & 2) != 0 )
      {
        v9 = v1 - 1;
        *v5++ = (*v4 >> 3) | (8 * (v4[1] & 0xFC | (32 * (v4[2] & 0xF8))));
        v4 += 4;
      }
      v10 = v9 - 2;
      if ( (int)(v9 - 2) >= 0 )
      {
        v11 = (unsigned __int64)v9 >> 1;
        do
        {
          v12 = v4[2] & 0xF8 | ((v4[5] & 0xFC) << 11);
          v13 = (8 * (v4[1] | ((v4[4] | (v4[6] << 11)) << 10))) & 0xF81F07E0;
          v14 = *v4;
          v4 += 8;
          *(_DWORD *)v5 = (v14 >> 3) | (v12 << 8) | v13;
          v5 += 2;
          --v11;
        }
        while ( v11 );
      }
      if ( (v10 & 1) != 0 )
      {
        *v5++ = (*v4 >> 3) | (8 * (v4[1] & 0xFC | (32 * (v4[2] & 0xF8))));
        v4 += 4;
      }
      if ( !--v3 )
        break;
      v4 += v6;
      v5 = (_WORD *)((char *)v5 + v7);
    }
    return;
  }
  if ( (v8 & 0x200000) == 0 )
  {
LABEL_23:
    v21 = XLATE::pfnXlateBetweenBitfields(v2);
    for ( i = v21; ; v21 = i )
    {
      v22 = v1;
      do
      {
        *v5 = v21((struct _XLATEOBJ *)v2, *(_DWORD *)v4);
        v4 += 4;
        ++v5;
        --v22;
      }
      while ( v22 );
      if ( !--v3 )
        break;
      v4 += v6;
      v5 = (_WORD *)((char *)v5 + v23);
    }
    return;
  }
  while ( 1 )
  {
    v19 = v1;
    if ( ((unsigned __int8)v5 & 2) != 0 )
    {
      v19 = v1 - 1;
      *v5++ = (*v4 >> 3) | (4 * (v4[1] & 0xF8 | (32 * (v4[2] & 0xF8))));
      v4 += 4;
    }
    v20 = v19 - 2;
    if ( (int)(v19 - 2) >= 0 )
    {
      v18 = (unsigned __int64)v19 >> 1;
      do
      {
        v15 = (v4[1] | (v4[6] << 21)) & 0x1F07C0F8 | ((v4[4] & 0xF8 | (32 * (v4[5] & 0xF8))) << 11);
        v16 = *v4 >> 3;
        v17 = v4[2];
        v4 += 8;
        *(_DWORD *)v5 = (v16 | (v17 << 7)) & 0x3E07C1F | (4 * v15);
        v5 += 2;
        --v18;
      }
      while ( v18 );
    }
    if ( (v20 & 1) != 0 )
    {
      *v5++ = (*v4 >> 3) | (4 * (v4[1] & 0xF8 | (32 * (v4[2] & 0xF8))));
      v4 += 4;
    }
    if ( !--v3 )
      break;
    v4 += v6;
    v5 = (_WORD *)((char *)v5 + v7);
  }
}
