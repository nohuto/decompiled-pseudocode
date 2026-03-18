/*
 * XREFs of DpiPdoEnableDisableConnectSound @ 0x14025648C
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1403D1510 (DpiPdoDispatchPnp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiPdoEnableDisableConnectSound(struct _DEVICE_OBJECT *a1, char a2)
{
  NTSTATUS v2; // ebx
  char Data; // [rsp+58h] [rbp+10h] BYREF

  Data = a2;
  if ( !*((_BYTE *)a1->DeviceExtension + 944) )
  {
    v2 = -1073741661;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2606;
    return (unsigned int)v2;
  }
  Data = -1;
  v2 = IoSetDevicePropertyData(a1, &DEVPKEY_Device_NoConnectSound, 0, 0, 0x11u, 1u, &Data);
  if ( v2 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2623;
    return (unsigned int)v2;
  }
  return 0LL;
}
