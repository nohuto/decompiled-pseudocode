/*
 * XREFs of ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x1800E08D0
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18002456C (--1CVisual@@MEAA@XZ.c)
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180081C40 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x1800DF574 (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z.c)
 *     ?HasSingleD2DBitmapOrPrimitiveGroup@CVisual@@QEBA_NXZ @ 0x1800DF600 (-HasSingleD2DBitmapOrPrimitiveGroup@CVisual@@QEBA_NXZ.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEBA_NXZ @ 0x1800E03D0 (-HasNonEmptyContent@CWindowNode@@UEBA_NXZ.c)
 *     ?AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x180260580 (-AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x180261068 (-RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CVisual::GetProjectedShadowReceivers(__int64 a1)
{
  _DWORD *v1; // r8
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  _BYTE *v4; // r9
  __int64 v5; // rcx

  v1 = *(_DWORD **)(a1 + 224);
  result = 0LL;
  if ( (*v1 & 0x80000) != 0 )
  {
    v3 = (unsigned int)v1[1];
    v4 = v1 + 2;
    v5 = 0LL;
    if ( (_DWORD)v3 )
    {
      while ( *v4 != 13 )
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
        return *(_QWORD *)result;
    }
    result = (unsigned __int64)&v1[2 * v5] + ((v3 + 15) & 0xFFFFFFFFFFFFFFF8uLL);
    return *(_QWORD *)result;
  }
  return result;
}
