/*
 * XREFs of ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTrackerBase@@@Z @ 0x1802191DC
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18013CFC0 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker2@@AEAAJXZ @ 0x18013E7AC (-EnsureInteractionAnimations@CInteractionTracker2@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTrackerBase@@W4ScrollAxis@@@Z @ 0x18013E9D8 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTrackerBase@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerScaleAnimation::Initialize(
        CInteractionTrackerScaleAnimation *this,
        struct CInteractionTrackerBase *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  _DWORD *v5; // rcx

  v3 = CScrollAnimation::Initialize((__int64)this, (int *)a2, 2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x26u, 0LL);
  }
  else
  {
    v5 = (_DWORD *)*((_QWORD *)this + 52);
    *((_DWORD *)this + 109) = *((_DWORD *)this + 71);
    *((_DWORD *)this + 120) = 1028443341;
    *((_DWORD *)this + 119) = 1084227584;
    v5[4] = 1117126656;
    v5[5] = 1130430464;
    v5[6] = 1104674816;
  }
  return v4;
}
