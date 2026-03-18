/*
 * XREFs of RtlWow64GetEquivalentMachineCHPE @ 0x1404AF87C
 * Callers:
 *     PsWow64IsMachineSupported @ 0x1409EBAE0 (PsWow64IsMachineSupported.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RtlWow64GetEquivalentMachineCHPE(__int16 a1)
{
  __int16 result; // ax

  result = 332;
  if ( a1 != 14948 )
    return a1;
  return result;
}
