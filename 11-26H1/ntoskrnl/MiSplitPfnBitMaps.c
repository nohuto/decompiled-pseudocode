/*
 * XREFs of MiSplitPfnBitMaps @ 0x14088083C
 * Callers:
 *     MiSplitPfnBitMapsForPartitionHierarchy @ 0x14070E6CC (MiSplitPfnBitMapsForPartitionHierarchy.c)
 *     MiCreatePfnBitMaps @ 0x1408800DC (MiCreatePfnBitMaps.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1402A4578 (MiSplitBitmapPages.c)
 */

__int64 __fastcall MiSplitPfnBitMaps(ULONG *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r11
  unsigned int v6; // esi
  unsigned int i; // ebx
  __int64 *v8; // r15
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rbp
  unsigned int j; // ebp
  unsigned __int64 v12; // r8
  unsigned __int64 v14; // [rsp+68h] [rbp+10h]

  v3 = a3;
  if ( a2 + a3 > (unsigned __int64)(qword_140E2D920 + 1) )
    return 0LL;
  v6 = 0;
  for ( i = 0; i < 3; ++i )
  {
    if ( i >= 2 )
    {
      if ( a1 != &MiSystemPartition )
        continue;
      v8 = &qword_140E2D938;
      v9 = 0x40000LL;
    }
    else
    {
      v8 = (__int64 *)&a1[4 * i + 4178];
      v9 = MiPageSizes[i];
    }
    v10 = (~(v9 - 1) & (v3 - 1 + v9 + a2)) / v9;
    if ( !(unsigned int)MiSplitBitmapPages(8LL) )
      return 0LL;
    v3 = a3;
    if ( v10 > *v8 )
      *v8 = v10;
  }
  if ( a1 == &MiSystemPartition && !(unsigned int)MiSplitBitmapPages(8LL) || !(unsigned int)MiSplitBitmapPages(8LL) )
    return 0LL;
  for ( j = 0; j < 3; ++j )
  {
    v12 = 1LL << MiLargePageCoalesceCandidateBitmapShifts[j];
    v14 = (~(v12 - 1) & (a3 - 1 + v12 + a2)) / v12;
    if ( !(unsigned int)MiSplitBitmapPages(8LL) )
      return 0LL;
    if ( v14 > *(_QWORD *)&a1[4 * j + 4194] )
      *(_QWORD *)&a1[4 * j + 4194] = v14;
  }
  if ( !(unsigned int)MiSplitBitmapPages(8LL) )
    return 0LL;
  if ( a1 != &MiSystemPartition )
    return 1LL;
  LOBYTE(v6) = (unsigned int)MiSplitBitmapPages(8LL) != 0;
  return v6;
}
