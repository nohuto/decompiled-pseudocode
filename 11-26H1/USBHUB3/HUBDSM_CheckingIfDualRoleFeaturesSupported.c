/*
 * XREFs of HUBDSM_CheckingIfDualRoleFeaturesSupported @ 0x1400207B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfDualRoleFeaturesSupported(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 960) + 1640LL) & 0x40000) != 0 ? 4089 : 4061;
}
