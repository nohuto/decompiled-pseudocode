/*
 * XREFs of PopCapturePlatformRole @ 0x140B0E868
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopConfigureHeteroPolicies @ 0x140A9E35C (PopConfigureHeteroPolicies.c)
 *     PopDripsWatchdogInitialize @ 0x140CD68EC (PopDripsWatchdogInitialize.c)
 * Callees:
 *     <none>
 */

__int64 PopCapturePlatformRole()
{
  __int64 result; // rax
  int v1; // ecx
  unsigned __int32 v2; // ecx

  result = *(unsigned int *)&stru_140E66FF0.WaitBlockFill11[88];
  v1 = 0;
  if ( !*(_DWORD *)&stru_140E66FF0.WaitBlockFill11[88] )
  {
    LOBYTE(v1) = dword_140F0FE70 != 0;
    v2 = v1 + 1;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&stru_140E66FF0.WaitBlockFill11[88],
                             v2,
                             0);
    if ( !(_DWORD)result )
      return v2;
  }
  return result;
}
