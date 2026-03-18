/*
 * XREFs of ??_GCSyncData@DirectComposition@@QEAAPEAXI@Z @ 0x140134DC8
 * Callers:
 *     ?RecycleSyncData@CSynchronizationManager@DirectComposition@@IEAAXPEAVCSyncData@2@@Z @ 0x1400A6944 (-RecycleSyncData@CSynchronizationManager@DirectComposition@@IEAAXPEAVCSyncData@2@@Z.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1400AE5A4 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ??1CSynchronizationManager@DirectComposition@@IEAA@XZ @ 0x140134D5C (--1CSynchronizationManager@DirectComposition@@IEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CSyncData@DirectComposition@@QEAA@XZ @ 0x140134DF0 (--1CSyncData@DirectComposition@@QEAA@XZ.c)
 */

DirectComposition::CSyncData *__fastcall DirectComposition::CSyncData::`scalar deleting destructor'(
        DirectComposition::CSyncData *Buffer)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  DirectComposition::CSyncData::~CSyncData(Buffer);
  GreDeleteFastMutex((char *)Buffer, v2, v3, v4);
  return Buffer;
}
