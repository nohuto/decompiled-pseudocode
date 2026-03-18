/*
 * XREFs of ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1400335CC
 * Callers:
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1400317F8 (PhysicalToLogicalInPlaceRgnWorker.c)
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x140044C70 (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x140065D0C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x140065E14 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x14015470C (PhysicalToLogicalInPlacePointWithParent.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1401A96B0 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     ?GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z @ 0x1401B1704 (-GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z.c)
 * Callees:
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14003364C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 */

const struct tagWND *__fastcall GetTopLevelOrDpiBoundaryWindow(const struct tagWND *a1)
{
  __int64 DesktopWindow; // rax
  __int64 v4; // rdx

  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState() + 96) + 120LL) )
  {
    while ( a1 )
    {
      if ( *((_QWORD *)a1 + 13) )
      {
        DesktopWindow = GetDesktopWindow(a1);
        if ( v4 == DesktopWindow )
          break;
      }
      if ( IsChildWindowDpiBoundary(a1) )
        break;
      a1 = (const struct tagWND *)*((_QWORD *)a1 + 13);
    }
  }
  else
  {
    while ( a1 && !(unsigned int)IsTopLevelWindow(a1) )
      a1 = (const struct tagWND *)*((_QWORD *)a1 + 13);
  }
  return a1;
}
