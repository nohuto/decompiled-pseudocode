/*
 * XREFs of VidMmCreateCompanionContext @ 0x14004D470
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmCreateCompanionContext@VIDMM_GLOBAL@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@PEAVVIDMM_DEVICE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1400A2C90 (-VidMmCreateCompanionContext@VIDMM_GLOBAL@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@PEAVVIDMM_DEVICE@@PE.c)
 */

struct VIDMM_COMPANION_CONTEXT *__fastcall VidMmCreateCompanionContext(
        VIDMM_GLOBAL *a1,
        struct VIDMM_DEVICE *a2,
        struct _VIDSCH_CONTEXT *a3)
{
  return VIDMM_GLOBAL::VidMmCreateCompanionContext(a1, a2, a3);
}
