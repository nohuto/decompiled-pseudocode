/*
 * XREFs of ?SetProperty@?$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024DF10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetAngleY@?$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@QEAAJM@Z @ 0x180218FA0 (-SetAngleY@-$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@QEAAJM@Z.c)
 *     ?SetScaleX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x18021918C (-SetScaleX@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 *     ?SetCenterX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x180249FC8 (-SetCenterX@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 *     ?SetCenterX@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x18024A018 (-SetCenterX@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 */

__int64 __fastcall CSkewTransformGeneratedT<CSkewTransform,CTransform>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        float *a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  __int64 v8; // rdx
  int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
          return 2147942487LL;
        if ( a3 != 18 )
        {
          v8 = 15493LL;
LABEL_20:
          v9 = -2147024809;
          goto LABEL_21;
        }
        v9 = CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetCenterX(a1, *a4);
        if ( v9 < 0 )
        {
          v8 = 15494LL;
LABEL_21:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v8,
            (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
            (const char *)(unsigned int)v9);
          return (unsigned int)v9;
        }
      }
      else
      {
        if ( a3 != 18 )
        {
          v8 = 15488LL;
          goto LABEL_20;
        }
        v9 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetCenterX(a1, *a4);
        if ( v9 < 0 )
        {
          v8 = 15489LL;
          goto LABEL_21;
        }
      }
    }
    else
    {
      if ( a3 != 18 )
      {
        v8 = 15483LL;
        goto LABEL_20;
      }
      v9 = CSkewTransformGeneratedT<CSkewTransform,CTransform>::SetAngleY(a1, *a4);
      if ( v9 < 0 )
      {
        v8 = 15484LL;
        goto LABEL_21;
      }
    }
  }
  else
  {
    if ( a3 != 18 )
    {
      v8 = 15478LL;
      goto LABEL_20;
    }
    v9 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetScaleX(a1, *a4);
    if ( v9 < 0 )
    {
      v8 = 15479LL;
      goto LABEL_21;
    }
  }
  return 0LL;
}
