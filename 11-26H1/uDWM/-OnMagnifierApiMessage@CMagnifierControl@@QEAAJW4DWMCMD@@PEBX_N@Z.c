/*
 * XREFs of ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007A548
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180080150 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderAndCommit@CMagnifierControl@@AEAAJXZ @ 0x180033598 (-RenderAndCommit@CMagnifierControl@@AEAAJXZ.c)
 *     ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x1800618DC (-OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z.c)
 *     ?LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z @ 0x180066F0C (-LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z.c)
 *     ??4?$unique_ptr@VMagnifierExperienceHelper@@U?$default_delete@VMagnifierExperienceHelper@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x180077928 (--4-$unique_ptr@VMagnifierExperienceHelper@@U-$default_delete@VMagnifierExperienceHelper@@@wistd.c)
 *     ?UnregisterForSoftwareCursorChangeNotification@CWindowList@@QEAAXPEAUISoftwareCursorChangeListener@@@Z @ 0x1800787D8 (-UnregisterForSoftwareCursorChangeNotification@CWindowList@@QEAAXPEAUISoftwareCursorChangeListen.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x18008C4F4 (-OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ?OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800B50C0 (-OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x1800B513C (-OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@.c)
 *     ?OnSetPersistentDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800B51B0 (-OnSetPersistentDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800BA0FC (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetMagnifierSamplingMode@CMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x1800BA1B8 (-OnSetMagnifierSamplingMode@CMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z.c)
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800BA214 (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 *     ??$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800BA4B4 (--$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x1800BA730 (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x1800BA8EC (-OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z.c)
 *     ??0MagnifierExperienceHelper@@QEAA@AEBNAEBM1@Z @ 0x1800BAC34 (--0MagnifierExperienceHelper@@QEAA@AEBNAEBM1@Z.c)
 *     ?SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z @ 0x1800BB4CC (-SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z.c)
 *     ?RegisterForSoftwareCursorChangeNotification@CWindowList@@QEAAJPEAUISoftwareCursorChangeListener@@@Z @ 0x1800E3350 (-RegisterForSoftwareCursorChangeNotification@CWindowList@@QEAAJPEAUISoftwareCursorChangeListener.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMagnifierControl::OnMagnifierApiMessage(unsigned __int64 a1, int a2, __int64 a3, char a4)
{
  unsigned int v7; // ebx
  int v8; // edi
  __int64 v9; // rcx
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  CMagnifierControl *v23; // rcx
  int v24; // esi
  int v25; // esi
  int v26; // esi
  int v27; // esi
  int v28; // esi
  struct CMagnifier *v29; // rax
  struct CMagnifier *v30; // rax
  unsigned __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  double *v37; // rsi
  int v38; // eax
  int v39; // eax
  int v40; // eax
  struct CMagnifier *v42[2]; // [rsp+30h] [rbp-10h] BYREF
  int v43; // [rsp+78h] [rbp+38h] BYREF
  char v44; // [rsp+88h] [rbp+48h] BYREF

  v44 = a4;
  v7 = 0;
  v8 = 0;
  v42[1] = (struct CMagnifier *)&CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( a2 <= 1073741937 )
  {
    if ( a2 != 1073741937 )
    {
      v10 = a2 - 1073741930;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              if ( v13 == 1 )
              {
                v42[0] = 0LL;
                v14 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, *(_QWORD *)(a3 + 8), v42);
                v8 = v14;
                if ( v14 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F91D0, 1LL, v14, 0xE4u, 0LL);
                }
                else
                {
                  v15 = CMagnifier::OnSetRenderTargetTextures(v42[0], (const struct MAGN_ADAPTERTEXTURES *)(a3 + 16));
                  v8 = v15;
                  if ( v15 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F91D0, 1LL, v15, 0xE8u, 0LL);
                }
              }
            }
            else
            {
              v42[0] = 0LL;
              v16 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, *(_QWORD *)(a3 + 8), v42);
              v8 = v16;
              if ( v16 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F91D0, 1LL, v16, 0xD6u, 0LL);
              }
              else
              {
                v17 = CMagnifier::OnModifyWindowFilterList(
                        (struct CVisualGroupProxy **)v42[0],
                        (const struct MAGN_FILTERLIST *)(a3 + 16));
                v8 = v17;
                if ( v17 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F91D0, 1LL, v17, 0xDAu, 0LL);
              }
            }
          }
          else
          {
            v42[0] = 0LL;
            v18 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, *(_QWORD *)(a3 + 4), v42);
            v8 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F91D0, 1LL, v18, 0xCAu, 0LL);
            }
            else
            {
              v19 = CMagnifier::OnSetColorEffect(v42[0], (const struct MilColorTransform *)(a3 + 20));
              v8 = v19;
              if ( v19 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F91D0, 1LL, v19, 0xCCu, 0LL);
            }
          }
        }
        else
        {
          *(_BYTE *)(a1 + 128) = 0;
          v20 = CMagnifierControl::OnMagnifierDestroy((CMagnifierControl *)a1, *(HWND *)(a3 + 4));
          v8 = v20;
          if ( v20 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F91D0, 1LL, v20, 0xC0u, 0LL);
        }
      }
      else
      {
        v21 = CMagnifierControl::OnMagnifierCreate((CMagnifierControl *)a1, *(HWND *)(a3 + 4), *(_DWORD *)(a3 + 20));
        v8 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F91D0, 1LL, v21, 0xB5u, 0LL);
      }
      goto LABEL_60;
    }
    v22 = CFullScreenMagnifier::OnSetDesktopColorEffect(
            *(CFullScreenMagnifier **)(a1 + 48),
            (const struct MilColorTransform *)(a3 + 12));
    v8 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F91D0, 1LL, v22, 0xF0u, 0LL);
      goto LABEL_60;
    }
    goto LABEL_57;
  }
  v24 = a2 - 1073741938;
  if ( !v24 )
  {
    v37 = (double *)(a3 + 12);
    if ( *(_BYTE *)(a1 + 128) )
    {
      if ( *(double *)(a1 + 152) == *v37 )
      {
        v43 = 0;
        v44 = 0;
        if ( (int)wil::wnf_query_nothrow<unsigned int>(v9, &v44, &v43) >= 0 && v44 && !v43 )
          goto LABEL_60;
      }
      *(double *)(a1 + 152) = *v37;
      MagnifierExperienceHelper::SetMagnificationFactor(
        *(MagnifierExperienceHelper **)(a1 + 160),
        (const double *)(a3 + 12));
      v38 = CFullScreenMagnifier::OnSetDesktopMagnificationFactor(
              *(CFullScreenMagnifier **)(a1 + 48),
              *v37,
              *(_DWORD *)(a3 + 20),
              *(_DWORD *)(a3 + 24));
      v8 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F91D0, 1LL, v38, 0x117u, 0LL);
        goto LABEL_60;
      }
    }
    else
    {
      v39 = CFullScreenMagnifier::OnSetDesktopMagnificationFactor(
              *(CFullScreenMagnifier **)(a1 + 48),
              *v37,
              *(_DWORD *)(a3 + 20),
              *(_DWORD *)(a3 + 24));
      v8 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F91D0, 1LL, v39, 0x11Fu, 0LL);
        goto LABEL_60;
      }
    }
    goto LABEL_57;
  }
  v25 = v24 - 5;
  if ( !v25 )
  {
    v42[0] = 0LL;
    v35 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, *(_QWORD *)(a3 + 4), v42);
    v8 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F91D0, 1LL, v35, 0x12Cu, 0LL);
    }
    else
    {
      v36 = CMagnifier::OnSetMagnifierSamplingMode(v42[0], *(unsigned int *)(a3 + 20));
      v8 = v36;
      if ( v36 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F91D0, 1LL, v36, 0x12Eu, 0LL);
    }
    goto LABEL_60;
  }
  v26 = v25 - 1;
  if ( !v26 )
  {
    v34 = CFullScreenMagnifier::OnSetDesktopMagnifierSamplingMode(*(_QWORD *)(a1 + 48), *(unsigned int *)(a3 + 12));
    v8 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F91D0, 1LL, v34, 0x136u, 0LL);
      goto LABEL_60;
    }
    goto LABEL_57;
  }
  v27 = v26 - 3;
  if ( !v27 )
  {
    v33 = CFullScreenMagnifier::OnSetPersistentDesktopColorEffect(
            *(CFullScreenMagnifier **)(a1 + 48),
            (const struct MilColorTransform *)(a3 + 12));
    v8 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F91D0, 1LL, v33, 0x140u, 0LL);
      goto LABEL_60;
    }
LABEL_57:
    v40 = CMagnifierControl::RenderAndCommit(v23);
    v8 = v40;
    if ( v40 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F91D0, 1LL, v40, 0x166u, 0LL);
    goto LABEL_60;
  }
  if ( v27 != 1 )
    goto LABEL_60;
  v28 = *(_DWORD *)(a3 + 12);
  v29 = (struct CMagnifier *)operator new(0x80uLL);
  v42[0] = v29;
  if ( v29 )
    v30 = MagnifierExperienceHelper::MagnifierExperienceHelper(
            v29,
            (const double *)(a1 + 152),
            (const float *)(a3 + 16),
            (const float *)(a3 + 20));
  else
    v30 = 0LL;
  v42[0] = v30;
  wistd::unique_ptr<MagnifierExperienceHelper,wistd::default_delete<MagnifierExperienceHelper>>::operator=(
    (void **)(a1 + 160),
    (void **)v42);
  if ( v42[0] )
    operator delete(v42[0], 0x80uLL);
  v31 = a1 + 16;
  if ( v28 )
  {
    v32 = CWindowList::RegisterForSoftwareCursorChangeNotification(
            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
            (struct ISoftwareCursorChangeListener *)(v31 & ((unsigned __int128)-(__int128)a1 >> 64)));
    v8 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F91D0, 1LL, v32, 0x158u, 0LL);
      goto LABEL_60;
    }
  }
  else
  {
    CWindowList::UnregisterForSoftwareCursorChangeNotification(
      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
      (struct ISoftwareCursorChangeListener *)(v31 & ((unsigned __int128)-(__int128)a1 >> 64)));
  }
  *(_BYTE *)(a1 + 128) = *(_DWORD *)(a3 + 12) != 0;
LABEL_60:
  if ( v8 != -2147023728 )
    v7 = v8;
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v7;
}
