/*
 * XREFs of ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x140023FC4
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1400227BC (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x140023F00 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x140054CB0 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?SetAnimationTimeState@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@_K@Z @ 0x140021238 (-SetAnimationTimeState@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@_K@Z.c)
 *     ?RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@QEAAX_K@Z @ 0x14005009C (-RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@QEAAX_K@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1400566AC (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x140058C98 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ?ConfirmSpace@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_K@Z @ 0x1400E4D44 (-ConfirmSpace@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_K@Z.c)
 */

void __fastcall DirectComposition::CBatch::Clear(DirectComposition::CBatch *this)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // rbx
  __int64 DCompSessionState; // rax
  char *v5; // rcx
  unsigned __int64 v6; // r8
  struct DirectComposition::CAnimationTimeList *v7; // rdx
  DirectComposition::CApplicationChannel *v8; // rcx
  unsigned int v9; // edx
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  unsigned int v12; // edx

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 8);
    *((_QWORD *)this + 5) = 0LL;
    DCompSessionState = W32GetDCompSessionState();
    DirectComposition::CSynchronizationManager::RemoveFromSynchronizationTable(
      *(DirectComposition::CSynchronizationManager **)(DCompSessionState + 24),
      v3);
  }
  if ( (unsigned int)(*((_DWORD *)this + 5) - 5) > 1 )
    DirectComposition::CBatchSharedMemoryPool::ConfirmSpace(
      *((DirectComposition::CBatchSharedMemoryPool **)this + 17),
      *((_QWORD *)this + 19) + 40LL);
  if ( *((_DWORD *)this + 5) != 6 )
  {
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
  }
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_BYTE *)this + 32) &= 0x22u;
  *((_QWORD *)this + 12) = 0LL;
  v5 = (char *)*((_QWORD *)this + 13);
  *((_DWORD *)this + 5) = 7;
  if ( v5 )
  {
    GreDeleteFastMutex(v5);
    *((_QWORD *)this + 13) = 0LL;
  }
  v6 = *((_QWORD *)this + 8);
  v7 = (struct DirectComposition::CAnimationTimeList *)*((_QWORD *)this + 9);
  v8 = (DirectComposition::CApplicationChannel *)*((_QWORD *)this + 1);
  *((_DWORD *)this + 28) = 0;
  DirectComposition::CApplicationChannel::SetAnimationTimeState(v8, v7, v6);
  v10 = (_QWORD *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 9) = 0LL;
  if ( v10 )
  {
    do
    {
      v11 = (_QWORD *)*v10;
      DirectComposition::CEvent::`scalar deleting destructor'(v10, v9);
      *((_QWORD *)this + 11) = v11;
      v10 = v11;
    }
    while ( v11 );
  }
  v12 = *((_DWORD *)this + 29);
  if ( v12 )
  {
    DirectComposition::CConnection::ReleaseShellResourceAccess(
      *(DirectComposition::CConnection **)(*((_QWORD *)this + 1) + 40LL),
      v12);
    *((_DWORD *)this + 29) = 0;
  }
}
