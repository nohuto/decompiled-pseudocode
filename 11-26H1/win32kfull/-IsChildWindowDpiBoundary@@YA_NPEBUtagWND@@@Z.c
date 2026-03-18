/*
 * XREFs of ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14002EDBC
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x14002EC34 (PhysicalToLogicalInPlaceRgnWorker.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x14002F928 (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     GetMonitorTransform @ 0x14004A26C (GetMonitorTransform.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x14004B91C (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     UpdateWindowMonitor @ 0x14004BA40 (UpdateWindowMonitor.c)
 *     InitializeMonitorInfo @ 0x1400A6978 (InitializeMonitorInfo.c)
 *     ?IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z @ 0x14012CD30 (-IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z.c)
 *     xxxSetLayeredWindow @ 0x14014CE10 (xxxSetLayeredWindow.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x140220848 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14026F8C8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x140296A44 (-xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 * Callees:
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z @ 0x14002F6D0 (-GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z.c)
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 */

char __fastcall IsChildWindowDpiBoundary(const struct tagWND *a1)
{
  __int64 v1; // rax
  char v2; // di
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  __int64 v8; // rbx
  __int64 v9; // r8
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_QWORD *)a1 + 13);
  v2 = 0;
  if ( v1 )
  {
    v4 = *((_QWORD *)a1 + 3);
    if ( (!v4 || (v5 = *(_QWORD *)(v4 + 8)) == 0 || v1 != *(_QWORD *)(v5 + 24))
      && (((unsigned __int16)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v1 + 40) + 288LL) >> 8)) & 0x1FF) != 0 )
    {
      WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(a1);
      if ( WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*((const struct tagWND **)a1 + 13)) )
        return 1;
      v8 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
      if ( v8 )
      {
        v9 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8;
        LOWORD(v9) = v9 & 0x1FF;
        GetMonitorRectForDpi(v10, v8, v9);
        if ( *(_QWORD *)(*(_QWORD *)(v8 + 40) + 28LL) != v10[0] )
          return 1;
      }
    }
  }
  return v2;
}
