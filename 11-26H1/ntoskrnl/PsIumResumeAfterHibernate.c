/*
 * XREFs of PsIumResumeAfterHibernate @ 0x140527718
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 *     PspIumInitialize @ 0x140CD913C (PspIumInitialize.c)
 * Callees:
 *     VslRegisterLogPages @ 0x140411B34 (VslRegisterLogPages.c)
 */

__int64 PsIumResumeAfterHibernate()
{
  __int64 result; // rax

  result = PspIumLogBuffer;
  if ( PspIumLogBuffer )
  {
    *(_DWORD *)PspIumLogBuffer = -1;
    return VslRegisterLogPages();
  }
  return result;
}
