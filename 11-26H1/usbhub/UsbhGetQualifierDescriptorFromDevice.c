/*
 * XREFs of UsbhGetQualifierDescriptorFromDevice @ 0x14005CD78
 * Callers:
 *     UsbhSetupDevice @ 0x14000901C (UsbhSetupDevice.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x14002DA80 (UsbhSyncSendCommandToDevice.c)
 */

__int64 __fastcall UsbhGetQualifierDescriptorFromDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int16 *a5)
{
  __int16 v9; // ax
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  FdoExt(a1);
  if ( !a5 )
    return 3221225485LL;
  v9 = *a5;
  LOWORD(v11) = 1664;
  *(_DWORD *)((char *)&v11 + 2) = 1536;
  HIWORD(v11) = v9;
  return UsbhSyncSendCommandToDevice(a1, a2, (char *)&v11, a4, a5, v10, 0LL);
}
