/*
 * XREFs of WmipReferenceEntry @ 0x1409B6D18
 * Callers:
 *     WmipRegisterEtwProvider @ 0x1407963FC (WmipRegisterEtwProvider.c)
 *     WmipInsertMofResource @ 0x14079684C (WmipInsertMofResource.c)
 *     WmipDereferenceEvent @ 0x1409B196C (WmipDereferenceEvent.c)
 *     WmipGenerateRegistrationNotification @ 0x1409B3044 (WmipGenerateRegistrationNotification.c)
 *     WmipIncludeStaticNames @ 0x1409B318C (WmipIncludeStaticNames.c)
 *     WmipFindGEByGuid @ 0x1409B5550 (WmipFindGEByGuid.c)
 *     WmipPrepareWnodeSI @ 0x1409B6860 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x1409B6B68 (WmipPrepareForWnodeAD.c)
 *     WmipFindISinGEbyName @ 0x1409B87C4 (WmipFindISinGEbyName.c)
 *     WmipLegacyEtwWorker @ 0x1409B8B90 (WmipLegacyEtwWorker.c)
 *     WmipQueueLegacyEtwWork @ 0x1409B8CDC (WmipQueueLegacyEtwWork.c)
 *     WmipSendEnableDisableRequest @ 0x1409B8F6C (WmipSendEnableDisableRequest.c)
 *     WmipUpdateDataSource @ 0x1409B91F4 (WmipUpdateDataSource.c)
 *     WmipLegacyEtwCallback @ 0x140A7A580 (WmipLegacyEtwCallback.c)
 *     WmipSendEnableRequest @ 0x140A8B8B0 (WmipSendEnableRequest.c)
 *     WmipFindMRByNames @ 0x140A94144 (WmipFindMRByNames.c)
 *     WmipFindISInDSByGuid @ 0x140AA3EB4 (WmipFindISInDSByGuid.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
