/*
 * XREFs of ?SetScrollPercent@CScrollViewer@@UEAAXN@Z @ 0x1804D93D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ApplyScroll@CScrollViewer@@AEAAXH_N@Z @ 0x1804D95A4 (-_ApplyScroll@CScrollViewer@@AEAAXH_N@Z.c)
 *     ?_GetMinScrollOffset@CScrollViewer@@AEAAHXZ @ 0x1804D988C (-_GetMinScrollOffset@CScrollViewer@@AEAAHXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScrollViewer::SetScrollPercent(CScrollViewer *this, double a2)
{
  CScrollViewer *v2; // rbx
  int MinScrollOffset; // eax

  v2 = (CScrollViewer *)((char *)this - 208);
  if ( (*(unsigned __int8 (__fastcall **)(CScrollViewer *))(*(_QWORD *)this + 64LL))(this) && a2 >= 0.0 && a2 <= 100.0 )
  {
    MinScrollOffset = CScrollViewer::_GetMinScrollOffset(v2);
    CScrollViewer::_ApplyScroll(v2, (int)((double)MinScrollOffset * a2 / 100.0), 0);
  }
}
