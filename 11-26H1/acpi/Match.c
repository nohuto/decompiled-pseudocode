/*
 * XREFs of Match @ 0x1400166A0
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x140014C60 (IsCompatableDSDTRevision.c)
 *     Match_64 @ 0x140016110 (Match_64.c)
 *     Match_32 @ 0x1400175CC (Match_32.c)
 */

__int64 __fastcall Match(__int64 a1, __int64 a2)
{
  if ( IsCompatableDSDTRevision() )
    return Match_64(a1, a2);
  else
    return Match_32(a1, a2);
}
