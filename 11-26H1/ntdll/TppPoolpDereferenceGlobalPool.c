/*
 * XREFs of TppPoolpDereferenceGlobalPool @ 0x18004EAA0
 * Callers:
 *     TppWorkerThread @ 0x18003E5E0 (TppWorkerThread.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004D650 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x18004DA10 (TppCleanupGroupMemberInitialize.c)
 *     TpSetDefaultPoolMaxThreads @ 0x18004F310 (TpSetDefaultPoolMaxThreads.c)
 *     TpSetDefaultPoolStackInformation @ 0x180065C20 (TpSetDefaultPoolStackInformation.c)
 *     RtlQueueWorkItem @ 0x180066390 (RtlQueueWorkItem.c)
 *     RtlpTpWorkUnposted @ 0x180066FE0 (RtlpTpWorkUnposted.c)
 *     TpDereferenceGlobalPool @ 0x180067320 (TpDereferenceGlobalPool.c)
 *     TpReleasePool @ 0x1800CB610 (TpReleasePool.c)
 *     TpUnreserveTaskPost @ 0x1800E06D8 (TpUnreserveTaskPost.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 */

struct _TEB *__fastcall TppPoolpDereferenceGlobalPool(const void **a1, volatile signed __int64 *a2)
{
  const void *v4; // rsi
  volatile signed __int32 *v5; // r8
  struct _TEB *result; // rax
  int v7; // ett
  volatile signed __int32 *v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett

  v4 = 0LL;
  v5 = (volatile signed __int32 *)*a1;
  _m_prefetchw(*a1);
  LODWORD(result) = *v5;
  while ( (int)result > 1 )
  {
    v7 = (int)result;
    result = (struct _TEB *)(unsigned int)_InterlockedCompareExchange(v5, (_DWORD)result - 1, (signed __int32)result);
    if ( v7 == (_DWORD)result )
      return result;
  }
  RtlAcquireSRWLockExclusive(a2, (__int64)a2);
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
  v4 = *a1;
  *a1 = 0LL;
LABEL_10:
  result = RtlReleaseSRWLockExclusive(a2);
  if ( v4 )
    return (struct _TEB *)TpReleasePool(v4);
  return result;
}
