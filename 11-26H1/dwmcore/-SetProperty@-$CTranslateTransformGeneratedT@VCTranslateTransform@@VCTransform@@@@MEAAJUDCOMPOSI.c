/*
 * XREFs of ?SetProperty@?$CTranslateTransformGeneratedT@VCTranslateTransform@@VCTransform@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801CF640
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetScaleY@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x1802190FC (-SetScaleY@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 *     ?SetScaleX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x18021918C (-SetScaleX@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 */

__int64 __fastcall CTranslateTransformGeneratedT<CTranslateTransform,CTransform>::SetProperty(
        __int64 a1,
        int a2,
        int a3)
{
  int v3; // edx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a2 - 1;
  if ( !v3 )
  {
    if ( a3 == 18 )
    {
      v4 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetScaleX();
      if ( v4 < 0 )
      {
        v5 = 15773LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v5,
          (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
          (const char *)(unsigned int)v4);
        return (unsigned int)v4;
      }
      return 0LL;
    }
    v7 = 15772LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( v3 == 1 )
  {
    if ( a3 == 18 )
    {
      v4 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetScaleY();
      if ( v4 < 0 )
      {
        v5 = 15778LL;
        goto LABEL_5;
      }
      return 0LL;
    }
    v7 = 15777LL;
    goto LABEL_11;
  }
  return 2147942487LL;
}
