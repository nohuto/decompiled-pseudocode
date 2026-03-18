/*
 * XREFs of ??_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z @ 0x14010F578
 * Callers:
 *     NtDCompositionWaitForCompositorClock @ 0x1400A9220 (NtDCompositionWaitForCompositorClock.c)
 *     ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x14010F4B8 (-Release@CCompClockInfo@DirectComposition@@QEAAJXZ.c)
 *     ?Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z @ 0x14010F4E8 (-Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CCompClockInfo@DirectComposition@@AEAA@XZ @ 0x1401C3834 (--1CCompClockInfo@DirectComposition@@AEAA@XZ.c)
 */

DirectComposition::CCompClockInfo *__fastcall DirectComposition::CCompClockInfo::`scalar deleting destructor'(
        DirectComposition::CCompClockInfo *Buffer)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  DirectComposition::CCompClockInfo::~CCompClockInfo(Buffer);
  GreDeleteFastMutex((char *)Buffer, v2, v3, v4);
  return Buffer;
}
