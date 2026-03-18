/*
 * XREFs of ?SetProperty@?$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024D850
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEllipseCenter@?$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x18024AF98 (-SetEllipseCenter@-$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@Q.c)
 *     ?SetEllipseRadius@?$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x18024B008 (-SetEllipseRadius@-$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@Q.c)
 *     ?SetOriginOffset@?$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x18024C60C (-SetOriginOffset@-$CRadialGradientBrushGeneratedT@VCRadialGradientBrush@@VCGradientBrush@@_N@@QE.c)
 */

__int64 __fastcall CRadialGradientBrushGeneratedT<CRadialGradientBrush,CGradientBrush,bool>::SetProperty(
        CRadialGradientBrush *a1,
        int a2,
        int a3,
        __int64 *a4)
{
  int v4; // edx
  int v5; // edx
  __int64 v7; // rdx
  int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2 - 5;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return 2147942487LL;
      if ( a3 != 35 )
      {
        v7 = 9103LL;
LABEL_15:
        v8 = -2147024809;
        goto LABEL_16;
      }
      v8 = CRadialGradientBrushGeneratedT<CRadialGradientBrush,CGradientBrush,bool>::SetOriginOffset(a1, *a4);
      if ( v8 < 0 )
      {
        v7 = 9104LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
          (const char *)(unsigned int)v8);
        return (unsigned int)v8;
      }
    }
    else
    {
      if ( a3 != 35 )
      {
        v7 = 9098LL;
        goto LABEL_15;
      }
      v8 = CRadialGradientBrushGeneratedT<CRadialGradientBrush,CGradientBrush,bool>::SetEllipseRadius((__int64)a1, *a4);
      if ( v8 < 0 )
      {
        v7 = 9099LL;
        goto LABEL_16;
      }
    }
  }
  else
  {
    if ( a3 != 35 )
    {
      v7 = 9093LL;
      goto LABEL_15;
    }
    v8 = CRadialGradientBrushGeneratedT<CRadialGradientBrush,CGradientBrush,bool>::SetEllipseCenter((__int64)a1, *a4);
    if ( v8 < 0 )
    {
      v7 = 9094LL;
      goto LABEL_16;
    }
  }
  return 0LL;
}
