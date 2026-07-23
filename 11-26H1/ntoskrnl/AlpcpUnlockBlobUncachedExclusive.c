/*
 * XREFs of AlpcpUnlockBlobUncachedExclusive @ 0x1408F1140
 * Callers:
 *     NtAlpcRevokeSecurityContext @ 0x1407C3700 (NtAlpcRevokeSecurityContext.c)
 *     AlpcpAcceptConnectPort @ 0x1408ECFF0 (AlpcpAcceptConnectPort.c)
 *     AlpcConnectionDestroyProcedure @ 0x1408EF6E0 (AlpcConnectionDestroyProcedure.c)
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     AlpcpDeletePort @ 0x1408F0D70 (AlpcpDeletePort.c)
 *     AlpcpDisconnectPort @ 0x1408F1508 (AlpcpDisconnectPort.c)
 *     AlpcpWalkConnectionList @ 0x140AFD7FC (AlpcpWalkConnectionList.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall AlpcpUnlockBlobUncachedExclusive(__int64 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1 - 16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 - 16));
  KeAbPostRelease(v1);
}
