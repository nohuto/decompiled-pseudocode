/*
 * XREFs of ?CanIgnoreAncestorCpuClips@CCpuClippingData@@QEBA_NXZ @ 0x18018FFE4
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCpuClippingData::CanIgnoreAncestorCpuClips(CCpuClippingData *this)
{
  return *((_BYTE *)this + 64);
}
