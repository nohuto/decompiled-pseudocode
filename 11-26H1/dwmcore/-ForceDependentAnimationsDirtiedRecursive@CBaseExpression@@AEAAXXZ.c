/*
 * XREFs of ?ForceDependentAnimationsDirtiedRecursive@CBaseExpression@@AEAAXXZ @ 0x18027C628
 * Callers:
 *     ?FlushPendingTriggeredAnimations@CExpressionManager@@AEAAX_N@Z @ 0x18018BA14 (-FlushPendingTriggeredAnimations@CExpressionManager@@AEAAX_N@Z.c)
 *     ?ForceDependentAnimationsDirtiedRecursive@CBaseExpression@@AEAAXXZ @ 0x18027C628 (-ForceDependentAnimationsDirtiedRecursive@CBaseExpression@@AEAAXXZ.c)
 * Callees:
 *     ?ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ @ 0x18004C220 (-ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ.c)
 *     ?end@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEBA?AV?$basic_iterator@QEAVCBaseExpression@@@2@XZ @ 0x18004DDD4 (-end@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detai.c)
 *     ?GetAnimationConsumersForProperty@CResource@@QEBAAEBV?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180139BA0 (-GetAnimationConsumersForProperty@CResource@@QEBAAEBV-$vector_facade@PEAVCBaseExpression@@V-$poi.c)
 *     ?begin@?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEBA?AV?$basic_iterator@QEAVCBaseExpression@@@2@XZ @ 0x18018785C (-begin@-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@det.c)
 *     ?ForceDependentAnimationsDirtiedRecursive@CBaseExpression@@AEAAXXZ @ 0x18027C628 (-ForceDependentAnimationsDirtiedRecursive@CBaseExpression@@AEAAXXZ.c)
 */

void __fastcall CBaseExpression::ForceDependentAnimationsDirtiedRecursive(CBaseExpression *this)
{
  struct CResource *v2; // rax
  _QWORD *AnimationConsumersForProperty; // rbx
  CBaseExpression **i; // rbx
  CBaseExpression **v5; // [rsp+30h] [rbp+8h] BYREF
  CBaseExpression **v6; // [rsp+38h] [rbp+10h] BYREF

  if ( *((_QWORD *)this + 21) )
  {
    *((_QWORD *)this + 21) = 0LL;
    v2 = CBaseExpression::ResolveTargetNoRef(this);
    if ( v2 )
    {
      AnimationConsumersForProperty = CResource::GetAnimationConsumersForProperty(
                                        (__int64)v2,
                                        *((_DWORD *)this + 45) & 0x7FFFFFFF);
      detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::begin(
        AnimationConsumersForProperty,
        (unsigned __int64 *)&v5);
      detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::end(
        AnimationConsumersForProperty,
        &v6);
      for ( i = v5; i != v6; ++i )
        CBaseExpression::ForceDependentAnimationsDirtiedRecursive(*i);
    }
  }
}
