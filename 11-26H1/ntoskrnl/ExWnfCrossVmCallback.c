/*
 * XREFs of ExWnfCrossVmCallback @ 0x14083F250
 * Callers:
 *     <none>
 * Callees:
 *     ExpNtDeleteWnfStateData @ 0x14083F2A8 (ExpNtDeleteWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x14094A8A0 (ExpNtUpdateWnfStateData.c)
 */

__int64 __fastcall ExWnfCrossVmCallback(__int64 a1, __int64 a2, void *a3, int a4)
{
  if ( a4 )
    return ExpNtUpdateWnfStateData(a3, 0LL, 0, 0, a2 != 0);
  else
    return ExpNtDeleteWnfStateData(a3, 0LL, a2 != 0);
}
