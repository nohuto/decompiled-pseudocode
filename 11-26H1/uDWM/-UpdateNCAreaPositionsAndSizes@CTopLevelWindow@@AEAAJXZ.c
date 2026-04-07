/*
 * XREFs of ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180011D38
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x1800151F0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x1800106AC (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetInsetFromParentBottom@CVisual@@QEAAXH@Z @ 0x180011CA0 (-SetInsetFromParentBottom@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentRight@CVisual@@QEAAXH@Z @ 0x180011CFC (-SetInsetFromParentRight@CVisual@@QEAAXH@Z.c)
 *     ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x180012098 (-UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z.c)
 *     ?_GetRightFrameThickness@CTopLevelWindow@@AEAAHXZ @ 0x180012204 (-_GetRightFrameThickness@CTopLevelWindow@@AEAAHXZ.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180013488 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x1800135C4 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z @ 0x180014250 (-SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x1800202C0 (-HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z @ 0x1800205F8 (-GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z.c)
 *     ?_GetMarginsVisibleOutside@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z @ 0x1800206DC (-_GetMarginsVisibleOutside@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z.c)
 *     ?GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z @ 0x180020790 (-GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180022CA0 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?ScaleForDpi@CWindowData@@QEBAII@Z @ 0x1800735A0 (-ScaleForDpi@CWindowData@@QEBAII@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaPositionsAndSizes(CTopLevelWindow *this)
{
  __int64 v2; // r8
  __int64 v3; // r8
  CVisual *v4; // rcx
  CTopLevelWindow *v5; // rcx
  bool HasThinRenderedBorder; // al
  int v7; // edx
  int v8; // r9d
  int v9; // esi
  int v10; // ecx
  int v11; // ecx
  bool v12; // zf
  int v13; // esi
  unsigned int v14; // r14d
  int updated; // eax
  unsigned int v16; // edi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int cyTopHeight; // edi
  CVisual *v21; // rcx
  int v22; // eax
  __int64 v24; // r8
  LONG *v25; // rcx
  CWindowData *v26; // rcx
  int MetricsForCaptionBar; // r14d
  int v28; // eax
  unsigned int v29; // edx
  int v30; // r14d
  struct _MARGINS v31; // [rsp+30h] [rbp-10h] BYREF
  struct tagSIZE v32; // [rsp+70h] [rbp+30h] BYREF
  int v33; // [rsp+78h] [rbp+38h] BYREF
  int v34; // [rsp+80h] [rbp+40h] BYREF

  if ( *((_QWORD *)this + 58) )
  {
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 67), *((_DWORD *)this + 143));
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 67), *((_DWORD *)this + 145));
    CVisual::SetInsetFromParentRight(*((CVisual **)this + 67), *((unsigned int *)this + 144), v2);
    CVisual::SetInsetFromParentBottom(*((CVisual **)this + 67), *((unsigned int *)this + 146), v3);
    v4 = (CVisual *)*((_QWORD *)this + 35);
    if ( v4 )
      CVisual::SetInsetFromParent(v4, (const struct _MARGINS *)(*((_QWORD *)this + 67) + 72LL));
  }
  CTopLevelWindow::_GetRightFrameThickness(this);
  v31 = 0LL;
  CTopLevelWindow::_GetMarginsVisibleOutside(v5, &v31);
  HasThinRenderedBorder = CTopLevelWindow::HasThinRenderedBorder(*((_DWORD *)this + 142));
  v9 = *((_DWORD *)this + 143);
  v10 = v8 + 1;
  if ( !HasThinRenderedBorder )
    v10 = v8;
  v11 = v10 - 1;
  if ( v11 <= v7 )
    v11 = v7;
  v12 = (*((_BYTE *)this + 184) & 4) == 0;
  v33 = v11;
  if ( v12 )
    v13 = 2 * v9 - v31.cxLeftWidth;
  else
    v13 = v9 + 2;
  v32.cx = 0;
  v34 = 0;
  CTopLevelWindow::GetButtonHeightAndOffset(this, (int *)&v32, &v34);
  v14 = v34;
  updated = CTopLevelWindow::UpdateNCAreaButton(this, 3LL, (unsigned int)v32.cx, (unsigned int)v34, &v33);
  v16 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xC77u, 0LL);
  }
  else
  {
    v17 = CTopLevelWindow::UpdateNCAreaButton(this, 2LL, (unsigned int)v32.cx, v14, &v33);
    v16 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xC78u, 0LL);
    }
    else
    {
      v18 = CTopLevelWindow::UpdateNCAreaButton(this, 1LL, (unsigned int)v32.cx, v14, &v33);
      v16 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xC79u, 0LL);
      }
      else
      {
        v19 = CTopLevelWindow::UpdateNCAreaButton(this, 0LL, (unsigned int)v32.cx, v14, &v33);
        v16 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xC7Au, 0LL);
        }
        else
        {
          cyTopHeight = v31.cyTopHeight;
          if ( *((_QWORD *)this + 65) )
          {
            v26 = (CWindowData *)*((_QWORD *)this + 87);
            if ( *((_QWORD *)v26 + 19) || (*((_DWORD *)this + 142) & 0x10000) == 0 )
            {
              MetricsForCaptionBar = CWindowData::GetMetricsForCaptionBar(v26, 49);
              v28 = CWindowData::GetMetricsForCaptionBar(*((CWindowData **)this + 87), 50);
            }
            else
            {
              v28 = 0;
              MetricsForCaptionBar = 0;
            }
            CVisual::SetSize(*((CVisual **)this + 65), MetricsForCaptionBar, v28);
            CVisual::SetInsetFromParentTop(
              *((CVisual **)this + 65),
              cyTopHeight + (*((_DWORD *)this + 145) - *(_DWORD *)(*((_QWORD *)this + 65) + 68LL) - cyTopHeight) / 2);
            CVisual::SetInsetFromParentLeft(*((CVisual **)this + 65), v13);
            v30 = *(_DWORD *)(*((_QWORD *)this + 65) + 64LL);
            if ( v30 > 0 )
              v13 += v30 + CWindowData::ScaleForDpi(*((CWindowData **)this + 87), v29);
          }
          v21 = (CVisual *)*((_QWORD *)this + 63);
          if ( v21 )
          {
            CVisual::SetInsetFromParentTop(v21, cyTopHeight);
            CVisual::SetInsetFromParentLeft(*((CVisual **)this + 63), v13);
            CVisual::SetInsetFromParentRight(*((CVisual **)this + 63), (unsigned int)v33, v24);
            v25 = (LONG *)*((_QWORD *)this + 63);
            v32.cx = v25[16];
            v32.cy = *((_DWORD *)this + 145) - cyTopHeight;
            CVisual::SetSize((CVisual *)v25, &v32);
          }
          v22 = CTopLevelWindow::UpdatePinnedParts(this);
          v16 = v22;
          if ( v22 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xCA1u, 0LL);
        }
      }
    }
  }
  return v16;
}
