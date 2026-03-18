/*
 * XREFs of ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@UDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180140800
 * Callers:
 *     ?GetProperty@CGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1802615A0 (-GetProperty@CGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CVisualSurface@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180263560 (-GetProperty@CVisualSurface@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 *     ?SetProperty@CVisualSurface@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180263620 (-SetProperty@CVisualSurface@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEB.c)
 *     ?GetProperty@CDropShadow@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x18026D3F0 (-GetProperty@CDropShadow@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CEllipseGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x18026ECB0 (-GetProperty@CEllipseGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CLineGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x18027A9A0 (-GetProperty@CLineGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CSpriteVectorShape@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180282910 (-GetProperty@CSpriteVectorShape@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CViewBox@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180285F70 (-GetProperty@CViewBox@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 *     ?SetProperty@CViewBox@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180286150 (-SetProperty@CViewBox@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall AnimationHelper::FindAnimatablePropertyInfo(_QWORD *a1, int a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // r9

  v3 = a1[1];
  v4 = v3 + 8LL * *a1;
  while ( v3 != v4 )
  {
    if ( a2 == **(_DWORD **)v3 && (a3 == *(_DWORD *)(*(_QWORD *)v3 + 4LL) || !a3) )
      return *(_DWORD **)v3;
    v3 += 8LL;
  }
  return 0LL;
}
