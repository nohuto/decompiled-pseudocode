/*
 * XREFs of HalpApicTimerQueryCounter @ 0x14059B8C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicTimerQueryCounter(__int64 a1, __int64 a2)
{
  return (unsigned int)~guard_dispatch_icall_no_overrides(912LL, a2);
}
