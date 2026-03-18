/*
 * XREFs of ?VidMmSetAllocationFlipQueueReferencesPointer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_FLIP_QUEUE_REFERENCES@@@Z @ 0x140122628
 * Callers:
 *     VidMmSetAllocationFlipQueueReferencesPointer @ 0x140047210 (VidMmSetAllocationFlipQueueReferencesPointer.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x140039504 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmSetAllocationFlipQueueReferencesPointer(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        struct VIDMM_FLIP_QUEUE_REFERENCES *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  struct _KTHREAD **v6; // rdi
  int *v7; // rcx

  v4 = **a2;
  v5 = *(_QWORD *)(v4 + 368);
  v6 = (struct _KTHREAD **)(v4 + 136);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v4 + 136));
  v7 = *(int **)(v5 + 24);
  if ( v7 )
    VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(v7);
  *(_QWORD *)(v5 + 24) = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3);
  DXGFASTMUTEX::Release(v6);
}
