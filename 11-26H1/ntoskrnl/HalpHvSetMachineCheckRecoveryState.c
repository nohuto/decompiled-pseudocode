/*
 * XREFs of HalpHvSetMachineCheckRecoveryState @ 0x140588318
 * Callers:
 *     HalpMemoryErrorDeferredHandler @ 0x140591848 (HalpMemoryErrorDeferredHandler.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x1405918FC (HalpMemoryErrorDeferredRecovery.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvSetMachineCheckRecoveryState(int a1)
{
  __int64 result; // rax
  int v2; // [rsp+38h] [rbp+10h] BYREF
  int v3; // [rsp+3Ch] [rbp+14h]

  result = 0LL;
  if ( qword_140FBB470 )
  {
    v3 = a1;
    v2 = 2;
    return guard_dispatch_icall_no_overrides(&v2, qword_140FBB470);
  }
  return result;
}
