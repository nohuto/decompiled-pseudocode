/*
 * XREFs of RtlTestProtectedAccess @ 0x180102DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlTestProtectedAccess(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // eax

  if ( (a2 & 7) == 0 )
    return 1;
  if ( (unsigned __int8)(a1 & 7) < (unsigned __int8)(a2 & 7) )
    return 0;
  v2 = RtlProtectedAccess[3 * ((unsigned __int64)a1 >> 4)];
  return _bittest(&v2, a2 >> 4);
}
