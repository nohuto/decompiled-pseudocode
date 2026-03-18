/*
 * XREFs of CTouchpadAcceleration_CreateInstance @ 0x140225A00
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CreateInstance@CTouchpadAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x140225880 (-CreateInstance@CTouchpadAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z.c)
 */

struct CDeviceAcceleration *__fastcall CTouchpadAcceleration_CreateInstance(int a1, int a2, int a3)
{
  struct CDeviceAcceleration *v5; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 0x4000) )
  {
    LODWORD(v5) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 725);
  }
  v5 = 0LL;
  CTouchpadAcceleration::CreateInstance(&v5, a1);
  return v5;
}
