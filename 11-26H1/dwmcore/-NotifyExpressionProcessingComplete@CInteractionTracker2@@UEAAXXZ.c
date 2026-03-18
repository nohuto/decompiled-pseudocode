/*
 * XREFs of ?NotifyExpressionProcessingComplete@CInteractionTracker2@@UEAAXXZ @ 0x1802744C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyExpressionProcessingComplete@InteractionSourceManager@@QEAAXXZ @ 0x18013BC30 (-NotifyExpressionProcessingComplete@InteractionSourceManager@@QEAAXXZ.c)
 *     ?EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker2@@AEAAXXZ @ 0x18018F5F0 (-EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker2@@AEAAXXZ.c)
 *     ?EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker2@@AEAAXXZ @ 0x18018F68C (-EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker2@@AEAAXXZ.c)
 *     ?CheckForIdle@CInteractionTracker2@@AEAAXXZ @ 0x180272600 (-CheckForIdle@CInteractionTracker2@@AEAAXXZ.c)
 *     ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker2@@AEAAXW4PropertyValueMask@1@@Z @ 0x180273148 (-EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker2@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker2@@AEAAXW4PropertyValueMask@1@@Z @ 0x1802731F0 (-EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker2@@AEAAXW4PropertyValueMask@1@@Z.c)
 */

void __fastcall CInteractionTracker2::NotifyExpressionProcessingComplete(CInteractionTracker2 *this)
{
  bool v1; // al
  __int64 v3; // rdx
  __int64 v4; // rdx

  v1 = 1;
  if ( (*((_BYTE *)this + 829) & 1) == 0 )
    v1 = *((_QWORD *)this + 131) == 0LL;
  if ( *((_DWORD *)this + 22) )
  {
    if ( v1 )
    {
      CInteractionTracker2::CheckForIdle(this);
LABEL_8:
      CInteractionTracker2::EnsurePositionIsGreaterThanOrEqualToMin((__int64 *)this, 7);
      CInteractionTracker2::EnsurePositionIsLessThanOrEqualToMax((__int64 *)this, 7);
      CInteractionTracker2::EnsureScaleIsGreaterThanOrEqualToMin(this, v3);
      CInteractionTracker2::EnsureScaleIsLessThanOrEqualToMax(this, v4);
      goto LABEL_9;
    }
  }
  else if ( v1 )
  {
    goto LABEL_8;
  }
  if ( (*((_BYTE *)this + 829) & 8) != 0 )
    goto LABEL_8;
LABEL_9:
  *((_BYTE *)this + 829) &= ~8u;
  InteractionSourceManager::NotifyExpressionProcessingComplete((CInteractionTracker2 *)((char *)this + 528));
  CInteractionTracker2::SendPendingCallbacks(this);
}
