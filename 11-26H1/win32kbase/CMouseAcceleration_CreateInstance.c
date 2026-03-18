/*
 * XREFs of CMouseAcceleration_CreateInstance @ 0x140225990
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x140225744 (-CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z.c)
 */

struct CDeviceAcceleration *__fastcall CMouseAcceleration_CreateInstance(unsigned int a1, int a2, int a3)
{
  struct CDeviceAcceleration *v5; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 16360) )
  {
    LODWORD(v5) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 711);
  }
  v5 = 0LL;
  CMouseAcceleration::CreateInstance(&v5, a1);
  return v5;
}
