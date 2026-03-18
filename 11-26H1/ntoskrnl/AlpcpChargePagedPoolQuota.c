/*
 * XREFs of AlpcpChargePagedPoolQuota @ 0x1409BC9CC
 * Callers:
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x1408E7E00 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpCaptureMessageData @ 0x1409BBCD0 (AlpcpCaptureMessageData.c)
 *     AlpcpCreateReserve @ 0x1409BC024 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x1409BC550 (AlpcpCreateSecurityContext.c)
 *     AlpcpSendMessage @ 0x1409BD2F0 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1409C09E8 (AlpcpCaptureMessageDataSafe.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x140972810 (PsChargeProcessPagedPoolQuota.c)
 */

__int64 __fastcall AlpcpChargePagedPoolQuota(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax

  _m_prefetchw((const void *)(a1 + 1432));
  v2 = *(_QWORD *)(a1 + 1432);
  if ( v2 < a2 )
    return PsChargeProcessPagedPoolQuota(a1, a2);
  while ( v2 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1432), v2 - a2, v2) )
  {
    v2 = *(_QWORD *)(a1 + 1432);
    if ( v2 < a2 )
      return PsChargeProcessPagedPoolQuota(a1, a2);
  }
  return 0LL;
}
