/*
 * XREFs of ?IsBitSet@@YAHPEAEI@Z @ 0x1401E50D8
 * Callers:
 *     GetGestureConfigSettings @ 0x1401E4A1C (GetGestureConfigSettings.c)
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1401E4E5C (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsBitSet(unsigned __int8 *a1, unsigned int a2)
{
  if ( a1 )
    return a1[(unsigned __int64)a2 >> 3] & (unsigned int)(1 << (a2 & 7));
  else
    return 0LL;
}
