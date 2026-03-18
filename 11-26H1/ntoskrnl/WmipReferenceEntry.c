/*
 * XREFs of WmipReferenceEntry @ 0x140A0FB50
 * Callers:
 *     WmipRegisterEtwProvider @ 0x140823D44 (WmipRegisterEtwProvider.c)
 *     WmipUpdateDataSource @ 0x140A0ABF4 (WmipUpdateDataSource.c)
 *     WmipSendEnableRequest @ 0x140A0AF48 (WmipSendEnableRequest.c)
 *     WmipSendEnableDisableRequest @ 0x140A0B168 (WmipSendEnableDisableRequest.c)
 *     WmipFindISinGEbyName @ 0x140A0B3A0 (WmipFindISinGEbyName.c)
 *     WmipDereferenceEvent @ 0x140A0B9C4 (WmipDereferenceEvent.c)
 *     WmipGenerateRegistrationNotification @ 0x140A0CD54 (WmipGenerateRegistrationNotification.c)
 *     WmipIncludeStaticNames @ 0x140A0CE94 (WmipIncludeStaticNames.c)
 *     WmipFindGEByGuid @ 0x140A0E624 (WmipFindGEByGuid.c)
 *     WmipPrepareWnodeSI @ 0x140A0F5E4 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x140A0F9A0 (WmipPrepareForWnodeAD.c)
 *     WmipUnregisterEtwProvider @ 0x140AED134 (WmipUnregisterEtwProvider.c)
 *     WmipFindMRByNames @ 0x140B1A194 (WmipFindMRByNames.c)
 *     WmipInsertMofResource @ 0x140B1A25C (WmipInsertMofResource.c)
 *     WmipLegacyEtwCallback @ 0x140B20020 (WmipLegacyEtwCallback.c)
 *     WmipLegacyEtwWorker @ 0x140B22A20 (WmipLegacyEtwWorker.c)
 *     WmipQueueLegacyEtwWork @ 0x140B2F424 (WmipQueueLegacyEtwWork.c)
 *     WmipFindISInDSByGuid @ 0x140B5000C (WmipFindISInDSByGuid.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall WmipReferenceEntry(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(BugCheckParameter2 + 24));
  if ( result <= 1 )
  {
    if ( result == 1 )
      KeBugCheckEx(0x14Au, 0LL, BugCheckParameter2, 0LL, 0LL);
    KeBugCheckEx(0x14Au, 2uLL, BugCheckParameter2, 0LL, 0LL);
  }
  return result;
}
