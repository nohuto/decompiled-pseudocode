/*
 * XREFs of ?OnOpacityChanged@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@IEAAXXZ @ 0x180218F64
 * Callers:
 *     ?SetProperty@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801CFCE0 (-SetProperty@-$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@.c)
 *     ?SetProperty@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801D4880 (-SetProperty@-$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@MEAAJUDCOMPOSI.c)
 *     ?SetAngle@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x180218F38 (-SetAngle@-$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 *     ?SetOpacity@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@QEAAJM@Z @ 0x1802190D8 (-SetOpacity@-$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@QEAAJM@Z.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 */

__int64 __fastcall CEffectGroupGeneratedT<CEffectGroup,CEffect>::OnOpacityChanged(_QWORD *a1)
{
  if ( a1[6] )
    CResource::InvalidateConsumingAnimationsInternal((__int64)a1);
  return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 80LL))(a1, 0LL, 0LL);
}
