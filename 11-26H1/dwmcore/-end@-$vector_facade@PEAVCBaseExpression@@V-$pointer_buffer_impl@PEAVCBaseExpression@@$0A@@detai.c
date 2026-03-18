/*
 * XREFs of ?end@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEBA?AV?$basic_iterator@QEAVCBaseExpression@@@2@XZ @ 0x18004DDD4
 * Callers:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ??0?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEAA@AEBV01@@Z @ 0x18004D59C (--0-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@.c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x180137394 (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@.c)
 *     ?BigHammerInvalidateConsumingAnimations@CInteractionTracker2@@IEAAXW4Enum@InteractionTracker2Property@@@Z @ 0x1801396E4 (-BigHammerInvalidateConsumingAnimations@CInteractionTracker2@@IEAAXW4Enum@InteractionTracker2Pro.c)
 *     ?BigHammerInvalidateConsumingAnimations@CInteractionTracker@@IEAAXW4Enum@InteractionTrackerProperty@@@Z @ 0x1801398A0 (-BigHammerInvalidateConsumingAnimations@CInteractionTracker@@IEAAXW4Enum@InteractionTrackerPrope.c)
 *     ?ForceDependentAnimationsDirtiedRecursive@CBaseExpression@@AEAAXXZ @ 0x18027C628 (-ForceDependentAnimationsDirtiedRecursive@CBaseExpression@@AEAAXXZ.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ @ 0x18004D640 (-first@-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::end(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // r9
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  v4 = *a1 & 3LL;
  if ( v4 )
  {
    if ( (*(_DWORD *)a1 & 3) == 1LL )
    {
      v5 = *a1 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_10:
      v2 = *(_QWORD *)(detail::pointer_buffer_impl<CBaseExpression *,0>::first(a1) - 16);
      goto LABEL_11;
    }
    if ( (*(_DWORD *)a1 & 3) == 2LL )
    {
      v5 = 0LL;
      goto LABEL_11;
    }
    if ( (*(_DWORD *)a1 & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v5 = (unsigned __int64)a1;
  if ( !v4 )
  {
    v2 = 1LL;
    goto LABEL_11;
  }
  v6 = v4 - 1;
  if ( !v6 )
    goto LABEL_10;
  if ( (unsigned __int64)(v6 - 1) >= 2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_11:
  *a2 = v5 + 8 * v2;
  return a2;
}
