/*
 * XREFs of PsRevertThreadToSelf @ 0x1409041C0
 * Callers:
 *     <none>
 * Callees:
 *     PsImpersonateClient @ 0x140904330 (PsImpersonateClient.c)
 */

NTSTATUS __fastcall PsRevertThreadToSelf(struct _KTHREAD *a1)
{
  return PsImpersonateClient(a1, 0LL, 0, 0, SecurityImpersonation);
}
