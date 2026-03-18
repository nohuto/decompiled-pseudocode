/*
 * XREFs of ?GetSwapChainRealization@CGlobalCompositionSurfaceInfo@@IEBAPEAVISwapChainRealization@@XZ @ 0x180185C60
 * Callers:
 *     ?GetBorderColor@CGlobalCompositionSurfaceInfo@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x180185BF0 (-GetBorderColor@CGlobalCompositionSurfaceInfo@@UEBA-AU_D3DCOLORVALUE@@XZ.c)
 * Callees:
 *     <none>
 */

struct ISwapChainRealization *__fastcall CGlobalCompositionSurfaceInfo::GetSwapChainRealization(
        CGlobalCompositionSurfaceInfo *this)
{
  struct ISwapChainRealization *result; // rax

  result = (struct ISwapChainRealization *)*((_QWORD *)this + 26);
  if ( !result
    || (unsigned int)((__int64)(*((_QWORD *)this + 24) - *((_QWORD *)this + 23)) >> 3) <= 1
    && *((_DWORD *)this + 36) != 3 )
  {
    return 0LL;
  }
  return result;
}
