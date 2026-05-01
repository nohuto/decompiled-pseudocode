/*
 * XREFs of ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x18024FCC0
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18024EFF0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180016154 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180134510 (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18013E3B0 (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x18013E8FC (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z @ 0x1801D33C8 (-IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z.c)
 *     ?GetScaledCeiledMonitorRect@MonitorInformation@KeyboardHosting@@QEBA?AURect@Foundation@Windows@@XZ @ 0x18024E0C0 (-GetScaledCeiledMonitorRect@MonitorInformation@KeyboardHosting@@QEBA-AURect@Foundation@Windows@@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x180476608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 *     ?GetViewRectNearFocusedElement@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@1PEAU9Foundation@8@PEA_N3@Z @ 0x180481550 (-GetViewRectNearFocusedElement@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRe.c)
 *     ?GetViewRectRelativeToInside@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@PEAU9Foundation@8@@Z @ 0x180481770 (-GetViewRectRelativeToInside@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequ.c)
 *     ??$TextSelectionBoundingFetched@AEAPEBGAEAMAEAMAEAMAEAMAEAW4DEVICE_SCALE_FACTOR@@@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@SAXAEAPEBGAEAM111AEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x180485C58 (--$TextSelectionBoundingFetched@AEAPEBGAEAMAEAMAEAMAEAMAEAW4DEVICE_SCALE_FACTOR@@@FocusedElement.c)
 *     std::call_once__lambda_51403b28e8b81be276cead8d023ce32d___ @ 0x180485D60 (std--call_once__lambda_51403b28e8b81be276cead8d023ce32d___.c)
 *     ??1FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180485E04 (--1FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     GetWorkAreaRect @ 0x180485E30 (GetWorkAreaRect.c)
 *     GetWorkAreaRect_0 @ 0x180485F40 (GetWorkAreaRect_0.c)
 *     ?IsViewOccludingCaret@ViewRectProvider@KeyboardHosting@@AEAA_NAEAURect@Foundation@Windows@@0@Z @ 0x180486028 (-IsViewOccludingCaret@ViewRectProvider@KeyboardHosting@@AEAA_NAEAURect@Foundation@Windows@@0@Z.c)
 *     ?StartActivity@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x180486124 (-StartActivity@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAAXAEBURect@Foundation@Windows@@_N1@Z @ 0x1804861D4 (-Stop@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAAXAEBURect@Fo.c)
 *     ?GetBoundRectForCursorPos@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x1804894C4 (-GetBoundRectForCursorPos@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?GetBoundingRectForSelectedText@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x180489530 (-GetBoundingRectForSelectedText@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@QEAA_NXZ @ 0x18048A38C (-PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall KeyboardHosting::ViewRectProvider::GetViewRectFromPositionAndSizeRequest(
        __int64 a1,
        const struct Windows::Foundation::Rect *a2,
        KeyboardHosting *a3,
        __int64 a4,
        __int128 *a5,
        __int64 a6,
        char a7,
        __int64 a8,
        bool *a9,
        char *a10)
{
  float v13; // xmm8_4
  float v14; // xmm7_4
  char v15; // di
  float v16; // xmm9_4
  float v17; // xmm10_4
  __m128i *v18; // r8
  __m128i *v19; // r9
  __m128 v20; // xmm0
  const struct Windows::Foundation::Rect *v21; // rdx
  char v22; // dl
  __m128i v23; // xmm2
  int ViewRectNearCaret; // eax
  unsigned int v25; // edi
  const struct tagRECT *v27; // rdx
  KeyboardHosting::UIAutomationHelpers *v28; // rcx
  int BoundRectForCursorPos; // eax
  const wchar_t *v30; // rcx
  __m128i v31; // xmm6
  char IsEnabled; // al
  int v33; // r8d
  char v34; // al
  const struct Windows::Foundation::Rect *v35; // rdx
  char v36; // al
  bool *v37; // rsi
  int v38; // eax
  unsigned int v39; // edi
  int ViewRectNearFocusedElement; // eax
  unsigned int v41; // edi
  KeyboardHosting::ViewRectProvider *v42; // rcx
  int v43; // r14d
  __int64 v44; // rdx
  __m128i v45; // xmm2
  int ViewRectRelativeToInside; // edi
  __int64 v47; // rdx
  KeyboardHosting::ViewRectProvider *v48; // rcx
  struct tagRECT v49; // xmm2
  struct tagRECT v50; // xmm2
  char v51; // r14
  __m128i *ScaledCeiledMonitorRect; // rax
  __m128i v53; // [rsp+40h] [rbp-2A8h] BYREF
  bool IsRectNull; // [rsp+50h] [rbp-298h]
  __int128 v55; // [rsp+58h] [rbp-290h] BYREF
  __m128i v56; // [rsp+70h] [rbp-278h] BYREF
  char *v57; // [rsp+80h] [rbp-268h]
  __int128 v58; // [rsp+90h] [rbp-258h] BYREF
  __int128 v59; // [rsp+A0h] [rbp-248h]
  __int128 v60; // [rsp+B0h] [rbp-238h]
  __int128 v61; // [rsp+C0h] [rbp-228h]
  __int64 v62; // [rsp+D0h] [rbp-218h]
  __m128i v63; // [rsp+E0h] [rbp-208h] BYREF
  struct tagRECT v64; // [rsp+F0h] [rbp-1F8h] BYREF
  _QWORD v65[42]; // [rsp+100h] [rbp-1E8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+0h]

  v63.m128i_i64[0] = (__int64)a9;
  v57 = a10;
  v13 = (float)*((int *)a5 + 2);
  v14 = (float)*((int *)a5 + 1);
  *(_QWORD *)a8 = 0LL;
  *(float *)(a8 + 8) = v13;
  *(float *)(a8 + 12) = v14;
  *a9 = 0;
  *a10 = 0;
  if ( *((_BYTE *)a5 + 44) || (v15 = 0, *((_BYTE *)a5 + 45)) )
    v15 = 1;
  *(_QWORD *)&v55 = 0LL;
  v16 = *((float *)a5 + 16);
  *((float *)&v55 + 2) = v16;
  v17 = *((float *)a5 + 17);
  *((float *)&v55 + 3) = v17;
  IsRectNull = KeyboardHosting::IsRectNull((KeyboardHosting *)((char *)a5 + 56), a2);
  if ( IsRectNull )
    *((_QWORD *)&v55 + 1) = __PAIR64__(LODWORD(v14), LODWORD(v13));
  if ( *(_DWORD *)a5 == 1 )
  {
    v51 = *((_BYTE *)a5 + 47);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
    {
      if ( v51 )
      {
        v56 = *(__m128i *)GetWorkAreaRect_0(&v56, a1 + (-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFF60uLL) + 680);
        v58 = *a5;
        v59 = a5[1];
        v60 = a5[2];
        v61 = a5[3];
        v62 = *((_QWORD *)a5 + 8);
        ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(&v58, &v56, &v55);
        if ( ViewRectRelativeToInside < 0 )
        {
          v47 = 85LL;
          goto LABEL_68;
        }
      }
      else
      {
        v56 = *(__m128i *)((-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFF40uLL) + a1 + 740);
        v58 = *a5;
        v59 = a5[1];
        v60 = a5[2];
        v61 = a5[3];
        v62 = *((_QWORD *)a5 + 8);
        ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(&v58, &v56, &v55);
        if ( ViewRectRelativeToInside < 0 )
        {
          v47 = 90LL;
          goto LABEL_68;
        }
      }
    }
    else if ( v51 )
    {
      v56 = *(__m128i *)GetWorkAreaRect(&v56, a1 + (-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFEB0uLL) + 352);
      v58 = *a5;
      v59 = a5[1];
      v60 = a5[2];
      v61 = a5[3];
      v62 = *((_QWORD *)a5 + 8);
      ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(&v58, &v56, &v55);
      if ( ViewRectRelativeToInside < 0 )
      {
        v47 = 98LL;
        goto LABEL_68;
      }
    }
    else
    {
      if ( v15 )
      {
        v56 = *(__m128i *)(a1 + 24);
        ScaledCeiledMonitorRect = &v56;
      }
      else
      {
        ScaledCeiledMonitorRect = (__m128i *)KeyboardHosting::MonitorInformation::GetScaledCeiledMonitorRect(
                                               a1 + 352,
                                               &v56);
      }
      v56 = *ScaledCeiledMonitorRect;
      v58 = *a5;
      v59 = a5[1];
      v60 = a5[2];
      v61 = a5[3];
      v62 = *((_QWORD *)a5 + 8);
      ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(&v58, &v56, &v55);
      if ( ViewRectRelativeToInside < 0 )
      {
        v47 = 103LL;
        goto LABEL_68;
      }
    }
  }
  else if ( *(_DWORD *)a5 == 2 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
      v50 = (struct tagRECT)_mm_loadu_si128((const __m128i *)((-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFF60uLL) + a1 + 708));
    else
      v50 = (struct tagRECT)_mm_loadu_si128((const __m128i *)((-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFEB0uLL) + a1 + 360));
    v56 = *(__m128i *)a3;
    v53 = *(__m128i *)a2;
    v64 = v50;
    v58 = *a5;
    v59 = a5[1];
    v60 = a5[2];
    v61 = a5[3];
    v62 = *((_QWORD *)a5 + 8);
    ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
                                 (__int64)&v58,
                                 (float *)&v64.left,
                                 (float *)v53.m128i_i32,
                                 (float *)v56.m128i_i32,
                                 a7,
                                 (__int64)&v55,
                                 a9,
                                 v57);
    if ( ViewRectRelativeToInside < 0 )
    {
      v47 = 119LL;
      goto LABEL_68;
    }
  }
  else if ( *(_DWORD *)a5 == 3 )
  {
    v56 = *v18;
    v58 = *a5;
    v59 = a5[1];
    v60 = a5[2];
    v61 = a5[3];
    v62 = *((_QWORD *)a5 + 8);
    v43 = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(&v58, &v56, &v55);
    if ( v43 < 0 )
    {
      v44 = 134LL;
      goto LABEL_52;
    }
    if ( KeyboardHosting::ViewRectProvider::IsViewOccludingCaret(v48, (struct Windows::Foundation::Rect *)&v55, a2) )
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
        v49 = (struct tagRECT)_mm_loadu_si128((const __m128i *)((-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFFB0uLL) + a1 + 708));
      else
        v49 = (struct tagRECT)_mm_loadu_si128((const __m128i *)((-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFF58uLL) + a1 + 360));
      v56 = *(__m128i *)a3;
      v53 = *(__m128i *)a2;
      v64 = v49;
      v58 = *a5;
      v59 = a5[1];
      v60 = a5[2];
      v61 = a5[3];
      v62 = *((_QWORD *)a5 + 8);
      ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
                                   (__int64)&v58,
                                   (float *)&v64.left,
                                   (float *)v53.m128i_i32,
                                   (float *)v56.m128i_i32,
                                   a7,
                                   (__int64)&v55,
                                   (bool *)v63.m128i_i64[0],
                                   v57);
      if ( ViewRectRelativeToInside < 0 )
      {
        v47 = 148LL;
        goto LABEL_68;
      }
    }
  }
  else
  {
    if ( *(_DWORD *)a5 != 5 )
    {
      if ( *(_DWORD *)a5 == 6 )
      {
        v63.m128i_i64[0] = a1;
        std::call_once__lambda_51403b28e8b81be276cead8d023ce32d___(a1 + 776, &v63);
        LOBYTE(v21) = KeyboardHosting::UIAutomationHelpers::PreferUseUIAToGetBoundingBox(*(KeyboardHosting::UIAutomationHelpers **)(a1 + 760));
        if ( KeyboardHosting::IsRectNull(a3, v21) || v22 )
        {
          wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
            (__int64)v65,
            (__int64)"FocusedElementViewRectCalculation");
          v65[0] = &TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::`vftable';
          TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::StartActivity((TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *)v65);
          v64 = 0LL;
          if ( (int)KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedText(
                      *(KeyboardHosting::UIAutomationHelpers **)(a1 + 760),
                      &v64) < 0 )
          {
            BoundRectForCursorPos = KeyboardHosting::UIAutomationHelpers::GetBoundRectForCursorPos(v28, &v64);
            v30 = L"CurrentMousePosition";
            if ( BoundRectForCursorPos < 0 )
              v30 = L"InputAppDefault";
            v63.m128i_i64[0] = (__int64)v30;
          }
          else
          {
            v63.m128i_i64[0] = (__int64)L"UIA";
          }
          v31 = 0LL;
          v53 = 0LL;
          if ( !KeyboardHosting::IsRectNull((KeyboardHosting *)&v64, v27) )
          {
            IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
            *(float *)v53.m128i_i32 = (float)v64.left;
            *(float *)&v53.m128i_i32[1] = (float)v64.top;
            if ( IsEnabled )
              v33 = *(_DWORD *)(a1 + 688);
            else
              v33 = *(_DWORD *)(a1 + 392);
            *(float *)&v53.m128i_i32[2] = (float)(v64.right - v64.left);
            *(float *)&v53.m128i_i32[3] = (float)(v64.bottom - v64.top);
            v31 = _mm_loadu_si128((const __m128i *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(
                                                     (float *)v56.m128i_i32,
                                                     (float *)v53.m128i_i32,
                                                     v33));
            v53 = v31;
          }
          v34 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
          TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::TextSelectionBoundingFetched<unsigned short const * &,float &,float &,float &,float &,enum DEVICE_SCALE_FACTOR &>(
            (unsigned int)&v63,
            (unsigned int)&v53,
            (unsigned int)&v53.m128i_u32[1],
            (unsigned int)&v53.m128i_u32[2],
            (__int64)&v53.m128i_i64[1] + 4,
            a1 + (v34 != 0 ? 688LL : 392LL));
          if ( KeyboardHosting::IsRectNull((KeyboardHosting *)&v53, v35) )
          {
            v37 = (bool *)v57;
          }
          else
          {
            v36 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
            v53 = v31;
            v58 = *a5;
            v60 = a5[2];
            v62 = *((_QWORD *)a5 + 8);
            if ( v36 )
            {
              v63 = *(__m128i *)(a1 + 708);
              v59 = a5[1];
              v61 = a5[3];
              v37 = (bool *)v57;
              ViewRectNearFocusedElement = KeyboardHosting::ViewRectHelper::GetViewRectNearFocusedElement(
                                             &v58,
                                             &v63,
                                             &v53,
                                             &v55,
                                             a9,
                                             v57);
              v41 = ViewRectNearFocusedElement;
              if ( ViewRectNearFocusedElement < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x106,
                  (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
                  (const char *)(unsigned int)ViewRectNearFocusedElement);
                TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::~FocusedElementViewRectCalculation((TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *)v65);
                return v41;
              }
            }
            else
            {
              v63 = *(__m128i *)(a1 + 360);
              v59 = a5[1];
              v61 = a5[3];
              v37 = (bool *)v57;
              v38 = KeyboardHosting::ViewRectHelper::GetViewRectNearFocusedElement(&v58, &v63, &v53, &v55, a9, v57);
              v39 = v38;
              if ( v38 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x10B,
                  (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
                  (const char *)(unsigned int)v38);
                TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::~FocusedElementViewRectCalculation((TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *)v65);
                return v39;
              }
            }
          }
          TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::Stop(
            (TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *)v65,
            (const struct Windows::Foundation::Rect *)&v55,
            *a9,
            *v37);
          TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::~FocusedElementViewRectCalculation((TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *)v65);
        }
        else
        {
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
            v23 = _mm_loadu_si128((const __m128i *)((-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFF60uLL) + a1 + 708));
          else
            v23 = _mm_loadu_si128((const __m128i *)((-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFEB0uLL) + a1 + 360));
          v53 = *(__m128i *)a3;
          v64 = *(struct tagRECT *)a2;
          v63 = v23;
          v58 = *a5;
          v59 = a5[1];
          v60 = a5[2];
          v61 = a5[3];
          v62 = *((_QWORD *)a5 + 8);
          ViewRectNearCaret = KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
                                (__int64)&v58,
                                (float *)v63.m128i_i32,
                                (float *)&v64.left,
                                (float *)v53.m128i_i32,
                                a7,
                                (__int64)&v55,
                                a9,
                                v57);
          v25 = ViewRectNearCaret;
          if ( ViewRectNearCaret < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xC6,
              (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
              (const char *)(unsigned int)ViewRectNearCaret);
            return v25;
          }
        }
      }
      else
      {
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
          v20 = (__m128)_mm_loadu_si128((const __m128i *)((-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFF60uLL) + a1 + 708));
        else
          v20 = (__m128)_mm_loadu_si128((const __m128i *)((-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFEB0uLL) + a1 + 360));
        LODWORD(v55) = v20.m128_i32[0];
        *((float *)&v55 + 1) = (float)((float)(_mm_shuffle_ps(v20, v20, 255).m128_f32[0]
                                             + _mm_shuffle_ps(v20, v20, 85).m128_f32[0])
                                     - v14)
                             - (float)*((int *)a5 + 4);
      }
      goto LABEL_15;
    }
    v53 = *v19;
    v58 = *a5;
    v59 = a5[1];
    v60 = a5[2];
    v61 = a5[3];
    v62 = *((_QWORD *)a5 + 8);
    v43 = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(&v58, &v53, &v55);
    if ( v43 < 0 )
    {
      v44 = 154LL;
LABEL_52:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v44,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
        (const char *)(unsigned int)v43);
      return (unsigned int)v43;
    }
    if ( KeyboardHosting::ViewRectProvider::IsViewOccludingCaret(v42, (struct Windows::Foundation::Rect *)&v55, a2) )
    {
      v45 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl)
          ? _mm_loadu_si128((const __m128i *)((-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFF60uLL) + a1 + 708))
          : _mm_loadu_si128((const __m128i *)((-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFEB0uLL) + a1 + 360));
      v53 = *(__m128i *)a3;
      v64 = *(struct tagRECT *)a2;
      v56 = v45;
      v58 = *a5;
      v59 = a5[1];
      v60 = a5[2];
      v61 = a5[3];
      v62 = *((_QWORD *)a5 + 8);
      ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
                                   (__int64)&v58,
                                   (float *)v56.m128i_i32,
                                   (float *)&v64.left,
                                   (float *)v53.m128i_i32,
                                   a7,
                                   (__int64)&v55,
                                   (bool *)v63.m128i_i64[0],
                                   v57);
      if ( ViewRectRelativeToInside < 0 )
      {
        v47 = 167LL;
LABEL_68:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v47,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
          (const char *)(unsigned int)ViewRectRelativeToInside);
        return (unsigned int)ViewRectRelativeToInside;
      }
    }
  }
LABEL_15:
  if ( IsRectNull )
  {
    *(_OWORD *)a8 = v55;
  }
  else
  {
    *(float *)a8 = *(float *)&v55 - *((float *)a5 + 14);
    *(float *)(a8 + 4) = *((float *)&v55 + 1) - *((float *)a5 + 15);
    *(float *)(a8 + 8) = (float)(v13 - v16) + *((float *)&v55 + 2);
    *(float *)(a8 + 12) = (float)(v14 - v17) + *((float *)&v55 + 3);
  }
  return 0LL;
}
