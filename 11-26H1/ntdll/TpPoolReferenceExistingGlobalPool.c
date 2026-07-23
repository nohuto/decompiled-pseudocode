/*
 * XREFs of TpPoolReferenceExistingGlobalPool @ 0x1800878AC
 * Callers:
 *     TpSetDefaultPoolMaxThreads @ 0x180039890 (TpSetDefaultPoolMaxThreads.c)
 *     TpSetDefaultPoolStackInformation @ 0x180086070 (TpSetDefaultPoolStackInformation.c)
 *     RtlpTpWorkCallback @ 0x1800870E0 (RtlpTpWorkCallback.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 */

__int64 TpPoolReferenceExistingGlobalPool()
{
  __int64 v0; // rbx

  v0 = 0LL;
  if ( TppPoolpGlobalPool )
  {
    RtlAcquireSRWLockShared(&TppPoolpGlobalPoolLock);
    v0 = TppPoolpGlobalPool;
    if ( TppPoolpGlobalPool )
      _InterlockedIncrement((volatile signed __int32 *)TppPoolpGlobalPool);
    RtlReleaseSRWLockShared(&TppPoolpGlobalPoolLock);
  }
  return v0;
}
