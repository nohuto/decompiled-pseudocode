/*
 * XREFs of ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1400A8D40
 * Callers:
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x140106F84 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObje.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x140163454 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?ReturnToApplication@CBatchListProxy@CBatch@DirectComposition@@UEAAX_N@Z @ 0x14022AD60 (-ReturnToApplication@CBatchListProxy@CBatch@DirectComposition@@UEAAX_N@Z.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1400A8E98 (-ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A8FE8 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CBatch::ReturnToApplication(DirectComposition::CBatch *this, char a2)
{
  DirectComposition::CApplicationChannel **v2; // rsi
  int v3; // r14d
  DirectComposition::CApplicationChannel *v5; // rbx
  struct _ERESOURCE *v6; // rcx
  __int64 v7; // rbp
  struct _ERESOURCE *v8; // rbx
  bool v9; // zf

  v2 = (DirectComposition::CApplicationChannel **)((char *)this + 8);
  v3 = *((_DWORD *)this + 29);
  *((_BYTE *)this + 32) = *((_BYTE *)this + 32) & 0xFD | (2 * (a2 ^ 1));
  if ( v3 )
  {
    v7 = *((_QWORD *)*v2 + 5);
    v8 = *(struct _ERESOURCE **)(v7 + 16);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v8, 1u);
    ExAcquirePushLockExclusiveEx(v7 + 200, 0LL);
    *(_BYTE *)(v7 + 208) = 1;
    v9 = *(_DWORD *)(v7 + 256) == v3;
    *(_DWORD *)(v7 + 256) -= v3;
    if ( v9 )
      *(_QWORD *)(v7 + 264) = 0LL;
    DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CPushLockCriticalSection *)(v7 + 200));
    ExReleaseResourceLite(*(PERESOURCE *)(v7 + 16));
    KeLeaveCriticalRegion();
    *((_DWORD *)this + 29) = 0;
  }
  if ( (*((_BYTE *)this + 32) & 4) == 0 )
  {
    v5 = *v2;
    if ( *((_DWORD *)this + 5) == 7 )
    {
      v6 = (struct _ERESOURCE *)*((_QWORD *)v5 + 49);
      if ( v6 )
      {
        DirectComposition::CCriticalSection::AcquireExclusive(v6);
        v9 = (*((_DWORD *)v5 + 62))-- == 1;
        if ( v9 )
          KeSetEvent(*(PRKEVENT *)(*((_QWORD *)v5 + 48) + 8LL), 1, 0);
        ExReleaseResourceLite(*((PERESOURCE *)v5 + 49));
        KeLeaveCriticalRegion();
      }
    }
  }
  DirectComposition::CApplicationChannel::ReturnProcessedBatch(*v2, this);
}
