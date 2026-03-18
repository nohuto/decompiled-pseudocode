/*
 * XREFs of ??C?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@QEBAPEAUVertexXYW_ColorDW_UV2_AAFixup@@XZ @ 0x18025DD34
 * Callers:
 *     ??$move_backward_uninitialized@V?$basic_iterator@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@detail@@V?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@@detail@@YAXV?$basic_iterator@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@0@0V?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@@Z @ 0x18015BB40 (--$move_backward_uninitialized@V-$basic_iterator@V-$function@$$A6AJPEAVCGraphRenderingContext@CE.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@UVertexXYW_ColorDW_UV2_AAFixup@@@detail@@V?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@@detail@@YAXV?$basic_iterator@UVertexXYW_ColorDW_UV2_AAFixup@@@0@0V?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@@Z @ 0x1801DB9D0 (--$move_backward_uninitialized@V-$basic_iterator@UVertexXYW_ColorDW_UV2_AAFixup@@@detail@@V-$che.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall stdext::checked_array_iterator<VertexXYW_ColorDW_UV2_AAFixup *>::operator->(_QWORD *a1)
{
  unsigned __int64 v1; // rax

  if ( !*a1 || (v1 = a1[2], v1 >= a1[1]) )
    _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
  return *a1 + (v1 << 6);
}
