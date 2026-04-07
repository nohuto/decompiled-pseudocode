/*
 * XREFs of ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x1800712B4
 * Callers:
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18005721C (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180088060 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

bool __fastcall DXGIOutputInfo::IsAttachedToDesktop(DXGIOutputInfo *this)
{
  bool v1; // bl
  bool result; // al

  v1 = 1;
  if ( !*((_DWORD *)this + 51) && !*((_DWORD *)this + 52) && !*((_DWORD *)this + 53) )
    v1 = *((_DWORD *)this + 54) != 0;
  if ( *((_DWORD *)this + 36) && *((_DWORD *)this + 35) )
  {
    result = v1;
    if ( v1 && !*((_DWORD *)this + 39) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgs();
      return v1;
    }
  }
  else
  {
    if ( v1 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
    return 0;
  }
  return result;
}
