/*
 * XREFs of PopEtEnergyContextCleanup @ 0x1409CBEB4
 * Callers:
 *     PoEnergyContextCleanup @ 0x1409CBD6C (PoEnergyContextCleanup.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x1409CD1F8 (RtlInternEntryDereference.c)
 *     PopEtAppIdDereference @ 0x1409CD7D8 (PopEtAppIdDereference.c)
 */

__int64 __fastcall PopEtEnergyContextCleanup(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 456);
  if ( v2 )
  {
    result = PopEtAppIdDereference(v2);
    *(_QWORD *)(a1 + 456) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 464) )
  {
    result = RtlInternEntryDereference(PopEtGlobals + 56);
    *(_QWORD *)(a1 + 464) = 0LL;
  }
  return result;
}
