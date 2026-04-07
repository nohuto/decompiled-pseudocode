/*
 * XREFs of ?CalculateWindowMetrics@CSecondaryWindowRepresentation@@AEAA_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x18001DE00
 * Callers:
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18001DCF8 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 * Callees:
 *     ?GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ @ 0x18001DFB8 (-GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ.c)
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x180021020 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ?AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180028298 (-AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z.c)
 */

char __fastcall CSecondaryWindowRepresentation::CalculateWindowMetrics(
        CSecondaryWindowRepresentation *this,
        struct tagSIZE *a2,
        struct _MARGINS *a3)
{
  struct CWindowData *RepresentationWindowData; // rax
  LONG v7; // ebx
  struct _MARGINS *v8; // rbp
  __int64 v9; // rdi
  bool v11; // zf
  LONG v12; // eax
  LONG v13; // eax
  int v14; // ecx
  LONG v15; // eax
  int v16; // eax
  __m128i v17; // xmm1
  int v18; // ecx
  int v19; // edx
  int v20; // r8d
  struct _MARGINS v21; // xmm0
  int v22; // edx
  LONG v23; // ebx
  struct tagRECT v24; // [rsp+20h] [rbp-28h] BYREF

  RepresentationWindowData = CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)this + 64));
  v7 = 0;
  v8 = (struct _MARGINS *)RepresentationWindowData;
  v9 = *((_QWORD *)RepresentationWindowData + 55);
  if ( !v9 )
    return 0;
  v11 = (*((_DWORD *)this + 10) & 0x100) == 0;
  v24 = 0LL;
  if ( v11 && CDesktopManager::AdjustDesktopWindowSize(*((HWND *)RepresentationWindowData + 5), &v24) )
  {
    v12 = 0;
    if ( v24.right - v24.left >= 0 )
      v12 = v24.right - v24.left;
    a2->cx = v12;
    if ( v24.bottom - v24.top >= 0 )
      v7 = v24.bottom - v24.top;
    a2->cy = v7;
LABEL_28:
    v21 = (struct _MARGINS)xmmword_1800FDEC0;
    goto LABEL_29;
  }
  v13 = 0;
  if ( v8[3].cyTopHeight - v8[3].cxLeftWidth >= 0 )
    v13 = v8[3].cyTopHeight - v8[3].cxLeftWidth;
  v14 = v8[3].cyBottomHeight - v8[3].cxRightWidth;
  a2->cx = v13;
  v15 = 0;
  if ( v14 >= 0 )
    v15 = v14;
  a2->cy = v15;
  v16 = *((_DWORD *)this + 10);
  if ( (v16 & 4) != 0 || *((_DWORD *)this + 18) == 3 )
  {
    if ( !*((_QWORD *)this + 6) )
    {
      v22 = 0;
      if ( v8[14].cyTopHeight - v8[14].cxLeftWidth >= 0 )
        v22 = v8[14].cyTopHeight - v8[14].cxLeftWidth;
      if ( v8[14].cxRightWidth - v8[13].cyBottomHeight >= 0 )
        v7 = v8[14].cxRightWidth - v8[13].cyBottomHeight;
      v23 = v7 - v8[17].cxLeftWidth - v8[16].cyBottomHeight;
      a2->cy = v22 - v8[17].cyTopHeight - v8[17].cxRightWidth;
      a2->cx = v23;
      goto LABEL_28;
    }
    v21 = v8[4];
    goto LABEL_29;
  }
  if ( (v16 & 0x80u) == 0 )
  {
    if ( (*(_BYTE *)(v9 + 200) & 4) == 0 )
    {
      CTopLevelWindow::GetFrameMargins((CTopLevelWindow *)v9, a3);
      return 1;
    }
    v21 = *(struct _MARGINS *)(v9 + 636);
LABEL_29:
    *a3 = v21;
    return 1;
  }
  v17 = *(__m128i *)(v9 + 620);
  v18 = *(_DWORD *)(v9 + 656);
  v19 = *(_DWORD *)(v9 + 660);
  v20 = *(_DWORD *)(v9 + 664);
  a3->cxLeftWidth = v17.m128i_i32[0] - *(_DWORD *)(v9 + 652);
  a3->cxRightWidth = _mm_cvtsi128_si32(_mm_srli_si128(v17, 4)) - v18;
  a3->cyTopHeight = _mm_srli_si128(v17, 8).m128i_u32[0] - v19;
  a3->cyBottomHeight = _mm_cvtsi128_si32(_mm_srli_si128(v17, 12)) - v20;
  return 1;
}
