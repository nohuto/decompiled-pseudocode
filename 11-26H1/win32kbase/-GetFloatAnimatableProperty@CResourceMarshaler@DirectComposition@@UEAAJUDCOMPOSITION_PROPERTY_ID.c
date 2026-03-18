/*
 * XREFs of ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x14023AFC0
 * Callers:
 *     ?GetFloatAnimatableProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x1402338B0 (-GetFloatAnimatableProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJUDCOMPOSIT.c)
 *     ?GetFloatAnimatableProperty@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x140233930 (-GetFloatAnimatableProperty@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJUDCOMPOS.c)
 *     ?GetFloatAnimatableProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x140233990 (-GetFloatAnimatableProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PR.c)
 *     ?GetFloatAnimatableProperty@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x140233AF0 (-GetFloatAnimatableProperty@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_P.c)
 *     ?GetFloatAnimatableProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x140233B20 (-GetFloatAnimatableProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJUDCOMPOSITION.c)
 *     ?GetFloatAnimatableProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x140233BB0 (-GetFloatAnimatableProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERT.c)
 *     ?GetFloatAnimatableProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x140233C20 (-GetFloatAnimatableProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_.c)
 *     ?GetFloatAnimatableProperty@CVisualMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x14023B1D0 (-GetFloatAnimatableProperty@CVisualMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@.c)
 *     ?GetFloatAnimatableProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x14023D1C0 (-GetFloatAnimatableProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROP.c)
 *     ?GetFloatAnimatableProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x14023D3A0 (-GetFloatAnimatableProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PR.c)
 *     ?GetFloatAnimatableProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x14023EA30 (-GetFloatAnimatableProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPER.c)
 *     ?GetFloatAnimatableProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x14023F6A0 (-GetFloatAnimatableProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPE.c)
 *     ?GetFloatAnimatableProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x140240760 (-GetFloatAnimatableProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PR.c)
 * Callees:
 *     ?IsIndividuallyAddressableElement@ResPropInfo@DirectComposition@@QEBA_NUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140193ABC (-IsIndividuallyAddressableElement@ResPropInfo@DirectComposition@@QEBA_NUDCOMPOSITION_PROPERTY_ID.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3)
{
  _DWORD *v6; // rax
  int v7; // ecx
  __int64 v9; // rcx
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rbx

  v6 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 248LL))(a1);
  if ( v6 && v6[3] == 18 )
  {
    if ( *v6 == v6[1] )
    {
      v7 = *(_DWORD *)((unsigned int)v6[4] + a1);
LABEL_5:
      *a3 = v7;
      return 0LL;
    }
    if ( DirectComposition::ResPropInfo::IsIndividuallyAddressableElement(v6, a2) )
    {
      v11 = *(unsigned int *)(v9 + 16);
      v12 = a2 - v10 - 1;
      if ( (unsigned __int64)(unsigned int)v12 < *(_QWORD *)(v11 + a1 + 8) )
      {
        v7 = *(_DWORD *)(*(_QWORD *)(v11 + a1) + 4 * v12);
        goto LABEL_5;
      }
    }
  }
  return 3221225485LL;
}
