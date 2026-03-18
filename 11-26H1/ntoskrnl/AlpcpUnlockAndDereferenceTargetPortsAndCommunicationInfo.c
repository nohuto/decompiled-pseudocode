/*
 * XREFs of AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x1409C12D4
 * Callers:
 *     AlpcpDispatchCloseMessage @ 0x1408E8CF0 (AlpcpDispatchCloseMessage.c)
 *     AlpcpDispatchNewMessage @ 0x1409BF430 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 */

LONG_PTR __fastcall AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(
        __int64 a1,
        signed __int64 *a2,
        signed __int64 *a3)
{
  unsigned __int64 v3; // rbx

  v3 = a1 - 16;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 16), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 - 16));
  KeAbPostRelease(v3);
  if ( _InterlockedCompareExchange64(a2 + 44, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2 + 44);
  KeAbPostRelease((unsigned __int64)(a2 + 44));
  if ( a3 != a2 )
  {
    if ( _InterlockedCompareExchange64(a3 + 44, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a3 + 44);
    KeAbPostRelease((unsigned __int64)(a3 + 44));
  }
  ObfDereferenceObject(a2);
  return ObfDereferenceObject(a3);
}
