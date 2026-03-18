/*
 * XREFs of UsbhEtwLogHubEventWithExtraData @ 0x14000A9B0
 * Callers:
 *     UsbhCreateDevice @ 0x140012398 (UsbhCreateDevice.c)
 *     UsbhInitializeDevice @ 0x14001CFD4 (UsbhInitializeDevice.c)
 *     UsbhDmTimerDpc @ 0x14002BC40 (UsbhDmTimerDpc.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14000AB60 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 */

void __fastcall UsbhEtwLogHubEventWithExtraData(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  if ( dword_14006F690 )
  {
    FdoExt(a1);
    UsbhEtwWrite(a2, 0LL);
  }
}
