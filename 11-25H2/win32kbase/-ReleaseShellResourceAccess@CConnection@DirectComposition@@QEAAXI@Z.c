/*
 * XREFs of ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x140058C98
 * Callers:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x140022208 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x140023FC4 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x140058368 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ?ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400588CC (-ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshale.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x140058A20 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x14004F56C (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x14004F5A0 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CConnection::ReleaseShellResourceAccess(PERESOURCE *this, int a2)
{
  bool v4; // zf

  DirectComposition::CCriticalSection::AcquireShared(this[2]);
  ExAcquirePushLockExclusiveEx(this + 25, 0LL);
  *((_BYTE *)this + 208) = 1;
  v4 = *((_DWORD *)this + 64) == a2;
  *((_DWORD *)this + 64) -= a2;
  if ( v4 )
    this[33] = 0LL;
  DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CPushLockCriticalSection *)(this + 25));
  ExReleaseResourceLite(this[2]);
  KeLeaveCriticalRegion();
}
