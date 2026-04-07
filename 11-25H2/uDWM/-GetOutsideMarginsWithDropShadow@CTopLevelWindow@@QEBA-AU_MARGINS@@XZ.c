/*
 * XREFs of ?GetOutsideMarginsWithDropShadow@CTopLevelWindow@@QEBA?AU_MARGINS@@XZ @ 0x180002C88
 * Callers:
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x1800029D0 (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     ?RecordWindowRect@CAnimationComponent@@QEAAXXZ @ 0x180084A7C (-RecordWindowRect@CAnimationComponent@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct _MARGINS *__fastcall CTopLevelWindow::GetOutsideMarginsWithDropShadow(
        CTopLevelWindow *this,
        struct _MARGINS *__return_ptr retstr)
{
  struct _MARGINS v2; // xmm0
  struct _MARGINS *v3; // r8
  __int64 v4; // rcx
  __int64 v5; // r9

  v2 = *(struct _MARGINS *)((char *)this + 620);
  v3 = retstr;
  v4 = this - (CTopLevelWindow *)retstr;
  v5 = 4LL;
  *retstr = v2;
  do
  {
    v3->cxLeftWidth -= *(int *)((char *)&v3[40].cyBottomHeight + v4);
    v3 = (struct _MARGINS *)((char *)v3 + 4);
    --v5;
  }
  while ( v5 );
  return retstr;
}
