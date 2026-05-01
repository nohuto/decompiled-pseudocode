/*
 * XREFs of ?GetScrollPercent@CScrollViewer@@UEAANXZ @ 0x1804D8BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMinScrollOffset@CScrollViewer@@AEAAHXZ @ 0x1804D988C (-_GetMinScrollOffset@CScrollViewer@@AEAAHXZ.c)
 */

double __fastcall CScrollViewer::GetScrollPercent(CScrollViewer *this)
{
  CScrollViewer *v1; // rdi

  v1 = (CScrollViewer *)((char *)this - 208);
  if ( (unsigned int)CScrollViewer::_GetMinScrollOffset((CScrollViewer *)((char *)this - 208)) )
    return (double)*((int *)this + 12) * 100.0 / (double)(int)CScrollViewer::_GetMinScrollOffset(v1);
  else
    return 0.0;
}
