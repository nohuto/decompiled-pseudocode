/*
 * XREFs of VidMmGetAllocationFlipQueueReferencesPointer @ 0x140047360
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmGetAllocationFlipQueueReferencesPointer@VIDMM_GLOBAL@@QEAAPEAUVIDMM_FLIP_QUEUE_REFERENCES@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x140124C2C (-VidMmGetAllocationFlipQueueReferencesPointer@VIDMM_GLOBAL@@QEAAPEAUVIDMM_FLIP_QUEUE_REFERENCES@.c)
 */

struct VIDMM_FLIP_QUEUE_REFERENCES *__fastcall VidMmGetAllocationFlipQueueReferencesPointer(
        VIDMM_GLOBAL *a1,
        struct VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::VidMmGetAllocationFlipQueueReferencesPointer(a1, a2);
}
