/*
 * XREFs of ?OnDaemonTimer@DesktopRecalc@@YAXXZ @ 0x1401E6250
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTimer@CRapidHpdInfo@@SAXXZ @ 0x1401E6268 (-OnTimer@CRapidHpdInfo@@SAXXZ.c)
 */

void __fastcall DesktopRecalc::OnDaemonTimer(DesktopRecalc *this)
{
  CRapidHpdInfo::OnTimer();
}
