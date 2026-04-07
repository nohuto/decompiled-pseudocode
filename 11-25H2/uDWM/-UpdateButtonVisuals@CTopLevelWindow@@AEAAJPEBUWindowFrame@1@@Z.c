/*
 * XREFs of ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x1800126A8
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18000D460 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z @ 0x18000CC08 (-GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18000F520 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x180012C20 (-EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z.c)
 *     ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x180012D98 (-GetCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ @ 0x180012FBC (-TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z @ 0x18001C8B8 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z.c)
 *     ?SetReverseRTLMirror@CButton@@QEAAX_N@Z @ 0x18008E21C (-SetReverseRTLMirror@CButton@@QEAAX_N@Z.c)
 *     ?SetGhost@CButton@@QEAAXXZ @ 0x1800A8B94 (-SetGhost@CButton@@QEAAXXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateButtonVisuals(CButton **this, const struct CTopLevelWindow::WindowFrame *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  CWindowData *v9; // r8
  int v10; // ecx
  __int64 v11; // r14
  int v12; // esi
  int MetricsForCaptionBar; // r8d
  unsigned int CaptionColor; // eax
  float v16; // xmm6_4
  char v17; // dl
  CButton *v18; // rcx
  char *v19; // rsi
  int v20; // edx
  const struct CBitmapSourceArray *v21; // r8
  int v22; // eax
  const struct CBitmapSourceArray *v23; // rdx
  CButton *v24; // rcx
  const struct CBitmapSourceArray *v25; // r8
  int v26; // eax
  CButton *v27; // rcx
  int v28; // eax
  CButton *v29; // rcx
  int v30; // eax
  int v31; // edx
  const struct CBitmapSourceArray *v32; // r8
  int v33; // eax
  const struct CBitmapSourceArray *v34; // rdx
  CButton *v35; // rcx
  const struct CBitmapSourceArray *v36; // r8
  int v37; // eax
  CButton *v38; // rcx
  int v39; // eax
  CButton *v40; // rcx
  int v41; // eax
  unsigned int i; // edx

  v4 = CTopLevelWindow::EnsureNonClientAreaButton(this, 1LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xA0Fu, 0LL);
    return v5;
  }
  v6 = CTopLevelWindow::EnsureNonClientAreaButton(this, 2LL);
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xA10u, 0LL);
    return v5;
  }
  v7 = CTopLevelWindow::EnsureNonClientAreaButton(this, 3LL);
  v5 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xA11u, 0LL);
    return v5;
  }
  v8 = CTopLevelWindow::EnsureNonClientAreaButton(this, 0LL);
  v5 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xA12u, 0LL);
    return v5;
  }
  if ( *((_DWORD *)this + 172) == -1 )
  {
    v9 = this[89];
    v10 = *((_DWORD *)v9 + 87);
    if ( v10 >= 192 )
      *((_DWORD *)this + 172) = 3;
    else
      *((_DWORD *)this + 172) = v10 >= 144 ? 2 : v10 >= 120;
    v11 = *(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames;
    v12 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 136LL) + 72LL)
        + *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 136LL) + 76LL);
    MetricsForCaptionBar = CWindowData::GetMetricsForCaptionBar(v9, 0x1Fu);
    if ( v12 + *(_DWORD *)(**(_QWORD **)(320LL * *((int *)this + 172) + v11 + 200) + 28LL) > MetricsForCaptionBar )
    {
      *((_DWORD *)this + 172) = 0;
      for ( i = 0; i < 3; *((_DWORD *)this + 172) = i )
      {
        if ( v12 + *(_DWORD *)(**(_QWORD **)(320LL * (int)i + v11 + 520) + 28LL) > MetricsForCaptionBar )
          break;
        ++i;
      }
    }
  }
  if ( a2 )
  {
    CaptionColor = CTopLevelWindow::GetCaptionColor((CTopLevelWindow *)this);
    if ( BYTE2(CaptionColor) + 5 * BYTE1(CaptionColor) + 2 * (unsigned int)(unsigned __int8)CaptionColor <= 0x400 )
      CDesktopManager::IsHighContrastMode();
    v16 = FLOAT_1_0;
    if ( !CTopLevelWindow::TreatAsActiveWindow((CTopLevelWindow *)this) )
      v16 = FLOAT_0_40000001;
    v18 = this[62];
    v19 = (char *)a2 + 320 * *((int *)this + 172) + 200;
    if ( v17 )
    {
      if ( v18 )
      {
        v20 = *((_DWORD *)this + 146);
        v21 = (const struct CBitmapSourceArray *)(v19 + 128);
        if ( (v20 & 0x40000) == 0 )
          v21 = (const struct CBitmapSourceArray *)(v19 + 96);
        v22 = CButton::SetVisualStates(
                v18,
                (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + ((~(_WORD)v20 & 0x800 | 0x200uLL) >> 6)),
                v21,
                v16);
        v23 = (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + 8);
        v5 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0xA63u, 0LL);
          return v5;
        }
      }
      else
      {
        v23 = (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + 8);
      }
      v24 = this[63];
      if ( v24 )
      {
        v25 = (const struct CBitmapSourceArray *)(v19 + 128);
        if ( ((_BYTE)this[73] & 0x20) == 0 )
          v25 = (const struct CBitmapSourceArray *)(v19 + 64);
        v26 = CButton::SetVisualStates(v24, v23, v25, v16);
        v5 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0xA6Eu, 0LL);
          return v5;
        }
      }
      v27 = this[64];
      if ( v27 )
      {
        v28 = CButton::SetVisualStates(
                v27,
                (const struct CTopLevelWindow::WindowFrame *)((char *)a2
                                                            + (-(__int64)(((_DWORD)this[73] & 0xB00) != 0) & 0xFFFFFFFFFFFFFFE0uLL)
                                                            + 168),
                (const struct CBitmapSourceArray *)v19,
                v16);
        v5 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0xA7Au, 0LL);
          return v5;
        }
        if ( (*((_BYTE *)this[89] + 672) & 0x40) != 0 )
          CButton::SetGhost(this[64]);
      }
      v29 = this[61];
      if ( !v29 )
        return v5;
      v30 = CButton::SetVisualStates(
              v29,
              (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + 40),
              (const struct CBitmapSourceArray *)(v19 + 32),
              v16);
      v5 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0xA88u, 0LL);
        return v5;
      }
    }
    else
    {
      if ( v18 )
      {
        v31 = *((_DWORD *)this + 146);
        v32 = (const struct CBitmapSourceArray *)(v19 + 288);
        if ( (v31 & 0x40000) == 0 )
          v32 = (const struct CBitmapSourceArray *)(v19 + 256);
        v33 = CButton::SetVisualStates(
                v18,
                (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + ((~(_WORD)v31 & 0x800 | 0x1200uLL) >> 6)),
                v32,
                v16);
        v34 = (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + 72);
        v5 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0xA99u, 0LL);
          return v5;
        }
      }
      else
      {
        v34 = (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + 72);
      }
      v35 = this[63];
      if ( v35 )
      {
        v36 = (const struct CBitmapSourceArray *)(v19 + 288);
        if ( ((_BYTE)this[73] & 0x20) == 0 )
          v36 = (const struct CBitmapSourceArray *)(v19 + 224);
        v37 = CButton::SetVisualStates(v35, v34, v36, v16);
        v5 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v37, 0xAA4u, 0LL);
          return v5;
        }
      }
      v38 = this[64];
      if ( v38 )
      {
        v39 = CButton::SetVisualStates(
                v38,
                (const struct CTopLevelWindow::WindowFrame *)((char *)a2
                                                            + (-(__int64)(((_DWORD)this[73] & 0xB00) != 0) & 0xFFFFFFFFFFFFFFE0uLL)
                                                            + 168),
                (const struct CBitmapSourceArray *)(v19 + 160),
                v16);
        v5 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v39, 0xAB0u, 0LL);
          return v5;
        }
        if ( (*((_BYTE *)this[89] + 672) & 0x40) != 0 )
          CButton::SetGhost(this[64]);
      }
      v40 = this[61];
      if ( !v40 )
        return v5;
      v41 = CButton::SetVisualStates(
              v40,
              (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + 104),
              (const struct CBitmapSourceArray *)(v19 + 192),
              v16);
      v5 = v41;
      if ( v41 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v41, 0xABEu, 0LL);
        return v5;
      }
    }
    CButton::SetReverseRTLMirror(this[61], (*((_DWORD *)this[89] + 103) & 8) != 0);
  }
  return v5;
}
