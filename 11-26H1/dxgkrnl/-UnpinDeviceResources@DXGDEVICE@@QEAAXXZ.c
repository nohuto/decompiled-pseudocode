/*
 * XREFs of ?UnpinDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x14030F2A0
 * Callers:
 *     ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x14030EFB0 (-DisablePinnedHardware@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DisablePinnedResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x14030F3D0 (-DisablePinnedResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DXGDEVICE::UnpinDeviceResources(struct _KTHREAD **this)
{
  DXGPUSHLOCK *v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  struct DXGRESOURCE *i; // rdi

  v1 = (DXGPUSHLOCK *)(this + 30);
  if ( this != (struct _KTHREAD **)-240LL && this[31] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1495;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1495LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v1, 0LL) )
  {
    DXGPUSHLOCK::LogEvent(v1, v3, v4);
    ExAcquirePushLockExclusiveEx(v1, 0LL);
  }
  *((_QWORD *)v1 + 1) = KeGetCurrentThread();
  for ( i = this[7]; i; i = (struct DXGRESOURCE *)*((_QWORD *)i + 5) )
    DXGDEVICE::DisablePinnedResource((DXGDEVICE *)this, i);
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
