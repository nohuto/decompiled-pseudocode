/*
 * XREFs of PopEtEnergyContextCleanup @ 0x140950574
 * Callers:
 *     PoEnergyContextCleanup @ 0x14095042C (PoEnergyContextCleanup.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x1409518B8 (RtlInternEntryDereference.c)
 *     PopEtAppIdDereference @ 0x140951E98 (PopEtAppIdDereference.c)
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
