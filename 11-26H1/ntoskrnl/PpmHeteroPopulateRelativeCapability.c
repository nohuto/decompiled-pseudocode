/*
 * XREFs of PpmHeteroPopulateRelativeCapability @ 0x1407DA910
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140B76758 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PpmEventHeteroCapabilityInitTable @ 0x1407E0BEC (PpmEventHeteroCapabilityInitTable.c)
 */

__int64 __fastcall PpmHeteroPopulateRelativeCapability(unsigned int *a1)
{
  unsigned __int16 v2; // dx
  __int64 result; // rax
  size_t v4; // rbx

  v2 = 0;
  if ( PpmCheckRegistered.Count )
  {
    while ( 1 )
    {
      result = v2;
      if ( PpmCheckRegistered.Bitmap[v2] )
        break;
      if ( ++v2 >= PpmCheckRegistered.Count )
        return result;
    }
    if ( !*((_BYTE *)a1 + 8) )
    {
      if ( PpmHeteroHgsVendor != 2 || (result = (unsigned int)PpmHeteroInitTableState, PpmHeteroInitTableState == 2) )
      {
        v4 = 4LL * *a1;
        memset_0(*((void **)a1 + 4), 0, v4);
        memset_0(*((void **)a1 + 5), 0, v4);
        *((_BYTE *)a1 + 8) = 1;
        return PpmEventHeteroCapabilityInitTable(a1, 0LL);
      }
    }
  }
  return result;
}
