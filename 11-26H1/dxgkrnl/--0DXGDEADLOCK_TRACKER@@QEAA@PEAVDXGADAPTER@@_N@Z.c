/*
 * XREFs of ??0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@_N@Z @ 0x1402FE6F4
 * Callers:
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@_N@Z @ 0x1402FE3C4 (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 * Callees:
 *     ?Activate@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1402FEBD4 (-Activate@DXGDEADLOCK_TRACKER@@QEAAXXZ.c)
 */

DXGDEADLOCK_TRACKER *__fastcall DXGDEADLOCK_TRACKER::DXGDEADLOCK_TRACKER(
        DXGDEADLOCK_TRACKER *this,
        struct DXGADAPTER *a2,
        char a3)
{
  __int64 v4; // rbx
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 **v7; // rdx
  __int64 v8; // rcx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = a2;
  *((_WORD *)this + 16) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_BYTE *)this + 240) = a3;
  *((_QWORD *)this + 47) = DXGDEADLOCK_TRACKER::DeadlockCounter;
  *((_QWORD *)this + 48) = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)a2 + 3);
  *((_QWORD *)this + 48) = -1LL;
  KeInitializeTimer((PKTIMER)((char *)this + 248));
  KeInitializeDpc((PRKDPC)((char *)this + 312), (PKDEFERRED_ROUTINE)DeadlockTimeOutDpc, this);
  KeInitializeTimer((PKTIMER)((char *)this + 40));
  KeInitializeDpc((PRKDPC)((char *)this + 104), (PKDEFERRED_ROUTINE)DeadlockPulseDpc, this);
  KeInitializeEvent((PRKEVENT)((char *)this + 200), NotificationEvent, 1u);
  *((_QWORD *)this + 24) = this;
  *((_QWORD *)this + 23) = ProcessDeadlockThread;
  *((_QWORD *)this + 21) = 0LL;
  v4 = *((_QWORD *)this + 3);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4 + 4976, 0LL);
  v5 = (__int64 *)((char *)this + 224);
  *(_QWORD *)(v4 + 4984) = KeGetCurrentThread();
  v6 = *((_QWORD *)this + 3) + 5000LL;
  v7 = *(__int64 ***)(*((_QWORD *)this + 3) + 5008LL);
  if ( *v7 != (__int64 *)v6 )
    __fastfail(3u);
  *((_QWORD *)this + 29) = v7;
  *v5 = v6;
  *v7 = v5;
  *(_QWORD *)(v6 + 8) = v5;
  v8 = *((_QWORD *)this + 3);
  *(_QWORD *)(v8 + 4984) = 0LL;
  ExReleasePushLockExclusiveEx(v8 + 4976, 0LL);
  KeLeaveCriticalRegion();
  if ( *(_DWORD *)(*((_QWORD *)this + 3) + 4972LL) == 1 )
    DXGDEADLOCK_TRACKER::Activate(this);
  return this;
}
