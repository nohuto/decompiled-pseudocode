/*
 * XREFs of ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18014C07C
 * Callers:
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18001AAD4 (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18002456C (--1CVisual@@MEAA@XZ.c)
 *     ?InvalidateDrawListCachesForBackdropInputsIfRequired@CVisual@@AEBAJPEBVCDrawingContext@@@Z @ 0x18002BE10 (-InvalidateDrawListCachesForBackdropInputsIfRequired@CVisual@@AEBAJPEBVCDrawingContext@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800CA388 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x1800CC140 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?Initialize@CBackdropVisualImage@@EEAAJXZ @ 0x18014BD10 (-Initialize@CBackdropVisualImage@@EEAAJXZ.c)
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x18014BF4C (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETW.c)
 *     ?UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ @ 0x18014C050 (-UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct CWindowBackgroundTreatment *__fastcall CVisual::GetWindowBackgroundTreatmentInternal(CVisual *this)
{
  _DWORD *v1; // r8
  struct CWindowBackgroundTreatment *result; // rax
  __int64 v3; // rdx
  _BYTE *v4; // r9
  __int64 v5; // rcx

  v1 = (_DWORD *)*((_QWORD *)this + 28);
  result = 0LL;
  if ( (*v1 & 0x800000) != 0 )
  {
    v3 = (unsigned int)v1[1];
    v4 = v1 + 2;
    v5 = 0LL;
    if ( (_DWORD)v3 )
    {
      while ( *v4 != 9 )
      {
        v5 = (unsigned int)(v5 + 1);
        ++v4;
        if ( (unsigned int)v5 >= (unsigned int)v3 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( (unsigned int)v5 >= (unsigned int)v3 )
        return *(struct CWindowBackgroundTreatment **)result;
    }
    result = (struct CWindowBackgroundTreatment *)((char *)&v1[2 * v5] + ((v3 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    return *(struct CWindowBackgroundTreatment **)result;
  }
  return result;
}
