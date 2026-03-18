/*
 * XREFs of VidMmFreeTransportBuffer @ 0x14004D5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeTransportBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_TRANSPORT_BUFFER@@@Z @ 0x14009E714 (-FreeTransportBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_TRANSPORT_BUFFER@@@Z.c)
 */

__int64 __fastcall VidMmFreeTransportBuffer(VIDMM_GLOBAL *a1, struct VIDMM_TRANSPORT_BUFFER *a2)
{
  return VIDMM_GLOBAL::FreeTransportBuffer(a1, a2);
}
