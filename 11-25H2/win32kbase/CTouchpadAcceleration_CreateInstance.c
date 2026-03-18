/*
 * XREFs of CTouchpadAcceleration_CreateInstance @ 0x1402240B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CTouchpadAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x140192EE8 (-CreateInstance@CTouchpadAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CDeviceAcceleration *__fastcall CTouchpadAcceleration_CreateInstance(__int64 a1, __int64 a2)
{
  int v2; // ebx
  struct CDeviceAcceleration *v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 16392) )
  {
    LODWORD(v4) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 725);
  }
  v4 = 0LL;
  CTouchpadAcceleration::CreateInstance(&v4, v2);
  return v4;
}
