/*
 * XREFs of ?last@?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@QEBAPEAPEAVCCompositionSurfaceBitmap@@XZ @ 0x18004D970
 * Callers:
 *     ?AddAnimationToList@CAnimationDependencies@@CAXPEAVCBaseExpression@@PEAV?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@Z @ 0x18004D3B0 (-AddAnimationToList@CAnimationDependencies@@CAXPEAVCBaseExpression@@PEAV-$vector_facade@PEAVCBas.c)
 *     ?reserve_region@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@IEAAPEAPEAVCBaseExpression@@_K0@Z @ 0x18004DA10 (-reserve_region@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@.c)
 *     ?reserve_region@?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@IEAAPEAPEAVCCompositionSurfaceBitmap@@_K0@Z @ 0x1800DFBE8 (-reserve_region@-$vector_facade@PEAVCCompositionSurfaceBitmap@@V-$pointer_buffer_impl@PEAVCCompo.c)
 *     ??$move@V?$move_iterator@V?$basic_iterator@PEAVCBaseExpression@@@detail@@@std@@V?$back_insert_iterator_unchecked@V?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@detail@@@std@@YA?AV?$back_insert_iterator_unchecked@V?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@detail@@V?$move_iterator@V?$basic_iterator@PEAVCBaseExpression@@@detail@@@0@0V12@@Z @ 0x18022BD90 (--$move@V-$move_iterator@V-$basic_iterator@PEAVCBaseExpression@@@detail@@@std@@V-$back_insert_it.c)
 *     ??$swap_generic@V?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x18022BE1C (--$swap_generic@V-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression.c)
 *     ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x1802691C8 (-SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>::last(__int64 *a1)
{
  __int64 v1; // r8
  unsigned __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  v2 = (unsigned __int64)a1;
  v3 = *a1 & 3;
  v4 = *(_DWORD *)a1 & 3;
  if ( !v3 )
  {
    v8 = 1LL;
    return v2 + 8 * v8;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v2 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_6:
    v8 = *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
    return v2 + 8 * v8;
  }
  v6 = v5 - 1;
  if ( !v6 )
    return 0LL;
  if ( v6 != 1 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  v9 = v3 - 1;
  if ( !v9 )
    goto LABEL_6;
  if ( (unsigned __int64)(v9 - 1) >= 2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  return v2;
}
