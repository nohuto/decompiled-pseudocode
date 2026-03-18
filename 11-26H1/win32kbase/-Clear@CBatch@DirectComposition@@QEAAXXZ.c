/*
 * XREFs of ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1400AE5A4
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1400AC320 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1400AE4E0 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400AF058 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1400B4790 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1400AE780 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?SetAnimationTimeState@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@_K@Z @ 0x1400AFA3C (-SetAnimationTimeState@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@_K@Z.c)
 *     ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1400AFCE0 (-Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ??_GCSyncData@DirectComposition@@QEAAPEAXI@Z @ 0x140134DC8 (--_GCSyncData@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1401862B0 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 */

void __fastcall DirectComposition::CBatch::Clear(DirectComposition::CBatch *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rdi
  __int64 v7; // r14
  struct _ERESOURCE *v8; // rbx
  struct _RTL_GENERIC_TABLE *v9; // rbp
  _QWORD *v10; // rax
  _DWORD *v11; // rbx
  unsigned int v12; // edx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  char *v16; // rcx
  unsigned __int64 v17; // r8
  struct DirectComposition::CAnimationTimeList *v18; // rdx
  DirectComposition::CApplicationChannel *v19; // rcx
  unsigned int v20; // edx
  _QWORD *v21; // rcx
  _QWORD *v22; // rbx
  unsigned int v23; // edx
  _QWORD Buffer[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 8);
    *((_QWORD *)this + 5) = 0LL;
    v7 = *(_QWORD *)(W32GetDCompSessionState(this) + 24);
    v8 = *(struct _ERESOURCE **)v7;
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v8, 1u);
    v9 = *(struct _RTL_GENERIC_TABLE **)(v7 + 8);
    Buffer[0] = v6;
    Buffer[1] = 0LL;
    v10 = RtlLookupElementGenericTable(v9, Buffer);
    if ( v10 )
    {
      v11 = (_DWORD *)v10[1];
      RtlDeleteElementGenericTable(v9, v10);
      if ( v11 )
      {
        *(_QWORD *)v11 = 0LL;
        v11[5] = 0;
        v13 = *(unsigned int *)(v7 + 20);
        if ( (unsigned int)(v13 + 1) > 0x40 )
        {
          DirectComposition::CSyncData::`scalar deleting destructor'(v11, v12);
        }
        else
        {
          *(_QWORD *)(v7 + 8 * v13 + 24) = v11;
          ++*(_DWORD *)(v7 + 20);
        }
      }
    }
    ExReleaseResourceLite(*(PERESOURCE *)v7);
    KeLeaveCriticalRegion();
  }
  v14 = *((_DWORD *)this + 5);
  if ( v14 != 5 && v14 != 6 )
  {
    v15 = *((_QWORD *)this + 17);
    a2 = *((_QWORD *)this + 19) + 40LL;
    a3 = a2 + *(_QWORD *)(v15 + 32);
    *(_QWORD *)(v15 + 32) = a3;
    if ( !*(_BYTE *)(v15 + 64) && *(_QWORD *)(v15 + 40) == a3 )
      DirectComposition::CBatchSharedMemoryPool::Reset((DirectComposition::CBatchSharedMemoryPool *)v15);
  }
  if ( *((_DWORD *)this + 5) != 6 )
  {
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
  }
  *((_BYTE *)this + 32) &= 0x22u;
  v16 = (char *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 5) = 7;
  *((_QWORD *)this + 12) = 0LL;
  if ( v16 )
  {
    GreDeleteFastMutex(v16, a2, a3, a4);
    *((_QWORD *)this + 13) = 0LL;
  }
  v17 = *((_QWORD *)this + 8);
  v18 = (struct DirectComposition::CAnimationTimeList *)*((_QWORD *)this + 9);
  v19 = (DirectComposition::CApplicationChannel *)*((_QWORD *)this + 1);
  *((_DWORD *)this + 28) = 0;
  DirectComposition::CApplicationChannel::SetAnimationTimeState(v19, v18, v17);
  v21 = (_QWORD *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 9) = 0LL;
  if ( v21 )
  {
    do
    {
      v22 = (_QWORD *)*v21;
      DirectComposition::CEvent::`scalar deleting destructor'(v21, v20);
      *((_QWORD *)this + 11) = v22;
      v21 = v22;
    }
    while ( v22 );
  }
  v23 = *((_DWORD *)this + 29);
  if ( v23 )
  {
    DirectComposition::CConnection::ReleaseShellResourceAccess(
      *(DirectComposition::CConnection **)(*((_QWORD *)this + 1) + 40LL),
      v23);
    *((_DWORD *)this + 29) = 0;
  }
}
