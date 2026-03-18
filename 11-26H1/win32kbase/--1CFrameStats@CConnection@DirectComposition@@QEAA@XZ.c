/*
 * XREFs of ??1CFrameStats@CConnection@DirectComposition@@QEAA@XZ @ 0x140178EF8
 * Callers:
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1401B55DC (--1CConnection@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     ?FreeTargetPool@CFrameStats@CConnection@DirectComposition@@IEAAXXZ @ 0x1400406E8 (-FreeTargetPool@CFrameStats@CConnection@DirectComposition@@IEAAXXZ.c)
 */

void __fastcall DirectComposition::CConnection::CFrameStats::~CFrameStats(
        DirectComposition::CConnection::CFrameStats *this)
{
  DirectComposition::CConnection::CFrameStats::FreeTargetPool(this);
}
