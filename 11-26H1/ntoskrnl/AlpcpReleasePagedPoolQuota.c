/*
 * XREFs of AlpcpReleasePagedPoolQuota @ 0x1408E8010
 * Callers:
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x1408E7E00 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpCaptureMessageData @ 0x1409BBCD0 (AlpcpCaptureMessageData.c)
 *     AlpcpCreateReserve @ 0x1409BC024 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x1409BC550 (AlpcpCreateSecurityContext.c)
 *     AlpcpSendMessage @ 0x1409BD2F0 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1409C09E8 (AlpcpCaptureMessageDataSafe.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1403BCF90 (PsReturnProcessPagedPoolQuota.c)
 */

void __fastcall AlpcpReleasePagedPoolQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  if ( a1 )
  {
    if ( a2 + *(_QWORD *)(a1 + 1432) >= 0x1000 )
      PsReturnProcessPagedPoolQuota(a1, a2);
    else
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 1432), a2);
  }
}
