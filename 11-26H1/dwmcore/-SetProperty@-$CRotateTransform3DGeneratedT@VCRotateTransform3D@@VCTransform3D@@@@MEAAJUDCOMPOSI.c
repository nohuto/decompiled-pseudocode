/*
 * XREFs of ?SetProperty@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801D4880
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnOpacityChanged@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@IEAAXXZ @ 0x180218F64 (-OnOpacityChanged@-$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@IEAAXXZ.c)
 *     ?SetScaleY@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x1802190FC (-SetScaleY@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 *     ?SetCenterX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x180249FC8 (-SetCenterX@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 *     ?SetCenterX@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x18024A018 (-SetCenterX@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 *     ?SetCenterY@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x18024A5C8 (-SetCenterY@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 *     ?SetCenterZ@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x18024A618 (-SetCenterZ@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 *     ?SetCenterZ@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x18024A668 (-SetCenterZ@-$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 */

__int64 __fastcall CRotateTransform3DGeneratedT<CRotateTransform3D,CTransform3D>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  int v4; // edx
  __int64 v6; // rdx
  int v7; // ebx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2 - 1;
  if ( !v4 )
  {
    if ( a3 == 18 )
    {
      if ( *(float *)a4 != *(float *)(a1 + 160) )
      {
        *(_DWORD *)(a1 + 160) = *a4;
        CEffectGroupGeneratedT<CEffectGroup,CEffect>::OnOpacityChanged();
      }
      return 0LL;
    }
    v6 = 14438LL;
    goto LABEL_7;
  }
  v8 = v4 - 1;
  if ( !v8 )
  {
    if ( a3 != 18 )
    {
      v6 = 14443LL;
      goto LABEL_7;
    }
    v7 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetScaleY();
    if ( v7 < 0 )
    {
      v6 = 14444LL;
      goto LABEL_8;
    }
    return 0LL;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a3 != 18 )
    {
      v6 = 14448LL;
      goto LABEL_7;
    }
    v7 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetCenterX();
    if ( v7 < 0 )
    {
      v6 = 14449LL;
      goto LABEL_8;
    }
    return 0LL;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( a3 != 18 )
    {
      v6 = 14453LL;
      goto LABEL_7;
    }
    v7 = CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetCenterX();
    if ( v7 < 0 )
    {
      v6 = 14454LL;
      goto LABEL_8;
    }
    return 0LL;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a3 != 18 )
    {
      v6 = 14458LL;
      goto LABEL_7;
    }
    v7 = CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetCenterY();
    if ( v7 < 0 )
    {
      v6 = 14459LL;
      goto LABEL_8;
    }
    return 0LL;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( a3 != 18 )
    {
      v6 = 14463LL;
      goto LABEL_7;
    }
    v7 = CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetCenterZ();
    if ( v7 < 0 )
    {
      v6 = 14464LL;
      goto LABEL_8;
    }
    return 0LL;
  }
  if ( v12 == 1 )
  {
    if ( a3 != 18 )
    {
      v6 = 14468LL;
LABEL_7:
      v7 = -2147024809;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
    v7 = CRotateTransform3DGeneratedT<CRotateTransform3D,CTransform3D>::SetCenterZ();
    if ( v7 < 0 )
    {
      v6 = 14469LL;
      goto LABEL_8;
    }
    return 0LL;
  }
  return 2147942487LL;
}
