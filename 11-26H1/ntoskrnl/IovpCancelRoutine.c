/*
 * XREFs of IovpCancelRoutine @ 0x140C31B20
 * Callers:
 *     IoCancelIrp @ 0x140495490 (IoCancelIrp.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IovpCancelRoutine(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
