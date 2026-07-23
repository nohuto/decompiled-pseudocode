/*
 * XREFs of PopIsPlatformAoAcCapableInitialized @ 0x1404C1130
 * Callers:
 *     PopPdcRegister @ 0x1407DF940 (PopPdcRegister.c)
 * Callees:
 *     <none>
 */

bool PopIsPlatformAoAcCapableInitialized()
{
  return *(_DWORD *)&stru_140E67200.WaitBlockFill11[88] != 0;
}
