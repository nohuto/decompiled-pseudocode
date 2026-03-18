/*
 * XREFs of ?CalculateInertiaCallbackValues@CInteractionTracker@@EEAA?AUInertiaCallbackValues@@XZ @ 0x1801C0BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x18013DF3C (-GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetInertiaStartVelocity@CScrollAnimation@@QEBAMXZ @ 0x1801C0DEC (-GetInertiaStartVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x1801C0E10 (-GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetModifiedRestingValue@CScrollAnimation@@QEBAMXZ @ 0x1801C0E68 (-GetModifiedRestingValue@CScrollAnimation@@QEBAMXZ.c)
 *     ?CanDetermineModifiedRestingValue@CScrollAnimation@@QEBA_NXZ @ 0x1801C0EE8 (-CanDetermineModifiedRestingValue@CScrollAnimation@@QEBA_NXZ.c)
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x1801C0F24 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1801DB744 (-GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x18020145C (-GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA?AUD2DVector3@@AEBU2@@Z @ 0x180270C14 (-GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA-AUD2DVector3@@AEBU2@@Z.c)
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180289DE0 (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180289E58 (-GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180289EB0 (-GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker::CalculateInertiaCallbackValues(__int64 a1, __int64 a2)
{
  char v4; // al
  int v5; // xmm0_4
  int v6; // xmm1_4
  int v7; // xmm2_4
  int v8; // xmm2_4
  int v9; // xmm0_4
  int v10; // xmm1_4
  int v11; // eax
  bool HasImpulse; // al
  CScrollAnimation *v14; // rcx
  float InertiaStartVelocity; // xmm6_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  CScrollAnimation *v18; // rcx
  float NaturalEndpoint; // xmm6_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  CScrollAnimation *v22; // rcx
  float ModifiedRestingValue; // xmm6_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  CScrollAnimation *v26; // rcx
  bool v27; // al
  CScrollAnimation *v28; // rcx
  int v29; // xmm1_4
  __int64 v30; // rcx
  int v31; // eax
  int v32; // xmm1_4
  int v33; // xmm2_4
  int v34; // xmm1_4
  int v35; // xmm3_4
  int v36; // xmm1_4
  int v37; // xmm2_4
  CScrollScaleKeyframeAnimation *v38; // rcx
  float v39; // xmm7_4
  float LastKeyframeValueForScale; // xmm6_4
  float ScaleVelocity; // xmm0_4
  int v42; // xmm1_4
  int v43; // xmm1_4
  int v44; // xmm1_4
  int v45; // xmm2_4
  int v46; // xmm3_4
  int v47; // xmm1_4
  int v48; // [rsp+20h] [rbp-50h] BYREF
  int v49; // [rsp+24h] [rbp-4Ch]
  int v50; // [rsp+28h] [rbp-48h]
  int v51; // [rsp+30h] [rbp-40h] BYREF
  int v52; // [rsp+34h] [rbp-3Ch]
  int v53; // [rsp+38h] [rbp-38h]
  int v54; // [rsp+40h] [rbp-30h] BYREF
  int v55; // [rsp+44h] [rbp-2Ch]
  int v56; // [rsp+48h] [rbp-28h]

  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1) )
  {
    HasImpulse = CInteractionTracker::HasImpulse((CInteractionTracker *)a1);
    v14 = *(CScrollAnimation **)(a1 + 424);
    *(_BYTE *)(a2 + 53) = HasImpulse;
    InertiaStartVelocity = CScrollAnimation::GetInertiaStartVelocity(v14);
    v16 = CScrollAnimation::GetInertiaStartVelocity(*(CScrollAnimation **)(a1 + 432));
    *(float *)a2 = InertiaStartVelocity;
    *(float *)(a2 + 4) = v16;
    *(_DWORD *)(a2 + 8) = 0;
    v17 = CScrollAnimation::GetInertiaStartVelocity(*(CScrollAnimation **)(a1 + 416));
    v18 = *(CScrollAnimation **)(a1 + 424);
    *(float *)(a2 + 12) = v17;
    NaturalEndpoint = CScrollAnimation::GetNaturalEndpoint(v18);
    v20 = CScrollAnimation::GetNaturalEndpoint(*(CScrollAnimation **)(a1 + 432));
    *(float *)(a2 + 16) = NaturalEndpoint;
    *(float *)(a2 + 20) = v20;
    *(_DWORD *)(a2 + 24) = 0;
    v21 = CScrollAnimation::GetNaturalEndpoint(*(CScrollAnimation **)(a1 + 416));
    v22 = *(CScrollAnimation **)(a1 + 424);
    *(float *)(a2 + 28) = v21;
    ModifiedRestingValue = CScrollAnimation::GetModifiedRestingValue(v22);
    v24 = CScrollAnimation::GetModifiedRestingValue(*(CScrollAnimation **)(a1 + 432));
    *(float *)(a2 + 32) = ModifiedRestingValue;
    *(float *)(a2 + 36) = v24;
    *(_DWORD *)(a2 + 40) = 0;
    v25 = CScrollAnimation::GetModifiedRestingValue(*(CScrollAnimation **)(a1 + 416));
    v26 = *(CScrollAnimation **)(a1 + 424);
    *(float *)(a2 + 48) = v25;
    v27 = CScrollAnimation::CanDetermineModifiedRestingValue(v26)
       && CScrollAnimation::CanDetermineModifiedRestingValue(*(CScrollAnimation **)(a1 + 432));
    v28 = *(CScrollAnimation **)(a1 + 416);
    *(_BYTE *)(a2 + 44) = v27;
    *(_BYTE *)(a2 + 52) = CScrollAnimation::CanDetermineModifiedRestingValue(v28);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 488LL))(a1);
    v5 = *(_DWORD *)(a1 + 184);
    v6 = *(_DWORD *)(a1 + 188);
    v7 = *(_DWORD *)(a1 + 192);
    if ( v4 )
    {
      *(_WORD *)(a2 + 52) = 257;
      *(_BYTE *)(a2 + 44) = 1;
      *(_DWORD *)(a2 + 16) = v5;
      *(_DWORD *)(a2 + 20) = v6;
      *(_DWORD *)(a2 + 24) = v7;
      v29 = *(_DWORD *)(a1 + 240);
      v30 = *(_QWORD *)(a1 + 552);
      v31 = *(_DWORD *)(a2 + 24);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(a2 + 40) = v31;
      *(_DWORD *)(a2 + 28) = v29;
      *(_DWORD *)(a2 + 48) = v29;
      if ( v30 )
      {
        CScrollPositionKeyframeAnimation::GetNaturalEndpoint(v30, &v54);
        CScrollPositionKeyframeAnimation::GetLastKeyframeValueForPosition(
          *(CKeyframeAnimation **)(a1 + 552),
          (__int64)&v51);
        CScrollPositionKeyframeAnimation::GetPositionVelocity(*(_QWORD *)(a1 + 552), &v48);
        v32 = v49;
        v33 = v50;
        *(_DWORD *)a2 = v48;
        *(_DWORD *)(a2 + 4) = v32;
        *(_DWORD *)(a2 + 8) = v33;
        v34 = v53;
        v35 = v52;
        *(_DWORD *)(a2 + 32) = v51;
        *(_DWORD *)(a2 + 36) = v35;
        *(_DWORD *)(a2 + 40) = v34;
        v36 = v55;
        v37 = v56;
        *(_DWORD *)(a2 + 16) = v54;
        *(_DWORD *)(a2 + 20) = v36;
        *(_DWORD *)(a2 + 24) = v37;
      }
      v38 = *(CScrollScaleKeyframeAnimation **)(a1 + 560);
      if ( v38 )
      {
        v39 = CScrollScaleKeyframeAnimation::GetNaturalEndpoint(v38);
        LastKeyframeValueForScale = CScrollScaleKeyframeAnimation::GetLastKeyframeValueForScale(*(CScrollScaleKeyframeAnimation **)(a1 + 560));
        ScaleVelocity = CScrollScaleKeyframeAnimation::GetScaleVelocity(*(CScrollScaleKeyframeAnimation **)(a1 + 560));
        v42 = *(_DWORD *)(a2 + 36);
        *(float *)(a2 + 12) = ScaleVelocity;
        v54 = *(_DWORD *)(a2 + 32);
        v56 = *(_DWORD *)(a2 + 40);
        *(float *)(a2 + 48) = LastKeyframeValueForScale;
        *(float *)(a2 + 28) = v39;
        v55 = v42;
        CInteractionTracker::GetScaleAdjustedPositionIfNeeded(a1, &v51, &v54);
        v43 = *(_DWORD *)(a2 + 20);
        v54 = *(_DWORD *)(a2 + 16);
        v56 = *(_DWORD *)(a2 + 24);
        v55 = v43;
        CInteractionTracker::GetScaleAdjustedPositionIfNeeded(a1, &v48, &v54);
        v44 = v52;
        v45 = v53;
        *(_DWORD *)(a2 + 32) = v51;
        *(_DWORD *)(a2 + 36) = v44;
        *(_DWORD *)(a2 + 40) = v45;
        v46 = v49;
        v47 = v50;
        *(_DWORD *)(a2 + 16) = v48;
        *(_DWORD *)(a2 + 20) = v46;
        *(_DWORD *)(a2 + 24) = v47;
      }
    }
    else
    {
      *(_BYTE *)(a2 + 44) = 0;
      *(_WORD *)(a2 + 52) = 0;
      *(_DWORD *)(a2 + 32) = v5;
      *(_DWORD *)(a2 + 36) = v6;
      *(_DWORD *)(a2 + 40) = v7;
      v8 = *(_DWORD *)(a1 + 240);
      v9 = *(_DWORD *)(a1 + 188);
      v10 = *(_DWORD *)(a1 + 192);
      v11 = *(_DWORD *)(a1 + 184);
      *(_DWORD *)(a2 + 48) = v8;
      *(_DWORD *)(a2 + 16) = v11;
      *(_DWORD *)(a2 + 20) = v9;
      *(_DWORD *)(a2 + 24) = v10;
      *(_DWORD *)(a2 + 28) = v8;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
    }
  }
  return a2;
}
