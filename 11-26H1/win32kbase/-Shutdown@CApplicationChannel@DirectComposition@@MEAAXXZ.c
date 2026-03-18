/*
 * XREFs of ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1400B4790
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A901C (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1400AE4E0 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1400AE5A4 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?ClearPointerListEntries@CInputManager@@SAXI@Z @ 0x1400B4A0C (-ClearPointerListEntries@CInputManager@@SAXI@Z.c)
 *     ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1400B4AC4 (-ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z.c)
 *     ?PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z @ 0x1400B4E50 (-PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1400B5300 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1400E5718 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x140117CF0 (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CApplicationChannel::Shutdown(DirectComposition::CApplicationChannel *this)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  char *v8; // rcx
  char *v9; // rbx
  DirectComposition::CBatch *v10; // rcx
  void *v11; // rcx
  struct DirectComposition::CrossChannelVisualData *v12; // rdx
  __int64 v13; // rbp
  char v14; // r14
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  char *v22; // rcx
  struct DirectComposition::CConnection *v23; // rcx

  DirectComposition::CCriticalSection::AcquireShared(*(PERESOURCE *)(*((_QWORD *)this + 5) + 16LL));
  v2 = 6;
  v3 = *((_QWORD *)this + 5);
  if ( *((int *)this + 6) <= 2 )
    v2 = 2;
  *((_DWORD *)this + 6) = v2;
  ExReleaseResourceLite(*(PERESOURCE *)(v3 + 16));
  KeLeaveCriticalRegion();
  if ( *((_DWORD *)this + 6) == 2 )
  {
    LOBYTE(v4) = 1;
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 48LL))(this, v4);
  }
  DirectComposition::CApplicationChannel::ReleaseAllResources(this, 0LL);
  if ( *((_QWORD *)this + 30) )
    DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this);
  v8 = (char *)*((_QWORD *)this + 24);
  if ( v8 )
  {
    do
    {
      v9 = *(char **)v8;
      GreDeleteFastMutex(v8, v5, v6, v7);
      *((_QWORD *)this + 24) = v9;
      v8 = v9;
    }
    while ( v9 );
  }
  v10 = (DirectComposition::CBatch *)*((_QWORD *)this + 22);
  if ( v10 )
  {
    DirectComposition::CBatch::Clear(v10, v5, v6, v7);
    v22 = (char *)*((_QWORD *)this + 22);
    if ( v22 )
      GreDeleteFastMutex(v22, v19, v20, v21);
    *((_QWORD *)this + 22) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 47);
  if ( v11 )
  {
    DirectComposition::CAnimationBinding::DetachAndDelete(v11, this);
    *((_QWORD *)this + 47) = 0LL;
  }
  v12 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 53);
  if ( v12 )
  {
    v23 = (struct DirectComposition::CConnection *)*((_QWORD *)this + 5);
    *((_QWORD *)this + 53) = 0LL;
    DirectComposition::CApplicationChannel::ReleaseCrossChannelVisuals(v23, v12);
  }
  CInputManager::ClearPointerListEntries(*((_DWORD *)this + 684));
  if ( *((_DWORD *)this + 7) )
  {
    v13 = *((_QWORD *)this + 5);
    v14 = *((_BYTE *)this + 48) & 1;
    if ( v14 )
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    DirectComposition::CCriticalSection::AcquireShared(*(PERESOURCE *)(v13 + 16));
    if ( (*((_BYTE *)this + 48) & 2) != 0 )
    {
      v15 = *((_QWORD *)this + 23);
      *(_DWORD *)(v15 + 20) = 6;
      v16 = ++*((_DWORD *)this + 102);
      *(_BYTE *)(v15 + 32) &= ~1u;
      v17 = *(_QWORD *)(v15 + 144);
      *(_DWORD *)(v15 + 16) = v16;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 136) + 56LL) + v17 + 16) = *((_DWORD *)this + 7);
      *((_DWORD *)this + 103) = *((_DWORD *)this + 102);
      *((_QWORD *)this + 23) = 0LL;
      DirectComposition::CConnection::PostBatch(
        (DirectComposition::CConnection *)v13,
        (struct DirectComposition::CBatch *)v15,
        (struct DirectComposition::CBatch *)v15);
    }
    else
    {
      v18 = *((_DWORD *)this + 7);
      DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(v13 + 80));
      DirectComposition::CLinearObjectTableBase::ReleaseHandle(
        (DirectComposition::CLinearObjectTableBase *)(v13 + 24),
        v18);
      ExReleaseResourceLite(*(PERESOURCE *)(v13 + 80));
      KeLeaveCriticalRegion();
      (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v13 + 16));
    KeLeaveCriticalRegion();
    if ( v14 )
      DirectComposition::CConnection::Release((DirectComposition::CConnection *)v13);
  }
  else
  {
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
  }
}
