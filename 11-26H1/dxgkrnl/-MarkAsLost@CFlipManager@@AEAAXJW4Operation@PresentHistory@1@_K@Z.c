/*
 * XREFs of ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1400673F4
 * Callers:
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x140018B90 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x140018DCC (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 *     ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14001A4B8 (-IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x14001A7BC (-ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z.c)
 *     ?ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x14001C4D8 (-ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x14001CB2C (-ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x14001CD74 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z @ 0x1400220B4 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z.c)
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x140022F48 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresen.c)
 *     ?FlipManagerMarkAsLost@@YAXPEAVCFlipManagerToken@@@Z @ 0x1400A425C (-FlipManagerMarkAsLost@@YAXPEAVCFlipManagerToken@@@Z.c)
 *     ?NotifyAdapterCleanupTokenDiscard@FlipManagerObject@@QEAAJ_K@Z @ 0x1400A42B4 (-NotifyAdapterCleanupTokenDiscard@FlipManagerObject@@QEAAJ_K@Z.c)
 *     ?ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1400A4ADC (-ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x14001C6A8 (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14001D8F4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     Feature_CompositionTextureDX12Support__private_IsEnabledDeviceUsageNoInline @ 0x1400674B8 (Feature_CompositionTextureDX12Support__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x14036D744 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

__int64 __fastcall CFlipManager::MarkAsLost(__int64 a1, int a2, int a3, __int64 a4)
{
  CFlipManager::PresentHistory *v5; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax
  void (__fastcall *v10)(_QWORD); // rbx
  unsigned int TracingId; // eax
  __int64 result; // rax

  *(_BYTE *)(a1 + 32) = 1;
  v5 = *(CFlipManager::PresentHistory **)(a1 + 24);
  if ( v5 )
  {
    NextEntry = CFlipManager::PresentHistory::GetNextEntry(v5);
    *((_DWORD *)NextEntry + 20) = a2;
    *((_DWORD *)NextEntry + 10) = a3;
    *((_QWORD *)NextEntry + 2) = a4;
    RtlCaptureStackBackTrace(1u, 4u, (PVOID *)NextEntry + 6, 0LL);
  }
  v10 = *(void (__fastcall **)(_QWORD))(DxgkGetWin32kImportTable() + 352);
  TracingId = CFlipManager::GetTracingId((CFlipManager *)a1);
  v10(TracingId);
  KeSetEvent(*(PRKEVENT *)(a1 + 320), 1, 0);
  result = Feature_CompositionTextureDX12Support__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
    return DxgkImmediateSignalSynchronizationObjectByReference(*(_QWORD *)(a1 + 304), -1LL);
  return result;
}
