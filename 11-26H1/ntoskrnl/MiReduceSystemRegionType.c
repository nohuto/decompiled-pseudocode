/*
 * XREFs of MiReduceSystemRegionType @ 0x1402A4E64
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x1402A3998 (MiMakeSystemRangeAvailable.c)
 *     MiObtainDynamicVa @ 0x1402A4348 (MiObtainDynamicVa.c)
 *     MiSplitBitmapPages @ 0x1402A4578 (MiSplitBitmapPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReduceSystemRegionType(unsigned int a1)
{
  if ( a1 == 12 )
  {
    return 8;
  }
  else if ( a1 == 10 )
  {
    return 6;
  }
  return a1;
}
