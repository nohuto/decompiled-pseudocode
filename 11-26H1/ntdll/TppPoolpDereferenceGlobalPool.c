/*
 * XREFs of TppPoolpDereferenceGlobalPool @ 0x180039020
 * Callers:
 *     TppWorkerThread @ 0x180028B50 (TppWorkerThread.c)
 *     TppCleanupGroupMemberDestroy @ 0x180037BD0 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x180037F90 (TppCleanupGroupMemberInitialize.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180039890 (TpSetDefaultPoolMaxThreads.c)
 *     TpSetDefaultPoolStackInformation @ 0x180086070 (TpSetDefaultPoolStackInformation.c)
 *     RtlQueueWorkItem @ 0x1800867E0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkUnposted @ 0x180087430 (RtlpTpWorkUnposted.c)
 *     TpDereferenceGlobalPool @ 0x180087770 (TpDereferenceGlobalPool.c)
 *     TpReleasePool @ 0x1800C8D80 (TpReleasePool.c)
 *     TpUnreserveTaskPost @ 0x1800DDF78 (TpUnreserveTaskPost.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall TppPoolpDereferenceGlobalPool(const void **a1, _RTL_SRWLOCK *a2)
{
  _TP_POOL *v4; // rsi
  volatile signed __int32 *v5; // r8
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  volatile signed __int32 *v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett

  v4 = 0LL;
  v5 = (volatile signed __int32 *)*a1;
  _m_prefetchw(*a1);
  v6 = *v5;
  while ( v6 > 1 )
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange(v5, v6 - 1, v6);
    if ( v7 == v6 )
      return;
  }
  RtlAcquireSRWLockExclusive(a2);
  v8 = (volatile signed __int32 *)*a1;
  _m_prefetchw(*a1);
  v9 = *v8;
  while ( v9 > 1 )
  {
    v10 = v9;
    v9 = _InterlockedCompareExchange(v8, v9 - 1, v9);
    if ( v10 == v9 )
      goto LABEL_10;
  }
  v4 = (_TP_POOL *)*a1;
  *a1 = 0LL;
LABEL_10:
  RtlReleaseSRWLockExclusive(a2);
  if ( v4 )
    TpReleasePool(v4);
}
