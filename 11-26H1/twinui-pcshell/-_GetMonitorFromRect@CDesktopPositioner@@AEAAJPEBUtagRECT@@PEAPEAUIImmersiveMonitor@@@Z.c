/*
 * XREFs of ?_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1802A3984
 * Callers:
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18008C738 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 *     ?_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x180165890 (-_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x180166C54 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_MoveRectToMonitor@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@UtagRECT@@PEAU3@@Z @ 0x180512DE4 (-_MoveRectToMonitor@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@UtagRECT@@PEAU3@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetMonitorFromPoint@CDesktopPositioner@@AEAAJPEBUtagPOINT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1802A39F0 (-_GetMonitorFromPoint@CDesktopPositioner@@AEAAJPEBUtagPOINT@@PEAPEAUIImmersiveMonitor@@@Z.c)
 */

__int64 __fastcall CDesktopPositioner::_GetMonitorFromRect(
        CDesktopPositioner *this,
        const struct tagRECT *a2,
        struct IImmersiveMonitor **a3)
{
  int MonitorFromPoint; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v7; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  v7 = 0LL;
  if ( a2 )
    v7 = *(struct tagPOINT *)&a2->left;
  MonitorFromPoint = CDesktopPositioner::_GetMonitorFromPoint(this, &v7, a3);
  v4 = MonitorFromPoint;
  if ( MonitorFromPoint < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4DF,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)MonitorFromPoint);
  return v4;
}
