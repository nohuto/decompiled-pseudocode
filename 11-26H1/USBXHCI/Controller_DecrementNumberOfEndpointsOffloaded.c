/*
 * XREFs of Controller_DecrementNumberOfEndpointsOffloaded @ 0x140040B70
 * Callers:
 *     Endpoint_Disable @ 0x14001DD5C (Endpoint_Disable.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     DynamicLock_Acquire @ 0x14000D6C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x14000D7D0 (DynamicLock_Release.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x1400494D0 (Interrupter_DeInitializeAfterOffload.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_DecrementNumberOfEndpointsOffloaded(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  int v4; // eax
  __int64 v5; // rdx

  DynamicLock_Acquire(*(_QWORD *)(a1 + 1048));
  v2 = *(_DWORD *)(a1 + 1040);
  if ( v2 )
  {
    v4 = v2 - 1;
    *(_DWORD *)(a1 + 1040) = v4;
    if ( !v4 && *(_DWORD *)(a1 + 1036) == 1 )
    {
      Interrupter_DeInitializeAfterOffload(*(_QWORD *)(a1 + 128));
      if ( *(_DWORD *)(a1 + 1036) == 1 )
      {
        v5 = *(_QWORD *)(a1 + 1232);
        *(_BYTE *)(a1 + 1240) = 0;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3040))(WdfDriverGlobals, v5);
      }
    }
  }
  else
  {
    Debug_FreAssertMsg(
      (__int64)"Underflow detected",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      13970);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v3, 4, 330, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    }
  }
  return DynamicLock_Release(*(_QWORD *)(a1 + 1048));
}
