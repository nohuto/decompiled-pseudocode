/*
 * XREFs of HalpHvSetMachineCheckRecoveryState @ 0x140585DF8
 * Callers:
 *     HalpMemoryErrorDeferredHandler @ 0x14058F0C8 (HalpMemoryErrorDeferredHandler.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x14058F17C (HalpMemoryErrorDeferredRecovery.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvSetMachineCheckRecoveryState(int a1)
{
  __int64 result; // rax
  int v2; // [rsp+38h] [rbp+10h] BYREF
  int v3; // [rsp+3Ch] [rbp+14h]

  result = 0LL;
  if ( qword_140FBB0D0 )
  {
    v3 = a1;
    v2 = 2;
    return guard_dispatch_icall_no_overrides(&v2, qword_140FBB0D0);
  }
  return result;
}
