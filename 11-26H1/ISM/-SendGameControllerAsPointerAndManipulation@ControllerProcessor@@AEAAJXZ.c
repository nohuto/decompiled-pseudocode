/*
 * XREFs of ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x18017F654
 * Callers:
 *     ?OnSendGameControllerAsPointerAndManipulationStatic@ControllerProcessor@@CAJPEAX@Z @ 0x18017EFF0 (-OnSendGameControllerAsPointerAndManipulationStatic@ControllerProcessor@@CAJPEAX@Z.c)
 * Callees:
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A61E4 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@wil@@QEAA_NXZ @ 0x1801373B0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@.c)
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18017CD7C (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyPanDelta@ControllerProcessor@@AEAAJXZ @ 0x18017D078 (-ApplyPanDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x18017D110 (-ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ.c)
 *     ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x18017D22C (-ApplyZoomDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ @ 0x18017D5B8 (-CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ.c)
 *     ?CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z @ 0x18017D730 (-CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z @ 0x18017D8C0 (-CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z @ 0x18017DA08 (-CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z.c)
 *     SignedNormalize @ 0x18017FED8 (SignedNormalize.c)
 *     ?UpdateBoundsIfNeeded@ControllerProcessor@@AEAAXXZ @ 0x1801807E4 (-UpdateBoundsIfNeeded@ControllerProcessor@@AEAAXXZ.c)
 */

__int64 __fastcall ControllerProcessor::SendGameControllerAsPointerAndManipulation(ControllerProcessor *this)
{
  float v2; // xmm7_4
  float v3; // xmm7_4
  double v4; // xmm0_8
  float v5; // xmm8_4
  double v6; // xmm0_8
  double v7; // xmm5_8
  float v8; // xmm9_4
  double v9; // xmm0_8
  int v10; // eax
  char *v11; // rdi
  _BYTE *v12; // rsi
  char *v13; // r14
  char *v14; // rbp
  char *v15; // rbp

  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetImpl'::`2'::impl)
    || !*((_QWORD *)ISMStatics::GetGamepadInterceptionHelper() + 2) )
  {
    ControllerProcessor::UpdateBoundsIfNeeded(this);
    v2 = 0.0 - ((float (*)(void))SignedNormalize)();
    v3 = v2 + ((float (*)(void))SignedNormalize)();
    v4 = ((double (*)(void))SignedNormalize)();
    v5 = *(float *)&v4;
    v6 = ((double (*)(void))SignedNormalize)();
    v8 = *(float *)&v6;
    v9 = 0.0;
    if ( *((_BYTE *)this + 276) )
    {
      v10 = *((_DWORD *)this + 52);
      if ( (v10 & 0x10) != 0 )
        *(_QWORD *)&v9 = *((unsigned int *)this + 1948);
      if ( (v10 & 0x20) != 0 )
      {
        *(_QWORD *)&v9 = *((unsigned int *)this + 1948);
        *(float *)&v9 = *(float *)&v9 * -1.0;
      }
      if ( (v10 & 0x40) != 0 )
      {
        *(_QWORD *)&v7 = *((unsigned int *)this + 1948);
        *(float *)&v7 = *(float *)&v7 * -1.0;
      }
      if ( (v10 & 0x80u) != 0 )
        *(_QWORD *)&v7 = *((unsigned int *)this + 1948);
    }
    else
    {
      SignedNormalize();
      *(_QWORD *)&v9 = *((unsigned int *)this + 49);
      SignedNormalize();
    }
    v11 = (char *)this + 328;
    if ( (*((_BYTE *)this + 328) & 1) != 0 )
      ControllerProcessor::CalculateNavigationDelta(this, v7, v9);
    v12 = (char *)this + 1265;
    if ( *((_BYTE *)this + 1265) )
    {
      v13 = (char *)this + 328;
      if ( (*v11 & 8) != 0 )
      {
        ControllerProcessor::CalculateMarginPanDelta(this);
        v13 = (char *)this + 328;
        v12 = (char *)this + 1265;
      }
      v14 = (char *)this + 328;
      if ( (*v11 & 0x84) != 0 )
      {
        ControllerProcessor::CalculatePanDelta(this, v5, v8);
        v14 = v13;
      }
      v11 = v14;
      if ( (*v14 & 2) != 0 )
        ControllerProcessor::CalculateZoomDelta(this, v3);
    }
    if ( (*v11 & 1) != 0 )
      ControllerProcessor::ApplyNavigationDelta(this);
    v15 = v11;
    if ( *v11 < 0 )
    {
      ControllerProcessor::ApplyPanDeltaToScroll(this);
      v15 = (char *)this + 328;
    }
    if ( *v12 )
    {
      if ( (*v11 & 0xC) != 0 )
      {
        ControllerProcessor::ApplyPanDelta(this);
        v11 = v15;
      }
      if ( (*v11 & 2) != 0 )
        ControllerProcessor::ApplyZoomDelta(this);
    }
  }
  return 0LL;
}
