/*
 * XREFs of PopIsPlatformAoAcCapableInitialized @ 0x1404C7820
 * Callers:
 *     PopPdcRegister @ 0x14077B0D8 (PopPdcRegister.c)
 * Callees:
 *     <none>
 */

bool PopIsPlatformAoAcCapableInitialized()
{
  return *(_DWORD *)&stru_140E66FF0.WaitBlockFill11[80] != 0;
}
