/*
 * XREFs of SshpWorkItemTryAllowNextWorker @ 0x1404E6E20
 * Callers:
 *     SshpPurgeBlockersWorker @ 0x140AAB2F0 (SshpPurgeBlockersWorker.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140AFE4F0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 * Callees:
 *     <none>
 */

char __fastcall SshpWorkItemTryAllowNextWorker(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), 0, 1) == 1 )
    return 1;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFD);
  return v1;
}
