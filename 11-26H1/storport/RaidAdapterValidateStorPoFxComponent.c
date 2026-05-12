/*
 * XREFs of RaidAdapterValidateStorPoFxComponent @ 0x140079D0C
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x14007C944 (StorpAdapterInitializePoFxPower.c)
 *     NvmeAdapterInitializePoFx @ 0x140123A1C (NvmeAdapterInitializePoFx.c)
 * Callees:
 *     RaidStorPoFxComponentVersionAndSizeIsValid @ 0x14007A6F0 (RaidStorPoFxComponentVersionAndSizeIsValid.c)
 */

bool __fastcall RaidAdapterValidateStorPoFxComponent(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( !(unsigned __int8)RaidStorPoFxComponentVersionAndSizeIsValid(a1, a1)
    || (unsigned int)(*(_DWORD *)(v2 + 8) - 1) > 7 )
  {
    return 0;
  }
  v3 = *(_QWORD *)(v2 + 16) - 0x481F895FDCAF9C10LL;
  if ( !v3 )
    v3 = *(_QWORD *)(v1 + 24) - 0x3356F5D2CED492A4LL;
  return !v3;
}
