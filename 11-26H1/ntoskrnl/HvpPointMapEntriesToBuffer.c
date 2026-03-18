/*
 * XREFs of HvpPointMapEntriesToBuffer @ 0x1408DD510
 * Callers:
 *     HvpAddDummyBinToHive @ 0x14085D5C8 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x14085D694 (HvpMapHiveImage.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x14086040C (HvpBuildMapForMemoryBackedHive.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408DBDF0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140A87E90 (HvpDropPagedBins.c)
 *     HvpAddBin @ 0x140B7EAA0 (HvpAddBin.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x140C58690 (HvpGetCellMap.c)
 */

void __fastcall HvpPointMapEntriesToBuffer(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        int a4,
        char a5,
        __int64 a6)
{
  unsigned int v10; // r10d
  unsigned int v11; // ebx
  __int64 CellMap; // rax
  unsigned int v13; // r10d
  __int64 v14; // r11
  int v15; // ecx
  __int64 v16; // rax
  int v17; // eax

  if ( a3 )
  {
    v10 = 0;
    do
    {
      v11 = v10 + a4;
      CellMap = HvpGetCellMap(BugCheckParameter2, v10 + a4);
      v14 = CellMap;
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v11, 0x428uLL);
      *(_QWORD *)(CellMap + 8) = a2;
      *(_DWORD *)(CellMap + 16) = a3;
      v15 = v13 == 0;
      if ( a6 )
      {
        v16 = a6;
        v15 |= 2u;
      }
      else
      {
        v16 = v13;
      }
      *(_QWORD *)v14 = v16;
      v17 = v15 | 8;
      if ( !a5 )
        v17 = v15;
      v10 = v13 + 4096;
      *(_DWORD *)(v14 + 20) = v17;
    }
    while ( v10 < a3 );
  }
}
