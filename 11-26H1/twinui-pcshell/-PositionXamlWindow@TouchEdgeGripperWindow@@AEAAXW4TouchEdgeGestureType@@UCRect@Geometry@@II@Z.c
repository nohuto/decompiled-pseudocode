/*
 * XREFs of ?PositionXamlWindow@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@UCRect@Geometry@@II@Z @ 0x18059A798
 * Callers:
 *     ??0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@@Z @ 0x1805986F8 (--0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV-$function@.c)
 * Callees:
 *     Mirror_IsThreadRTL @ 0x1800822EC (Mirror_IsThreadRTL.c)
 *     ?TintOpacity@?$consume_Windows_UI_Xaml_Media_IAcrylicBrush@UIAcrylicBrush@Media@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@N@Z @ 0x18009FD74 (-TintOpacity@-$consume_Windows_UI_Xaml_Media_IAcrylicBrush@UIAcrylicBrush@Media@Xaml@UI@Windows@.c)
 *     ?CreateInTileStore@?$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A0014 (-CreateInTileStore@-$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTi.c)
 *     ?Position@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1801C6C44 (-Position@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWin.c)
 *     ??$XamlWindowPositioned@MMMM@TouchEdgeGestureTelemetry@@SAX$$QEAM000@Z @ 0x180597400 (--$XamlWindowPositioned@MMMM@TouchEdgeGestureTelemetry@@SAX$$QEAM000@Z.c)
 */

