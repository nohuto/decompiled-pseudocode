/*
 * XREFs of UsbhEtwRundown @ 0x140028180
 * Callers:
 *     UsbhEtwEnableCallback @ 0x140028150 (UsbhEtwEnableCallback.c)
 * Callees:
 *     UsbhAcquirePdoStateLock @ 0x140010E10 (UsbhAcquirePdoStateLock.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhEtwLogPortInformation @ 0x140027A6C (UsbhEtwLogPortInformation.c)
 *     UsbhEtwLogHubInformation @ 0x140028050 (UsbhEtwLogHubInformation.c)
 *     UsbhAcquireFdoPnpLock @ 0x140028330 (UsbhAcquireFdoPnpLock.c)
 *     UsbhReleaseFdoPnpLock @ 0x1400283F4 (UsbhReleaseFdoPnpLock.c)
 *     UsbhEtwLogHubPastExceptions @ 0x140029294 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhEtwLogDeviceInformation @ 0x1400334AC (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogDeviceDescription @ 0x14003A514 (UsbhEtwLogDeviceDescription.c)
 */

LONG UsbhEtwRundown()
{
  __int64 *i; // rdi
  __int64 *v1; // rbx
  __int64 v2; // rsi
  unsigned int v3; // eax
  __int64 v4; // r8
  _DWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *j; // r14
  _DWORD *v9; // rax
  KIRQL v10; // dl
  _DWORD *v11; // rax

  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  for ( i = (__int64 *)qword_1400705A0; i != &qword_1400705A0; i = (__int64 *)*i )
  {
    v1 = i - 644;
    v2 = *(i - 494);
    v3 = (unsigned int)FdoExt(v2);
    if ( (unsigned int)UsbhAcquireFdoPnpLock(v2, v3 + 1384, 13, 0, 1) == 5 )
    {
      UsbhEtwLogHubInformation((__int64)(i - 644), (__int64)&USBHUB_ETW_EVENT_HUB_INFORMATION, v4);
      UsbhEtwLogHubPastExceptions(i - 644);
      UsbhEtwLogPortInformation(v2);
      v5 = FdoExt(v2);
      UsbhAcquirePdoStateLock(v6, (__int64)(v5 + 346), 25);
      for ( j = (__int64 *)v1[601]; j != v1 + 601; j = (__int64 *)*j )
      {
        LOBYTE(v7) = 1;
        UsbhEtwLogDeviceInformation(j - 165, &USBHUB_ETW_EVENT_DEVICE_INFORMATION, v7);
        UsbhEtwLogDeviceDescription(j - 165, &USBHUB_ETW_EVENT_DEVICE_DESCRIPTION);
      }
      v9 = FdoExt(v2);
      v9[380] = 0;
      qword_140070600 = 0LL;
      v10 = *((_BYTE *)v9 + 1516);
      v9[368] = 1734964085;
      KeReleaseSpinLock(&HubG, v10);
    }
    v11 = FdoExt(v2);
    UsbhReleaseFdoPnpLock(v2, v11 + 346);
  }
  return KeSetEvent(&Event, 0, 0);
}
