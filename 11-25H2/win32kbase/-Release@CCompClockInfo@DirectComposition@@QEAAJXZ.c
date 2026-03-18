/*
 * XREFs of ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x1400E8D44
 * Callers:
 *     ?GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z @ 0x1400C7E8C (-GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z.c)
 *     NtDCompositionWaitForCompositorClock @ 0x1400C8930 (NtDCompositionWaitForCompositorClock.c)
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1400E8B64 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     ??_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z @ 0x1400E8D74 (--_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CCompClockInfo::Release(DirectComposition::CCompClockInfo *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
    DirectComposition::CCompClockInfo::`scalar deleting destructor'(this, a2);
  return v2;
}
