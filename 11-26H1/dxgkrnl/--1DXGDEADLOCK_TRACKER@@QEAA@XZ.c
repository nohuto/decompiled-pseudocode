/*
 * XREFs of ??1DXGDEADLOCK_TRACKER@@QEAA@XZ @ 0x1402FE630
 * Callers:
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@_N@Z @ 0x1402FE3C4 (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1402FE8A8 (-Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ.c)
 */

void __fastcall DXGDEADLOCK_TRACKER::~DXGDEADLOCK_TRACKER(DXGDEADLOCK_TRACKER *this)
{
  __int64 v1; // rbx
  DXGDEADLOCK_TRACKER **v3; // rdx
  DXGDEADLOCK_TRACKER **v4; // rax
  __int64 v5; // rcx

  v1 = *((_QWORD *)this + 3);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1 + 4976, 0LL);
  *(_QWORD *)(v1 + 4984) = KeGetCurrentThread();
  v3 = (DXGDEADLOCK_TRACKER **)*((_QWORD *)this + 28);
  if ( v3[1] != (DXGDEADLOCK_TRACKER *)((char *)this + 224)
    || (v4 = (DXGDEADLOCK_TRACKER **)*((_QWORD *)this + 29), *v4 != (DXGDEADLOCK_TRACKER *)((char *)this + 224)) )
  {
    __fastfail(3u);
  }
  *v4 = (DXGDEADLOCK_TRACKER *)v3;
  v3[1] = (DXGDEADLOCK_TRACKER *)v4;
  v5 = *((_QWORD *)this + 3);
  *(_QWORD *)(v5 + 4984) = 0LL;
  ExReleasePushLockExclusiveEx(v5 + 4976, 0LL);
  KeLeaveCriticalRegion();
  DXGDEADLOCK_TRACKER::Cancel(this);
  DXGADAPTER::ReleaseReference(*((DXGADAPTER **)this + 3));
}
