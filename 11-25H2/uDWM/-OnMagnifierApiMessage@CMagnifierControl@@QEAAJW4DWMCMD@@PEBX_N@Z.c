/*
 * XREFs of ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18006C2D0
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18007A330 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x18006C77C (-OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z.c)
 *     ?LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z @ 0x18006CBA0 (-LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z.c)
 *     ?UnregisterForSoftwareCursorChangeNotification@CWindowList@@QEAAXPEAUISoftwareCursorChangeListener@@@Z @ 0x18008604C (-UnregisterForSoftwareCursorChangeNotification@CWindowList@@QEAAXPEAUISoftwareCursorChangeListen.c)
 *     ?RenderAndCommit@CMagnifierControl@@AEAAJXZ @ 0x18008E80C (-RenderAndCommit@CMagnifierControl@@AEAAJXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x180098D8C (-OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z.c)
 *     ?OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800B5680 (-OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x1800B56FC (-OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@.c)
 *     ?OnSetPersistentDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800B5784 (-OnSetPersistentDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800BA820 (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetMagnifierSamplingMode@CMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x1800BA9D0 (-OnSetMagnifierSamplingMode@CMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z.c)
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800BAA2C (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 *     ??$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800BACD8 (--$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x1800BAF40 (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x1800BB0FC (-OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z.c)
 *     ??0MagnifierExperienceHelper@@QEAA@AEBNAEBM1@Z @ 0x1800BB414 (--0MagnifierExperienceHelper@@QEAA@AEBNAEBM1@Z.c)
 *     ?SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z @ 0x1800BBCA4 (-SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z.c)
 *     ?RegisterForSoftwareCursorChangeNotification@CWindowList@@QEAAJPEAUISoftwareCursorChangeListener@@@Z @ 0x1800E6C20 (-RegisterForSoftwareCursorChangeNotification@CWindowList@@QEAAJPEAUISoftwareCursorChangeListener.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMagnifierControl::OnMagnifierApiMessage(unsigned __int64 a1, int a2, __int64 a3, char a4)
{
  unsigned int v7; // ebx
  int v8; // edi
  const struct std::nothrow_t *v9; // rdx
  __int64 v10; // rcx
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // eax
  int v16; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  CMagnifierControl *v25; // rcx
  int v26; // esi
  int v27; // esi
  int v28; // esi
  int v29; // esi
  int v30; // esi
  struct CMagnifier *v31; // rax
  const struct std::nothrow_t *v32; // rdx
  MagnifierExperienceHelper *v33; // rax
  void *v34; // rcx
  unsigned __int64 v35; // r8
  CWindowList *v36; // rcx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  double *v42; // rsi
  int v43; // eax
  int v44; // eax
  int v45; // eax
  struct CMagnifier *v46[2]; // [rsp+30h] [rbp-10h] BYREF
  int v47; // [rsp+78h] [rbp+38h] BYREF
  char v48; // [rsp+88h] [rbp+48h] BYREF

  v48 = a4;
  v7 = 0;
  v8 = 0;
  v46[1] = (struct CMagnifier *)&CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( a2 <= 1073741937 )
  {
    if ( a2 != 1073741937 )
    {
      v11 = a2 - 1073741930;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              if ( v14 == 1 )
              {
                v46[0] = 0LL;
                v18 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, *(_QWORD *)(a3 + 8), v46);
                v8 = v18;
                if ( v18 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, v18, 0xE4u, 0LL);
                }
                else
                {
                  v19 = CMagnifier::OnSetRenderTargetTextures(v46[0], (const struct MAGN_ADAPTERTEXTURES *)(a3 + 16));
                  v8 = v19;
                  if ( v19 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, v19, 0xE8u, 0LL);
                }
              }
            }
            else
            {
              v46[0] = 0LL;
              v15 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, *(_QWORD *)(a3 + 8), v46);
              v8 = v15;
              if ( v15 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, v15, 0xD6u, 0LL);
              }
              else
              {
                v16 = CMagnifier::OnModifyWindowFilterList(v46[0], (const struct MAGN_FILTERLIST *)(a3 + 16));
                v8 = v16;
                if ( v16 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, v16, 0xDAu, 0LL);
              }
            }
          }
          else
          {
            v46[0] = 0LL;
            v20 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, *(_QWORD *)(a3 + 4), v46);
            v8 = v20;
            if ( v20 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, v20, 0xCAu, 0LL);
            }
            else
            {
              v21 = CMagnifier::OnSetColorEffect(v46[0], (const struct MilColorTransform *)(a3 + 20));
              v8 = v21;
              if ( v21 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, v21, 0xCCu, 0LL);
            }
          }
        }
        else
        {
          *(_BYTE *)(a1 + 128) = 0;
          v22 = CMagnifierControl::OnMagnifierDestroy((CMagnifierControl *)a1, *(HWND *)(a3 + 4));
          v8 = v22;
          if ( v22 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, v22, 0xC0u, 0LL);
        }
      }
      else
      {
        v23 = CMagnifierControl::OnMagnifierCreate((CMagnifierControl *)a1, *(HWND *)(a3 + 4), *(_DWORD *)(a3 + 20));
        v8 = v23;
        if ( v23 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, v23, 0xB5u, 0LL);
      }
      goto LABEL_10;
    }
    v24 = CFullScreenMagnifier::OnSetDesktopColorEffect(
            *(CFullScreenMagnifier **)(a1 + 48),
            (const struct MilColorTransform *)(a3 + 12));
    v8 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, v24, 0xF0u, 0LL);
      goto LABEL_10;
    }
    goto LABEL_61;
  }
  v26 = a2 - 1073741938;
  if ( !v26 )
  {
    v42 = (double *)(a3 + 12);
    if ( *(_BYTE *)(a1 + 128) )
    {
      if ( *(double *)(a1 + 152) == *v42 )
      {
        v47 = 0;
        v48 = 0;
        if ( (int)wil::wnf_query_nothrow<unsigned int>(v10, &v48, &v47) >= 0 && v48 && !v47 )
          goto LABEL_10;
      }
      *(double *)(a1 + 152) = *v42;
      MagnifierExperienceHelper::SetMagnificationFactor(
        *(MagnifierExperienceHelper **)(a1 + 160),
        (const double *)(a3 + 12));
      v43 = CFullScreenMagnifier::OnSetDesktopMagnificationFactor(
              *(CFullScreenMagnifier **)(a1 + 48),
              *v42,
              *(_DWORD *)(a3 + 20),
              *(_DWORD *)(a3 + 24));
      v8 = v43;
      if ( v43 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, v43, 0x117u, 0LL);
        goto LABEL_10;
      }
    }
    else
    {
      v44 = CFullScreenMagnifier::OnSetDesktopMagnificationFactor(
              *(CFullScreenMagnifier **)(a1 + 48),
              *v42,
              *(_DWORD *)(a3 + 20),
              *(_DWORD *)(a3 + 24));
      v8 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, v44, 0x11Fu, 0LL);
        goto LABEL_10;
      }
    }
    goto LABEL_61;
  }
  v27 = v26 - 5;
  if ( !v27 )
  {
    v46[0] = 0LL;
    v40 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, *(_QWORD *)(a3 + 4), v46);
    v8 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, v40, 0x12Cu, 0LL);
    }
    else
    {
      v41 = CMagnifier::OnSetMagnifierSamplingMode(v46[0], *(unsigned int *)(a3 + 20));
      v8 = v41;
      if ( v41 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, v41, 0x12Eu, 0LL);
    }
    goto LABEL_10;
  }
  v28 = v27 - 1;
  if ( !v28 )
  {
    v39 = CFullScreenMagnifier::OnSetDesktopMagnifierSamplingMode(*(_QWORD *)(a1 + 48), *(unsigned int *)(a3 + 12));
    v8 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, v39, 0x136u, 0LL);
      goto LABEL_10;
    }
    goto LABEL_61;
  }
  v29 = v28 - 3;
  if ( !v29 )
  {
    v38 = CFullScreenMagnifier::OnSetPersistentDesktopColorEffect(
            *(CFullScreenMagnifier **)(a1 + 48),
            (const struct MilColorTransform *)(a3 + 12));
    v8 = v38;
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, v38, 0x140u, 0LL);
      goto LABEL_10;
    }
LABEL_61:
    v45 = CMagnifierControl::RenderAndCommit(v25);
    v8 = v45;
    if ( v45 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, v45, 0x166u, 0LL);
    goto LABEL_10;
  }
  if ( v29 != 1 )
    goto LABEL_10;
  v30 = *(_DWORD *)(a3 + 12);
  v31 = (struct CMagnifier *)operator new[](0x80uLL, v9);
  v46[0] = v31;
  if ( v31 )
    v33 = MagnifierExperienceHelper::MagnifierExperienceHelper(
            v31,
            (const double *)(a1 + 152),
            (const float *)(a3 + 16),
            (const float *)(a3 + 20));
  else
    v33 = 0LL;
  v34 = *(void **)(a1 + 160);
  *(_QWORD *)(a1 + 160) = v33;
  if ( v34 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(v34, v32);
  v35 = a1 + 16;
  v36 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53);
  if ( v30 )
  {
    v37 = CWindowList::RegisterForSoftwareCursorChangeNotification(
            v36,
            (struct ISoftwareCursorChangeListener *)(v35 & ((unsigned __int128)-(__int128)a1 >> 64)));
    v8 = v37;
    if ( v37 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F97B4, 1LL, v37, 0x158u, 0LL);
      goto LABEL_10;
    }
  }
  else
  {
    CWindowList::UnregisterForSoftwareCursorChangeNotification(
      v36,
      (struct ISoftwareCursorChangeListener *)(v35 & ((unsigned __int128)-(__int128)a1 >> 64)));
  }
  *(_BYTE *)(a1 + 128) = *(_DWORD *)(a3 + 12) != 0;
LABEL_10:
  if ( v8 != -2147023728 )
    v7 = v8;
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v7;
}
