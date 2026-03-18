/*
 * XREFs of ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14003364C
 * Callers:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1400335CC (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     UpdateWindowMonitor @ 0x140033EB0 (UpdateWindowMonitor.c)
 *     ?IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z @ 0x14004C070 (-IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z.c)
 *     xxxSetLayeredWindow @ 0x14005C15C (xxxSetLayeredWindow.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x140065C34 (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     GetMonitorTransform @ 0x14008FE9C (GetMonitorTransform.c)
 *     InitializeMonitorInfo @ 0x1400901C8 (InitializeMonitorInfo.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1401EFF20 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x140232CAC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1402C9B7C (-xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x140091044 (GetMonitorRectForDpi.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z @ 0x1401B1920 (-GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z.c)
 */

char __fastcall IsChildWindowDpiBoundary(const struct tagWND *a1)
{
  char v2; // di
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r8
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)a1 + 13);
  if ( v3 )
  {
    v4 = *((_QWORD *)a1 + 3);
    if ( (!v4 || (v5 = *(_QWORD *)(v4 + 8)) == 0 || v3 != *(_QWORD *)(v5 + 24))
      && (((unsigned __int16)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v3 + 40) + 288LL) >> 8)) & 0x1FF) != 0 )
    {
      WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(a1);
      if ( WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*((const struct tagWND **)a1 + 13)) )
        return 1;
      v9 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL), v8);
      if ( v9 )
      {
        v10 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8;
        LOWORD(v10) = v10 & 0x1FF;
        GetMonitorRectForDpi(v11, v9, v10);
        if ( *(_QWORD *)(*(_QWORD *)(v9 + 40) + 28LL) != v11[0] )
          return 1;
      }
    }
  }
  return v2;
}
