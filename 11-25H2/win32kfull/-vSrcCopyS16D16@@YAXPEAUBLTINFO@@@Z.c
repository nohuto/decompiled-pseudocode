/*
 * XREFs of ?vSrcCopyS16D16@@YAXPEAUBLTINFO@@@Z @ 0x1401F1140
 * Callers:
 *     EngCopyBits @ 0x140070750 (EngCopyBits.c)
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400F9EFC (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x14012ECC4 (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall vSrcCopyS16D16(XLATE **a1)
{
  XLATE *v1; // r14
  unsigned int v2; // r12d
  int v3; // ebp
  _WORD *v4; // rdi
  _WORD *v5; // rbx
  __int64 v6; // rax
  int v7; // r9d
  int v8; // r13d
  int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // eax
  int v12; // edx
  unsigned __int64 v13; // r8
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // r8d
  unsigned int v17; // eax
  int v18; // r8d
  unsigned __int64 v19; // r9
  int v20; // ecx
  unsigned int v21; // edx
  unsigned int (__fastcall *v22)(struct _XLATEOBJ *, unsigned int); // r15
  unsigned int v23; // esi
  int v24; // [rsp+50h] [rbp+8h]

  v1 = *a1;
  v2 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v4 = (_WORD *)((char *)a1[1] + 2 * *((_DWORD *)a1 + 12));
  v5 = (_WORD *)((char *)a1[2] + 2 * *((_DWORD *)a1 + 14));
  v6 = *((_QWORD *)*a1 + 6);
  v7 = *((_DWORD *)a1 + 11) - 2 * v2;
  v8 = *((_DWORD *)a1 + 10) - 2 * v2;
  v24 = v7;
  v9 = *(_DWORD *)(*((_QWORD *)*a1 + 5) + 24LL);
  if ( (v9 & 0x200000) != 0 && _bittest((const signed __int32 *)(v6 + 24), 0x16u) )
  {
    while ( 1 )
    {
      v16 = v2;
      if ( ((unsigned __int8)v5 & 2) != 0 )
      {
        v16 = v2 - 1;
        *v5++ = *v4 & 0x1F | (2 * (*v4 & 0xFFE0)) | (*v4 >> 4) & 0x20;
        ++v4;
      }
      v17 = v16;
      v18 = v16 - 2;
      if ( v18 >= 0 )
      {
        v19 = (unsigned __int64)v17 >> 1;
        do
        {
          v20 = *(_DWORD *)v4 & 0x1F001F;
          v21 = (2 * (*(_DWORD *)v4 & 0xFFE07FE0)) | (*(_DWORD *)v4 >> 4) & 0x200020;
          v4 += 2;
          *(_DWORD *)v5 = v20 | v21;
          v5 += 2;
          --v19;
        }
        while ( v19 );
        v7 = v24;
      }
      if ( (v18 & 1) != 0 )
      {
        *v5++ = *v4 & 0x1F | (2 * (*v4 & 0xFFE0)) | (*v4 >> 4) & 0x20;
        ++v4;
      }
      if ( !--v3 )
        break;
      v4 = (_WORD *)((char *)v4 + v8);
      v5 = (_WORD *)((char *)v5 + v7);
    }
  }
  else if ( (v9 & 0x400000) != 0 && _bittest((const signed __int32 *)(v6 + 24), 0x15u) )
  {
    while ( 1 )
    {
      v10 = v2;
      if ( ((unsigned __int8)v5 & 2) != 0 )
      {
        v10 = v2 - 1;
        *v5++ = *v4 & 0x1F | (*v4 >> 1) & 0x7FE0;
        ++v4;
      }
      v11 = v10;
      v12 = v10 - 2;
      if ( v12 >= 0 )
      {
        v13 = (unsigned __int64)v11 >> 1;
        do
        {
          v14 = *(_DWORD *)v4 & 0x1F001F;
          v15 = (*(_DWORD *)v4 >> 1) & 0x7FE07FE0;
          v4 += 2;
          *(_DWORD *)v5 = v14 | v15;
          v5 += 2;
          --v13;
        }
        while ( v13 );
      }
      if ( (v12 & 1) != 0 )
      {
        *v5++ = *v4 & 0x1F | (*v4 >> 1) & 0x7FE0;
        ++v4;
      }
      if ( !--v3 )
        break;
      v4 = (_WORD *)((char *)v4 + v8);
      v5 = (_WORD *)((char *)v5 + v7);
    }
  }
  else
  {
    v22 = XLATE::pfnXlateBetweenBitfields(v1);
    while ( 1 )
    {
      v23 = v2;
      do
      {
        *v5++ = v22((struct _XLATEOBJ *)v1, (unsigned __int16)*v4++);
        --v23;
      }
      while ( v23 );
      if ( !--v3 )
        break;
      v4 = (_WORD *)((char *)v4 + v8);
      v5 = (_WORD *)((char *)v5 + v24);
    }
  }
}
