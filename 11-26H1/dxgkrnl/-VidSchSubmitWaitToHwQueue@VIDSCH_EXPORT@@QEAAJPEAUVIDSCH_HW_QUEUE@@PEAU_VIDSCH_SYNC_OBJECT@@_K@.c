/*
 * XREFs of ?VidSchSubmitWaitToHwQueue@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x140045D90
 * Callers:
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAUDXGK_PRESENT_PARAMS@@1@Z @ 0x1402E5630 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1403074C0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchSubmitWaitToHwQueue(
        VIDSCH_EXPORT *this,
        struct VIDSCH_HW_QUEUE *a2,
        struct _VIDSCH_SYNC_OBJECT *a3,
        __int64 a4)
{
  return (*(__int64 (__fastcall **)(struct VIDSCH_HW_QUEUE *, struct _VIDSCH_SYNC_OBJECT *, __int64))(*((_QWORD *)this + 1) + 656LL))(
           a2,
           a3,
           a4);
}
