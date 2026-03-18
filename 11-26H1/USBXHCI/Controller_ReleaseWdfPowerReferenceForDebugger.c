/*
 * XREFs of Controller_ReleaseWdfPowerReferenceForDebugger @ 0x140042CD4
 * Callers:
 *     Controller_LPEEnterExitCallback @ 0x140041DC0 (Controller_LPEEnterExitCallback.c)
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1400796B0 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x14004517C (McTemplateK0pt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_ReleaseWdfPowerReferenceForDebugger(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  if ( *(_BYTE *)(a1 + 1000) )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void (__fastcall *)(_QWORD *), __int64, const char *))(WdfFunctions_01033 + 3512))(
               WdfDriverGlobals,
               *(_QWORD *)a1,
               Controller_AcquireWdfPowerReferenceForDebugger,
               11449LL,
               "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
    *(_BYTE *)(a1 + 1000) = 0;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
      return McTemplateK0pt_EtwWriteTransfer(v4, v3, v5, a1, 0);
  }
  return result;
}
