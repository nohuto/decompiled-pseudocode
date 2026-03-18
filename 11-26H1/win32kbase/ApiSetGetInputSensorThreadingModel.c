/*
 * XREFs of ApiSetGetInputSensorThreadingModel @ 0x1402280D0
 * Callers:
 *     InputInitialize @ 0x140194D38 (InputInitialize.c)
 * Callees:
 *     IsGetInputSensorThreadingModelSupported @ 0x14019D9A0 (IsGetInputSensorThreadingModelSupported.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetGetInputSensorThreadingModel(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx
  unsigned int (__fastcall *v5)(_QWORD); // rax

  v1 = a1;
  v2 = 0;
  if ( (int)IsGetInputSensorThreadingModelSupported(a1) < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1346);
  if ( (int)IsGetInputSensorThreadingModelSupported(v3) >= 0 )
  {
    v5 = *(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 48) + 4904LL);
    if ( v5 )
      return v5(v1);
  }
  return v2;
}
