/*
 * XREFs of ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1401293C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400A8AB4 (-ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshale.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1400ADCB4 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1400AE4E0 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1400AE780 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1400B5300 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x140129674 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?DeleteResource@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshaler@2@@Z @ 0x140129710 (-DeleteResource@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CApplicationChannel::CompleteDisconnection(
        DirectComposition::CApplicationChannel *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  DirectComposition::CBatchSharedMemoryPool *i; // rbx
  void *v13; // rcx
  struct _LIST_ENTRY *v14; // rcx
  struct DirectComposition::CResourceMarshaler *v15; // rsi
  struct DirectComposition::CResourceMarshaler *v16; // rbx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rdx
  DirectComposition::CEvent *v25; // rcx
  struct _LIST_ENTRY *Flink; // rbx

  if ( *((_QWORD *)this + 30) )
    DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this);
  v4 = *((_QWORD *)this + 348);
  if ( v4 )
  {
    KeSetEvent(*(PRKEVENT *)(v4 + 8), 1, 0);
    v25 = (DirectComposition::CEvent *)*((_QWORD *)this + 348);
    if ( v25 )
      DirectComposition::CEvent::`scalar deleting destructor'(v25);
    *((_QWORD *)this + 348) = 0LL;
  }
  DirectComposition::CApplicationChannel::ReleaseResource(
    (struct _RTL_GENERIC_TABLE *)this,
    *((struct DirectComposition::CResourceMarshaler **)this + 349));
  *((_QWORD *)this + 349) = 0LL;
  v6 = 0LL;
LABEL_5:
  v7 = *((_QWORD *)this + 18);
  while ( 1 )
  {
    v8 = *((_QWORD *)this + 18);
    v9 = v6;
    if ( v6 < v8 )
    {
      v5 = *((_QWORD *)this + 19);
      v10 = (_QWORD *)(*((_QWORD *)this + 15) + v6 * v5);
      do
      {
        if ( *v10 )
          break;
        ++v9;
        v10 = (_QWORD *)((char *)v10 + v5);
      }
      while ( v9 < v8 );
    }
    if ( v9 >= v7 )
      break;
    _mm_lfence();
    v6 = v9 + 1;
    v11 = *(_QWORD *)(*((_QWORD *)this + 19) * v9 + *((_QWORD *)this + 15));
    if ( v11 != 1 )
    {
      if ( !v11 )
        break;
      (*(void (__fastcall **)(__int64, DirectComposition::CApplicationChannel *))(*(_QWORD *)v11 + 80LL))(v11, this);
      goto LABEL_5;
    }
  }
  if ( !a2 )
  {
    for ( i = (DirectComposition::CBatchSharedMemoryPool *)*((_QWORD *)this + 329);
          i != (DirectComposition::CApplicationChannel *)((char *)this + 2632);
          i = *(DirectComposition::CBatchSharedMemoryPool **)i )
    {
      DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(i);
    }
    v13 = (void *)*((_QWORD *)this + 331);
    if ( v13 )
      ObfDereferenceObject(v13);
    *((_QWORD *)this + 331) = 0LL;
  }
  v14 = (struct _LIST_ENTRY *)*((_QWORD *)this + 63);
  *((_DWORD *)this + 672) = 0;
  if ( v14 )
  {
    do
    {
      Flink = v14->Flink;
      v14->Flink = 0LL;
      DirectComposition::CAnimationBinding::DetachAndDelete(v14, (struct _RTL_GENERIC_TABLE *)this, v5, v7);
      v14 = Flink;
    }
    while ( Flink );
  }
  v15 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 60);
  if ( v15 )
  {
    do
    {
      v16 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v15 + 1);
      DirectComposition::CApplicationChannel::ReleaseShellResourceReference(this, v15);
      DirectComposition::CApplicationChannel::DeleteResource(this, v15);
      v15 = v16;
    }
    while ( v16 );
  }
  DirectComposition::CApplicationChannel::ClearAnimationTimeList(this);
  v17 = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  while ( 1 )
  {
    v18 = *((_QWORD *)this + 18);
    v19 = v17;
    if ( v17 < v18 )
    {
      v20 = (_QWORD *)(*((_QWORD *)this + 15) + v17 * *((_QWORD *)this + 19));
      do
      {
        if ( *v20 )
          break;
        ++v19;
        v20 = (_QWORD *)((char *)v20 + *((_QWORD *)this + 19));
      }
      while ( v19 < v18 );
    }
    if ( v19 >= *((_QWORD *)this + 18) )
      break;
    _mm_lfence();
    v17 = v19 + 1;
    v21 = *(_QWORD *)(*((_QWORD *)this + 19) * v19 + *((_QWORD *)this + 15));
    if ( v21 != 1 )
    {
      if ( !v21 )
        break;
      *(_DWORD *)(v21 + 16) &= 0xFFFFFFEE;
      v22 = *(_QWORD *)(v21 + 40);
      *(_QWORD *)(v21 + 8) = 0LL;
      if ( v22 )
      {
        do
        {
          v23 = *(_DWORD *)(v22 + 8);
          v24 = *(_QWORD *)(v22 + 32);
          if ( (v23 & 1) != 0 )
            *(_DWORD *)(v22 + 8) = v23 & 0xFFFFFFFC | 2;
          *(_QWORD *)v22 = 0LL;
          v22 = v24;
        }
        while ( v24 );
      }
    }
  }
  *((_DWORD *)this + 6) = a2 != 0 ? 6 : 3;
}
