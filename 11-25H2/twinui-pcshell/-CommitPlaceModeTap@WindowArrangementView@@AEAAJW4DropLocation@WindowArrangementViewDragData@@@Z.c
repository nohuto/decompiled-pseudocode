/*
 * XREFs of ?CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180506744
 * Callers:
 *     ?CommitCurrentPlacement@WindowArrangementView@@UEAAJXZ @ 0x1805066E0 (-CommitCurrentPlacement@WindowArrangementView@@UEAAJXZ.c)
 *     ?PlaceModeTap@WindowArrangementView@@UEAAJUtagPOINT@@@Z @ 0x180508370 (-PlaceModeTap@WindowArrangementView@@UEAAJUtagPOINT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Cleanup@WindowArrangementView@@AEAAXXZ @ 0x18050669C (-Cleanup@WindowArrangementView@@AEAAXXZ.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x180507250 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180508460 (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1805095E4 (-Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowArrangementView::CommitPlaceModeTap(_BYTE *a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v8; // [rsp+58h] [rbp+10h]

  v8 = a2;
  if ( !a1[314] )
  {
    a1[314] = 1;
    v4 = WindowArrangementView::ProcessDrop(a1, a2, a3);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x257,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v4);
      WindowArrangementView::Hide((WindowArrangementView *)(a1 + 24), 1);
      WindowArrangementView::Cleanup((WindowArrangementView *)a1);
      TabletModeTelemetry::TMAppArrange::Stop(a1 + 328, v8);
      return v5;
    }
    WindowArrangementView::Hide((WindowArrangementView *)(a1 + 24), 1);
    WindowArrangementView::Cleanup((WindowArrangementView *)a1);
    TabletModeTelemetry::TMAppArrange::Stop(a1 + 328, v8);
  }
  return 0LL;
}
