/*
 * XREFs of HalpHvSetSleepStateProperty @ 0x140585E30
 * Callers:
 *     HaliAcpiMachineStateInit @ 0x1407854C0 (HaliAcpiMachineStateInit.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvSetSleepStateProperty(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140FBB050 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
