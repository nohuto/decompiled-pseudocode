/*
 * XREFs of PsRevertToSelf @ 0x140AE5830
 * Callers:
 *     CmpOpenHiveFile @ 0x1408BB784 (CmpOpenHiveFile.c)
 *     EtwpDelayCreate @ 0x140A15A94 (EtwpDelayCreate.c)
 * Callees:
 *     PsImpersonateClient @ 0x140904330 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
