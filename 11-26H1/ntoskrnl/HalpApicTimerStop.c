/*
 * XREFs of HalpApicTimerStop @ 0x140599170
 * Callers:
 *     <none>
 * Callees:
 *     HalpApicTimerInitialize @ 0x140599000 (HalpApicTimerInitialize.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicTimerStop(unsigned __int8 *a1)
{
  HalpApicTimerInitialize(a1);
  return guard_dispatch_icall_no_overrides(896LL, 0LL);
}
