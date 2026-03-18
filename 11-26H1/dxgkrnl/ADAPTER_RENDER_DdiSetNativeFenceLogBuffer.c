/*
 * XREFs of ADAPTER_RENDER_DdiSetNativeFenceLogBuffer @ 0x140074D90
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetNativeFenceLogBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETNATIVEFENCELOGBUFFER@@@Z @ 0x140072A68 (-DdiSetNativeFenceLogBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETNATIVEFENCELOGBUFFER@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiSetNativeFenceLogBuffer(
        ADAPTER_RENDER *a1,
        struct _DXGKARG_SETNATIVEFENCELOGBUFFER *a2)
{
  return ADAPTER_RENDER::DdiSetNativeFenceLogBuffer(a1, a2);
}
