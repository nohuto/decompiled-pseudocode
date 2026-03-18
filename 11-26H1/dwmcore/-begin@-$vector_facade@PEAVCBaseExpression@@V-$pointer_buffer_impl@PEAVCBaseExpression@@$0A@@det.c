/*
 * XREFs of ?begin@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEBA?AV?$basic_iterator@QEAVCBaseExpression@@@2@XZ @ 0x18018785C
 * Callers:
 *     ??0?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEAA@AEBV01@@Z @ 0x18004D59C (--0-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@.c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x180137394 (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@.c)
 *     ??$move@V?$move_iterator@V?$basic_iterator@PEAVCBaseExpression@@@detail@@@std@@V?$back_insert_iterator_unchecked@V?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@detail@@@std@@YA?AV?$back_insert_iterator_unchecked@V?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@detail@@V?$move_iterator@V?$basic_iterator@PEAVCBaseExpression@@@detail@@@0@0V12@@Z @ 0x18022BD90 (--$move@V-$move_iterator@V-$basic_iterator@PEAVCBaseExpression@@@detail@@@std@@V-$back_insert_it.c)
 *     ??$swap_generic@V?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x18022BE1C (--$swap_generic@V-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression.c)
 *     ?ForceDependentAnimationsDirtiedRecursive@CBaseExpression@@AEAAXXZ @ 0x18027C628 (-ForceDependentAnimationsDirtiedRecursive@CBaseExpression@@AEAAXXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 *__fastcall detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::begin(
        _QWORD *a1,
        unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*a1 & 3) == 0 )
  {
LABEL_7:
    v2 = (unsigned __int64)a1;
    goto LABEL_6;
  }
  if ( (*a1 & 3LL) == 1 )
  {
    v2 = *a1 & 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_6;
  }
  if ( (*a1 & 3LL) != 2 )
  {
    if ( (*a1 & 3LL) != 3 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    goto LABEL_7;
  }
  v2 = 0LL;
LABEL_6:
  *a2 = v2;
  return a2;
}
