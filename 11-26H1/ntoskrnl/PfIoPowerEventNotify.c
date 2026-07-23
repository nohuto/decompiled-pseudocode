/*
 * XREFs of PfIoPowerEventNotify @ 0x1407C8798
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1407DF428 (PopUmpoProcessPowerMessage.c)
 *     PopUmpoSendLegacyEvent @ 0x140B35AB4 (PopUmpoSendLegacyEvent.c)
 * Callees:
 *     PfPowerActionNotify @ 0x140C0D3C0 (PfPowerActionNotify.c)
 */

__int64 __fastcall PfIoPowerEventNotify(int a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = a3;
  if ( a1 == 18 )
    return PfPowerActionNotify(5LL, a3);
  return result;
}
