/*
 * XREFs of LogicalToPhysicalInPlaceRectWithSubpixel @ 0x140065D0C
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x140031C80 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     GetRect @ 0x140052B80 (GetRect.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x140064C08 (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x140065C34 (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     UpdateCheckpoint @ 0x14009075C (UpdateCheckpoint.c)
 *     ?GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z @ 0x1401B1704 (-GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z.c)
 *     NtUserLogicalToPhysicalDpiPointForWindow @ 0x1401DAD20 (NtUserLogicalToPhysicalDpiPointForWindow.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x140232CAC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1400335CC (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x140065F08 (-ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z.c)
 */

__int64 __fastcall LogicalToPhysicalInPlaceRectWithSubpixel(const struct tagWND *a1, int *a2, unsigned __int64 a3)
{
  unsigned int v5; // ebx
  const struct tagWND *TopLevelOrDpiBoundaryWindow; // rax
  float *v8; // rcx
  __int64 v9; // r11
  __int64 v10; // r11
  int v11; // r9d
  float v12; // xmm0_4
  __int64 v13; // rax
  int v14; // ecx
  int v15; // edx

  v5 = 0;
  TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(a1);
  if ( TopLevelOrDpiBoundaryWindow )
  {
    v8 = (float *)*((_QWORD *)TopLevelOrDpiBoundaryWindow + 27);
    if ( v8 )
    {
      ScaleValueWithSubpixel(a2, (float *)(a3 & ((unsigned __int128)-(__int128)a3 >> 64)), *v8);
      ScaleValueWithSubpixel(
        a2 + 1,
        (float *)((a3 + 4) & -(__int64)(a3 != 0)),
        *(float *)(*(_QWORD *)(v9 + 216) + 20LL));
      v5 = 1;
      v11 = (int)(float)((float)((float)((float)a2[2] * **(float **)(v10 + 216)) + 0.0) + 0.5);
      a2[2] = v11;
      v12 = (float)((float)((float)a2[3] * *(float *)(*(_QWORD *)(v10 + 216) + 20LL)) + 0.0) + 0.5;
      a2[3] = (int)v12;
      v13 = *(_QWORD *)(v10 + 216);
      v14 = (int)*(float *)(v13 + 48);
      v15 = (int)*(float *)(v13 + 52);
      *a2 += v14;
      a2[2] = v11 + v14;
      a2[1] += v15;
      a2[3] = (int)v12 + v15;
    }
  }
  return v5;
}