void __fastcall TouchEdgeGripperWindow::PositionXamlWindow(__int64 a1, int a2, int *a3, int a4, int nNumerator)
{
  __int64 *v5; // r13
  int v10; // r15d
  int v11; // r12d
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  __m128i v19; // xmm3
  double v20; // xmm3_8
  double v21; // xmm2_8
  double v22; // xmm1_8
  int v23; // ecx
  int v24; // ecx
  double v25; // xmm3_8
  double v26; // xmm2_8
  double v27; // xmm1_8
  int v28; // ecx
  double v29; // xmm3_8
  double v30; // xmm2_8
  double v31; // xmm1_8
  unsigned int v32; // eax
  __m128i v33; // xmm0
  unsigned int v34; // eax
  __m128i v35; // xmm0
  int v36; // eax
  int v37; // eax
  unsigned int v38; // eax
  float v39; // xmm1_4
  __m128i v40; // xmm0
  int v41; // eax
  float v42; // [rsp+20h] [rbp-20h] BYREF
  float v43; // [rsp+24h] [rbp-1Ch] BYREF
  float v44; // [rsp+28h] [rbp-18h] BYREF
  __int128 v45; // [rsp+2Ch] [rbp-14h] BYREF
  int v46; // [rsp+70h] [rbp+30h] BYREF

  v5 = (__int64 *)(a1 + 96);
  if ( *(_QWORD *)(a1 + 96) )
  {
    v10 = MulDiv(212, a4, 96);
    v11 = MulDiv(34, nNumerator, 96);
    v42 = COERCE_FLOAT(MulDiv(226, a4, 96));
    v46 = MulDiv(14, a4, 96);
    v12 = a2 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 )
      {
        v24 = a3[3];
        v25 = (double)*a3;
        *(_DWORD *)(a1 + 116) = v24;
        v26 = (double)(v10 / 2);
        v27 = (double)(a3[2] - *a3) * 0.5;
        *(_DWORD *)(a1 + 104) = (int)(v27 - v26 + v25);
        *(_DWORD *)(a1 + 108) = v24 - v11;
        *(_DWORD *)(a1 + 112) = (int)(v26 + v27 + v25);
        goto LABEL_17;
      }
      v14 = v13 - 2;
      if ( v14 )
      {
        v15 = v14 - 4;
        if ( v15 )
        {
          if ( v15 == 8 )
          {
            *(_DWORD *)(a1 + 108) = a3[3] - v11;
            if ( (unsigned int)Mirror_IsThreadRTL() )
              v16 = *a3 + v46;
            else
              v16 = a3[2] - LODWORD(v42);
            *(_DWORD *)(a1 + 104) = v16;
            *(_DWORD *)(a1 + 112) = v16 + v10;
            v17 = a3[3];
            goto LABEL_16;
          }
LABEL_17:
          winrt::impl::consume_Windows_UI_Xaml_Media_IAcrylicBrush<winrt::Windows::UI::Xaml::Media::IAcrylicBrush>::TintOpacity(v5);
          winrt::impl::consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate<winrt::Windows::Internal::UI::StartScreen::ISecondaryTilePrivate>::CreateInTileStore(v5);
          v32 = a3[1] + (a3[3] - a3[1]) / 2;
          *(float *)&v45 = (float)(*a3 + (a3[2] - *a3) / 2);
          v33 = _mm_cvtsi32_si128(v32);
          v34 = *(_DWORD *)(a1 + 112) - *(_DWORD *)(a1 + 104);
          DWORD1(v45) = _mm_cvtepi32_ps(v33).m128_u32[0];
          v35 = _mm_cvtsi32_si128(v34);
          v36 = *(_DWORD *)(a1 + 116) - *(_DWORD *)(a1 + 108);
          DWORD2(v45) = _mm_cvtepi32_ps(v35).m128_u32[0];
          *((float *)&v45 + 3) = (float)v36;
          winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::Position(
            (__int64 **)v5,
            &v45);
          v37 = *(_DWORD *)(a1 + 112) - *(_DWORD *)(a1 + 104);
          *(float *)v35.m128i_i32 = (float)(*(_DWORD *)(a1 + 116) - *(_DWORD *)(a1 + 108));
          v43 = (float)*(int *)(a1 + 108);
          v46 = v35.m128i_i32[0];
          v42 = (float)v37;
          v44 = (float)*(int *)(a1 + 104);
          TouchEdgeGestureTelemetry::XamlWindowPositioned<float,float,float,float>(
            (int *)&v44,
            (int *)&v43,
            (int *)&v42,
            &v46);
          v38 = *(_DWORD *)(a1 + 112) - *(_DWORD *)(a1 + 104);
          v39 = (float)*(int *)(a1 + 108);
          *(float *)&v45 = (float)*(int *)(a1 + 104);
          v40 = _mm_cvtsi32_si128(v38);
          v41 = *(_DWORD *)(a1 + 116) - *(_DWORD *)(a1 + 108);
          *((float *)&v45 + 1) = v39;
          DWORD2(v45) = _mm_cvtepi32_ps(v40).m128_u32[0];
          *((float *)&v45 + 3) = (float)v41;
          winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::Position(
            (__int64 **)v5,
            &v45);
          return;
        }
        v18 = a3[2];
        v19 = _mm_cvtsi32_si128(a3[1]);
        *(_DWORD *)(a1 + 104) = v18 - v11;
        *(_DWORD *)(a1 + 112) = v18;
        v20 = _mm_cvtepi32_pd(v19).m128d_f64[0];
        v21 = (double)(v10 / 2);
        v22 = (double)(a3[3] - a3[1]) * 0.5;
        *(_DWORD *)(a1 + 108) = (int)(v22 - v21 + v20);
      }
      else
      {
        v23 = *a3;
        v20 = (double)a3[1];
        *(_DWORD *)(a1 + 104) = *a3;
        v21 = (double)(v10 / 2);
        v22 = (double)(a3[3] - a3[1]) * 0.5;
        *(_DWORD *)(a1 + 108) = (int)(v22 - v21 + v20);
        *(_DWORD *)(a1 + 112) = v23 + v11;
      }
      v17 = (int)(v21 + v22 + v20);
    }
    else
    {
      v28 = a3[1];
      v29 = (double)*a3;
      *(_DWORD *)(a1 + 108) = v28;
      v30 = (double)(v10 / 2);
      v31 = (double)(a3[2] - *a3) * 0.5;
      *(_DWORD *)(a1 + 104) = (int)(v31 - v30 + v29);
      *(_DWORD *)(a1 + 112) = (int)(v30 + v31 + v29);
      v17 = v28 + v11;
    }
LABEL_16:
    *(_DWORD *)(a1 + 116) = v17;
    goto LABEL_17;
  }
}
