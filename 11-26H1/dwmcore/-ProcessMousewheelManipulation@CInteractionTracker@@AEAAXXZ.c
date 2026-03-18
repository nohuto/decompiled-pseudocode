/*
 * XREFs of ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x18013DCFC
 * Callers:
 *     ?NotifyActiveManipulationUpdated@CInteractionTracker@@UEAAXPEAVCManipulation@@@Z @ 0x180270E50 (-NotifyActiveManipulationUpdated@CInteractionTracker@@UEAAXPEAVCManipulation@@@Z.c)
 * Callees:
 *     ?HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ @ 0x18013DF1C (-HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x18013DF3C (-GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?CalculatePositionAnimationDuration@CInteractionTracker@@AEAAMAEBUD2DVector3@@@Z @ 0x1801D7520 (-CalculatePositionAnimationDuration@CInteractionTracker@@AEAAMAEBUD2DVector3@@@Z.c)
 *     ?GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA?AUD2DVector3@@XZ @ 0x1801E211C (-GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA-AUD2DVector3@@XZ.c)
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x1802702CC (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?CalculateScaleAnimationDuration@CInteractionTracker@@AEAAMM@Z @ 0x1802706D4 (-CalculateScaleAnimationDuration@CInteractionTracker@@AEAAMM@Z.c)
 *     ?HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ @ 0x180270D00 (-HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x18027106C (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180289DE0 (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::ProcessMousewheelManipulation(CInteractionTracker *this)
{
  double v2; // xmm0_8
  float v3; // xmm10_4
  double v4; // xmm0_8
  float v5; // xmm7_4
  double v6; // xmm0_8
  __int32 v7; // xmm2_4
  float v8; // xmm8_4
  __int64 LastKeyframeValueForPosition; // rax
  __int64 v10; // xmm0_8
  int v11; // eax
  float (__fastcall *v12)(CInteractionTracker *, _QWORD); // rax
  float (__fastcall *v13)(CInteractionTracker *, __int64); // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  float LastKeyframeValueForScale; // xmm0_4
  float v17; // xmm0_4
  int v18; // r9d
  float v19; // xmm6_4
  double v20; // xmm0_8
  float v21; // xmm7_4
  float v22; // xmm0_4
  int v23; // [rsp+28h] [rbp-39h]
  __int64 v24; // [rsp+38h] [rbp-29h] BYREF
  int v25; // [rsp+40h] [rbp-21h]
  __int64 v26; // [rsp+48h] [rbp-19h] BYREF
  int v27; // [rsp+50h] [rbp-11h]
  _BYTE v28[96]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v29; // [rsp+C8h] [rbp+67h] BYREF

  v2 = (*(double (__fastcall **)(CInteractionTracker *, _QWORD))(*(_QWORD *)this + 560LL))(this, 0LL);
  v3 = *(float *)&v2;
  v4 = (*(double (__fastcall **)(CInteractionTracker *, __int64))(*(_QWORD *)this + 560LL))(this, 1LL);
  v5 = *(float *)&v4;
  v6 = (*(double (__fastcall **)(CInteractionTracker *, __int64))(*(_QWORD *)this + 560LL))(this, 2LL);
  COERCE_FLOAT(v7 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  v8 = *(float *)&v6;
  if ( COERCE_FLOAT(LODWORD(v3) & v7) >= 0.0000011920929 || COERCE_FLOAT(LODWORD(v5) & v7) >= 0.0000011920929 )
  {
    v26 = 0LL;
    v27 = 0;
    if ( CInteractionTracker::HasRunningDefaultPositionAnimation(this) )
    {
      LastKeyframeValueForPosition = CScrollPositionKeyframeAnimation::GetLastKeyframeValueForPosition(
                                       *((_QWORD *)this + 69),
                                       v28);
      v10 = *(_QWORD *)LastKeyframeValueForPosition;
      v11 = *(_DWORD *)(LastKeyframeValueForPosition + 8);
    }
    else
    {
      v10 = *((_QWORD *)this + 23);
      v11 = *((_DWORD *)this + 48);
    }
    v25 = v11;
    v24 = v10;
    if ( COERCE_FLOAT(LODWORD(v3) & v7) >= 0.0000011920929 )
    {
      v12 = *(float (__fastcall **)(CInteractionTracker *, _QWORD))(*(_QWORD *)this + 584LL);
      *(float *)&v26 = *(float *)&v24 + v3;
      LODWORD(v24) = v12(this, 0LL);
    }
    if ( COERCE_FLOAT(LODWORD(v5) & _xmm) >= 0.0000011920929 )
    {
      v13 = *(float (__fastcall **)(CInteractionTracker *, __int64))(*(_QWORD *)this + 584LL);
      *((float *)&v26 + 1) = *((float *)&v24 + 1) + v5;
      HIDWORD(v24) = v13(this, 1LL);
    }
    v14 = *((_QWORD *)this + 23);
    v25 = 0;
    v15 = v14 - v24;
    if ( !v15 )
      v15 = *((unsigned int *)this + 48) - (unsigned __int64)(unsigned int)_mm_cvtsi128_si32((__m128i)0LL);
    if ( v15 )
    {
      v17 = CInteractionTracker::CalculatePositionAnimationDuration(this, (const struct D2DVector3 *)&v26);
      CInteractionTracker::ScrollToPosition(this, (const struct D2DVector3 *)&v24, v17, v18);
    }
  }
  else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v6 - 1.0) & v7) >= 0.0000011920929 )
  {
    if ( CInteractionTracker::HasRunningDefaultScaleAnimation(this) )
      LastKeyframeValueForScale = CScrollScaleKeyframeAnimation::GetLastKeyframeValueForScale(*((CScrollScaleKeyframeAnimation **)this
                                                                                              + 70));
    else
      LastKeyframeValueForScale = *((float *)this + 60);
    v19 = fmaxf(0.001, LastKeyframeValueForScale * v8);
    v20 = (*(double (__fastcall **)(CInteractionTracker *, __int64))(*(_QWORD *)this + 584LL))(this, 2LL);
    v21 = *(float *)&v20;
    if ( *((float *)this + 60) != *(float *)&v20 )
    {
      v22 = CInteractionTracker::CalculateScaleAnimationDuration(this, v19);
      InteractionSourceManager::GetActiveManipulationCenterpoint((char *)this + 296, &v26);
      v29 = v26;
      CInteractionTracker::AnimateToScale(this, v21, (const struct D2DVector2 *)&v29, v22, v23);
    }
  }
}
