/*
 * XREFs of UsbhUninitialize @ 0x14003E0D0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDisarmHubForWakeDetect @ 0x140007684 (UsbhDisarmHubForWakeDetect.c)
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhReferenceListRemove @ 0x140029668 (UsbhReferenceListRemove.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     UsbhUnregisterPowerCallback @ 0x14005F2A4 (UsbhUnregisterPowerCallback.c)
 */

void __fastcall UsbhUninitialize(__int64 a1)
{
  _DWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rbx

  v2 = FdoExt(a1);
  Log(a1, 8, 1750421065, 0LL, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      43,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  UsbhDisarmHubForWakeDetect(a1, v3, v4, v5);
  UsbhUnregisterPowerCallback(a1);
  v6 = (void *)*((_QWORD *)v2 + 377);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *((_QWORD *)v2 + 377) = 0LL;
  }
  v7 = (void *)*((_QWORD *)v2 + 378);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *((_QWORD *)v2 + 378) = 0LL;
  }
  v8 = (void *)_InterlockedExchange64((volatile __int64 *)v2 + 152, 0LL);
  Log(a1, 8, 1752519238, 0LL, (__int64)v8);
  if ( v8 )
  {
    UsbhReferenceListRemove(a1, (__int64)v8);
    ObfDereferenceObject(v8);
  }
  Log(a1, 8, 1752525118, 0LL, 0LL);
}
