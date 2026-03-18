/*
 * XREFs of MiSplitBitmapPages @ 0x1402A5028
 * Callers:
 *     MiExpandPtes @ 0x14035ED90 (MiExpandPtes.c)
 *     MiExtendDynamicBitMap @ 0x1404FFA5C (MiExtendDynamicBitMap.c)
 *     MiSplitMirrorBitMap @ 0x1408686E0 (MiSplitMirrorBitMap.c)
 *     MiSplitPfnBitMaps @ 0x14087A440 (MiSplitPfnBitMaps.c)
 *     MiMarkRetpolineBits @ 0x140B1F348 (MiMarkRetpolineBits.c)
 *     MiInitializeSystemImageRegion @ 0x140D00924 (MiInitializeSystemImageRegion.c)
 *     MxMarkActiveDriverBits @ 0x140D01348 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x1402A515C (MiMakeZeroedPageTablesEx.c)
 *     MiReduceSystemRegionType @ 0x1402A5914 (MiReduceSystemRegionType.c)
 */

__int64 __fastcall MiSplitBitmapPages(__int64 a1)
{
  unsigned int v1; // eax
  unsigned __int64 v2; // r10
  __int64 v3; // r11
  int v4; // r9d
  int v5; // r8d
  int v7; // ecx

  v1 = MiReduceSystemRegionType(a1);
  v5 = v4 != 0 ? 4640 : 544;
  if ( v1 == 8 )
    goto LABEL_2;
  if ( v1 > 0xF || (v7 = 57552, !_bittest(&v7, v1)) )
  {
    if ( (v5 & 0x1000) == 0 )
    {
      v5 |= 1u;
      return MiMakeZeroedPageTablesEx(
               (unsigned int)(v2 >> 9) & 0xFFFFFFF8,
               (unsigned int)((v2 + ((unsigned __int64)(v3 - 1) >> 3)) >> 9) & 0xFFFFFFF8,
               v5,
               8,
               0);
    }
  }
  if ( v1 == 4 )
LABEL_2:
    v5 |= 0x10u;
  return MiMakeZeroedPageTablesEx(
           (unsigned int)(v2 >> 9) & 0xFFFFFFF8,
           (unsigned int)((v2 + ((unsigned __int64)(v3 - 1) >> 3)) >> 9) & 0xFFFFFFF8,
           v5,
           8,
           0);
}
