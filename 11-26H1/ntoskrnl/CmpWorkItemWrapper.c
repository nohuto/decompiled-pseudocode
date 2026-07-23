/*
 * XREFs of CmpWorkItemWrapper @ 0x1404CF740
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall CmpWorkItemWrapper(__int64 a1)
{
  signed __int32 v2; // eax

  do
  {
    while ( 1 )
    {
      v2 = *(_DWORD *)(a1 + 40);
      if ( (v2 & 2) == 0 )
        break;
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 40), 1u);
      guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a1 + 56));
    }
  }
  while ( v2 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v2 & 0xFFFFFFFE, v2) );
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 32));
}
