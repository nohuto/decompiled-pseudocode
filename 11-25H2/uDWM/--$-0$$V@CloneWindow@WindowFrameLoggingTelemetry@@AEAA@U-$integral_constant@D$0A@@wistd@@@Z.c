/*
 * XREFs of ??$?0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18004C89C
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x18004C3BC (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x18004D984 (-StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 */

WindowFrameLoggingTelemetry::CloneWindow *__fastcall WindowFrameLoggingTelemetry::CloneWindow::CloneWindow(
        WindowFrameLoggingTelemetry::CloneWindow *this)
{
  char *v2; // rbx
  _QWORD *v3; // rcx

  v2 = (char *)this + 8;
  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 12) = 0;
  *((_BYTE *)this + 72) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = "CloneWindow";
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 20) = 0;
  v3 = (_QWORD *)((char *)this + 88);
  v3[19] = 0LL;
  v3[20] = 0LL;
  memset_0(v3, 0, 0x98uLL);
  *((_DWORD *)v2 + 62) = 1;
  *((_QWORD *)v2 + 32) = 0LL;
  *((_QWORD *)this + 34) = v2;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = this;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 0;
  *((_QWORD *)this + 40) = (char *)this + 48;
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::CloneWindow::`vftable';
  WindowFrameLoggingTelemetry::CloneWindow::StartActivity(this);
  return this;
}
