/*
 * XREFs of AlpcpUnlockBlobUncachedExclusive @ 0x1408EAB80
 * Callers:
 *     NtAlpcRevokeSecurityContext @ 0x1407C06A0 (NtAlpcRevokeSecurityContext.c)
 *     AlpcpAcceptConnectPort @ 0x1408E6A30 (AlpcpAcceptConnectPort.c)
 *     AlpcConnectionDestroyProcedure @ 0x1408E9120 (AlpcConnectionDestroyProcedure.c)
 *     AlpcpCreateClientPort @ 0x1408E9A60 (AlpcpCreateClientPort.c)
 *     AlpcpDeletePort @ 0x1408EA7B0 (AlpcpDeletePort.c)
 *     AlpcpDisconnectPort @ 0x1408EAF48 (AlpcpDisconnectPort.c)
 *     AlpcpWalkConnectionList @ 0x140AFBB7C (AlpcpWalkConnectionList.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall AlpcpUnlockBlobUncachedExclusive(__int64 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1 - 16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 - 16));
  KeAbPostRelease(v1);
}
