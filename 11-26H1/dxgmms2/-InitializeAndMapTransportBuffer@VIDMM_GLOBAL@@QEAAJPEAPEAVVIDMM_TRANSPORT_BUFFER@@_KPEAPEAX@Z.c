/*
 * XREFs of ?InitializeAndMapTransportBuffer@VIDMM_GLOBAL@@QEAAJPEAPEAVVIDMM_TRANSPORT_BUFFER@@_KPEAPEAX@Z @ 0x14009F2A8
 * Callers:
 *     VidMmInitializeAndMapTransportBuffer @ 0x14004D640 (VidMmInitializeAndMapTransportBuffer.c)
 * Callees:
 *     ?CreateVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@_KPEAPEAV1@PEAPEAX@Z @ 0x14004FB50 (-CreateVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@_KPEAPEAV1@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitializeAndMapTransportBuffer(
        VIDMM_GLOBAL *this,
        struct VIDMM_TRANSPORT_BUFFER **a2,
        __int64 a3,
        void **a4)
{
  return VIDMM_TRANSPORT_BUFFER::CreateVidMmTransportBuffer(this, a3, a2, a4);
}
