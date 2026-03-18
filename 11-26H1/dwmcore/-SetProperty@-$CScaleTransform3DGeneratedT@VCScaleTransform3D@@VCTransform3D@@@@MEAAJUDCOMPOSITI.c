/*
 * XREFs of ?SetProperty@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024DA30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetScaleY@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x1802190FC (-SetScaleY@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 *     ?SetScaleX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x18021918C (-SetScaleX@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 *     ?SetCenterX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x180249FC8 (-SetCenterX@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 *     ?SetCenterX@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x18024A018 (-SetCenterX@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 *     ?SetCenterY@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x18024A5C8 (-SetCenterY@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 *     ?SetCenterZ@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x18024A618 (-SetCenterZ@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 */

__int64 __fastcall CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        float *a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v10; // rdx
  int v11; // ebx
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
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 != 1 )
              return 2147942487LL;
            if ( a3 != 18 )
            {
              v10 = 14806LL;
LABEL_30:
              v11 = -2147024809;
              goto LABEL_31;
            }
            v11 = CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetCenterZ(a1, *a4);
            if ( v11 < 0 )
            {
              v10 = 14807LL;
LABEL_31:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v10,
                (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
                (const char *)(unsigned int)v11);
              return (unsigned int)v11;
            }
          }
          else
          {
            if ( a3 != 18 )
            {
              v10 = 14801LL;
              goto LABEL_30;
            }
            v11 = CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetCenterY(a1, *a4);
            if ( v11 < 0 )
            {
              v10 = 14802LL;
              goto LABEL_31;
            }
          }
        }
        else
        {
          if ( a3 != 18 )
          {
            v10 = 14796LL;
            goto LABEL_30;
          }
          v11 = CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetCenterX(a1, *a4);
          if ( v11 < 0 )
          {
            v10 = 14797LL;
            goto LABEL_31;
          }
        }
      }
      else
      {
        if ( a3 != 18 )
        {
          v10 = 14791LL;
          goto LABEL_30;
        }
        v11 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetCenterX(a1, *a4);
        if ( v11 < 0 )
        {
          v10 = 14792LL;
          goto LABEL_31;
        }
      }
    }
    else
    {
      if ( a3 != 18 )
      {
        v10 = 14786LL;
        goto LABEL_30;
      }
      v11 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetScaleY(a1, *a4);
      if ( v11 < 0 )
      {
        v10 = 14787LL;
        goto LABEL_31;
      }
    }
  }
  else
  {
    if ( a3 != 18 )
    {
      v10 = 14781LL;
      goto LABEL_30;
    }
    v11 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetScaleX(a1, *a4);
    if ( v11 < 0 )
    {
      v10 = 14782LL;
      goto LABEL_31;
    }
  }
  return 0LL;
}
