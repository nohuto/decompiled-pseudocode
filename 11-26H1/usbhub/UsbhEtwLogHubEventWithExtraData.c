/*
 * XREFs of UsbhEtwLogHubEventWithExtraData @ 0x14001D870
 * Callers:
 *     UsbhDmTimerDpc @ 0x140009C10 (UsbhDmTimerDpc.c)
 *     UsbhCreateDevice @ 0x14001016C (UsbhCreateDevice.c)
 *     UsbhInitializeDevice @ 0x140038404 (UsbhInitializeDevice.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14001DA20 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 */

void __fastcall UsbhEtwLogHubEventWithExtraData(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  if ( dword_1400706F0 )
  {
    FdoExt(a1);
    UsbhEtwWrite(a2, 0LL);
  }
}
