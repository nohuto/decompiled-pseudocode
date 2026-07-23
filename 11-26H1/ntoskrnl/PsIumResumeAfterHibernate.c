/*
 * XREFs of PsIumResumeAfterHibernate @ 0x140529D88
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 *     PspIumInitialize @ 0x140CDF4BC (PspIumInitialize.c)
 * Callees:
 *     VslRegisterLogPages @ 0x14040E040 (VslRegisterLogPages.c)
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
