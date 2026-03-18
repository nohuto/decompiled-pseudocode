/*
 * XREFs of Controller_AcquireWdfPowerReferenceForDebugger @ 0x140040720
 * Callers:
 *     Controller_LPEEnterExitCallback @ 0x140041DC0 (Controller_LPEEnterExitCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1400071EC (WPP_RECORDER_SF_qd.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x14004517C (McTemplateK0pt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall Controller_AcquireWdfPowerReferenceForDebugger(_QWORD *a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // [rsp+30h] [rbp-18h]

  if ( !*((_BYTE *)a1 + 1000) )
  {
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64 (__fastcall *)(), int, const char *))(WdfFunctions_01033 + 3504))(
           WdfDriverGlobals,
           *a1,
           0LL,
           Controller_AcquireWdfPowerReferenceForDebugger,
           11416,
           "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
    if ( v2 >= 0 )
    {
      *((_BYTE *)a1 + 1000) = 1;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
        McTemplateK0pt_EtwWriteTransfer(v4, v3, v5, a1, 1);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = v2;
      WPP_RECORDER_SF_qd(a1[9], 2u, 4u, 0x11Cu, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, *a1, v6);
    }
  }
}
