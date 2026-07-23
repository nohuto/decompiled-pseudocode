/*
 * XREFs of HalpHvSetSleepStateProperty @ 0x140588350
 * Callers:
 *     HaliAcpiMachineStateInit @ 0x140787FF0 (HaliAcpiMachineStateInit.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvSetSleepStateProperty(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140FBB3F0 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
