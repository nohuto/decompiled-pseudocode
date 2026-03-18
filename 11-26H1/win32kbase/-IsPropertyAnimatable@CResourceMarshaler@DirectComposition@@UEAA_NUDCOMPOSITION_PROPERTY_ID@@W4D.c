/*
 * XREFs of ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14023B0B0
 * Callers:
 *     ?IsPropertyAnimatable@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140234180 (-IsPropertyAnimatable@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_P.c)
 *     ?IsPropertyAnimatable@CBrightnessEffectMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1402341C0 (-IsPropertyAnimatable@CBrightnessEffectMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY.c)
 *     ?IsPropertyAnimatable@CColorMatrixEffectMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140234200 (-IsPropertyAnimatable@CColorMatrixEffectMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERT.c)
 *     ?IsPropertyAnimatable@CSaturationEffectMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140234270 (-IsPropertyAnimatable@CSaturationEffectMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY.c)
 *     ?IsPropertyAnimatable@CLinearTransferEffectMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1402342A0 (-IsPropertyAnimatable@CLinearTransferEffectMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROP.c)
 *     ?IsPropertyAnimatable@CShadowEffectMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1402342F0 (-IsPropertyAnimatable@CShadowEffectMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@.c)
 *     ?IsPropertyAnimatable@CTableTransferEffectMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140234330 (-IsPropertyAnimatable@CTableTransferEffectMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPE.c)
 *     ?IsPropertyAnimatable@CVisualMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14023B220 (-IsPropertyAnimatable@CVisualMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCO.c)
 *     ?IsPropertyAnimatable@CMatrixTransformMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14023D200 (-IsPropertyAnimatable@CMatrixTransformMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_.c)
 *     ?IsPropertyAnimatable@CMatrixTransform3DMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14023D3E0 (-IsPropertyAnimatable@CMatrixTransform3DMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERT.c)
 *     ?IsPropertyAnimatable@CRectangleClipMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14023EAE0 (-IsPropertyAnimatable@CRectangleClipMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID.c)
 *     ?IsPropertyAnimatable@CPrimitiveColorMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14023F6F0 (-IsPropertyAnimatable@CPrimitiveColorMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_I.c)
 *     ?IsPropertyAnimatable@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140240790 (-IsPropertyAnimatable@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERT.c)
 * Callees:
 *     ?IsIndividuallyAddressableElement@ResPropInfo@DirectComposition@@QEBA_NUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140193ABC (-IsIndividuallyAddressableElement@ResPropInfo@DirectComposition@@QEBA_NUDCOMPOSITION_PROPERTY_ID.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

bool __fastcall DirectComposition::CResourceMarshaler::IsPropertyAnimatable(__int64 a1, unsigned int a2, int a3)
{
  _DWORD *v6; // rax
  __int64 v8; // r9
  int v9; // r10d
  char v10; // dl

  v6 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 248LL))(a1);
  if ( !v6 )
    return 0;
  if ( *v6 == v6[1] )
  {
    if ( *v6 == a2 )
      return v6[3] == a3;
    return 0;
  }
  if ( !DirectComposition::ResPropInfo::IsIndividuallyAddressableElement(v6, a2) )
    return 0;
  v10 = 1;
  if ( (unsigned __int64)(a2 - v9 - 1) >= *(_QWORD *)(*(unsigned int *)(v8 + 16) + a1 + 8) || *(_DWORD *)(v8 + 12) != a3 )
    return 0;
  return v10;
}
