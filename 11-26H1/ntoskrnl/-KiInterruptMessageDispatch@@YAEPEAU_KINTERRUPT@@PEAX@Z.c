/*
 * XREFs of ?KiInterruptMessageDispatch@@YAEPEAU_KINTERRUPT@@PEAX@Z @ 0x140473D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiInterruptMessageDispatch(struct _KINTERRUPT *a1, void *a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
