/*
 * XREFs of MiReduceSystemRegionType @ 0x1402A5914
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x1402A4448 (MiMakeSystemRangeAvailable.c)
 *     MiObtainDynamicVa @ 0x1402A4DF8 (MiObtainDynamicVa.c)
 *     MiSplitBitmapPages @ 0x1402A5028 (MiSplitBitmapPages.c)
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
