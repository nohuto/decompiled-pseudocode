/*
 * XREFs of ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x14014141C
 * Callers:
 *     ?InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1400566F0 (-InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResource.c)
 *     ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1400AA6C0 (-CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMars.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?EnsureShellPropertyAndTriggerAccess@CApplicationChannel@DirectComposition@@UEAAJXZ @ 0x1401413E0 (-EnsureShellPropertyAndTriggerAccess@CApplicationChannel@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A8FE8 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A901C (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::AcquireShellResourceAccess(PERESOURCE *this)
{
  unsigned int v2; // edi
  __int64 CurrentProcess; // rbp
  PERESOURCE v4; // rax

  v2 = -1073741790;
  CurrentProcess = PsGetCurrentProcess(this);
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
