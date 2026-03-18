/*
 * XREFs of ??_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z @ 0x1400E8D74
 * Callers:
 *     ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x1400E8D44 (-Release@CCompClockInfo@DirectComposition@@QEAAJXZ.c)
 *     ?Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z @ 0x140160AD8 (-Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CCompClockInfo@DirectComposition@@AEAA@XZ @ 0x1400E8D9C (--1CCompClockInfo@DirectComposition@@AEAA@XZ.c)
 */

DirectComposition::CCompClockInfo *__fastcall DirectComposition::CCompClockInfo::`scalar deleting destructor'(
        DirectComposition::CCompClockInfo *Buffer)
{
  DirectComposition::CCompClockInfo::~CCompClockInfo(Buffer);
  GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
