/*
 * XREFs of UsbhTimerPnpStop @ 0x14004A3D0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhReferenceListRemove @ 0x14002B02C (UsbhReferenceListRemove.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     UsbhDmDisableTimer @ 0x14004A0C0 (UsbhDmDisableTimer.c)
 */

void __fastcall UsbhTimerPnpStop(__int64 a1)
{
  _DWORD *v2; // rdi

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_0dc7418686fe34c9f2e1dc83900248bf_Traceguids);
  v2 = FdoExt(a1);
  Log(a1, 0x2000, 1684886352, a1, 0LL);
  if ( (v2[640] & 0x2000000) != 0 )
  {
    UsbhDmDisableTimer(a1);
    v2[640] &= ~0x2000000u;
    Log(a1, 0x2000, 1684886321, a1, 0LL);
    UsbhReferenceListRemove(a1, (__int64)(v2 + 936));
  }
}
