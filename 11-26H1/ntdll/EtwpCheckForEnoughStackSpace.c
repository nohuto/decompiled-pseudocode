/*
 * XREFs of EtwpCheckForEnoughStackSpace @ 0x18005BB44
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18005AE40 (EtwpWriteToPrivateBuffers.c)
 * Callees:
 *     RtlResetStackOverflow @ 0x18013AD18 (RtlResetStackOverflow.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

char EtwpCheckForEnoughStackSpace()
{
  void *v0; // rsp

  v0 = alloca(2176LL);
  return 1;
}
