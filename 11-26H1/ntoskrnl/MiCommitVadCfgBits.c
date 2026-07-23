/*
 * XREFs of MiCommitVadCfgBits @ 0x140998F08
 * Callers:
 *     MiCommitVadMetadataBits @ 0x140997DF4 (MiCommitVadMetadataBits.c)
 * Callees:
 *     MiMarkSharedImageCfgBits @ 0x140999108 (MiMarkSharedImageCfgBits.c)
 *     MiPopulateCfgBitMap @ 0x1409993B4 (MiPopulateCfgBitMap.c)
 *     MiMarkPrivateImageCfgBits @ 0x14099B254 (MiMarkPrivateImageCfgBits.c)
 */

__int64 __fastcall MiCommitVadCfgBits(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        char a7)
{
  unsigned __int64 v8; // rbp
  __int64 v11; // rsi
  __int64 v12; // rbx
  _BOOL8 v13; // rdx
  int v14; // eax
  int v15; // ecx
  __int16 v17; // ax
  __int16 v18; // ax
  __int64 v19; // r8

  v8 = a4;
  v11 = 0x100000000LL;
  if ( *(_QWORD *)(a1 + 784)
    && ((v17 = *(_WORD *)(a1 + 1772), v17 == 332) || v17 == 452)
    && a3 < 0x100000000LL
    && (!a5 || _bittest16((const signed __int16 *)(*(_QWORD *)a5 + 12LL), 0xFu)) )
  {
    v12 = *(_QWORD *)(a1 + 1040) + 1416LL;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 1040) + 1384LL;
  }
  v13 = (a7 & 2) != 0;
  switch ( a6 )
  {
    case 1:
      v14 = MiMarkSharedImageCfgBits(v12, v13, a2);
LABEL_5:
      v15 = v14;
      goto LABEL_6;
    case 2:
      v14 = MiMarkPrivateImageCfgBits(v12, v13, a2);
      goto LABEL_5;
    case 3:
      v14 = MiPopulateCfgBitMap(v12, a3, (a4 + 4095) & 0xFFFFFFFFFFFFF000uLL, 0LL);
      goto LABEL_5;
  }
  v15 = -1073741823;
LABEL_6:
  if ( *(_QWORD *)(a1 + 784) )
  {
    v18 = *(_WORD *)(a1 + 1772);
    if ( (v18 == 332 || v18 == 452) && v15 >= 0 )
    {
      v19 = *(_QWORD *)(a1 + 1040) + 1384LL;
      if ( v12 == v19 )
      {
        if ( a3 > 0x100000000LL )
          return (unsigned int)v15;
        v19 = *(_QWORD *)(a1 + 1040) + 1416LL;
        if ( v8 <= 0x100000000LL )
          v11 = v8;
        v8 = v11;
      }
      return (unsigned int)MiPopulateCfgBitMap(v19, a3, (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL, 0LL);
    }
  }
  return (unsigned int)v15;
}
