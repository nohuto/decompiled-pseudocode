/*
 * XREFs of ?SetProperty@?$CLinearGradientBrushGeneratedT@VCLinearGradientBrush@@VCGradientBrush@@_N@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801DD730
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetStartPoint@?$CLinearGradientBrushGeneratedT@VCLinearGradientBrush@@VCGradientBrush@@_N@@QEAAJUD2D_POINT_2F@@@Z @ 0x1801DBFC4 (-SetStartPoint@-$CLinearGradientBrushGeneratedT@VCLinearGradientBrush@@VCGradientBrush@@_N@@QEAA.c)
 *     ?SetEndPoint@?$CLinearGradientBrushGeneratedT@VCLinearGradientBrush@@VCGradientBrush@@_N@@QEAAJUD2D_POINT_2F@@@Z @ 0x1801DF594 (-SetEndPoint@-$CLinearGradientBrushGeneratedT@VCLinearGradientBrush@@VCGradientBrush@@_N@@QEAAJU.c)
 */

__int64 __fastcall CLinearGradientBrushGeneratedT<CLinearGradientBrush,CGradientBrush,bool>::SetProperty(
        _QWORD *a1,
        int a2,
        int a3,
        __int64 *a4)
{
  int v4; // edx
  __int64 v5; // rdx
  int started; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2 - 5;
  if ( v4 )
  {
    if ( v4 != 1 )
      return 2147942487LL;
    if ( a3 != 35 )
    {
      v5 = 2421LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    started = CLinearGradientBrushGeneratedT<CLinearGradientBrush,CGradientBrush,bool>::SetEndPoint(a1, *a4);
    if ( started < 0 )
    {
      v7 = 2422LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
        (const char *)(unsigned int)started);
      return (unsigned int)started;
    }
  }
  else
  {
    if ( a3 != 35 )
    {
      v5 = 2416LL;
      goto LABEL_9;
    }
    started = CLinearGradientBrushGeneratedT<CLinearGradientBrush,CGradientBrush,bool>::SetStartPoint(a1, *a4);
    if ( started < 0 )
    {
      v7 = 2417LL;
      goto LABEL_13;
    }
  }
  return 0LL;
}
