/*
 * XREFs of HalpHvSetMachineCheckHandlerState @ 0x140585DB8
 * Callers:
 *     HalpPostSleepMP @ 0x140BECEF0 (HalpPostSleepMP.c)
 *     HalpMceInit @ 0x140C0A118 (HalpMceInit.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpHvSetMachineCheckHandlerState()
{
  __int64 result; // rax
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  v1 = 0LL;
  if ( qword_140FBB0D0 )
  {
    LODWORD(v1) = 1;
    BYTE4(v1) = 1;
    return guard_dispatch_icall_no_overrides(&v1, qword_140FBB0D0);
  }
  return result;
}
