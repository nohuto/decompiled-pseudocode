/*
 * XREFs of ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x14010F4B8
 * Callers:
 *     NtDCompositionWaitForCompositorClock @ 0x1400A9220 (NtDCompositionWaitForCompositorClock.c)
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x14010F2C8 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     ??_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z @ 0x14010F578 (--_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CCompClockInfo::Release(DirectComposition::CCompClockInfo *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
    DirectComposition::CCompClockInfo::`scalar deleting destructor'(this, a2);
  return v2;
}
