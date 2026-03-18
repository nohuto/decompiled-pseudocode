/*
 * XREFs of ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1401290C8
 * Callers:
 *     ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x140129090 (--_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1400AE4E0 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1400AE780 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ @ 0x1401292D4 (--1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ.c)
 *     ??1CBatchSharedMemoryPoolSet@DirectComposition@@QEAA@XZ @ 0x1401292F4 (--1CBatchSharedMemoryPoolSet@DirectComposition@@QEAA@XZ.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x14012931C (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x14012936C (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1401862B0 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::~CApplicationChannel(
        DirectComposition::CApplicationChannel *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  bool v4; // zf
  DirectComposition::CEvent *v6; // rcx
  char *v7; // rcx
  char *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  char *v12; // rcx
  struct _ERESOURCE *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  DirectComposition::CEvent *v17; // rcx
  __int64 v18; // rdx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  DirectComposition::CEvent *v22; // rcx
  char *v23; // rbx

  v4 = *((_QWORD *)this + 30) == 0LL;
  *(_QWORD *)this = &DirectComposition::CApplicationChannel::`vftable';
  if ( !v4 )
  {
    DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this);
    v22 = (DirectComposition::CEvent *)*((_QWORD *)this + 30);
    if ( v22 )
      DirectComposition::CEvent::`scalar deleting destructor'(v22);
  }
  v6 = (DirectComposition::CEvent *)*((_QWORD *)this + 29);
  if ( v6 )
    DirectComposition::CEvent::`scalar deleting destructor'(v6);
  v7 = (char *)*((_QWORD *)this + 24);
  if ( v7 )
  {
    do
    {
      v23 = *(char **)v7;
      GreDeleteFastMutex(v7, a2, a3, a4);
      *((_QWORD *)this + 24) = v23;
      v7 = v23;
    }
    while ( v23 );
  }
  v8 = (char *)*((_QWORD *)this + 23);
  if ( v8 )
  {
    GreDeleteFastMutex(v8, a2, a3, a4);
    *((_QWORD *)this + 23) = 0LL;
  }
  DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools((DirectComposition::CApplicationChannel *)((char *)this + 2632));
  v12 = (char *)*((_QWORD *)this + 340);
  if ( v12 )
    GreDeleteFastMutex(v12, v9, v10, v11);
  v13 = (struct _ERESOURCE *)*((_QWORD *)this + 49);
  if ( v13 )
  {
    ExDeleteResourceLite(v13);
    GreDeleteFastMutex(*((char **)this + 49), v14, v15, v16);
  }
  v17 = (DirectComposition::CEvent *)*((_QWORD *)this + 48);
  if ( v17 )
    DirectComposition::CEvent::`scalar deleting destructor'(v17);
  v18 = *((_QWORD *)this + 346);
  if ( v18 )
  {
    MmUnmapViewOfSection(*((_QWORD *)this + 339), v18);
    *((_QWORD *)this + 346) = 0LL;
  }
  v19 = (void *)*((_QWORD *)this + 345);
  if ( v19 )
  {
    MmUnmapViewInSessionSpace(v19);
    *((_QWORD *)this + 345) = 0LL;
  }
  v20 = (void *)*((_QWORD *)this + 343);
  if ( v20 )
  {
    ObfDereferenceObject(v20);
    *((_QWORD *)this + 343) = 0LL;
  }
  v21 = (void *)*((_QWORD *)this + 339);
  if ( v21 )
  {
    ObfDereferenceObject(v21);
    *((_QWORD *)this + 339) = 0LL;
  }
  if ( (*((_BYTE *)this + 265) & 8) != 0 )
    DirectComposition::CConnection::ReleaseShellResourceAccess(*((DirectComposition::CConnection **)this + 5), 1u);
  DirectComposition::CBatchSharedMemoryPoolSet::~CBatchSharedMemoryPoolSet((DirectComposition::CApplicationChannel *)((char *)this + 2632));
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CApplicationChannel *)((char *)this + 528));
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CApplicationChannel *)((char *)this + 120));
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CApplicationChannel *)((char *)this + 64));
  DirectComposition::CChannel::~CChannel(this);
}
