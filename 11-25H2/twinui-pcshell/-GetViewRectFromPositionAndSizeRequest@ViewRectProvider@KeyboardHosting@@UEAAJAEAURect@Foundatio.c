/*
 * XREFs of ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180146EF0
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180094F90 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1801426F8 (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x180147980 (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x180147F94 (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z @ 0x1801DDB34 (-IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetViewRectNearFocusedElement@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@1PEAU9Foundation@8@PEA_N3@Z @ 0x1804728D4 (-GetViewRectNearFocusedElement@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRe.c)
 *     ?GetViewRectRelativeToInside@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@PEAU9Foundation@8@@Z @ 0x180472AF4 (-GetViewRectRelativeToInside@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequ.c)
 *     ??$Start@$$V@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@XZ @ 0x180476278 (--$Start@$$V@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@SA-AV01@X.c)
 *     ??$TextSelectionBoundingFetched@AEAPEBGAEAMAEAMAEAMAEAMAEAW4DEVICE_SCALE_FACTOR@@@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@SAXAEAPEBGAEAM111AEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1804762B0 (--$TextSelectionBoundingFetched@AEAPEBGAEAMAEAMAEAMAEAMAEAW4DEVICE_SCALE_FACTOR@@@FocusedElement.c)
 *     std::call_once__lambda_7955c0cef9a206a729d3199fa08370a3___ @ 0x1804763B8 (std--call_once__lambda_7955c0cef9a206a729d3199fa08370a3___.c)
 *     ??1FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180476458 (--1FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     GetWorkAreaRect @ 0x180476484 (GetWorkAreaRect.c)
 *     ?IsViewOccludingCaret@ViewRectProvider@KeyboardHosting@@AEAA_NAEAURect@Foundation@Windows@@0@Z @ 0x18047656C (-IsViewOccludingCaret@ViewRectProvider@KeyboardHosting@@AEAA_NAEAURect@Foundation@Windows@@0@Z.c)
 *     ?Stop@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAAXAEBURect@Foundation@Windows@@_N1@Z @ 0x18047670C (-Stop@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAAXAEBURect@Fo.c)
 *     ?GetBoundRectForCursorPos@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x180478D18 (-GetBoundRectForCursorPos@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?GetBoundingRectForSelectedText@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x180478D84 (-GetBoundingRectForSelectedText@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@QEAA_NXZ @ 0x180479B74 (-PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::ViewRectProvider::GetViewRectFromPositionAndSizeRequest(
        __int64 a1,
        struct Windows::Foundation::Rect *a2,
        KeyboardHosting *a3,
        __int64 a4,
        int *a5,
        __int64 a6,
        char a7,
        __int64 a8,
        bool *a9,
        struct Windows::Foundation::Rect *a10)
{
  float v13; // xmm3_4
  float v14; // xmm2_4
  bool v15; // si
  const struct Windows::Foundation::Rect *v17; // rdx
  __m128i *v18; // r8
  __m128i *v19; // r9
  const __m128i *v20; // rdi
  __m128 v21; // xmm0
  const char *v22; // r9
  const struct Windows::Foundation::Rect *v23; // rdx
  char v24; // dl
  __int128 *v25; // rdi
  int ViewRectNearCaret; // eax
  unsigned int v27; // edi
  __int64 result; // rax
  const struct tagRECT *v29; // rdx
  KeyboardHosting::UIAutomationHelpers *v30; // rcx
  int BoundRectForCursorPos; // eax
  const wchar_t *v32; // rcx
  __m128i v33; // xmm6
  const struct Windows::Foundation::Rect *v34; // rdx
  int ViewRectNearFocusedElement; // eax
  unsigned int v36; // edi
  KeyboardHosting::ViewRectProvider *v37; // rcx
  int v38; // r14d
  __int64 v39; // rdx
  __m128i *v40; // rdi
  int ViewRectRelativeToInside; // edi
  __int64 v42; // rdx
  KeyboardHosting::ViewRectProvider *v43; // rcx
  struct tagRECT *v44; // rdi
  struct tagRECT *v45; // rdi
  __int64 v46; // rdx
  __m128i *v47; // rax
  __int128 v48; // [rsp+50h] [rbp-248h] BYREF
  __int128 v49; // [rsp+60h] [rbp-238h] BYREF
  __int128 v50; // [rsp+70h] [rbp-228h]
  __int128 v51; // [rsp+80h] [rbp-218h]
  __int128 v52; // [rsp+90h] [rbp-208h]
  __int64 v53; // [rsp+A0h] [rbp-1F8h]
  __m128i v54; // [rsp+B0h] [rbp-1E8h] BYREF
  __int128 v55; // [rsp+C0h] [rbp-1D8h] BYREF
  struct tagRECT v56; // [rsp+D0h] [rbp-1C8h] BYREF
  __m128i v57; // [rsp+E0h] [rbp-1B8h] BYREF
  _BYTE v58[336]; // [rsp+F0h] [rbp-1A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+0h]

  *(_QWORD *)&v48 = a9;
  v13 = (float)a5[2];
  v14 = (float)a5[1];
  *(_DWORD *)a8 = 0;
  *(_DWORD *)(a8 + 4) = 0;
  *(float *)(a8 + 8) = v13;
  *(float *)(a8 + 12) = v14;
  *a9 = 0;
  *(_BYTE *)a10 = 0;
  v15 = *((_BYTE *)a5 + 44) || *((_BYTE *)a5 + 45);
  *(_QWORD *)&v55 = 0LL;
  *((_QWORD *)&v55 + 1) = *((_QWORD *)a5 + 8);
  if ( KeyboardHosting::IsRectNull((KeyboardHosting *)(a5 + 14), a10) )
    *((_QWORD *)&v55 + 1) = __PAIR64__(LODWORD(v14), LODWORD(v13));
  try
  {
    if ( *a5 == 1 )
    {
      if ( *((_BYTE *)a5 + 47) )
      {
        v46 = a1 + 16;
        if ( !v15 )
          v46 = a1 + 176;
        v57 = *(__m128i *)GetWorkAreaRect(&v57, v46);
        v49 = *(_OWORD *)a5;
        v50 = *((_OWORD *)a5 + 1);
        v51 = *((_OWORD *)a5 + 2);
        v52 = *((_OWORD *)a5 + 3);
        v53 = *((_QWORD *)a5 + 8);
        ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(&v49, &v57, &v55);
        if ( ViewRectRelativeToInside < 0 )
        {
          v42 = 65LL;
          goto LABEL_64;
        }
      }
      else
      {
        if ( v15 )
          v54 = *(__m128i *)(a1 + 24);
        else
          v57 = *(__m128i *)(a1 + 236);
        v47 = &v57;
        if ( v15 )
          v47 = &v54;
        v57 = *v47;
        v49 = *(_OWORD *)a5;
        v50 = *((_OWORD *)a5 + 1);
        v51 = *((_OWORD *)a5 + 2);
        v52 = *((_OWORD *)a5 + 3);
        v53 = *((_QWORD *)a5 + 8);
        ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(&v49, &v57, &v55);
        if ( ViewRectRelativeToInside < 0 )
        {
          v42 = 70LL;
          goto LABEL_64;
        }
      }
    }
    else if ( *a5 == 2 )
    {
      if ( v15 )
        v45 = (struct tagRECT *)(a1 + 24);
      else
        v45 = (struct tagRECT *)(a1 + 184);
      v57 = *v18;
      v54 = *(__m128i *)a2;
      v56 = *v45;
      v49 = *(_OWORD *)a5;
      v50 = *((_OWORD *)a5 + 1);
      v51 = *((_OWORD *)a5 + 2);
      v52 = *((_OWORD *)a5 + 3);
      v53 = *((_QWORD *)a5 + 8);
      ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
                                   &v49,
                                   &v56,
                                   &v54,
                                   &v57,
                                   a7,
                                   &v55,
                                   a9,
                                   v17);
      if ( ViewRectRelativeToInside < 0 )
      {
        v42 = 77LL;
        goto LABEL_64;
      }
    }
    else if ( *a5 == 3 )
    {
      v57 = *v18;
      v49 = *(_OWORD *)a5;
      v50 = *((_OWORD *)a5 + 1);
      v51 = *((_OWORD *)a5 + 2);
      v52 = *((_OWORD *)a5 + 3);
      v53 = *((_QWORD *)a5 + 8);
      v38 = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(&v49, &v57, &v55);
      if ( v38 < 0 )
      {
        v39 = 92LL;
        goto LABEL_47;
      }
      if ( KeyboardHosting::ViewRectProvider::IsViewOccludingCaret(v43, (struct Windows::Foundation::Rect *)&v55, a2) )
      {
        v44 = (struct tagRECT *)(v15 ? a1 + 104 : a1 + 184);
        v57 = *(__m128i *)a3;
        v54 = *(__m128i *)a2;
        v56 = *v44;
        v49 = *(_OWORD *)a5;
        v50 = *((_OWORD *)a5 + 1);
        v51 = *((_OWORD *)a5 + 2);
        v52 = *((_OWORD *)a5 + 3);
        v53 = *((_QWORD *)a5 + 8);
        ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
                                     &v49,
                                     &v56,
                                     &v54,
                                     &v57,
                                     a7,
                                     &v55,
                                     v48,
                                     a10);
        if ( ViewRectRelativeToInside < 0 )
        {
          v42 = 97LL;
          goto LABEL_64;
        }
      }
    }
    else
    {
      if ( *a5 != 5 )
      {
        if ( *a5 == 6 )
        {
          *(_QWORD *)&v48 = a1;
          std::call_once__lambda_7955c0cef9a206a729d3199fa08370a3___(a1 + 272, &v48);
          LOBYTE(v23) = KeyboardHosting::UIAutomationHelpers::PreferUseUIAToGetBoundingBox(*(KeyboardHosting::UIAutomationHelpers **)(a1 + 256));
          if ( KeyboardHosting::IsRectNull(a3, v23) || v24 )
          {
            TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::Start<>((TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *)v58);
            v56 = 0LL;
            if ( KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedText(
                   *(KeyboardHosting::UIAutomationHelpers **)(a1 + 256),
                   &v56) < 0 )
            {
              BoundRectForCursorPos = KeyboardHosting::UIAutomationHelpers::GetBoundRectForCursorPos(v30, &v56);
              v32 = L"CurrentMousePosition";
              if ( BoundRectForCursorPos < 0 )
                v32 = L"InputAppDefault";
              *(_QWORD *)&v48 = v32;
            }
            else
            {
              *(_QWORD *)&v48 = L"UIA";
            }
            v33 = 0LL;
            v54 = 0LL;
            if ( !KeyboardHosting::IsRectNull((KeyboardHosting *)&v56, v29) )
            {
              *(float *)v54.m128i_i32 = (float)v56.left;
              *(float *)&v54.m128i_i32[1] = (float)v56.top;
              *(float *)&v54.m128i_i32[2] = (float)(v56.right - v56.left);
              *(float *)&v54.m128i_i32[3] = (float)(v56.bottom - v56.top);
              v33 = _mm_loadu_si128((const __m128i *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(
                                                       (float *)v57.m128i_i32,
                                                       (float *)v54.m128i_i32,
                                                       *(_DWORD *)(a1 + 216)));
              v54 = v33;
            }
            TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::TextSelectionBoundingFetched<unsigned short const * &,float &,float &,float &,float &,enum DEVICE_SCALE_FACTOR &>(
              (unsigned int)&v48,
              (unsigned int)&v54,
              (unsigned int)&v54.m128i_u32[1],
              (unsigned int)&v54.m128i_u32[2],
              (__int64)&v54.m128i_i64[1] + 4,
              a1 + 216);
            if ( !KeyboardHosting::IsRectNull((KeyboardHosting *)&v54, v34) )
            {
              v54 = v33;
              v48 = *(_OWORD *)(a1 + 184);
              v49 = *(_OWORD *)a5;
              v50 = *((_OWORD *)a5 + 1);
              v51 = *((_OWORD *)a5 + 2);
              v52 = *((_OWORD *)a5 + 3);
              v53 = *((_QWORD *)a5 + 8);
              ViewRectNearFocusedElement = KeyboardHosting::ViewRectHelper::GetViewRectNearFocusedElement(
                                             &v49,
                                             &v48,
                                             &v54,
                                             &v55,
                                             a9,
                                             a10);
              v36 = ViewRectNearFocusedElement;
              if ( ViewRectNearFocusedElement < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xB2,
                  (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
                  (const char *)(unsigned int)ViewRectNearFocusedElement);
                TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::~FocusedElementViewRectCalculation((TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *)v58);
                return v36;
              }
            }
            TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::Stop(
              (TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *)v58,
              (const struct Windows::Foundation::Rect *)&v55,
              *a9,
              *(_BYTE *)a10);
            TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::~FocusedElementViewRectCalculation((TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *)v58);
          }
          else
          {
            if ( v15 )
              v25 = (__int128 *)(a1 + 24);
            else
              v25 = (__int128 *)(a1 + 184);
            v54 = *(__m128i *)a3;
            v56 = *(struct tagRECT *)a2;
            v48 = *v25;
            v49 = *(_OWORD *)a5;
            v50 = *((_OWORD *)a5 + 1);
            v51 = *((_OWORD *)a5 + 2);
            v52 = *((_OWORD *)a5 + 3);
            v53 = *((_QWORD *)a5 + 8);
            ViewRectNearCaret = KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
                                  &v49,
                                  &v48,
                                  &v56,
                                  &v54,
                                  a7,
                                  &v55,
                                  a9,
                                  a10);
            v27 = ViewRectNearCaret;
            if ( ViewRectNearCaret < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x83,
                (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
                (const char *)(unsigned int)ViewRectNearCaret);
              return v27;
            }
          }
        }
        else
        {
          if ( v15 )
            v20 = (const __m128i *)(a1 + 24);
          else
            v20 = (const __m128i *)(a1 + 184);
          v21 = (__m128)_mm_loadu_si128(v20);
          LODWORD(v55) = v21.m128_i32[0];
          *((float *)&v55 + 1) = (float)((float)(_mm_shuffle_ps(v21, v21, 255).m128_f32[0]
                                               + _mm_shuffle_ps(v21, v21, 85).m128_f32[0])
                                       - v14)
                               - (float)a5[4];
        }
        goto LABEL_16;
      }
      v54 = *v19;
      v49 = *(_OWORD *)a5;
      v50 = *((_OWORD *)a5 + 1);
      v51 = *((_OWORD *)a5 + 2);
      v52 = *((_OWORD *)a5 + 3);
      v53 = *((_QWORD *)a5 + 8);
      v38 = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(&v49, &v54, &v55);
      if ( v38 < 0 )
      {
        v39 = 103LL;
LABEL_47:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v39,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
          (const char *)(unsigned int)v38);
        return (unsigned int)v38;
      }
      if ( KeyboardHosting::ViewRectProvider::IsViewOccludingCaret(v37, (struct Windows::Foundation::Rect *)&v55, a2) )
      {
        v40 = (__m128i *)(v15 ? a1 + 24 : a1 + 184);
        v54 = *(__m128i *)a3;
        v56 = *(struct tagRECT *)a2;
        v57 = *v40;
        v49 = *(_OWORD *)a5;
        v50 = *((_OWORD *)a5 + 1);
        v51 = *((_OWORD *)a5 + 2);
        v52 = *((_OWORD *)a5 + 3);
        v53 = *((_QWORD *)a5 + 8);
        ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
                                     &v49,
                                     &v57,
                                     &v56,
                                     &v54,
                                     a7,
                                     &v55,
                                     v48,
                                     a10);
        if ( ViewRectRelativeToInside < 0 )
        {
          v42 = 108LL;
LABEL_64:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v42,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
            (const char *)(unsigned int)ViewRectRelativeToInside);
          return (unsigned int)ViewRectRelativeToInside;
        }
      }
    }
LABEL_16:
    if ( KeyboardHosting::IsRectNull((KeyboardHosting *)(a5 + 14), v17) )
    {
      *(_OWORD *)a8 = v55;
    }
    else
    {
      *(float *)a8 = *(float *)&v55 - *((float *)a5 + 14);
      *(float *)(a8 + 4) = *((float *)&v55 + 1) - *((float *)a5 + 15);
      *(float *)(a8 + 8) = (float)((float)a5[2] - *((float *)a5 + 16)) + *((float *)&v55 + 2);
      *(float *)(a8 + 12) = (float)((float)a5[1] - *((float *)a5 + 17)) + *((float *)&v55 + 3);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB8,
                           (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
                           v22);
  }
  return result;
}
