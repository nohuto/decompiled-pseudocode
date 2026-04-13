/*
 * XREFs of ??$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AU?$pair@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@0@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800B4068
 * Callers:
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x1800B3C2C (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 * Callees:
 *     ??$_Median@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@00@Z @ 0x1800B32E8 (--$_Median@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAUTile@TargetedCo.c)
 *     ??$swap@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXAEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800B4244 (--$swap@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXAEAUTile@TargetedContentL.c)
 *     ??MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z @ 0x1800B4500 (--MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z.c)
 */

unsigned __int64 *__fastcall std::_Unguarded_partition<CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  __int64 v9; // r8
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  bool v15; // zf
  unsigned __int64 v16; // r14
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 *result; // rax

  v6 = (__int64)((unsigned __int128)((__int64)(a3 - a2) * (__int128)0x4924924924924925LL) >> 64) >> 5;
  v7 = a2 + 56 * ((v6 >> 63) + v6);
  std::_Median<CreativeFramework::TargetedContentLayoutHelpers::Tile *>(a2, v7, a3 - 56);
  v8 = v7 + 56;
  if ( a2 < v7 )
  {
    do
    {
      if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v7 - 56, v7) )
        break;
      if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v7, v9) )
        break;
      v7 = v10;
    }
    while ( a2 < v10 );
  }
  while ( v8 < a3
       && !(unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v8, v7)
       && !(unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v7, v8) )
    v8 += 56LL;
  v11 = v8;
  v12 = v7;
  while ( 1 )
  {
    while ( v11 < a3 )
    {
      if ( !(unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v7, v11) )
      {
        if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v11, v7) )
          break;
        v13 = v8;
        v8 += 56LL;
        std::swap<CreativeFramework::TargetedContentLayoutHelpers::Tile>(v13, v11);
      }
      v11 += 56LL;
    }
    v14 = v12;
    v15 = v12 == a2;
    if ( v12 > a2 )
    {
      v16 = v12 - 56;
      do
      {
        if ( !(unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v16, v7) )
        {
          if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v7, v16) )
            break;
          v7 -= 56LL;
          std::swap<CreativeFramework::TargetedContentLayoutHelpers::Tile>(v7, v17);
        }
        v12 -= 56LL;
        v16 -= 56LL;
        v14 = v12;
      }
      while ( a2 < v12 );
      v15 = v12 == a2;
    }
    if ( v15 )
      break;
    v12 -= 56LL;
    v18 = v12;
    if ( v11 == a3 )
    {
      v7 -= 56LL;
      if ( v14 - 56 != v7 )
        std::swap<CreativeFramework::TargetedContentLayoutHelpers::Tile>(v12, v7);
      v8 -= 56LL;
      v19 = v7;
      v18 = v8;
    }
    else
    {
      v19 = v11;
      v11 += 56LL;
    }
LABEL_33:
    std::swap<CreativeFramework::TargetedContentLayoutHelpers::Tile>(v19, v18);
  }
  if ( v11 != a3 )
  {
    if ( v8 != v11 )
      std::swap<CreativeFramework::TargetedContentLayoutHelpers::Tile>(v7, v8);
    v18 = v11;
    v8 += 56LL;
    v11 += 56LL;
    v19 = v7;
    v7 += 56LL;
    goto LABEL_33;
  }
  result = a1;
  *a1 = v7;
  a1[1] = v8;
  return result;
}
