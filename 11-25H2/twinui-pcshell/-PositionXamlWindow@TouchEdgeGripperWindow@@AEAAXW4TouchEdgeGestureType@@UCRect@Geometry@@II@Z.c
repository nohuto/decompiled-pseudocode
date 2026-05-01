/*
 * XREFs of ?PositionXamlWindow@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@UCRect@Geometry@@II@Z @ 0x180576FD0
 * Callers:
 *     ??0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@@Z @ 0x180574FCC (--0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV-$function@.c)
 * Callees:
 *     Mirror_IsThreadRTL @ 0x1800A00B0 (Mirror_IsThreadRTL.c)
 *     ?CreateInTileStore@?$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800FC828 (-CreateInTileStore@-$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTi.c)
 *     ?TintOpacity@?$consume_Windows_UI_Xaml_Media_IAcrylicBrush@UIAcrylicBrush@Media@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@N@Z @ 0x180106240 (-TintOpacity@-$consume_Windows_UI_Xaml_Media_IAcrylicBrush@UIAcrylicBrush@Media@Xaml@UI@Windows@.c)
 *     ?Position@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1801D036C (-Position@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWin.c)
 *     ??$XamlWindowPositioned@MMMM@TouchEdgeGestureTelemetry@@SAX$$QEAM000@Z @ 0x180573DD0 (--$XamlWindowPositioned@MMMM@TouchEdgeGestureTelemetry@@SAX$$QEAM000@Z.c)
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
  __m128i v19; // xmm1
  int v20; // eax
  double v21; // xmm1_8
  double v22; // xmm3_8
  double v23; // xmm2_8
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  double v28; // xmm1_8
  double v29; // xmm3_8
  double v30; // xmm2_8
  int v31; // eax
  int v32; // ecx
  double v33; // xmm1_8
  double v34; // xmm3_8
  double v35; // xmm2_8
  unsigned int v36; // eax
  __m128i v37; // xmm0
  unsigned int v38; // eax
  __m128i v39; // xmm0
  int v40; // eax
  int v41; // eax
  unsigned int v42; // eax
  float v43; // xmm1_4
  __m128i v44; // xmm0
  int v45; // eax
  float v46; // [rsp+20h] [rbp-20h] BYREF
  float v47; // [rsp+24h] [rbp-1Ch] BYREF
  float v48; // [rsp+28h] [rbp-18h] BYREF
  __int128 v49; // [rsp+2Ch] [rbp-14h] BYREF
  int v50; // [rsp+70h] [rbp+30h] BYREF

  v5 = (__int64 *)(a1 + 96);
  if ( *(_QWORD *)(a1 + 96) )
  {
    v10 = MulDiv(212, a4, 96);
    v11 = MulDiv(34, nNumerator, 96);
    v46 = COERCE_FLOAT(MulDiv(226, a4, 96));
    v50 = MulDiv(14, a4, 96);
    v12 = a2 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 )
      {
        v26 = a3[2] - *a3;
        v27 = a3[3];
        v28 = (double)*a3;
        *(_DWORD *)(a1 + 116) = v27;
        v29 = (double)v26 * 0.5;
        v30 = (double)(v10 / 2);
        *(_DWORD *)(a1 + 104) = (int)(v29 - v30 + v28);
        *(_DWORD *)(a1 + 108) = v27 - v11;
        *(_DWORD *)(a1 + 112) = (int)(v30 + v29 + v28);
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
              v16 = *a3 + v50;
            else
              v16 = a3[2] - LODWORD(v46);
            *(_DWORD *)(a1 + 104) = v16;
            *(_DWORD *)(a1 + 112) = v16 + v10;
            v17 = a3[3];
            goto LABEL_16;
          }
LABEL_17:
          winrt::impl::consume_Windows_UI_Xaml_Media_IAcrylicBrush<winrt::Windows::UI::Xaml::Media::IAcrylicBrush>::TintOpacity(v5);
          winrt::impl::consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate<winrt::Windows::Internal::UI::StartScreen::ISecondaryTilePrivate>::CreateInTileStore(v5);
          v36 = a3[1] + (a3[3] - a3[1]) / 2;
          *(float *)&v49 = (float)(*a3 + (a3[2] - *a3) / 2);
          v37 = _mm_cvtsi32_si128(v36);
          v38 = *(_DWORD *)(a1 + 112) - *(_DWORD *)(a1 + 104);
          DWORD1(v49) = _mm_cvtepi32_ps(v37).m128_u32[0];
          v39 = _mm_cvtsi32_si128(v38);
          v40 = *(_DWORD *)(a1 + 116) - *(_DWORD *)(a1 + 108);
          DWORD2(v49) = _mm_cvtepi32_ps(v39).m128_u32[0];
          *((float *)&v49 + 3) = (float)v40;
          winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::Position(
            (__int64 **)v5,
            &v49);
          v41 = *(_DWORD *)(a1 + 112) - *(_DWORD *)(a1 + 104);
          *(float *)v39.m128i_i32 = (float)(*(_DWORD *)(a1 + 116) - *(_DWORD *)(a1 + 108));
          v47 = (float)*(int *)(a1 + 108);
          v50 = v39.m128i_i32[0];
          v46 = (float)v41;
          v48 = (float)*(int *)(a1 + 104);
          TouchEdgeGestureTelemetry::XamlWindowPositioned<float,float,float,float>(
            (int *)&v48,
            (int *)&v47,
            (int *)&v46,
            &v50);
          v42 = *(_DWORD *)(a1 + 112) - *(_DWORD *)(a1 + 104);
          v43 = (float)*(int *)(a1 + 108);
          *(float *)&v49 = (float)*(int *)(a1 + 104);
          v44 = _mm_cvtsi32_si128(v42);
          v45 = *(_DWORD *)(a1 + 116) - *(_DWORD *)(a1 + 108);
          *((float *)&v49 + 1) = v43;
          DWORD2(v49) = _mm_cvtepi32_ps(v44).m128_u32[0];
          *((float *)&v49 + 3) = (float)v45;
          winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::Position(
            (__int64 **)v5,
            &v49);
          return;
        }
        v18 = a3[2];
        v19 = _mm_cvtsi32_si128(a3[1]);
        *(_DWORD *)(a1 + 104) = v18 - v11;
        v20 = a3[3] - a3[1];
        v21 = _mm_cvtepi32_pd(v19).m128d_f64[0];
        *(_DWORD *)(a1 + 112) = v18;
        v22 = (double)v20 * 0.5;
        v23 = (double)(v10 / 2);
        *(_DWORD *)(a1 + 108) = (int)(v22 - v23 + v21);
      }
      else
      {
        v24 = a3[3] - a3[1];
        v25 = *a3;
        v21 = (double)a3[1];
        *(_DWORD *)(a1 + 104) = *a3;
        v22 = (double)v24 * 0.5;
        v23 = (double)(v10 / 2);
        *(_DWORD *)(a1 + 108) = (int)(v22 - v23 + v21);
        *(_DWORD *)(a1 + 112) = v25 + v11;
      }
      v17 = (int)(v23 + v22 + v21);
    }
    else
    {
      v31 = a3[2] - *a3;
      v32 = a3[1];
      v33 = (double)*a3;
      *(_DWORD *)(a1 + 108) = v32;
      v34 = (double)v31 * 0.5;
      v35 = (double)(v10 / 2);
      *(_DWORD *)(a1 + 104) = (int)(v34 - v35 + v33);
      *(_DWORD *)(a1 + 112) = (int)(v35 + v34 + v33);
      v17 = v32 + v11;
    }
LABEL_16:
    *(_DWORD *)(a1 + 116) = v17;
    goto LABEL_17;
  }
}
