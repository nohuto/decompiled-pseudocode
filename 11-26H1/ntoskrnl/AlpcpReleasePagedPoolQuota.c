/*
 * XREFs of AlpcpReleasePagedPoolQuota @ 0x1408EE5D0
 * Callers:
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x1408EE3C0 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpCaptureMessageData @ 0x14098CCB0 (AlpcpCaptureMessageData.c)
 *     AlpcpCreateReserve @ 0x14098D004 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x14098D530 (AlpcpCreateSecurityContext.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1409919C8 (AlpcpCaptureMessageDataSafe.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1403C6E00 (PsReturnProcessPagedPoolQuota.c)
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
