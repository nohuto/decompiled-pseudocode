/*
 * XREFs of ?GetBounds@CVisualBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E1BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18008F5F0 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 */

__int64 __fastcall CVisualBitmap::GetBounds(__int64 a1, __int64 a2, __int64 a3)
{
  CVisualTree *v5; // rcx
  __int128 v6; // xmm0

  v5 = *(CVisualTree **)(a1 + 88);
  if ( v5 )
  {
    if ( (int)CVisualTree::Clean(v5, 0LL) < 0 )
      v6 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
    else
      v6 = *(_OWORD *)(*(_QWORD *)(a1 + 88) + 80LL);
    *(_OWORD *)a3 = v6;
  }
  else
  {
    *(_QWORD *)(a3 + 8) = 0LL;
    *(_QWORD *)a3 = 0LL;
  }
  return 0LL;
}
