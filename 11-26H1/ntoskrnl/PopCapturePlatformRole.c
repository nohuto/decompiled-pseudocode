/*
 * XREFs of PopCapturePlatformRole @ 0x140B100A0
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PopConfigureHeteroPolicies @ 0x140AA9D88 (PopConfigureHeteroPolicies.c)
 *     PopDripsWatchdogInitialize @ 0x140CDCC40 (PopDripsWatchdogInitialize.c)
 * Callees:
 *     <none>
 */

__int64 PopCapturePlatformRole()
{
  __int64 result; // rax
  int v1; // ecx
  unsigned __int32 v2; // ecx

  result = *(unsigned int *)&stru_140E67200.WaitBlockFill11[84];
  v1 = 0;
  if ( !*(_DWORD *)&stru_140E67200.WaitBlockFill11[84] )
  {
    LOBYTE(v1) = dword_140F10630 != 0;
    v2 = v1 + 1;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&stru_140E67200.WaitBlockFill11[84],
                             v2,
                             0);
    if ( !(_DWORD)result )
      return v2;
  }
  return result;
}
