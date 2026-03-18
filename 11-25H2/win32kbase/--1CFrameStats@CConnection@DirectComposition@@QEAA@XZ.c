/*
 * XREFs of ??1CFrameStats@CConnection@DirectComposition@@QEAA@XZ @ 0x1400E4A40
 * Callers:
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1400E4978 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     ?FreeTargetPool@CFrameStats@CConnection@DirectComposition@@IEAAXXZ @ 0x1400E4A58 (-FreeTargetPool@CFrameStats@CConnection@DirectComposition@@IEAAXXZ.c)
 */

void __fastcall DirectComposition::CConnection::CFrameStats::~CFrameStats(
        DirectComposition::CConnection::CFrameStats *this)
{
  DirectComposition::CConnection::CFrameStats::FreeTargetPool(this);
}
