/*
 * XREFs of ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x18010D710
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180044E70 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResu.c)
 *     ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x18014A85C (-ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_I.c)
 *     ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x18014B494 (-ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCM.c)
 *     ?CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x18026FAB0 (-CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@PEAUCalculateValueRes.c)
 *     ?ProcessSetRequestedPositionAnimation@CInteractionTracker2@@AEAAXXZ @ 0x180275298 (-ProcessSetRequestedPositionAnimation@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessSetRequestedScaleAnimation@CInteractionTracker2@@AEAAXXZ @ 0x1802753D0 (-ProcessSetRequestedScaleAnimation@CInteractionTracker2@@AEAAXXZ.c)
 * Callees:
 *     ?empty@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEBA_NXZ @ 0x180023B3C (-empty@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18010E7B4 (-EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18010E86C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationCompleted(CBaseExpression *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v4; // r8
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // esi
  unsigned int v8; // eax
  __int64 result; // rax
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v1 = *((_QWORD *)this + 7);
  v2 = 0;
  if ( (!v1 || !*(_DWORD *)(v1 + 116) || !*((_DWORD *)this + 18))
    && detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::empty((_QWORD *)this + 4) )
  {
    goto LABEL_9;
  }
  v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 816LL);
  if ( *((int *)this + 2) <= 0 )
    goto LABEL_9;
  v5 = *(_DWORD *)(v4 + 296);
  LODWORD(v10) = 1;
  *((_QWORD *)&v10 + 1) = this;
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v7 = -2147024362;
    v8 = 183;
    goto LABEL_12;
  }
  if ( v6 > *(_DWORD *)(v4 + 292) )
  {
    v7 = DynArrayImpl<1>::AddMultipleAndSet(v4 + 272, 16LL, v4, &v10);
    if ( v7 >= 0 )
      goto LABEL_8;
    v8 = 194;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v8, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x21Fu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x50Au, 0LL);
    v2 = v7;
    goto LABEL_13;
  }
  *(_OWORD *)(*(_QWORD *)(v4 + 272) + 16LL * v5) = v10;
  *(_DWORD *)(v4 + 296) = v6;
LABEL_8:
  (*(void (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 8LL))(this);
LABEL_9:
  if ( (*((_BYTE *)this + 217) & 1) != 0 )
    CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(
      *(CExpressionManager **)(*((_QWORD *)this + 3) + 816LL),
      this);
LABEL_13:
  result = v2;
  *((_DWORD *)this + 56) = 1;
  return result;
}
