/*
 * XREFs of HalpHvNotifyDebugDeviceAvailable @ 0x140585D60
 * Callers:
 *     HalpAcpiPostSleep @ 0x140BECAA0 (HalpAcpiPostSleep.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvNotifyDebugDeviceAvailable(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140FBB060 )
    return guard_dispatch_icall_no_overrides(qword_140FBB060, a2);
  return result;
}
