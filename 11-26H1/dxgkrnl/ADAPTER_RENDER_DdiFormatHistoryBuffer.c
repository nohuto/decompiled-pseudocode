/*
 * XREFs of ADAPTER_RENDER_DdiFormatHistoryBuffer @ 0x140074C50
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiFormatHistoryBuffer@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FORMATHISTORYBUFFER@@@Z @ 0x1400715C4 (-DdiFormatHistoryBuffer@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FORMATHISTORYBUFFER@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiFormatHistoryBuffer(
        ADAPTER_RENDER *a1,
        void *a2,
        struct _DXGKARG_FORMATHISTORYBUFFER *a3)
{
  return ADAPTER_RENDER::DdiFormatHistoryBuffer(a1, a2, a3);
}
