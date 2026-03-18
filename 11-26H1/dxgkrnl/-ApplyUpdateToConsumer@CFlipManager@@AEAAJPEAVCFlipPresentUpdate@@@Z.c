/*
 * XREFs of ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x14001CB2C
 * Callers:
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x140018DCC (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x14001CD74 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1400245EC (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 * Callees:
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x14001C914 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z @ 0x14001D2A8 (-UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1400673F4 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 */

__int64 __fastcall CFlipManager::ApplyUpdateToConsumer(CFlipManager *this, struct CFlipPresentUpdate *a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  if ( *((_BYTE *)this + 32) )
  {
    return 128;
  }
  else
  {
    v4 = CEndpointResourceStateManager::ApplyIncrementalUpdate((struct _LIST_ENTRY *)((char *)this + 104), a2);
    v5 = v4;
    if ( v4 < 0 )
      CFlipManager::MarkAsLost(this, (unsigned int)v4, 21LL);
    else
      CFlipManager::UpdateNextConsumerPresentIdForUpdate(this, a2, 1u);
  }
  return v5;
}
