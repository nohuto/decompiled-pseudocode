/*
 * XREFs of ?OnMonitorTargetsChanged@CGlobalComposition@@UEAAXXZ @ 0x1801CE160
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

void __fastcall CGlobalComposition::OnMonitorTargetsChanged(CGlobalComposition *this)
{
  __int64 *v1; // rdi
  __int64 *i; // rbx

  v1 = (__int64 *)*((_QWORD *)this + 816);
  for ( i = (__int64 *)*((_QWORD *)this + 815); i != v1; ++i )
    CVisual::PropagateFlags(*i, 0x15u);
}
