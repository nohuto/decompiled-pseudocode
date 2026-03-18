/*
 * XREFs of PnpNotifyEarlyLaunchImageLoad @ 0x140CC3F64
 * Callers:
 *     PipInitializeDriverDependentDLLs @ 0x140D05314 (PipInitializeDriverDependentDLLs.c)
 *     PnpInitializeBootStartDriver @ 0x140D08CFC (PnpInitializeBootStartDriver.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x140439330 (ExNotifyWithProcessing.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall PnpNotifyEarlyLaunchImageLoad(__int64 a1, __int64 a2)
{
  _QWORD v4[4]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v5[120]; // [rsp+40h] [rbp-78h] BYREF

  memset_0(v5, 0, 0x68uLL);
  if ( PnpBootDriverCallbackObject )
  {
    v4[2] = a2;
    v4[0] = PnpEarlyLaunchImageNotificationPreProcess;
    v4[3] = a1;
    v4[1] = PnpEarlyLaunchImageNotificationPostProcess;
    ExNotifyWithProcessing((__int64)PnpBootDriverCallbackObject, 1LL, (int)v5, v4);
  }
}
