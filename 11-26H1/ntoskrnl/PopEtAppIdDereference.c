/*
 * XREFs of PopEtAppIdDereference @ 0x1409CD7D8
 * Callers:
 *     PopEtGetProcessAppId @ 0x1409C9DD4 (PopEtGetProcessAppId.c)
 *     PopEtEnergyContextCleanup @ 0x1409CBEB4 (PopEtEnergyContextCleanup.c)
 *     PopEtAggregateKeyCleanup @ 0x1409CC898 (PopEtAggregateKeyCleanup.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x1409CD1F8 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAppIdDereference(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 24) )
    return RtlInternEntryDereference(PopEtGlobals + 56, a1);
  return result;
}
