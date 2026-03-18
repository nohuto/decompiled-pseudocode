/*
 * XREFs of ?OnDaemonTimer@DesktopRecalc@@YAXXZ @ 0x1401B5AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTimer@CRapidHpdInfo@@SAXXZ @ 0x1401B5AD8 (-OnTimer@CRapidHpdInfo@@SAXXZ.c)
 */

void __fastcall DesktopRecalc::OnDaemonTimer(DesktopRecalc *this)
{
  CRapidHpdInfo::OnTimer();
}
