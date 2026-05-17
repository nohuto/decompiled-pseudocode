/*
 * XREFs of EtwpCheckForEnoughStackSpace @ 0x180010414
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18000F710 (EtwpWriteToPrivateBuffers.c)
 * Callees:
 *     RtlResetStackOverflow @ 0x18013AFA8 (RtlResetStackOverflow.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

char EtwpCheckForEnoughStackSpace()
{
  void *v0; // rsp

  v0 = alloca(2176LL);
  return 1;
}
