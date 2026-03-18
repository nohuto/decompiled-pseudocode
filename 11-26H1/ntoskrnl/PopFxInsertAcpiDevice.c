/*
 * XREFs of PopFxInsertAcpiDevice @ 0x140605034
 * Callers:
 *     PopFxAcpiRegisterDevice @ 0x140612304 (PopFxAcpiRegisterDevice.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall PopFxInsertAcpiDevice(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rdi
  _QWORD *v10; // rcx
  _QWORD *v11; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&qword_140F123D0, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64(&qword_140F123D0.Header.Lock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&qword_140F123D0, v6, (__int64)&qword_140F123D0);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = (_QWORD *)qword_140F123C8;
  v11 = (_QWORD *)(a3 + 200);
  if ( *(__int64 **)qword_140F123C8 != &qword_140F123C0 )
    __fastfail(3u);
  *v11 = &qword_140F123C0;
  *(_QWORD *)(a3 + 208) = v10;
  *v10 = v11;
  qword_140F123C8 = a3 + 200;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140F123D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140F123D0.Header.Lock);
  KeAbPostRelease((unsigned __int64)&qword_140F123D0);
  KeLeaveCriticalRegion();
}
