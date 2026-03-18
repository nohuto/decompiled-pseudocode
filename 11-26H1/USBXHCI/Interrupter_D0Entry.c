/*
 * XREFs of Interrupter_D0Entry @ 0x140006DDC
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x140037790 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     Interrupter_InterrupterRegisterIntialize @ 0x140007680 (Interrupter_InterrupterRegisterIntialize.c)
 *     Controller_IsControllerAccessible @ 0x14000B90C (Controller_IsControllerAccessible.c)
 *     Interrupter_Initialize @ 0x140035DB4 (Interrupter_Initialize.c)
 *     WPP_RECORDER_SF_qL @ 0x14003EFA4 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall Interrupter_D0Entry(__int64 a1, int a2, char a3)
{
  char v6; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v6 = a2;
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_qL(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      a2,
      9,
      34,
      (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
      a1,
      v6);
  }
  if ( (unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    if ( !a3 )
      Interrupter_Initialize(a1);
    Interrupter_InterrupterRegisterIntialize(a1);
  }
  return 0LL;
}
