/*
 * XREFs of ExInitializeSystemLookasideList @ 0x140C0D4C0
 * Callers:
 *     KiInitializeProcessorXSaveStructures @ 0x1405ECE44 (KiInitializeProcessorXSaveStructures.c)
 *     ExInitializeProcessor @ 0x1406CB480 (ExInitializeProcessor.c)
 *     CcInitializeProcessor @ 0x14078A07C (CcInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x140793D48 (IoInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x1407C2494 (ObInitializeProcessor.c)
 *     CmInitializeProcessorCallbacks @ 0x14085050C (CmInitializeProcessorCallbacks.c)
 *     CmpInitCallbacks @ 0x14085099C (CmpInitCallbacks.c)
 *     KeInitializeXSaveStructures @ 0x140BF4294 (KeInitializeXSaveStructures.c)
 *     KiInitializeBootStructures @ 0x140BF5890 (KiInitializeBootStructures.c)
 *     CcInitializeCacheManager @ 0x140C7F4E8 (CcInitializeCacheManager.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 *     ObInitSystem @ 0x140D0936C (ObInitSystem.c)
 * Callees:
 *     InitializeSListHead @ 0x140499200 (InitializeSListHead.c)
 *     KasanIsEnabled @ 0x140516570 (KasanIsEnabled.c)
 */

__int64 __fastcall ExInitializeSystemLookasideList(__int64 a1, int a2, int a3, int a4, __int16 a5)
{
  unsigned __int64 **v9; // rax
  _KTHREAD_WPS_FEEDBACK *WpsFeedback; // rcx
  __int64 result; // rax

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_WORD *)(a1 + 16) = 2;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_QWORD *)(a1 + 48) = ExAllocatePoolZero;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_QWORD *)(a1 + 56) = ExFreePool;
  *(_WORD *)(a1 + 18) = a5;
  v9 = (unsigned __int64 **)(a1 + 64);
  *(_DWORD *)(a1 + 36) = a2;
  *(_DWORD *)(a1 + 40) = a4;
  *(_DWORD *)(a1 + 44) = a3;
  *(_QWORD *)(a1 + 80) = 0LL;
  WpsFeedback = ExSaPageGroupDescriptorArrayLock.WpsFeedback;
  if ( (unsigned __int64 *)ExSaPageGroupDescriptorArrayLock.WpsFeedback->FeedbackStartTime != &ExSaPageGroupDescriptorArrayLock.ExtendedFeatureDisableMask )
    __fastfail(3u);
  *v9 = &ExSaPageGroupDescriptorArrayLock.ExtendedFeatureDisableMask;
  *(_QWORD *)(a1 + 72) = WpsFeedback;
  WpsFeedback->FeedbackStartTime = (unsigned __int64)v9;
  ExSaPageGroupDescriptorArrayLock.WpsFeedback = (_KTHREAD_WPS_FEEDBACK *)(a1 + 64);
  result = KasanIsEnabled();
  if ( (_DWORD)result )
    *(_DWORD *)(a1 + 16) = -65536;
  return result;
}
