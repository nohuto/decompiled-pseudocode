/*
 * XREFs of RtlTestProtectedAccess @ 0x180102120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTestProtectedAccess(PS_PROTECTION Source, PS_PROTECTION Target)
{
  int v2; // eax

  if ( (Target.Level & 7) == 0 )
    return 1;
  if ( (unsigned __int8)(Source.Level & 7) < (unsigned __int8)(Target.Level & 7) )
    return 0;
  v2 = RtlProtectedAccess[3 * ((unsigned __int64)Source.Level >> 4)];
  return _bittest(&v2, Target.Level >> 4);
}
