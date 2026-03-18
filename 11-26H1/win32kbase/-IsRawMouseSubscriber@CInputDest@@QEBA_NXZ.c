/*
 * XREFs of ?IsRawMouseSubscriber@CInputDest@@QEBA_NXZ @ 0x140211DE0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall CInputDest::IsRawMouseSubscriber(CInputDest *this)
{
  int v1; // eax

  if ( *((_DWORD *)this + 23) == 1 )
  {
    return (*(_DWORD *)(*((_QWORD *)this + 10) + 132LL) & 2u) >> 1;
  }
  else
  {
    if ( *((_DWORD *)this + 23) == 2 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1090);
    LOBYTE(v1) = 0;
  }
  return v1;
}
