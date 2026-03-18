/*
 * XREFs of PopEtAppIdDereference @ 0x140951E98
 * Callers:
 *     PopEtGetProcessAppId @ 0x14094E494 (PopEtGetProcessAppId.c)
 *     PopEtEnergyContextCleanup @ 0x140950574 (PopEtEnergyContextCleanup.c)
 *     PopEtAggregateKeyCleanup @ 0x140950F58 (PopEtAggregateKeyCleanup.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x1409518B8 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAppIdDereference(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 24) )
    return RtlInternEntryDereference(PopEtGlobals + 56, a1);
  return result;
}
