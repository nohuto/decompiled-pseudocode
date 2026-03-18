/*
 * XREFs of WdipSemAllocatePool @ 0x140A84164
 * Callers:
 *     WdipSemFastAllocate @ 0x140A44214 (WdipSemFastAllocate.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall WdipSemAllocatePool(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 *v4; // rax
  signed __int8 v5; // cf
  __int64 *v6; // rdi
  int v7; // ecx
  _QWORD *Pool2; // rax
  signed __int64 v9; // rdx
  ULONG_PTR v10; // rtt
  _QWORD *v12; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = (a1 + 15) & 0xFFFFFFF0;
  --CurrentThread->KernelApcDisable;
  v3 = 0LL;
  v4 = KeAbPreAcquire((__int64)&qword_140E28940, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E28940, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&qword_140E28940, v4, (__int64)&qword_140E28940);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v7 = dword_140E28930;
  if ( v2 > dword_140E28930 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      goto LABEL_7;
    v12 = (_QWORD *)qword_140E28928;
    if ( *(PVOID **)qword_140E28928 != &WdipSemPool )
      __fastfail(3u);
    Pool2[1] = qword_140E28928;
    *Pool2 = &WdipSemPool;
    *v12 = Pool2;
    v7 = 4080;
    qword_140E28928 = (__int64)Pool2;
    qword_140E28938 = (__int64)(Pool2 + 2);
  }
  v3 = qword_140E28938;
  qword_140E28938 += v2;
  dword_140E28930 = v7 - v2;
LABEL_7:
  _m_prefetchw(&qword_140E28940);
  v9 = qword_140E28940 - 16;
  if ( (qword_140E28940 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v9 = 0LL;
  if ( (qword_140E28940 & 2) != 0
    || (v10 = qword_140E28940,
        v10 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E28940, v9, qword_140E28940)) )
  {
    ExfReleasePushLock(&qword_140E28940);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140E28940);
  KeLeaveCriticalRegion();
  return v3;
}
