/*
 * XREFs of CMouseAcceleration_CreateInstance @ 0x140224040
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x140192E00 (-CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CDeviceAcceleration *__fastcall CMouseAcceleration_CreateInstance(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  struct CDeviceAcceleration *v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 16368) )
  {
    LODWORD(v4) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 711);
  }
  v4 = 0LL;
  CMouseAcceleration::CreateInstance(&v4, v2);
  return v4;
}
