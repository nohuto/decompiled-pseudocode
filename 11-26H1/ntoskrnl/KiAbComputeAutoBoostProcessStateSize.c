/*
 * XREFs of KiAbComputeAutoBoostProcessStateSize @ 0x1404D18E4
 * Callers:
 *     KeSizeOfKProcessExtension @ 0x1404D18B0 (KeSizeOfKProcessExtension.c)
 * Callees:
 *     <none>
 */

__int64 KiAbComputeAutoBoostProcessStateSize()
{
  if ( (KiAbpGlobalState & 1) != 0 )
    return (int)(24 * ((unsigned int)(KeMaximumProcessors - 1) >> 3) + 32);
  else
    return 24LL * (((unsigned int)(KeMaximumProcessors - 1) >> 3) + 1);
}
