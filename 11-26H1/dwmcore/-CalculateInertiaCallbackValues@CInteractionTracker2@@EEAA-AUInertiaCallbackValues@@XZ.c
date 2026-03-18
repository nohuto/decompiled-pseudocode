/*
 * XREFs of ?CalculateInertiaCallbackValues@CInteractionTracker2@@EEAA?AUInertiaCallbackValues@@XZ @ 0x180272030
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x18013DF3C (-GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetInertiaStartVelocity@CScrollAnimation@@QEBAMXZ @ 0x1801C0DEC (-GetInertiaStartVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x1801C0E10 (-GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetModifiedRestingValue@CScrollAnimation@@QEBAMXZ @ 0x1801C0E68 (-GetModifiedRestingValue@CScrollAnimation@@QEBAMXZ.c)
 *     ?CanDetermineModifiedRestingValue@CScrollAnimation@@QEBA_NXZ @ 0x1801C0EE8 (-CanDetermineModifiedRestingValue@CScrollAnimation@@QEBA_NXZ.c)
 *     ?HasImpulse@CInteractionTracker2@@QEBA_NXZ @ 0x1801D95BC (-HasImpulse@CInteractionTracker2@@QEBA_NXZ.c)
 *     ?GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1801DB744 (-GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x18020145C (-GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetScaleAdjustedPositionIfNeeded@CInteractionTracker2@@AEBA?AUD2DVector3@@AEBU2@@Z @ 0x180273D18 (-GetScaleAdjustedPositionIfNeeded@CInteractionTracker2@@AEBA-AUD2DVector3@@AEBU2@@Z.c)
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180289DE0 (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180289E58 (-GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180289EB0 (-GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker2::CalculateInertiaCallbackValues(__int64 a1, __int64 a2)
{
  char HasImpulse; // al
  CScrollAnimation *v5; // rcx
  float InertiaStartVelocity; // xmm6_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  CScrollAnimation *v9; // rcx
  float NaturalEndpoint; // xmm6_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  CScrollAnimation *v13; // rcx
  float ModifiedRestingValue; // xmm6_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  CScrollAnimation *v17; // rcx
  bool v18; // al
  CScrollAnimation *v19; // rcx
  char v20; // al
  __int64 v21; // r8
  const char *v22; // r9
  int v23; // xmm0_4
  int v24; // xmm1_4
  int v25; // xmm2_4
  int v26; // xmm1_4
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // r8
  const char *v30; // r9
  int v31; // xmm1_4
  int v32; // xmm2_4
  int v33; // xmm1_4
  int v34; // xmm3_4
  int v35; // xmm1_4
  int v36; // xmm2_4
  CScrollScaleKeyframeAnimation *v37; // rcx
  float v38; // xmm7_4
  float LastKeyframeValueForScale; // xmm6_4
  float ScaleVelocity; // xmm0_4
  int v41; // xmm1_4
  int v42; // xmm1_4
  int v43; // xmm1_4
  int v44; // xmm2_4
  int v45; // xmm3_4
  int v46; // xmm1_4
  int v47; // xmm2_4
  int v48; // xmm0_4
  int v49; // xmm1_4
  int v50; // eax
  int v52; // [rsp+20h] [rbp-50h] BYREF
  int v53; // [rsp+24h] [rbp-4Ch]
  int v54; // [rsp+28h] [rbp-48h]
  int v55; // [rsp+30h] [rbp-40h] BYREF
  int v56; // [rsp+34h] [rbp-3Ch]
  int v57; // [rsp+38h] [rbp-38h]
  int v58; // [rsp+40h] [rbp-30h] BYREF
  int v59; // [rsp+44h] [rbp-2Ch]
  int v60; // [rsp+48h] [rbp-28h]

  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1) )
  {
    HasImpulse = CInteractionTracker2::HasImpulse((CInteractionTracker2 *)a1);
    v5 = *(CScrollAnimation **)(a1 + 656);
    *(_BYTE *)(a2 + 53) = HasImpulse;
    InertiaStartVelocity = CScrollAnimation::GetInertiaStartVelocity(v5);
    v7 = CScrollAnimation::GetInertiaStartVelocity(*(CScrollAnimation **)(a1 + 664));
    *(float *)a2 = InertiaStartVelocity;
    *(float *)(a2 + 4) = v7;
    *(_DWORD *)(a2 + 8) = 0;
    v8 = CScrollAnimation::GetInertiaStartVelocity(*(CScrollAnimation **)(a1 + 648));
    v9 = *(CScrollAnimation **)(a1 + 656);
    *(float *)(a2 + 12) = v8;
    NaturalEndpoint = CScrollAnimation::GetNaturalEndpoint(v9);
    v11 = CScrollAnimation::GetNaturalEndpoint(*(CScrollAnimation **)(a1 + 664));
    *(float *)(a2 + 16) = NaturalEndpoint;
    *(float *)(a2 + 20) = v11;
    *(_DWORD *)(a2 + 24) = 0;
    v12 = CScrollAnimation::GetNaturalEndpoint(*(CScrollAnimation **)(a1 + 648));
    v13 = *(CScrollAnimation **)(a1 + 656);
    *(float *)(a2 + 28) = v12;
    ModifiedRestingValue = CScrollAnimation::GetModifiedRestingValue(v13);
    v15 = CScrollAnimation::GetModifiedRestingValue(*(CScrollAnimation **)(a1 + 664));
    *(float *)(a2 + 32) = ModifiedRestingValue;
    *(float *)(a2 + 36) = v15;
    *(_DWORD *)(a2 + 40) = 0;
    v16 = CScrollAnimation::GetModifiedRestingValue(*(CScrollAnimation **)(a1 + 648));
    v17 = *(CScrollAnimation **)(a1 + 656);
    *(float *)(a2 + 48) = v16;
    v18 = CScrollAnimation::CanDetermineModifiedRestingValue(v17)
       && CScrollAnimation::CanDetermineModifiedRestingValue(*(CScrollAnimation **)(a1 + 664));
    v19 = *(CScrollAnimation **)(a1 + 648);
    *(_BYTE *)(a2 + 44) = v18;
    *(_BYTE *)(a2 + 52) = CScrollAnimation::CanDetermineModifiedRestingValue(v19);
  }
  else
  {
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 488LL))(a1);
    v23 = *(_DWORD *)(a1 + 424);
    v24 = *(_DWORD *)(a1 + 428);
    v25 = *(_DWORD *)(a1 + 432);
    if ( v20 )
    {
      *(_WORD *)(a2 + 52) = 257;
      *(_BYTE *)(a2 + 44) = 1;
      *(_DWORD *)(a2 + 16) = v23;
      *(_DWORD *)(a2 + 20) = v24;
      *(_DWORD *)(a2 + 24) = v25;
      v26 = *(_DWORD *)(a1 + 480);
      v27 = *(_QWORD *)(a1 + 784);
      v28 = *(_DWORD *)(a2 + 24);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(a2 + 40) = v28;
      *(_DWORD *)(a2 + 28) = v26;
      *(_DWORD *)(a2 + 48) = v26;
      if ( v27 )
      {
        CScrollPositionKeyframeAnimation::GetNaturalEndpoint(v27, (__int64)&v58, v21, v22);
        CScrollPositionKeyframeAnimation::GetLastKeyframeValueForPosition(
          *(CKeyframeAnimation **)(a1 + 784),
          (__int64)&v55);
        CScrollPositionKeyframeAnimation::GetPositionVelocity(*(_QWORD *)(a1 + 784), (__int64)&v52, v29, v30);
        v31 = v53;
        v32 = v54;
        *(_DWORD *)a2 = v52;
        *(_DWORD *)(a2 + 4) = v31;
        *(_DWORD *)(a2 + 8) = v32;
        v33 = v57;
        v34 = v56;
        *(_DWORD *)(a2 + 32) = v55;
        *(_DWORD *)(a2 + 36) = v34;
        *(_DWORD *)(a2 + 40) = v33;
        v35 = v59;
        v36 = v60;
        *(_DWORD *)(a2 + 16) = v58;
        *(_DWORD *)(a2 + 20) = v35;
        *(_DWORD *)(a2 + 24) = v36;
      }
      v37 = *(CScrollScaleKeyframeAnimation **)(a1 + 792);
      if ( v37 )
      {
        v38 = CScrollScaleKeyframeAnimation::GetNaturalEndpoint(v37);
        LastKeyframeValueForScale = CScrollScaleKeyframeAnimation::GetLastKeyframeValueForScale(*(CScrollScaleKeyframeAnimation **)(a1 + 792));
        ScaleVelocity = CScrollScaleKeyframeAnimation::GetScaleVelocity(*(CScrollScaleKeyframeAnimation **)(a1 + 792));
        v41 = *(_DWORD *)(a2 + 36);
        *(float *)(a2 + 12) = ScaleVelocity;
        v58 = *(_DWORD *)(a2 + 32);
        v60 = *(_DWORD *)(a2 + 40);
        *(float *)(a2 + 48) = LastKeyframeValueForScale;
        *(float *)(a2 + 28) = v38;
        v59 = v41;
        CInteractionTracker2::GetScaleAdjustedPositionIfNeeded(a1, &v55, &v58);
        v42 = *(_DWORD *)(a2 + 20);
        v58 = *(_DWORD *)(a2 + 16);
        v60 = *(_DWORD *)(a2 + 24);
        v59 = v42;
        CInteractionTracker2::GetScaleAdjustedPositionIfNeeded(a1, &v52, &v58);
        v43 = v56;
        v44 = v57;
        *(_DWORD *)(a2 + 32) = v55;
        *(_DWORD *)(a2 + 36) = v43;
        *(_DWORD *)(a2 + 40) = v44;
        v45 = v53;
        v46 = v54;
        *(_DWORD *)(a2 + 16) = v52;
        *(_DWORD *)(a2 + 20) = v45;
        *(_DWORD *)(a2 + 24) = v46;
      }
    }
    else
    {
      *(_BYTE *)(a2 + 44) = 0;
      *(_WORD *)(a2 + 52) = 0;
      *(_DWORD *)(a2 + 32) = v23;
      *(_DWORD *)(a2 + 36) = v24;
      *(_DWORD *)(a2 + 40) = v25;
      v47 = *(_DWORD *)(a1 + 480);
      v48 = *(_DWORD *)(a1 + 428);
      v49 = *(_DWORD *)(a1 + 432);
      v50 = *(_DWORD *)(a1 + 424);
      *(_DWORD *)(a2 + 48) = v47;
      *(_DWORD *)(a2 + 16) = v50;
      *(_DWORD *)(a2 + 20) = v48;
      *(_DWORD *)(a2 + 24) = v49;
      *(_DWORD *)(a2 + 28) = v47;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
    }
  }
  return a2;
}
