/*
 * XREFs of ?GetMouseSensititivty@CMouseAcceleration@@QEBAIPEAI@Z @ 0x14013FC94
 * Callers:
 *     GetMouseSensitivity @ 0x14013FC60 (GetMouseSensitivity.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMouseAcceleration::GetMouseSensititivty(CMouseAcceleration *this, unsigned int *a2)
{
  unsigned int *v2; // rbx

  v2 = (unsigned int *)((char *)this + 104);
  if ( a2 )
  {
    if ( !*v2 || *v2 > 0x14 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 541LL);
    *a2 = v2[1];
  }
  if ( !*v2 || *v2 > 0x14 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 534LL);
  return *v2;
}
