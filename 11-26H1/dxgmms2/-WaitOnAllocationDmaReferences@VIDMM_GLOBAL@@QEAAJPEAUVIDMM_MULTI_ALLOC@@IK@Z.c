/*
 * XREFs of ?WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@IK@Z @ 0x1400E8494
 * Callers:
 *     VidMmWaitOnAllocationDmaReferences @ 0x14003F4E0 (VidMmWaitOnAllocationDmaReferences.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E85D8 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchFlushDevice @ 0x1400E8640 (VidSchFlushDevice.c)
 *     ?WaitOnAllDMAReferencesExceptThis@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140122544 (-WaitOnAllDMAReferencesExceptThis@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::WaitOnAllocationDmaReferences(
        VIDMM_GLOBAL *this,
        struct VIDMM_MULTI_ALLOC *a2,
        __int64 a3,
        char a4)
{
  unsigned int v4; // ebx
  __int64 v8; // r10
  __int64 v10; // rcx

  v4 = 0;
  if ( (a4 & 4) != 0 )
  {
    VIDMM_GLOBAL::WaitOnAllocForceSync(this, a2);
    if ( (*((_DWORD *)a2 + 8) & 1) != 0 )
      KeWaitForSingleObject((char *)a2 + 72, Executive, 0, 0, 0LL);
  }
  else if ( a2 )
  {
    if ( (a4 & 1) != 0 )
    {
      VIDMM_GLOBAL::WaitOnAllDMAReferencesExceptThis(this, a2);
    }
    else
    {
      v8 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL);
      if ( v8 )
        VidSchFlushDevice(*(_QWORD *)(v8 + 800));
    }
    if ( (a4 & 2) != 0 )
      VIDMM_GLOBAL::WaitForAllPagingEngines(this, **(struct VIDMM_GLOBAL_ALLOC ***)a2);
  }
  else
  {
    WdLogSingleEntry1(1LL, 0LL);
    WdLogGlobalForLineNumber = 23870;
    DxgkLogInternalTriageEvent(v10, 0x40000LL);
    return (unsigned int)-1073741811;
  }
  return v4;
}
