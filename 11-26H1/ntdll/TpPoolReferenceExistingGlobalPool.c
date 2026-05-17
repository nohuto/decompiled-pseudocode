/*
 * XREFs of TpPoolReferenceExistingGlobalPool @ 0x18006745C
 * Callers:
 *     TpSetDefaultPoolMaxThreads @ 0x18004F310 (TpSetDefaultPoolMaxThreads.c)
 *     TpSetDefaultPoolStackInformation @ 0x180065C20 (TpSetDefaultPoolStackInformation.c)
 *     RtlpTpWorkCallback @ 0x180066C90 (RtlpTpWorkCallback.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
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
