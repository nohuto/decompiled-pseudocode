/*
 * XREFs of SeQuerySessionIdToken @ 0x140A820F0
 * Callers:
 *     PnpGetCallerSessionId @ 0x1407A46F8 (PnpGetCallerSessionId.c)
 *     SeQueryInformationToken @ 0x1408F4300 (SeQueryInformationToken.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     NtQueryInformationToken @ 0x140B79CE0 (NtQueryInformationToken.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 */

NTSTATUS __stdcall SeQuerySessionIdToken(PACCESS_TOKEN Token, PULONG SessionId)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
  *SessionId = *((_DWORD *)Token + 30);
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6);
  return 0;
}
