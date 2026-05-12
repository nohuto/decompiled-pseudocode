/*
 * XREFs of RaidStorPoFxComponentVersionAndSizeIsValid @ 0x14007A6F0
 * Callers:
 *     StorpUnitInitializePoFxPower @ 0x14005A524 (StorpUnitInitializePoFxPower.c)
 *     RaidAdapterValidateStorPoFxComponent @ 0x140079D0C (RaidAdapterValidateStorPoFxComponent.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidStorPoFxComponentVersionAndSizeIsValid(unsigned int *a1)
{
  unsigned int v1; // eax
  bool v2; // cf

  v1 = *a1;
  if ( *a1 == 1 )
  {
    v2 = a1[1] < 0x20;
    return !v2;
  }
  if ( v1 == 2 )
  {
    v2 = a1[1] < 0x28;
    return !v2;
  }
  if ( v1 )
    return v1 <= 2;
  return 0;
}
