/*
 * XREFs of ?ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400A8AB4
 * Callers:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1401293C0 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A8FE8 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A901C (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReleaseShellResourceReference(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  __int64 v3; // rbx

  if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a2 + 32LL))(a2) )
  {
    v3 = *((_QWORD *)this + 5);
    DirectComposition::CCriticalSection::AcquireShared(*(PERESOURCE *)(v3 + 16));
    ExAcquirePushLockExclusiveEx(v3 + 200, 0LL);
    *(_BYTE *)(v3 + 208) = 1;
    if ( (*(_DWORD *)(v3 + 256))-- == 1 )
      *(_QWORD *)(v3 + 264) = 0LL;
    DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CPushLockCriticalSection *)(v3 + 200));
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 16));
    KeLeaveCriticalRegion();
  }
}
