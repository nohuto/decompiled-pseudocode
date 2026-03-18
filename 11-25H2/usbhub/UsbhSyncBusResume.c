/*
 * XREFs of UsbhSyncBusResume @ 0x14002AAB4
 * Callers:
 *     UsbhSshSuspendHub @ 0x1400297BC (UsbhSshSuspendHub.c)
 *     UsbhSshResumeDownstream @ 0x14002A3C4 (UsbhSshResumeDownstream.c)
 *     UsbhFdoSetD0Cold @ 0x14002C4AC (UsbhFdoSetD0Cold.c)
 *     UsbhFdoSetD0Warm @ 0x140038FD4 (UsbhFdoSetD0Warm.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDispatch_BusEvent @ 0x14000DD84 (UsbhDispatch_BusEvent.c)
 */

__int64 __fastcall UsbhSyncBusResume(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  void *DeviceExtension; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  void *v7; // rdx
  __int64 v8; // rcx

  FdoExt((__int64)DeviceObject);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v5 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_QWORD *)(v5 + 8) = 0LL;
        *(_QWORD *)(v5 + 16) = 0LL;
        *(_QWORD *)(v5 + 24) = 0LL;
        *(_DWORD *)v5 = 1045578064;
      }
    }
  }
  v6 = (int)UsbhDispatch_BusEvent(DeviceObject, a2, 8);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( DeviceObject )
    {
      v7 = DeviceObject->DeviceExtension;
      if ( v7 )
      {
        v8 = *((_QWORD *)v7 + 111)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v7 + 220) & *((_DWORD *)v7 + 221));
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = 0LL;
        *(_DWORD *)v8 = 1012023632;
        *(_QWORD *)(v8 + 24) = v6;
      }
    }
  }
  return (unsigned int)v6;
}
