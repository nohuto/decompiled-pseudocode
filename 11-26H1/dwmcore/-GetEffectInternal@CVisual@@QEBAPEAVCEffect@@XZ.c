/*
 * XREFs of ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800AFD90
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18002456C (--1CVisual@@MEAA@XZ.c)
 *     ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x1800737B0 (-PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 *     ?SetEffect@CVisual@@IEAAXPEAVCEffect@@@Z @ 0x1800AFCE8 (-SetEffect@CVisual@@IEAAXPEAVCEffect@@@Z.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800AFF90 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ?UpdateScopeTransforms@CCpuClippingData@@AEAAXPEAVCVisual@@_NPEBVCMILMatrix@@@Z @ 0x1800B1F20 (-UpdateScopeTransforms@CCpuClippingData@@AEAAXPEAVCVisual@@_NPEBVCMILMatrix@@@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800C6AD0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@.c)
 * Callees:
 *     <none>
 */

struct CEffect *__fastcall CVisual::GetEffectInternal(CVisual *this)
{
  _DWORD *v1; // rax
  __int64 v2; // rdx
  _BYTE *v3; // r9
  unsigned __int64 v4; // rcx
  unsigned int v5; // r8d

  v1 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v1 & 0x1000000) != 0 )
  {
    v2 = (unsigned int)v1[1];
    v3 = v1 + 2;
    v4 = 0LL;
    v5 = 0;
    if ( (_DWORD)v2 )
    {
      while ( *v3 != 8 )
      {
        ++v5;
        ++v3;
        if ( v5 >= (unsigned int)v2 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( v5 >= (unsigned int)v2 )
        return *(struct CEffect **)v4;
    }
    v4 = (unsigned __int64)&v1[2 * v5] + ((v2 + 15) & 0xFFFFFFFFFFFFFFF8uLL);
    return *(struct CEffect **)v4;
  }
  return 0LL;
}
