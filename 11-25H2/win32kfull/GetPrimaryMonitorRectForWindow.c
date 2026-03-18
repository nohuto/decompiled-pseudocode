/*
 * XREFs of GetPrimaryMonitorRectForWindow @ 0x1401E7194
 * Callers:
 *     ?PostMessagesForRecalcDisabledWindows@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@@Z @ 0x1402C4D80 (-PostMessagesForRecalcDisabledWindows@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@@Z.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1400908AC (GetMonitorRectForWindow.c)
 */

__int64 __fastcall GetPrimaryMonitorRectForWindow(__int64 a1, const struct tagWND *a2)
{
  __int64 DispInfo; // rax

  DispInfo = GetDispInfo(a1);
  GetMonitorRectForWindow(a1, *(_QWORD *)(DispInfo + 104), a2);
  return a1;
}
