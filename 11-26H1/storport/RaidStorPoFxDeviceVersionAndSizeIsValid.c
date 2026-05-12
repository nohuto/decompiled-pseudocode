/*
 * XREFs of RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x14007A724
 * Callers:
 *     StorpUnitInitializePoFxPower @ 0x14005A524 (StorpUnitInitializePoFxPower.c)
 *     StorpAdapterInitializePoFxPower @ 0x14007C944 (StorpAdapterInitializePoFxPower.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidStorPoFxDeviceVersionAndSizeIsValid(unsigned int *a1)
{
  unsigned int v1; // eax
  bool v2; // cf

  v1 = *a1;
  if ( *a1 == 1 )
  {
    v2 = a1[1] < 0x10;
    return !v2;
  }
  if ( v1 == 2 || v1 == 3 )
  {
    v2 = a1[1] < 0x18;
    return !v2;
  }
  if ( v1 )
    return v1 <= 3;
  return 0;
}
