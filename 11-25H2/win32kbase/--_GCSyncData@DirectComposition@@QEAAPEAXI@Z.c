/*
 * XREFs of ??_GCSyncData@DirectComposition@@QEAAPEAXI@Z @ 0x140144C68
 * Callers:
 *     ?RecycleSyncData@CSynchronizationManager@DirectComposition@@IEAAXPEAVCSyncData@2@@Z @ 0x14004E5E4 (-RecycleSyncData@CSynchronizationManager@DirectComposition@@IEAAXPEAVCSyncData@2@@Z.c)
 *     ?RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@QEAAX_K@Z @ 0x14005009C (-RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@QEAAX_K@Z.c)
 *     ??1CSynchronizationManager@DirectComposition@@IEAA@XZ @ 0x140144BFC (--1CSynchronizationManager@DirectComposition@@IEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CSyncData@DirectComposition@@QEAA@XZ @ 0x140144C90 (--1CSyncData@DirectComposition@@QEAA@XZ.c)
 */

DirectComposition::CSyncData *__fastcall DirectComposition::CSyncData::`scalar deleting destructor'(
        DirectComposition::CSyncData *Buffer)
{
  DirectComposition::CSyncData::~CSyncData(Buffer);
  GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
