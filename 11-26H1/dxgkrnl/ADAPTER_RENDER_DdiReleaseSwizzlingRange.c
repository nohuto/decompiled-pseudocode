/*
 * XREFs of ADAPTER_RENDER_DdiReleaseSwizzlingRange @ 0x1400636F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiReleaseSwizzlingRange@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_RELEASESWIZZLINGRANGE@@@Z @ 0x14040ABE8 (-DdiReleaseSwizzlingRange@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_RELEASESWIZZLINGRANGE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiReleaseSwizzlingRange(
        ADAPTER_RENDER *a1,
        const struct _DXGKARG_RELEASESWIZZLINGRANGE *a2)
{
  return ADAPTER_RENDER::DdiReleaseSwizzlingRange(a1, a2);
}
