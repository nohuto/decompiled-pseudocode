/*
 * XREFs of VidMmFreeDeferredMapping @ 0x140046D50
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x140123D10 (-FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAUVIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VidMmFreeDeferredMapping(struct VIDMM_LOCAL_ALLOC *a1)
{
  VIDMM_GLOBAL::FreeDeferredMapping(a1);
}
