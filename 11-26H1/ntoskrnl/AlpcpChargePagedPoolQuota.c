/*
 * XREFs of AlpcpChargePagedPoolQuota @ 0x14098D9AC
 * Callers:
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x1408EE3C0 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpCaptureMessageData @ 0x14098CCB0 (AlpcpCaptureMessageData.c)
 *     AlpcpCreateReserve @ 0x14098D004 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x14098D530 (AlpcpCreateSecurityContext.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1409919C8 (AlpcpCaptureMessageDataSafe.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x1409BDB00 (PsChargeProcessPagedPoolQuota.c)
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
