/*
 * XREFs of ACPIDeviceInternalSynchronizeRequest @ 0x14001C9F8
 * Callers:
 *     ACPIDevicePowerFlushQueue @ 0x14001C97C (ACPIDevicePowerFlushQueue.c)
 *     ACPITableLoadCallBack @ 0x1400510E0 (ACPITableLoadCallBack.c)
 *     ACPIFlushQueuesUnload @ 0x140059ED8 (ACPIFlushQueuesUnload.c)
 *     AcpiDeviceResetInvokeReset @ 0x14005DCB4 (AcpiDeviceResetInvokeReset.c)
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x140025FA4 (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qss @ 0x14003C56C (WPP_RECORDER_SF_qss.c)
 */

__int64 __fastcall ACPIDeviceInternalSynchronizeRequest(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v4; // r11
  const char *v5; // rcx
  const char *v7; // r10
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 result; // rax

  v4 = 0;
  v5 = byte_140075A82;
  v7 = byte_140075A82;
  v8 = a2;
  if ( a1 )
  {
    v9 = a1[1];
    v4 = (char)a1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v5 = (const char *)a1[76];
      if ( (v9 & 0x400000000000LL) != 0 )
        v7 = (const char *)a1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qss(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      25,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      v4,
      (__int64)v5,
      (__int64)v7);
  }
  result = ACPIDeviceInitializePowerRequest(a1, 0LL, 0LL, v8, a3, 0, 4, 256);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
