/*
 * XREFs of ?RecycleSyncData@CSynchronizationManager@DirectComposition@@IEAAXPEAVCSyncData@2@@Z @ 0x14004E5E4
 * Callers:
 *     ?Synchronize@CSynchronizationManager@DirectComposition@@QEAAJPEAVCBatch@2@@Z @ 0x14004EA58 (-Synchronize@CSynchronizationManager@DirectComposition@@QEAAJPEAVCBatch@2@@Z.c)
 * Callees:
 *     ??_GCSyncData@DirectComposition@@QEAAPEAXI@Z @ 0x140144C68 (--_GCSyncData@DirectComposition@@QEAAPEAXI@Z.c)
 */

void __fastcall DirectComposition::CSynchronizationManager::RecycleSyncData(
        DirectComposition::CSynchronizationManager *this,
        struct DirectComposition::CSyncData *a2)
{
  __int64 v2; // r8

  *(_QWORD *)a2 = 0LL;
  *((_DWORD *)a2 + 5) = 0;
  v2 = *((unsigned int *)this + 5);
  if ( (unsigned int)(v2 + 1) > 0x40 )
  {
    if ( a2 )
      DirectComposition::CSyncData::`scalar deleting destructor'(a2, (unsigned int)a2);
  }
  else
  {
    *((_QWORD *)this + v2 + 3) = a2;
    ++*((_DWORD *)this + 5);
  }
}
