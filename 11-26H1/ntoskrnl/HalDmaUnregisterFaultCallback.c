/*
 * XREFs of HalDmaUnregisterFaultCallback @ 0x1405A35A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalDmaUnregisterFaultCallback(__int64 a1, __int64 a2)
{
  if ( a2 )
    return 3221225712LL;
  else
    return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 544), 0LL);
}
