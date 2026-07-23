/*
 * XREFs of ExInitializeSystemLookasideList @ 0x140C136D0
 * Callers:
 *     KiInitializeProcessorXSaveStructures @ 0x1405EF7B4 (KiInitializeProcessorXSaveStructures.c)
 *     ExInitializeProcessor @ 0x1406CF4B0 (ExInitializeProcessor.c)
 *     CcInitializeProcessor @ 0x14078CBAC (CcInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x140796878 (IoInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x1407C54F4 (ObInitializeProcessor.c)
 *     CmInitializeProcessorCallbacks @ 0x14085681C (CmInitializeProcessorCallbacks.c)
 *     CmpInitCallbacks @ 0x140856CAC (CmpInitCallbacks.c)
 *     KeInitializeXSaveStructures @ 0x140BFA294 (KeInitializeXSaveStructures.c)
 *     KiInitializeBootStructures @ 0x140BFB890 (KiInitializeBootStructures.c)
 *     CcInitializeCacheManager @ 0x140C854E8 (CcInitializeCacheManager.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 *     ObInitSystem @ 0x140D0F63C (ObInitSystem.c)
 * Callees:
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 *     KasanIsEnabled @ 0x14050FFE0 (KasanIsEnabled.c)
 */

__int64 __fastcall ExInitializeSystemLookasideList(__int64 a1, int a2, int a3, int a4, __int16 a5)
{
  _SINGLE_LIST_ENTRY **v9; // rax
  _QWORD *IptSaveArea; // rcx
  __int64 result; // rax

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_WORD *)(a1 + 16) = 2;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_QWORD *)(a1 + 48) = ExAllocatePoolZero;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_QWORD *)(a1 + 56) = ExFreePool;
  *(_WORD *)(a1 + 18) = a5;
  v9 = (_SINGLE_LIST_ENTRY **)(a1 + 64);
  *(_DWORD *)(a1 + 36) = a2;
  *(_DWORD *)(a1 + 40) = a4;
  *(_DWORD *)(a1 + 44) = a3;
  *(_QWORD *)(a1 + 80) = 0LL;
  IptSaveArea = ExSaPageGroupDescriptorArrayLock.IptSaveArea;
  if ( *(struct _KTHREAD **)ExSaPageGroupDescriptorArrayLock.IptSaveArea != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.SystemAffinityTokenListHead )
    __fastfail(3u);
  *v9 = &ExSaPageGroupDescriptorArrayLock.SystemAffinityTokenListHead;
  *(_QWORD *)(a1 + 72) = IptSaveArea;
  *IptSaveArea = v9;
  ExSaPageGroupDescriptorArrayLock.IptSaveArea = (void *)(a1 + 64);
  result = KasanIsEnabled();
  if ( (_DWORD)result )
    *(_DWORD *)(a1 + 16) = -65536;
  return result;
}
