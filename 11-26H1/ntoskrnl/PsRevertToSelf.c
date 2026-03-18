/*
 * XREFs of PsRevertToSelf @ 0x140A17630
 * Callers:
 *     CmpOpenHiveFile @ 0x1408B51B0 (CmpOpenHiveFile.c)
 *     EtwpDelayCreate @ 0x140A16624 (EtwpDelayCreate.c)
 * Callees:
 *     PsImpersonateClient @ 0x140928820 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
