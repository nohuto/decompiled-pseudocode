/*
 * XREFs of WdipSemAllocatePool @ 0x140B301B0
 * Callers:
 *     WdipSemFastAllocate @ 0x140AD7DB0 (WdipSemFastAllocate.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall WdipSemAllocatePool(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // edi
  __int64 v6; // rsi
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rbx
  int v11; // ecx
  _QWORD *Pool2; // rax
  signed __int64 v13; // rdx
  __int64 v14; // rtt
  _QWORD *v16; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = (a1 + 15) & 0xFFFFFFF0;
  --CurrentThread->KernelApcDisable;
  v6 = 0LL;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E285C0, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64(&stru_140E285C0.Header.Lock, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E285C0, v7, (__int64)&stru_140E285C0);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v8);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  v11 = dword_140E285B0;
  if ( v5 > dword_140E285B0 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      goto LABEL_8;
    v16 = (_QWORD *)qword_140E285A8;
    if ( *(PVOID **)qword_140E285A8 != &WdipSemPool )
      __fastfail(3u);
    Pool2[1] = qword_140E285A8;
    *Pool2 = &WdipSemPool;
    *v16 = Pool2;
    v11 = 4080;
    qword_140E285A8 = (__int64)Pool2;
    qword_140E285B8 = (__int64)(Pool2 + 2);
  }
  v6 = qword_140E285B8;
  qword_140E285B8 += v5;
  dword_140E285B0 = v11 - v5;
LABEL_8:
  _m_prefetchw(&stru_140E285C0);
  v13 = *(_QWORD *)&stru_140E285C0.Header.Lock - 16LL;
  if ( (*(_QWORD *)&stru_140E285C0.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v13 = 0LL;
  if ( (stru_140E285C0.Header.Type & 2) != 0
    || (v14 = *(_QWORD *)&stru_140E285C0.Header.Lock,
        v14 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&stru_140E285C0,
                 v13,
                 *(signed __int64 *)&stru_140E285C0.Header.Lock)) )
  {
    ExfReleasePushLock(&stru_140E285C0);
  }
  KeAbPostRelease((unsigned __int64)&stru_140E285C0);
  KeLeaveCriticalRegion();
  return v6;
}
