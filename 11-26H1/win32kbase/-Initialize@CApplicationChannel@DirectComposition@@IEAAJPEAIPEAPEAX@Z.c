/*
 * XREFs of ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1400B0EA0
 * Callers:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1400B1254 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x140110774 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 * Callees:
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A901C (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1400AFBE0 (-BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedM.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1400B0C9C (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1400B0E30 (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     ?UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z @ 0x1400B0E70 (-UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1400B16B8 (-Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z.c)
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1400B18F0 (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1400B19E0 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?OpenChannel@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1400B4CB8 (-OpenChannel@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x1400FE2AC (-RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Initialize(
        DirectComposition::CApplicationChannel *this,
        unsigned int *a2,
        void **a3)
{
  int v6; // eax
  unsigned __int64 v7; // rdx
  NTSTATUS Batch; // ebx
  __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessSequenceNumber; // rax
  void *v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  enum _EVENT_TYPE v16; // ecx
  int v17; // eax
  unsigned int v18; // eax
  PVOID *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  PVOID v22; // rcx
  int v23; // eax
  enum _EVENT_TYPE v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  ULONG_PTR ViewSize; // [rsp+80h] [rbp+30h] BYREF
  DirectComposition::CBatchSharedMemoryPool *v29; // [rsp+98h] [rbp+48h] BYREF

  v6 = DirectComposition::CChannel::Initialize(this);
  ViewSize = 0LL;
  Batch = v6;
  if ( v6 >= 0 )
  {
    *((_DWORD *)this + 684) = (unsigned int)PsGetCurrentProcessId();
    CurrentProcess = PsGetCurrentProcess(v9);
    *((_QWORD *)this + 339) = CurrentProcess;
    ProcessSequenceNumber = PsGetProcessSequenceNumber(CurrentProcess);
    v12 = (void *)*((_QWORD *)this + 339);
    *((_QWORD *)this + 341) = ProcessSequenceNumber;
    Batch = ObReferenceObjectByPointer(v12, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  }
  v13 = *((_DWORD *)this + 688);
  if ( !v13 )
    goto LABEL_22;
  if ( Batch >= 0 )
  {
    v18 = (v13 + 4095) & 0xFFFFF000;
    *((_DWORD *)this + 688) = v18;
    if ( !v18 )
    {
      Batch = -1073741801;
      goto LABEL_7;
    }
    v19 = (PVOID *)((char *)this + 2744);
    v29 = (DirectComposition::CBatchSharedMemoryPool *)v18;
    Batch = MmCreateSection((char *)this + 2744, 6LL, 0LL, &v29, 4, 138412032, 0LL, 0LL);
    if ( Batch >= 0 )
    {
      Batch = MmMapViewInSessionSpace(*v19, (PVOID *)this + 345, &ViewSize);
      if ( Batch >= 0 )
      {
        v20 = *((unsigned int *)this + 688);
        v21 = *((_QWORD *)this + 339);
        v22 = *v19;
        v29 = 0LL;
        Batch = MmMapViewOfSection(v22, v21, (char *)this + 2768, 0LL, v20, &v29, &ViewSize, 2, 0x400000, 4);
LABEL_22:
        if ( Batch >= 0 )
        {
          v23 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this);
          Batch = DirectComposition::CEvent::Create(v24, v23 != 2, (struct DirectComposition::CEvent **)this + 30);
        }
      }
    }
  }
  if ( Batch >= 0 )
  {
    Batch = DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
              (DirectComposition::CApplicationChannel *)((char *)this + 2632),
              v7);
    if ( Batch >= 0 )
    {
      DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
        (DirectComposition::CApplicationChannel *)((char *)this + 2632),
        v14,
        (struct DirectComposition::CBatchSharedMemoryPool **)this + 333,
        (unsigned __int64 *)this + 334);
      v29 = 0LL;
      if ( (int)DirectComposition::CBatchSharedMemoryPoolSet::BeginDynamicAllocation(
                  (DirectComposition::CApplicationChannel *)((char *)this + 2632),
                  0x28uLL,
                  &v29,
                  (unsigned __int64 *)this + 335) >= 0 )
      {
        DirectComposition::CBatchSharedMemoryPool::UseSpace(v29, 0x28uLL);
        *(_BYTE *)(v25 + 64) = 0;
      }
      Batch = DirectComposition::CApplicationChannel::CreateBatch(this, (struct DirectComposition::CBatch **)this + 24);
      if ( Batch >= 0 )
      {
        v29 = 0LL;
        Batch = DirectComposition::CApplicationChannel::CreateBatch(this, &v29);
        if ( Batch >= 0 )
        {
          **((_QWORD **)this + 24) = v29;
          Batch = DirectComposition::CApplicationChannel::CreateBatch(
                    this,
                    (struct DirectComposition::CBatch **)this + 23);
          if ( Batch >= 0 )
          {
            v26 = *((_QWORD *)this + 23);
            v27 = *((_QWORD *)this + 335);
            *(_QWORD *)(v26 + 136) = *((_QWORD *)this + 333);
            *(_QWORD *)(v26 + 144) = v27;
          }
        }
      }
    }
  }
LABEL_7:
  *((_BYTE *)this + 265) &= ~0x10u;
  *((_BYTE *)this + 267) = 0;
  if ( Batch >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this) == 2
      || (Batch = DirectComposition::CEvent::Create(v16, 1, (struct DirectComposition::CEvent **)this + 29), Batch >= 0) )
    {
      DirectComposition::CCriticalSection::AcquireShared(*(PERESOURCE *)(*((_QWORD *)this + 5) + 16LL));
      v17 = DirectComposition::CConnection::RegisterChannel(
              *((DirectComposition::CConnection **)this + 5),
              this,
              (unsigned int *)this + 7);
      Batch = v17;
      if ( v17 < 0 )
      {
        if ( v17 == -1073741300 )
        {
          *((_DWORD *)this + 6) = 3;
          Batch = 0;
        }
      }
      else
      {
        DirectComposition::CApplicationChannel::OpenChannel(this);
      }
      ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 16LL));
      KeLeaveCriticalRegion();
      if ( Batch >= 0 )
      {
        if ( a2 )
          *a2 = *((_DWORD *)this + 688);
        if ( a3 )
          *a3 = (void *)*((_QWORD *)this + 346);
      }
    }
  }
  return (unsigned int)Batch;
}
