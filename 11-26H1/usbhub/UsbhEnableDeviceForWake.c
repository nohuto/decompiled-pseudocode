/*
 * XREFs of UsbhEnableDeviceForWake @ 0x14002D218
 * Callers:
 *     UsbhSyncSuspendPdoPort @ 0x1400113C4 (UsbhSyncSuspendPdoPort.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x14002DA80 (UsbhSyncSendCommandToDevice.c)
 */

__int64 __fastcall UsbhEnableDeviceForWake(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbp
  int v5; // eax
  int v6; // r10d
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF
  __int16 v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = 0;
  FdoExt(a1);
  v4 = PdoExt(a2);
  v8 = 66304LL;
  v5 = UsbhSyncSendCommandToDevice(a1, a2, (unsigned int)&v8, 0, (__int64)&v9);
  Log(a1, 256, 1162770283, v5, 0LL);
  if ( v6 >= 0 )
    v4[355] |= 0x8000u;
  return (unsigned int)v6;
}
