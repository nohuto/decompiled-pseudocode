/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VCColorDrawListBrush@@U?$default_delete@VCColorDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1801CC9E0
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18003DDB4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::out_param_t<std::unique_ptr<CColorDrawListBrush>>::~out_param_t<std::unique_ptr<CColorDrawListBrush>>(
        __int64 **a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  if ( *((_BYTE *)a1 + 16) )
  {
    result = (__int64)a1[1];
    v2 = **a1;
    **a1 = result;
    if ( v2 )
      return std::default_delete<CColorDrawListBrush>::operator()(a1, v2);
  }
  return result;
}
