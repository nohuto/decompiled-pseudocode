/*
 * XREFs of ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E85D8
 * Callers:
 *     ?WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@IK@Z @ 0x1400E8494 (-WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@IK@Z.c)
 *     ?Lock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@KPEAPEAX@Z @ 0x140127978 (-Lock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     VidSchFlushDevice @ 0x1400E8640 (VidSchFlushDevice.c)
 */

void __fastcall VIDMM_GLOBAL::WaitOnAllocForceSync(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  __int64 v2; // r10

  v2 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL);
  if ( v2 )
    VidSchFlushDevice(*(_QWORD *)(v2 + 800));
}
