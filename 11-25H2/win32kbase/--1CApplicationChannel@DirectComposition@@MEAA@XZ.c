/*
 * XREFs of ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x140058368
 * Callers:
 *     ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x140058330 (--_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x140023F00 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1400566AC (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x140058830 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ??1CBatchSharedMemoryPool@DirectComposition@@QEAA@XZ @ 0x140058870 (--1CBatchSharedMemoryPool@DirectComposition@@QEAA@XZ.c)
 *     ??1CBatchSharedMemoryPoolSet@DirectComposition@@QEAA@XZ @ 0x140058988 (--1CBatchSharedMemoryPoolSet@DirectComposition@@QEAA@XZ.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1400589B0 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ @ 0x140058A00 (--1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x140058C98 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::~CApplicationChannel(
        DirectComposition::CApplicationChannel *this)
{
  bool v1; // zf
  DirectComposition::CEvent *v3; // rcx
  char *v4; // rcx
  char *v5; // rcx
  DirectComposition::CBatchSharedMemoryPool **v6; // rsi
  DirectComposition::CBatchSharedMemoryPool *v7; // rbx
  char *v8; // rcx
  struct _ERESOURCE *v9; // rcx
  DirectComposition::CEvent *v10; // rcx
  __int64 v11; // rdx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  DirectComposition::CEvent *v15; // rcx
  char *v16; // rbx

  v1 = *((_QWORD *)this + 30) == 0LL;
  *(_QWORD *)this = &DirectComposition::CApplicationChannel::`vftable';
  if ( !v1 )
  {
    DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this);
    v15 = (DirectComposition::CEvent *)*((_QWORD *)this + 30);
    if ( v15 )
      DirectComposition::CEvent::`scalar deleting destructor'(v15);
  }
  v3 = (DirectComposition::CEvent *)*((_QWORD *)this + 29);
  if ( v3 )
    DirectComposition::CEvent::`scalar deleting destructor'(v3);
  v4 = (char *)*((_QWORD *)this + 24);
  if ( v4 )
  {
    do
    {
      v16 = *(char **)v4;
      GreDeleteFastMutex(v4);
      *((_QWORD *)this + 24) = v16;
      v4 = v16;
    }
    while ( v16 );
  }
  v5 = (char *)*((_QWORD *)this + 23);
  if ( v5 )
  {
    GreDeleteFastMutex(v5);
    *((_QWORD *)this + 23) = 0LL;
  }
  v6 = (DirectComposition::CBatchSharedMemoryPool **)((char *)this + 2632);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (DirectComposition::CBatchSharedMemoryPool *)v6 )
      break;
    DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(*v6);
    if ( v7 )
    {
      DirectComposition::CBatchSharedMemoryPool::~CBatchSharedMemoryPool(v7);
      GreDeleteFastMutex((char *)v7);
    }
  }
  v8 = (char *)*((_QWORD *)this + 340);
  if ( v8 )
    GreDeleteFastMutex(v8);
  v9 = (struct _ERESOURCE *)*((_QWORD *)this + 49);
  if ( v9 )
  {
    ExDeleteResourceLite(v9);
    GreDeleteFastMutex(*((char **)this + 49));
  }
  v10 = (DirectComposition::CEvent *)*((_QWORD *)this + 48);
  if ( v10 )
    DirectComposition::CEvent::`scalar deleting destructor'(v10);
  v11 = *((_QWORD *)this + 346);
  if ( v11 )
  {
    MmUnmapViewOfSection(*((_QWORD *)this + 339), v11);
    *((_QWORD *)this + 346) = 0LL;
  }
  v12 = (void *)*((_QWORD *)this + 345);
  if ( v12 )
  {
    MmUnmapViewInSessionSpace(v12);
    *((_QWORD *)this + 345) = 0LL;
  }
  v13 = (void *)*((_QWORD *)this + 343);
  if ( v13 )
  {
    ObfDereferenceObject(v13);
    *((_QWORD *)this + 343) = 0LL;
  }
  v14 = (void *)*((_QWORD *)this + 339);
  if ( v14 )
  {
    ObfDereferenceObject(v14);
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
