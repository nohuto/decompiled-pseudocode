/*
 * XREFs of WmipReferenceEntry @ 0x140A0ED40
 * Callers:
 *     WmipRegisterEtwProvider @ 0x140829F90 (WmipRegisterEtwProvider.c)
 *     WmipUnregisterEtwProvider @ 0x140A09BDC (WmipUnregisterEtwProvider.c)
 *     WmipUpdateDataSource @ 0x140A09CB4 (WmipUpdateDataSource.c)
 *     WmipSendEnableRequest @ 0x140A0A1B0 (WmipSendEnableRequest.c)
 *     WmipSendEnableDisableRequest @ 0x140A0A3D0 (WmipSendEnableDisableRequest.c)
 *     WmipFindISinGEbyName @ 0x140A0A608 (WmipFindISinGEbyName.c)
 *     WmipGenerateRegistrationNotification @ 0x140A0C7AC (WmipGenerateRegistrationNotification.c)
 *     WmipIncludeStaticNames @ 0x140A0C8EC (WmipIncludeStaticNames.c)
 *     WmipFindGEByGuid @ 0x140A0D800 (WmipFindGEByGuid.c)
 *     WmipPrepareWnodeSI @ 0x140A0E7D4 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x140A0EB90 (WmipPrepareForWnodeAD.c)
 *     WmipFindMRByNames @ 0x140B1C5E4 (WmipFindMRByNames.c)
 *     WmipInsertMofResource @ 0x140B1C6AC (WmipInsertMofResource.c)
 *     WmipLegacyEtwCallback @ 0x140B22440 (WmipLegacyEtwCallback.c)
 *     WmipLegacyEtwWorker @ 0x140B24E20 (WmipLegacyEtwWorker.c)
 *     WmipQueueLegacyEtwWork @ 0x140B31204 (WmipQueueLegacyEtwWork.c)
 *     WmipFindISInDSByGuid @ 0x140B5289C (WmipFindISInDSByGuid.c)
 *     WmipDereferenceEvent @ 0x140B5FA28 (WmipDereferenceEvent.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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
