/*
 * XREFs of ?CalculateWindowMetrics@CSecondaryWindowRepresentation@@AEAA_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x180029218
 * Callers:
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18002910C (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 * Callees:
 *     ?GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ @ 0x1800293B4 (-GetRepresentationWindowData@CWindowRepresentation@@QEBAPEAVCWindowData@@XZ.c)
 *     ?AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1800293C8 (-AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x180029CF4 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
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
  bool v10; // zf
  LONG v11; // eax
  int v12; // ecx
  LONG v13; // eax
  int v14; // eax
  LONG v15; // eax
  struct _MARGINS v16; // xmm0
  int v18; // r8d
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // edx
  struct tagRECT v23; // [rsp+20h] [rbp-28h] BYREF

  RepresentationWindowData = CWindowRepresentation::GetRepresentationWindowData((CSecondaryWindowRepresentation *)((char *)this + 64));
  v7 = 0;
  v8 = (struct _MARGINS *)RepresentationWindowData;
  v9 = *((_QWORD *)RepresentationWindowData + 55);
  if ( v9 )
  {
    v10 = (*((_DWORD *)this + 10) & 0x100) == 0;
    v23 = 0LL;
    if ( v10 && CDesktopManager::AdjustDesktopWindowSize(*((HWND *)RepresentationWindowData + 5), &v23) )
    {
      v15 = 0;
      if ( v23.right - v23.left >= 0 )
        v15 = v23.right - v23.left;
      a2->cx = v15;
      if ( v23.bottom - v23.top >= 0 )
        v7 = v23.bottom - v23.top;
    }
    else
    {
      v11 = 0;
      if ( v8[3].cyTopHeight - v8[3].cxLeftWidth >= 0 )
        v11 = v8[3].cyTopHeight - v8[3].cxLeftWidth;
      v12 = v8[3].cyBottomHeight - v8[3].cxRightWidth;
      a2->cx = v11;
      v13 = 0;
      if ( v12 >= 0 )
        v13 = v12;
      a2->cy = v13;
      v14 = *((_DWORD *)this + 10);
      if ( (v14 & 4) == 0 && *((_DWORD *)this + 18) != 3 )
      {
        if ( (v14 & 0x80u) != 0 )
        {
          v18 = HIDWORD(*(_QWORD *)(v9 + 604)) - *(_DWORD *)(v9 + 640);
          v19 = *(_QWORD *)(v9 + 612) - *(_DWORD *)(v9 + 644);
          v20 = HIDWORD(*(_QWORD *)(v9 + 612)) - *(_DWORD *)(v9 + 648);
          a3->cxLeftWidth = *(_QWORD *)(v9 + 604) - *(_DWORD *)(v9 + 636);
          a3->cxRightWidth = v18;
          a3->cyTopHeight = v19;
          a3->cyBottomHeight = v20;
          return 1;
        }
        if ( (*(_BYTE *)(v9 + 184) & 4) == 0 )
        {
          CTopLevelWindow::GetFrameMargins((CTopLevelWindow *)v9, a3);
          return 1;
        }
        v16 = *(struct _MARGINS *)(v9 + 620);
LABEL_18:
        *a3 = v16;
        return 1;
      }
      if ( *((_QWORD *)this + 6) )
      {
        v16 = v8[4];
        goto LABEL_18;
      }
      v21 = 0;
      v22 = v8[14].cyTopHeight - v8[14].cxLeftWidth;
      if ( v8[14].cxRightWidth - v8[13].cyBottomHeight >= 0 )
        v21 = v8[14].cxRightWidth - v8[13].cyBottomHeight;
      a2->cx = v21 - v8[17].cxLeftWidth - v8[16].cyBottomHeight;
      if ( v22 >= 0 )
        v7 = v22;
      v7 = v7 - v8[17].cyTopHeight - v8[17].cxRightWidth;
    }
    v16 = (struct _MARGINS)xmmword_1800F5108;
    a2->cy = v7;
    goto LABEL_18;
  }
  return 0;
}
