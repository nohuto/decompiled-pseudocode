/*
 * XREFs of ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x1800208B0
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x1800204DC (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z @ 0x180020790 (-GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z.c)
 *     ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x180020E50 (-EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z.c)
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z @ 0x18002139C (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z.c)
 *     ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x18004BB14 (-GetCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 *     ?SetGhost@CButton@@QEAAXXZ @ 0x18009BD90 (-SetGhost@CButton@@QEAAXXZ.c)
 *     ?SetReverseRTLMirror@CButton@@QEAAX_N@Z @ 0x18009BDC0 (-SetReverseRTLMirror@CButton@@QEAAX_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateButtonVisuals(CButton **this, const struct CTopLevelWindow::WindowFrame *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  CWindowData *v9; // r8
  int v10; // ecx
  __int64 v11; // rbp
  int v12; // r14d
  int MetricsForCaptionBar; // r8d
  unsigned int CaptionColor; // eax
  bool v16; // r8
  int v17; // edx
  float v18; // xmm6_4
  CButton *v19; // rcx
  char *v20; // rbp
  const struct CBitmapSourceArray *v21; // r8
  const struct CBitmapSourceArray *v22; // rdx
  int v23; // eax
  CButton *v24; // rcx
  const struct CBitmapSourceArray *v25; // r8
  int v26; // eax
  CButton *v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  CButton *v30; // rcx
  int v31; // eax
  const struct CBitmapSourceArray *v32; // r8
  int v33; // eax
  CButton *v34; // rcx
  const struct CBitmapSourceArray *v35; // r8
  int v36; // eax
  CButton *v37; // rcx
  __int64 v38; // rdx
  int v39; // eax
  CButton *v40; // rcx
  int v41; // eax
  unsigned int v42; // edx
  signed int v43; // eax

  v4 = CTopLevelWindow::EnsureNonClientAreaButton(this, 1LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x98Au, 0LL);
    return v5;
  }
  v6 = CTopLevelWindow::EnsureNonClientAreaButton(this, 2LL);
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x98Bu, 0LL);
    return v5;
  }
  v7 = CTopLevelWindow::EnsureNonClientAreaButton(this, 3LL);
  v5 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x98Cu, 0LL);
    return v5;
  }
  v8 = CTopLevelWindow::EnsureNonClientAreaButton(this, 0LL);
  v5 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x98Du, 0LL);
    return v5;
  }
  if ( *((_DWORD *)this + 168) == -1 )
  {
    v9 = this[87];
    v10 = *((_DWORD *)v9 + 87);
    if ( v10 >= 192 )
      *((_DWORD *)this + 168) = 3;
    else
      *((_DWORD *)this + 168) = v10 >= 144 ? 2 : v10 >= 120;
    v11 = *(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames[0];
    v12 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames[0] + 128LL) + 176LL)
        + *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames[0] + 128LL) + 180LL);
    MetricsForCaptionBar = CWindowData::GetMetricsForCaptionBar(v9, 0x1Fu);
    if ( v12 + *(_DWORD *)(**(_QWORD **)(320LL * *((int *)this + 168) + v11 + 192) + 132LL) > MetricsForCaptionBar )
    {
      v42 = 0;
      *((_DWORD *)this + 168) = 0;
      v43 = 0;
      do
      {
        if ( v12 + *(_DWORD *)(**(_QWORD **)(320LL * v43 + v11 + 512) + 132LL) > MetricsForCaptionBar )
          break;
        *((_DWORD *)this + 168) = ++v42;
        v43 = v42;
      }
      while ( v42 < 3 );
    }
  }
  if ( a2 )
  {
    CaptionColor = CTopLevelWindow::GetCaptionColor((CTopLevelWindow *)this);
    v16 = BYTE2(CaptionColor) + 5 * BYTE1(CaptionColor) + 2 * (unsigned int)(unsigned __int8)CaptionColor > 0x400
       || CDesktopManager::IsHighContrastMode();
    v17 = *((_DWORD *)this + 142);
    v18 = FLOAT_1_0;
    if ( (v17 & 0x40) == 0 && (*((_BYTE *)this[87] + 739) & 0x10) == 0 )
      v18 = FLOAT_0_40000001;
    v19 = this[60];
    v20 = (char *)a2 + 320 * *((int *)this + 168) + 192;
    if ( v16 )
    {
      if ( v19 )
      {
        v21 = (const struct CBitmapSourceArray *)(v20 + 128);
        if ( (v17 & 0x40000) == 0 )
          v21 = (const struct CBitmapSourceArray *)(v20 + 96);
        v22 = a2;
        if ( ((_DWORD)this[71] & 0x800) == 0 )
          v22 = (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + 32);
        v23 = CButton::SetVisualStates(v19, v22, v21, v18);
        v5 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x9DEu, 0LL);
          return v5;
        }
      }
      v24 = this[61];
      if ( v24 )
      {
        v25 = (const struct CBitmapSourceArray *)(((_BYTE)this[71] & 0x20) != 0 ? v20 + 128 : v20 + 64);
        v26 = CButton::SetVisualStates(v24, a2, v25, v18);
        v5 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x9E9u, 0LL);
          return v5;
        }
      }
      v27 = this[62];
      if ( v27 )
      {
        v28 = 128LL;
        if ( ((_DWORD)this[71] & 0xB00) == 0 )
          v28 = 160LL;
        v29 = CButton::SetVisualStates(
                v27,
                (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + v28),
                (const struct CBitmapSourceArray *)v20,
                v18);
        v5 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0x9F5u, 0LL);
          return v5;
        }
        if ( (*((_BYTE *)this[87] + 736) & 0x40) != 0 )
          CButton::SetGhost(this[62]);
      }
      v30 = this[59];
      if ( !v30 )
        return v5;
      v31 = CButton::SetVisualStates(
              v30,
              (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + 32),
              (const struct CBitmapSourceArray *)(v20 + 32),
              v18);
      v5 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0xA03u, 0LL);
        return v5;
      }
    }
    else
    {
      if ( v19 )
      {
        v32 = (const struct CBitmapSourceArray *)(v20 + 288);
        if ( (v17 & 0x40000) == 0 )
          v32 = (const struct CBitmapSourceArray *)(v20 + 256);
        v33 = CButton::SetVisualStates(
                v19,
                (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + ((~(_WORD)v17 & 0x800 | 0x1000uLL) >> 6)),
                v32,
                v18);
        v5 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0xA14u, 0LL);
          return v5;
        }
      }
      v34 = this[61];
      if ( v34 )
      {
        v35 = (const struct CBitmapSourceArray *)(v20 + 288);
        if ( ((_BYTE)this[71] & 0x20) == 0 )
          v35 = (const struct CBitmapSourceArray *)(v20 + 224);
        v36 = CButton::SetVisualStates(v34, (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + 64), v35, v18);
        v5 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0xA1Fu, 0LL);
          return v5;
        }
      }
      v37 = this[62];
      if ( v37 )
      {
        v38 = 160LL;
        if ( ((_DWORD)this[71] & 0xB00) != 0 )
          v38 = 128LL;
        v39 = CButton::SetVisualStates(
                v37,
                (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + v38),
                (const struct CBitmapSourceArray *)(v20 + 160),
                v18);
        v5 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v39, 0xA2Bu, 0LL);
          return v5;
        }
        if ( (*((_BYTE *)this[87] + 736) & 0x40) != 0 )
          CButton::SetGhost(this[62]);
      }
      v40 = this[59];
      if ( !v40 )
        return v5;
      v41 = CButton::SetVisualStates(
              v40,
              (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + 96),
              (const struct CBitmapSourceArray *)(v20 + 192),
              v18);
      v5 = v41;
      if ( v41 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v41, 0xA39u, 0LL);
        return v5;
      }
    }
    CButton::SetReverseRTLMirror(this[59], (*((_DWORD *)this[87] + 103) & 8) != 0);
  }
  return v5;
}
