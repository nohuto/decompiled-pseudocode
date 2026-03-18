/*
 * XREFs of ?SetCenterX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x180249FC8
 * Callers:
 *     ?SetProperty@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801B4D60 (-SetProperty@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@MEAAJUDCOMPOSITION_PRO.c)
 *     ?SetProperty@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801D4880 (-SetProperty@-$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@MEAAJUDCOMPOSI.c)
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CRotateTransformGeneratedT@VCRotateTransform@@VCTransform@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024D900 (-SetProperty@-$CRotateTransformGeneratedT@VCRotateTransform@@VCTransform@@@@MEAAJUDCOMPOSITION_P.c)
 *     ?SetProperty@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024DA30 (-SetProperty@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@MEAAJUDCOMPOSITI.c)
 *     ?SetProperty@?$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024DF10 (-SetProperty@-$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@MEAAJUDCOMPOSITION_PROPE.c)
 *     ?SetProperty@?$CTranslateTransform3DGeneratedT@VCTranslateTransform3D@@VCTransform3D@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024E3B0 (-SetProperty@-$CTranslateTransform3DGeneratedT@VCTranslateTransform3D@@VCTransform3D@@@@MEAAJUDC.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetCenterX(__int64 a1, float a2)
{
  if ( a2 != *(float *)(a1 + 168) )
  {
    *(float *)(a1 + 168) = a2;
    if ( *(_QWORD *)(a1 + 48) )
      CResource::InvalidateConsumingAnimationsInternal(a1);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, 0LL, 0LL);
  }
  return 0LL;
}
