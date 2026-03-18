/*
 * XREFs of ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTrackerBase@@W4ScrollAxis@@@Z @ 0x180219680
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18013CFC0 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker2@@AEAAJXZ @ 0x18013E7AC (-EnsureInteractionAnimations@CInteractionTracker2@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTrackerBase@@W4ScrollAxis@@@Z @ 0x18013E9D8 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTrackerBase@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::Initialize(__int64 a1, int *a2, int a3)
{
  int v4; // eax
  unsigned int v5; // edi
  _DWORD *v6; // rcx

  v4 = CScrollAnimation::Initialize(a1, a2, a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x22u, 0LL);
  }
  else
  {
    v6 = *(_DWORD **)(a1 + 416);
    *(_DWORD *)(a1 + 436) = *(_DWORD *)(a1 + 284);
    *(_DWORD *)(a1 + 480) = 1106247680;
    *(_DWORD *)(a1 + 476) = 1177280512;
    v6[4] = 1117126656;
    v6[5] = 1130430464;
    v6[6] = 1104674816;
  }
  return v5;
}
