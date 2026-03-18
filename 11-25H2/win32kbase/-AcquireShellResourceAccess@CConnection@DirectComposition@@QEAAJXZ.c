/*
 * XREFs of ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x140051474
 * Callers:
 *     ?CreateExternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x140050D6C (-CreateExternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1400511B4 (-InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResource.c)
 *     ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140051528 (-CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMars.c)
 *     ?EnsureShellPropertyAndTriggerAccess@CApplicationChannel@DirectComposition@@UEAAJXZ @ 0x1401050E0 (-EnsureShellPropertyAndTriggerAccess@CApplicationChannel@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x14004F56C (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x14004F5A0 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::AcquireShellResourceAccess(PERESOURCE *this)
{
  unsigned int v2; // edi
  __int64 CurrentProcess; // rbp
  PERESOURCE v4; // rax

  v2 = -1073741790;
  CurrentProcess = PsGetCurrentProcess();
  DirectComposition::CCriticalSection::AcquireShared(this[2]);
  ExAcquirePushLockExclusiveEx(this + 25, 0LL);
  *((_BYTE *)this + 208) = 1;
  v4 = this[33];
  if ( v4 == (PERESOURCE)CurrentProcess || !v4 )
  {
    ++*((_DWORD *)this + 64);
    v2 = 0;
    this[33] = (PERESOURCE)CurrentProcess;
  }
  DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CPushLockCriticalSection *)(this + 25));
  ExReleaseResourceLite(this[2]);
  KeLeaveCriticalRegion();
  return v2;
}
