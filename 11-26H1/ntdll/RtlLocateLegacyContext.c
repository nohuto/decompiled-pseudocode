/*
 * XREFs of RtlLocateLegacyContext @ 0x1800D6F00
 * Callers:
 *     RtlSetExtendedFeaturesMask @ 0x1801462B0 (RtlSetExtendedFeaturesMask.c)
 * Callees:
 *     <none>
 */

PCONTEXT __cdecl RtlLocateLegacyContext(PCONTEXT_EX ContextEx, PULONG Length)
{
  LONG Offset; // r9d
  ULONG v3; // r10d

  Offset = ContextEx->Legacy.Offset;
  if ( ContextEx->All.Offset > Offset )
    return 0LL;
  v3 = ContextEx->Legacy.Length;
  if ( (signed int)(ContextEx->All.Length + ContextEx->All.Offset) < (int)(v3 + Offset) )
    return 0LL;
  if ( Length )
    *Length = v3;
  return (PCONTEXT)((char *)ContextEx + ContextEx->Legacy.Offset);
}
