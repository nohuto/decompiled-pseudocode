/*
 * XREFs of PopFxInsertDevice @ 0x1404EFB20
 * Callers:
 *     PoFxRegisterCoreDevice @ 0x1407CCFA0 (PoFxRegisterCoreDevice.c)
 *     PopFxRegisterDevice @ 0x140B4F9A0 (PopFxRegisterDevice.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall PopFxInsertDevice(__int64 a1, __int64 a2, _QWORD *a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  signed __int8 v7; // cf
  AutoBoost *v8; // rdi
  _QWORD *v9; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&qword_140F123D0, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64(&qword_140F123D0.Header.Lock, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&qword_140F123D0, v6, (__int64)&qword_140F123D0);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v8 + 33) |= 2u;
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v9 = (_QWORD *)qword_140F123E8;
  if ( *(ULONG_PTR **)qword_140F123E8 != &qword_140F123E0 )
    __fastfail(3u);
  *a3 = &qword_140F123E0;
  a3[1] = v9;
  *v9 = a3;
  qword_140F123E8 = (__int64)a3;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140F123D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140F123D0.Header.Lock);
  KeAbPostRelease((unsigned __int64)&qword_140F123D0);
  KeLeaveCriticalRegion();
}
