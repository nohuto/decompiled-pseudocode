/*
 * XREFs of DxgkReportDevicePoweredOn @ 0x14003306C
 * Callers:
 *     DpiRequestDevicePowerState @ 0x140032628 (DpiRequestDevicePowerState.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x140032F68 (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkReportDevicePoweredOn(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 3272);
    if ( v1 )
      return PoFxReportDevicePoweredOn(v1);
  }
  return result;
}
