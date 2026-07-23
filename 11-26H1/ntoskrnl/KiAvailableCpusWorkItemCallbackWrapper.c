/*
 * XREFs of KiAvailableCpusWorkItemCallbackWrapper @ 0x1404E1820
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KiAvailableCpusWorkItemCallbackWrapper(__int64 a1, __int64 a2)
{
  signed __int32 v3; // eax

  do
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(a1 + 40);
      if ( (v3 & 2) == 0 )
        break;
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 40), 1u);
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 56), a2);
    }
  }
  while ( v3 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v3 & 0xFFFFFFFE, v3) );
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 32));
}
