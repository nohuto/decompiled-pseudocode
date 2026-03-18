/*
 * XREFs of ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x18010D45C
 * Callers:
 *     ?Reset@CKeyframeAnimation@@AEAAX_NPEAVCExpressionValueStack@@@Z @ 0x18010BE88 (-Reset@CKeyframeAnimation@@AEAAX_NPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?empty@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEBA_NXZ @ 0x180023B3C (-empty@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18010BE20 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x18010D514 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18010E7B4 (-EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationStopped(CBaseExpression *this)
{
  unsigned int v1; // edi
  __int64 v4; // rcx
  int v5; // eax

  v1 = 0;
  if ( *((_DWORD *)this + 56) == 4 && (*((_BYTE *)this + 216) & 2) != 0 )
  {
    *((_DWORD *)this + 56) = 2;
    if ( !CNotificationResource::ShouldNotify(this)
      && detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::empty((_QWORD *)(v4 + 32))
      || (v5 = CExpressionManager::QueueAnimationStateChange(*(_QWORD *)(*((_QWORD *)this + 3) + 816LL), 2LL, this),
          v1 = v5,
          v5 >= 0) )
    {
      if ( (*((_BYTE *)this + 217) & 1) != 0 )
        CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(
          *(CExpressionManager **)(*((_QWORD *)this + 3) + 816LL),
          this);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x533u, 0LL);
    }
  }
  return v1;
}
