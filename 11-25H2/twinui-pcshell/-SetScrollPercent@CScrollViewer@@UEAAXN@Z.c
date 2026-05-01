/*
 * XREFs of ?SetScrollPercent@CScrollViewer@@UEAAXN@Z @ 0x1804C7340
 * Callers:
 *     <none>
 * Callees:
 *     ?_ApplyScroll@CScrollViewer@@AEAAXH_N@Z @ 0x1804C751C (-_ApplyScroll@CScrollViewer@@AEAAXH_N@Z.c)
 *     ?_GetMinScrollOffset@CScrollViewer@@AEAAHXZ @ 0x1804C77FC (-_GetMinScrollOffset@CScrollViewer@@AEAAHXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScrollViewer::SetScrollPercent(CScrollViewer *this, double a2)
{
  int MinScrollOffset; // eax

  if ( (*(unsigned __int8 (__fastcall **)(CScrollViewer *))(*(_QWORD *)this + 64LL))(this) && a2 >= 0.0 && a2 <= 100.0 )
  {
    MinScrollOffset = CScrollViewer::_GetMinScrollOffset((CScrollViewer *)((char *)this - 208));
    CScrollViewer::_ApplyScroll((CScrollViewer *)((char *)this - 208), (int)((double)MinScrollOffset * a2 / 100.0), 0);
  }
}
