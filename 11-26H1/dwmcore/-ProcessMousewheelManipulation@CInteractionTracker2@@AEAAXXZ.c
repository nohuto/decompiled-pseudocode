/*
 * XREFs of ?ProcessMousewheelManipulation@CInteractionTracker2@@AEAAXXZ @ 0x180274AC0
 * Callers:
 *     ?NotifyActiveManipulationUpdated@CInteractionTracker2@@UEAAXPEAVCManipulation@@@Z @ 0x180274430 (-NotifyActiveManipulationUpdated@CInteractionTracker2@@UEAAXPEAVCManipulation@@@Z.c)
 * Callees:
 *     ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x18013DF3C (-GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?HasRunningDefaultPositionAnimation@CInteractionTracker2@@QEBA_NXZ @ 0x1801D40CC (-HasRunningDefaultPositionAnimation@CInteractionTracker2@@QEBA_NXZ.c)
 *     ?GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA?AUD2DVector3@@XZ @ 0x1801E211C (-GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA-AUD2DVector3@@XZ.c)
 *     ?AnimateToScale@CInteractionTracker2@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x180271A00 (-AnimateToScale@CInteractionTracker2@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?CalculatePositionAnimationDuration@CInteractionTracker2@@AEAAMAEBUD2DVector3@@@Z @ 0x1802723D8 (-CalculatePositionAnimationDuration@CInteractionTracker2@@AEAAMAEBUD2DVector3@@@Z.c)
 *     ?CalculateScaleAnimationDuration@CInteractionTracker2@@AEAAMM@Z @ 0x18027255C (-CalculateScaleAnimationDuration@CInteractionTracker2@@AEAAMM@Z.c)
 *     ?HasRunningDefaultScaleAnimation@CInteractionTracker2@@QEBA_NXZ @ 0x180273E70 (-HasRunningDefaultScaleAnimation@CInteractionTracker2@@QEBA_NXZ.c)
 *     ?ScrollToPosition@CInteractionTracker2@@AEAAJAEBUD2DVector3@@MH@Z @ 0x180275544 (-ScrollToPosition@CInteractionTracker2@@AEAAJAEBUD2DVector3@@MH@Z.c)
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180289DE0 (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker2::ProcessMousewheelManipulation(CKeyframeAnimation **this)
{
  double v2; // xmm0_8
  float v3; // xmm10_4
  double v4; // xmm0_8
  float v5; // xmm7_4
  double v6; // xmm0_8
  __int32 v7; // xmm2_4
  float v8; // xmm8_4
  float LastKeyframeValueForScale; // xmm0_4
  float v10; // xmm6_4
  double v11; // xmm0_8
  float v12; // xmm7_4
  float v13; // xmm3_4
  __int64 LastKeyframeValueForPosition; // rax
  CKeyframeAnimation *v15; // xmm0_8
  int v16; // eax
  float (__fastcall *v17)(CKeyframeAnimation **, _QWORD); // rax
  float (__fastcall *v18)(CKeyframeAnimation **, __int64); // rax
  CKeyframeAnimation *v19; // rdx
  unsigned __int64 v20; // rdx
  float v21; // xmm0_4
  int v22; // r9d
  CKeyframeAnimation *v23; // [rsp+38h] [rbp-29h] BYREF
  int v24; // [rsp+40h] [rbp-21h]
  __int64 v25; // [rsp+48h] [rbp-19h] BYREF
  int v26; // [rsp+50h] [rbp-11h]
  char v27[96]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+67h] BYREF

  v2 = (*((double (__fastcall **)(CKeyframeAnimation **, _QWORD))*this + 70))(this, 0LL);
  v3 = *(float *)&v2;
  v4 = (*((double (__fastcall **)(CKeyframeAnimation **, __int64))*this + 70))(this, 1LL);
  v5 = *(float *)&v4;
  v6 = (*((double (__fastcall **)(CKeyframeAnimation **, __int64))*this + 70))(this, 2LL);
  COERCE_FLOAT(v7 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  v8 = *(float *)&v6;
  if ( COERCE_FLOAT(LODWORD(v3) & v7) >= 0.0000011920929 || COERCE_FLOAT(LODWORD(v5) & v7) >= 0.0000011920929 )
  {
    v25 = 0LL;
    v26 = 0;
    if ( CInteractionTracker2::HasRunningDefaultPositionAnimation((CInteractionTracker2 *)this) )
    {
      LastKeyframeValueForPosition = CScrollPositionKeyframeAnimation::GetLastKeyframeValueForPosition(
                                       this[98],
                                       (__int64)v27);
      v15 = *(CKeyframeAnimation **)LastKeyframeValueForPosition;
      v16 = *(_DWORD *)(LastKeyframeValueForPosition + 8);
    }
    else
    {
      v15 = this[53];
      v16 = *((_DWORD *)this + 108);
    }
    v24 = v16;
    v23 = v15;
    if ( COERCE_FLOAT(LODWORD(v3) & v7) >= 0.0000011920929 )
    {
      v17 = (float (__fastcall *)(CKeyframeAnimation **, _QWORD))*((_QWORD *)*this + 73);
      *(float *)&v25 = *(float *)&v23 + v3;
      LODWORD(v23) = v17(this, 0LL);
    }
    if ( COERCE_FLOAT(LODWORD(v5) & _xmm) >= 0.0000011920929 )
    {
      v18 = (float (__fastcall *)(CKeyframeAnimation **, __int64))*((_QWORD *)*this + 73);
      *((float *)&v25 + 1) = *((float *)&v23 + 1) + v5;
      HIDWORD(v23) = v18(this, 1LL);
    }
    v19 = this[53];
    v24 = 0;
    v20 = v19 - v23;
    if ( !v20 )
      v20 = *((unsigned int *)this + 108) - (unsigned __int64)(unsigned int)_mm_cvtsi128_si32((__m128i)0LL);
    if ( v20 )
    {
      v21 = CInteractionTracker2::CalculatePositionAnimationDuration(
              (CInteractionTracker2 *)this,
              (const struct D2DVector3 *)&v25);
      CInteractionTracker2::ScrollToPosition((CInteractionTracker2 *)this, (const struct D2DVector3 *)&v23, v21, v22);
    }
  }
  else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v6 - 1.0) & v7) >= 0.0000011920929 )
  {
    if ( CInteractionTracker2::HasRunningDefaultScaleAnimation((CInteractionTracker2 *)this) )
      LastKeyframeValueForScale = CScrollScaleKeyframeAnimation::GetLastKeyframeValueForScale(this[99]);
    else
      LastKeyframeValueForScale = *((float *)this + 120);
    v10 = fmaxf(0.001, LastKeyframeValueForScale * v8);
    v11 = (*((double (__fastcall **)(CKeyframeAnimation **, __int64))*this + 73))(this, 2LL);
    v12 = *(float *)&v11;
    if ( *((float *)this + 120) != *(float *)&v11 )
    {
      v13 = CInteractionTracker2::CalculateScaleAnimationDuration((CInteractionTracker2 *)this, v10);
      InteractionSourceManager::GetActiveManipulationCenterpoint((InteractionSourceManager *)(this + 66), (__int64)&v25);
      v28 = v25;
      CInteractionTracker2::AnimateToScale((CInteractionTracker2 *)this, v12, (const struct D2DVector2 *)&v28, v13);
    }
  }
}
