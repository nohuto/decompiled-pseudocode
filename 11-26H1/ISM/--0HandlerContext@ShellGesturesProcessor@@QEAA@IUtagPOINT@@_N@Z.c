/*
 * XREFs of ??0HandlerContext@ShellGesturesProcessor@@QEAA@IUtagPOINT@@_N@Z @ 0x18015C550
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180085720 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180086670 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x18015D598 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??0GestureTracker@@QEAA@IUtagPOINT@@_N1@Z @ 0x1801A8B84 (--0GestureTracker@@QEAA@IUtagPOINT@@_N1@Z.c)
 */

ShellGesturesProcessor::HandlerContext *__fastcall ShellGesturesProcessor::HandlerContext::HandlerContext(
        ShellGesturesProcessor::HandlerContext *this,
        unsigned int a2,
        struct tagPOINT a3,
        bool a4)
{
  ShellGesturesProcessor::HandlerContext *result; // rax
  GestureTracker *v9; // [rsp+50h] [rbp+8h]

  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = 1;
  v9 = (GestureTracker *)operator new(0x38uLL);
  *((_QWORD *)this + 1) = GestureTracker::GestureTracker(v9, a2, a3, 1, a4);
  result = this;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  return result;
}
