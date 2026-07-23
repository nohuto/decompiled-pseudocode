/*
 * XREFs of PnpCheckForWaitingReportedDevice @ 0x1404472DC
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140446FF4 (IopAttachDeviceToDeviceStackSafe.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14047BEF8 (PnpRequestDeviceAction.c)
 */

__int64 __fastcall PnpCheckForWaitingReportedDevice(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  if ( a1 )
  {
    result = *(_QWORD *)(a1 + 312);
    v2 = *(_QWORD *)(result + 40);
    if ( v2 )
    {
      if ( *(int *)(v2 + 396) < 0 )
        return PnpRequestDeviceAction(*(PVOID *)(v2 + 32), 0LL, 0LL, 0LL);
    }
  }
  return result;
}
