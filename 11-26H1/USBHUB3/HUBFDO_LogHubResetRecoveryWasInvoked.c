/*
 * XREFs of HUBFDO_LogHubResetRecoveryWasInvoked @ 0x14007FEE4
 * Callers:
 *     HUBHSM_ConfiguringHubAfterReset @ 0x140008E00 (HUBHSM_ConfiguringHubAfterReset.c)
 *     HUBHSM_LoggingHubWasReset @ 0x1400097A0 (HUBHSM_LoggingHubWasReset.c)
 * Callees:
 *     HUBREG_WriteValueToHubHardwareKey @ 0x14008D530 (HUBREG_WriteValueToHubHardwareKey.c)
 */

__int64 __fastcall HUBFDO_LogHubResetRecoveryWasInvoked(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = HUBREG_WriteValueToHubHardwareKey(a1, &g_HubInstHardResetCount, (unsigned int)++*(_DWORD *)(a1 + 56));
  v3 = *(unsigned int *)(a1 + 72);
  if ( (_DWORD)v3 )
  {
    result = HUBREG_WriteValueToHubHardwareKey(a1, L",.", v3);
    *(_DWORD *)(a1 + 72) = 0;
  }
  return result;
}
