/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJPEFBUTlwPair@CTransitionVisualController@@I@Z @ 0x180002954
 * Callers:
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x1800032EC (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_NPEAVCVisual@@22PEA_N@Z @ 0x180032EE0 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual.c)
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x1800A94B0 (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CTransitionVisualController::TlwPair,0>::AddMultipleAndSet(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax

  v2 = *((unsigned int *)a1 + 6);
  v4 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB7u, 0LL);
  }
  else
  {
    v5 = 0;
    if ( v4 > *((_DWORD *)a1 + 5) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 24LL, 1LL, a2);
      v5 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xC2u, 0LL);
    }
    else
    {
      v6 = 3 * v2;
      v7 = *a1;
      *(_OWORD *)(v7 + 8 * v6) = *(_OWORD *)a2;
      *(_QWORD *)(v7 + 8 * v6 + 16) = *(_QWORD *)(a2 + 16);
      *((_DWORD *)a1 + 6) = v4;
    }
  }
  return v5;
}
