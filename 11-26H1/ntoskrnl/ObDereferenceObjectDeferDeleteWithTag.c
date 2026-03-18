/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x14027C870
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14020570C (ExpApplyPriorityBoost.c)
 *     MiDereferenceControlAreaFile @ 0x1402649C0 (MiDereferenceControlAreaFile.c)
 *     IoPageReadEx @ 0x14026BD90 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14026CD00 (IoSetDiskIoAttributionFromThread.c)
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x14027125C (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 *     ObpReleaseLookupContext @ 0x14027BE10 (ObpReleaseLookupContext.c)
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140375A20 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 *     ?KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140376BF0 (-KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z.c)
 *     CcUnmapAndPurge @ 0x14039A0C8 (CcUnmapAndPurge.c)
 *     MiQueuePageAccessLog @ 0x1403BA328 (MiQueuePageAccessLog.c)
 *     MiReturnCcAccessLog @ 0x1403BA494 (MiReturnCcAccessLog.c)
 *     IopDeleteFileObjectExtension @ 0x1403DB7A0 (IopDeleteFileObjectExtension.c)
 *     CcInitializeCacheMapInternal @ 0x1403E1230 (CcInitializeCacheMapInternal.c)
 *     MiStoreWriteModifiedPagePrepare @ 0x1404091C0 (MiStoreWriteModifiedPagePrepare.c)
 *     IopCompleteRequest @ 0x14045B5C0 (IopCompleteRequest.c)
 *     MiDeleteActiveTrimView @ 0x14046C034 (MiDeleteActiveTrimView.c)
 *     ExDeleteResourceLite @ 0x140474A20 (ExDeleteResourceLite.c)
 *     MmChangeSectionBackingFile @ 0x1404816CC (MmChangeSectionBackingFile.c)
 *     CcChangeBackingFileObject @ 0x1404817E0 (CcChangeBackingFileObject.c)
 *     MmFreeAccessPfnBuffer @ 0x1404A3E88 (MmFreeAccessPfnBuffer.c)
 *     ExReinitializeResourceLite @ 0x1404B66D0 (ExReinitializeResourceLite.c)
 *     PfpServiceMainThreadUnboost @ 0x1404FA8B0 (PfpServiceMainThreadUnboost.c)
 *     PspJobDelete @ 0x140615810 (PspJobDelete.c)
 *     SmTerminateStoreProcess @ 0x14063E81C (SmTerminateStoreProcess.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     ObOpenObjectByNameEx @ 0x1408FCDF0 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     VrpDestroyNamespaceNode @ 0x140977AF4 (VrpDestroyNamespaceNode.c)
 *     PspChargeProcessWakeCounter @ 0x1409BE2C0 (PspChargeProcessWakeCounter.c)
 *     ObpUnlockDirectory @ 0x1409E2240 (ObpUnlockDirectory.c)
 *     ObpLockChildDirectory @ 0x1409E2630 (ObpLockChildDirectory.c)
 *     VrpFreeKeyContext @ 0x140A7F588 (VrpFreeKeyContext.c)
 *     MiDeleteTrimViewInfoList @ 0x140A841F8 (MiDeleteTrimViewInfoList.c)
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 *     MiObtainSectionForDriver @ 0x140AEB960 (MiObtainSectionForDriver.c)
 *     KiAvailableCpusProcessWorkItemCallback @ 0x140B05090 (KiAvailableCpusProcessWorkItemCallback.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403DD9F0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __stdcall ObDereferenceObjectDeferDeleteWithTag(PVOID Object, ULONG Tag)
{
  signed __int64 v3; // rbx
  bool v4; // cc
  signed __int64 BugCheckParameter4; // rbx

  if ( ObpTraceFlags )
    ObpPushStackInfo((__int64)Object - 48, -1, Tag);
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v4 = v3 <= 1;
  BugCheckParameter4 = v3 - 1;
  if ( v4 )
  {
    if ( *((_QWORD *)Object - 5) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)],
        (ULONG_PTR)Object,
        3uLL,
        *((_QWORD *)Object - 5));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 4uLL, BugCheckParameter4);
    ObpDeferObjectDeletion((char *)Object - 48);
  }
}
