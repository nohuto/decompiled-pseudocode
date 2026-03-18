/*
 * XREFs of Usbh_UsbdReadFrameCounter @ 0x14001FDB0
 * Callers:
 *     UsbhResetPort @ 0x14000A2BC (UsbhResetPort.c)
 *     UsbhReset2Complete @ 0x14000A840 (UsbhReset2Complete.c)
 *     UsbhReset1Complete @ 0x14000E460 (UsbhReset1Complete.c)
 *     UsbhHubDispatchPortEvent @ 0x14001EC90 (UsbhHubDispatchPortEvent.c)
 *     Usbh_PcLogEntry @ 0x140021228 (Usbh_PcLogEntry.c)
 *     UsbhResetPortTimerDpc @ 0x140048050 (UsbhResetPortTimerDpc.c)
 *     UsbhReset1Timeout @ 0x140058E50 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x140059450 (UsbhReset2Timeout.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Usbh_UsbdReadFrameCounter(__int64 a1)
{
  _DWORD *v1; // rax
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v1 = FdoExt(a1);
  if ( !*((_QWORD *)v1 + 574) )
    return 0LL;
  (*((void (__fastcall **)(_QWORD, unsigned int *))v1 + 574))(*((_QWORD *)v1 + 570), &v3);
  return v3;
}
