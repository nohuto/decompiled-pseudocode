/*
 * XREFs of ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1400585A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x140022208 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x140023F00 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1400566AC (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x140058830 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400588CC (-ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshale.c)
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x140058908 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1400C02E4 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CApplicationChannel::CompleteDisconnection(
        DirectComposition::CApplicationChannel *this,
        char a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  DirectComposition::CBatchSharedMemoryPool *i; // rbx
  void *v12; // rcx
  _QWORD *v13; // rcx
  struct DirectComposition::CResourceMarshaler *v14; // rsi
  struct DirectComposition::CResourceMarshaler *v15; // rbx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r8
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // r8
  DirectComposition::CEvent *v24; // rcx
  _QWORD *v25; // rbx

  if ( *((_QWORD *)this + 30) )
    DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this);
  v4 = *((_QWORD *)this + 348);
  if ( v4 )
  {
    KeSetEvent(*(PRKEVENT *)(v4 + 8), 1, 0);
    v24 = (DirectComposition::CEvent *)*((_QWORD *)this + 348);
    if ( v24 )
      DirectComposition::CEvent::`scalar deleting destructor'(v24);
    *((_QWORD *)this + 348) = 0LL;
  }
  DirectComposition::CApplicationChannel::ReleaseResource(
    this,
    *((struct DirectComposition::CResourceMarshaler **)this + 349));
  *((_QWORD *)this + 349) = 0LL;
  v5 = (_QWORD *)((char *)this + 152);
  v6 = 0LL;
  while ( 1 )
  {
    v7 = *((_QWORD *)this + 18);
    v8 = v6;
    if ( v6 < v7 )
    {
      v9 = (_QWORD *)(*((_QWORD *)this + 15) + v6 * *((_QWORD *)this + 19));
      do
      {
        v5 = (_QWORD *)((char *)this + 152);
        if ( *v9 )
          break;
        ++v8;
        v9 = (_QWORD *)((char *)v9 + *((_QWORD *)this + 19));
      }
      while ( v8 < v7 );
    }
    if ( v8 >= v7 )
      break;
    _mm_lfence();
    v6 = v8 + 1;
    v10 = *(_QWORD *)(*v5 * v8 + *((_QWORD *)this + 15));
    if ( !v10 )
      break;
    (*(void (__fastcall **)(__int64, DirectComposition::CApplicationChannel *))(*(_QWORD *)v10 + 88LL))(v10, this);
  }
  if ( !a2 )
  {
    for ( i = (DirectComposition::CBatchSharedMemoryPool *)*((_QWORD *)this + 329);
          i != (DirectComposition::CApplicationChannel *)((char *)this + 2632);
          i = *(DirectComposition::CBatchSharedMemoryPool **)i )
    {
      DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(i);
    }
    v12 = (void *)*((_QWORD *)this + 331);
    if ( v12 )
      ObfDereferenceObject(v12);
    *((_QWORD *)this + 331) = 0LL;
  }
  v13 = (_QWORD *)*((_QWORD *)this + 63);
  *((_DWORD *)this + 672) = 0;
  if ( v13 )
  {
    do
    {
      v25 = (_QWORD *)*v13;
      *v13 = 0LL;
      DirectComposition::CAnimationBinding::DetachAndDelete(v13, this);
      v13 = v25;
    }
    while ( v25 );
  }
  v14 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 60);
  if ( v14 )
  {
    do
    {
      v15 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v14 + 1);
      DirectComposition::CApplicationChannel::ReleaseShellResourceReference(this, v14);
      (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v14 + 96LL))(
        v14,
        1LL);
      v14 = v15;
    }
    while ( v15 );
  }
  DirectComposition::CApplicationChannel::ClearAnimationTimeList(this);
  v16 = 0LL;
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
    v17 = *((_QWORD *)this + 18);
    if ( v16 >= v17 )
      break;
    v18 = (_QWORD *)(*((_QWORD *)this + 15) + v16 * *v5);
    while ( 1 )
    {
      v19 = v16++;
      if ( *v18 )
        break;
      v18 = (_QWORD *)((char *)v18 + *v5);
      if ( v16 >= v17 )
        goto LABEL_34;
    }
    _mm_lfence();
    v20 = *(_QWORD *)(*v5 * v19 + *((_QWORD *)this + 15));
    if ( !v20 )
      break;
    *(_DWORD *)(v20 + 16) &= 0xFFFFFFEE;
    *(_QWORD *)(v20 + 8) = 0LL;
    v21 = *(_QWORD *)(v20 + 40);
    if ( v21 )
    {
      do
      {
        v22 = *(_DWORD *)(v21 + 8);
        v23 = *(_QWORD *)(v21 + 32);
        if ( (v22 & 1) != 0 )
          *(_DWORD *)(v21 + 8) = v22 & 0xFFFFFFFC | 2;
        *(_QWORD *)v21 = 0LL;
        v21 = v23;
      }
      while ( v23 );
    }
  }
LABEL_34:
  *((_DWORD *)this + 6) = a2 != 0 ? 6 : 3;
}
