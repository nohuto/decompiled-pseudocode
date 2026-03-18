/*
 * XREFs of ?GetAnimationConsumersForProperty@CResource@@QEBAAEBV?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180139BA0
 * Callers:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18010E310 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ?BigHammerInvalidateConsumingAnimations@CInteractionTracker2@@IEAAXW4Enum@InteractionTracker2Property@@@Z @ 0x1801396E4 (-BigHammerInvalidateConsumingAnimations@CInteractionTracker2@@IEAAXW4Enum@InteractionTracker2Pro.c)
 *     ?BigHammerInvalidateConsumingAnimations@CInteractionTracker@@IEAAXW4Enum@InteractionTrackerProperty@@@Z @ 0x1801398A0 (-BigHammerInvalidateConsumingAnimations@CInteractionTracker@@IEAAXW4Enum@InteractionTrackerPrope.c)
 *     ?ForceDependentAnimationsDirtiedRecursive@CBaseExpression@@AEAAXXZ @ 0x18027C628 (-ForceDependentAnimationsDirtiedRecursive@CBaseExpression@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void *__fastcall CResource::GetAnimationConsumersForProperty(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx
  void *v5; // rcx

  v2 = *(_QWORD *)(a1 + 48);
  if ( !v2 )
    return &CAnimationDependency::EmptyList;
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(_QWORD *)(v2 + 16);
  if ( *(_DWORD *)v2 )
  {
    while ( v3 != v4 )
    {
      if ( *(_DWORD *)(v3 + 16) == a2 )
        goto LABEL_8;
      v3 += 24LL;
    }
    goto LABEL_11;
  }
  if ( a2 >= (unsigned __int64)((v4 - v3) >> 4) )
  {
LABEL_11:
    v3 = 0LL;
    goto LABEL_8;
  }
  v3 += 16LL * a2;
LABEL_8:
  v5 = &CAnimationDependency::EmptyList;
  if ( v3 )
    return (void *)v3;
  return v5;
}
