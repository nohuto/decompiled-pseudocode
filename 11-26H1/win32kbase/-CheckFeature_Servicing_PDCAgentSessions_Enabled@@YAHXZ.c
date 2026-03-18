/*
 * XREFs of ?CheckFeature_Servicing_PDCAgentSessions_Enabled@@YAHXZ @ 0x1401D5458
 * Callers:
 *     PowerConnectionEvent @ 0x14018642C (PowerConnectionEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 CheckFeature_Servicing_PDCAgentSessions_Enabled(void)
{
  unsigned int v0; // ebx
  _BYTE OutputBuffer[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 InputBuffer; // [rsp+38h] [rbp-20h] BYREF
  int v4; // [rsp+40h] [rbp-18h]

  v0 = 1;
  OutputBuffer[0] = 0;
  InputBuffer = 97LL;
  v4 = 59996711;
  if ( ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, OutputBuffer, 1u) || !OutputBuffer[0] )
    return 0;
  return v0;
}
