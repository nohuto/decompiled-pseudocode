/*
 * XREFs of ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1400554CC
 * Callers:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x14005523C (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1400CC3D0 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 * Callees:
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x14004F5A0 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1400558D0 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x140055950 (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1400559D0 (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?OpenChannel@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x140055A40 (-OpenChannel@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x140055C80 (-RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x140056464 (-Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z.c)
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1400569A0 (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1400569E0 (-BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedM.c)
 *     ?UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z @ 0x140056AE0 (-UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Initialize(
        DirectComposition::CApplicationChannel *this,
        unsigned int *a2,
        void **a3)
{
  int v6; // eax
  unsigned __int64 v7; // rdx
  NTSTATUS Batch; // esi
  __int64 CurrentProcess; // rax
  __int64 ProcessSequenceNumber; // rax
  void *v11; // rcx
  int v12; // eax
  unsigned int v13; // eax
  PVOID *v14; // rbx
  __int64 v15; // rax
  DirectComposition::CBatchSharedMemoryPoolSet *v16; // rbx
  int v17; // eax
  enum _EVENT_TYPE v18; // ecx
  __int64 v20; // rcx
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  enum _EVENT_TYPE v24; // ecx
  int v25; // eax
  struct DirectComposition::CBatch *v26; // [rsp+50h] [rbp-20h] BYREF
  __int64 v27; // [rsp+58h] [rbp-18h] BYREF
  __int64 v28; // [rsp+60h] [rbp-10h] BYREF
  ULONG_PTR ViewSize; // [rsp+B0h] [rbp+40h] BYREF
  DirectComposition::CBatchSharedMemoryPool *v30; // [rsp+C8h] [rbp+58h] BYREF

  v6 = DirectComposition::CChannel::Initialize(this);
  ViewSize = 0LL;
  Batch = 0;
  if ( v6 < 0 )
    Batch = v6;
  if ( Batch >= 0 )
  {
    *((_DWORD *)this + 684) = (unsigned int)PsGetCurrentProcessId();
    CurrentProcess = PsGetCurrentProcess();
    *((_QWORD *)this + 339) = CurrentProcess;
    ProcessSequenceNumber = PsGetProcessSequenceNumber(CurrentProcess);
    v11 = (void *)*((_QWORD *)this + 339);
    *((_QWORD *)this + 341) = ProcessSequenceNumber;
    Batch = ObReferenceObjectByPointer(v11, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  }
  v12 = *((_DWORD *)this + 688);
  if ( !v12 )
    goto LABEL_11;
  if ( Batch < 0 )
  {
LABEL_12:
    v16 = (DirectComposition::CApplicationChannel *)((char *)this + 2632);
    goto LABEL_15;
  }
  v13 = (v12 + 4095) & 0xFFFFF000;
  *((_DWORD *)this + 688) = v13;
  if ( !v13 )
  {
    Batch = -1073741801;
    goto LABEL_12;
  }
  v14 = (PVOID *)((char *)this + 2744);
  v27 = v13;
  Batch = MmCreateSection((char *)this + 2744, 6LL, 0LL, &v27, 4, 138412032, 0LL, 0LL);
  if ( Batch < 0 )
    goto LABEL_12;
  Batch = MmMapViewInSessionSpace(*v14, (PVOID *)this + 345, &ViewSize);
  if ( Batch < 0 )
    goto LABEL_12;
  v15 = *((unsigned int *)this + 688);
  v28 = 0LL;
  Batch = MmMapViewOfSection(
            *v14,
            *((_QWORD *)this + 339),
            (char *)this + 2768,
            0LL,
            v15,
            &v28,
            &ViewSize,
            2,
            0x400000,
            4);
LABEL_11:
  if ( Batch < 0 )
    goto LABEL_12;
  v17 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this);
  Batch = DirectComposition::CEvent::Create(v18, v17 != 2, (struct DirectComposition::CEvent **)this + 30);
  if ( Batch < 0 )
    goto LABEL_12;
  v16 = (DirectComposition::CApplicationChannel *)((char *)this + 2632);
  Batch = DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
            (DirectComposition::CApplicationChannel *)((char *)this + 2632),
            v7);
LABEL_15:
  if ( Batch >= 0 )
  {
    DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
      v16,
      v7,
      (struct DirectComposition::CBatchSharedMemoryPool **)this + 333,
      (unsigned __int64 *)this + 334);
    v30 = 0LL;
    if ( (int)DirectComposition::CBatchSharedMemoryPoolSet::BeginDynamicAllocation(
                v16,
                0x28uLL,
                &v30,
                (unsigned __int64 *)this + 335) >= 0 )
    {
      DirectComposition::CBatchSharedMemoryPool::UseSpace(v30, 0x28uLL);
      *(_BYTE *)(v20 + 64) = 0;
    }
    Batch = DirectComposition::CApplicationChannel::CreateBatch(this, (struct DirectComposition::CBatch **)this + 24);
    if ( Batch >= 0 )
    {
      v26 = 0LL;
      Batch = DirectComposition::CApplicationChannel::CreateBatch(this, &v26);
      **((_QWORD **)this + 24) = v26;
      if ( Batch >= 0 )
      {
        v21 = DirectComposition::CApplicationChannel::CreateBatch(this, (struct DirectComposition::CBatch **)this + 23);
        v22 = *((_QWORD *)this + 23);
        Batch = v21;
        v23 = *((_QWORD *)this + 335);
        *(_QWORD *)(v22 + 136) = *((_QWORD *)this + 333);
        *(_QWORD *)(v22 + 144) = v23;
      }
    }
  }
  *((_BYTE *)this + 265) &= ~0x10u;
  *((_BYTE *)this + 267) = 0;
  if ( Batch >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this) == 2
      || (Batch = DirectComposition::CEvent::Create(v24, 1, (struct DirectComposition::CEvent **)this + 29), Batch >= 0) )
    {
      DirectComposition::CCriticalSection::AcquireShared(*(PERESOURCE *)(*((_QWORD *)this + 5) + 16LL));
      v25 = DirectComposition::CConnection::RegisterChannel(
              *((DirectComposition::CConnection **)this + 5),
              this,
              (unsigned int *)this + 7);
      Batch = v25;
      if ( v25 < 0 )
      {
        if ( v25 == -1073741300 )
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
