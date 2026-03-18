/*
 * XREFs of WdipSemEnableContextProvider @ 0x140AD998C
 * Callers:
 *     WdipSemEnableContextProviders @ 0x140AD9930 (WdipSemEnableContextProviders.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     WdipSemEnableDisableTrace @ 0x140AD9B30 (WdipSemEnableDisableTrace.c)
 */

__int64 __fastcall WdipSemEnableContextProvider(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v7; // rax
  void *v8; // rdx
  int v9; // r8d
  signed __int8 v10; // cf
  AutoBoost *v11; // rbx
  __int64 v12; // rbx
  unsigned __int8 v13; // bp
  unsigned __int8 v14; // al
  int v15; // edx
  __int64 v16; // r15
  int v17; // r14d
  signed __int64 v18; // rdx
  __int64 v19; // rtt

  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F060A8, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64(&stru_140F060A8.Header.Lock, 0LL);
  v11 = v7;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F060A8, v7, (__int64)&stru_140F060A8);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v8);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 32) == 1 )
      goto LABEL_14;
    v12 = *(_QWORD *)(a1 + 40);
    v13 = *(_BYTE *)(a1 + 18);
    v14 = *(_BYTE *)(v12 + 48);
    v15 = *(_DWORD *)(v12 + 64);
    if ( v13 <= v14 )
      v13 = *(_BYTE *)(v12 + 48);
    v16 = *(_QWORD *)(a1 + 24) | *(_QWORD *)(v12 + 56);
    v17 = *(_DWORD *)(a1 + 36) | v15;
    if ( !*(_BYTE *)(v12 + 69) || v16 != *(_QWORD *)(v12 + 56) || v13 != v14 || v17 != v15 )
    {
      LOBYTE(v9) = v13;
      v4 = WdipSemEnableDisableTrace(
             _InterlockedExchange(
               (volatile __int32 *)&stru_140F066E8.SListFaultAddress,
               (__int32)stru_140F066E8.SListFaultAddress),
             a1,
             v9,
             *(_DWORD *)(a1 + 24) | *(_DWORD *)(v12 + 56),
             v17,
             1);
      if ( v4 < 0 )
        goto LABEL_14;
      *(_BYTE *)(v12 + 69) = 1;
      *(_QWORD *)(v12 + 56) = v16;
      *(_BYTE *)(v12 + 48) = v13;
      *(_DWORD *)(v12 + 64) = v17;
    }
    ++*(_DWORD *)(v12 + 72);
  }
  else
  {
    v4 = -1073741811;
  }
LABEL_14:
  _m_prefetchw(&stru_140F060A8);
  v18 = *(_QWORD *)&stru_140F060A8.Header.Lock - 16LL;
  if ( (*(_QWORD *)&stru_140F060A8.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v18 = 0LL;
  if ( (stru_140F060A8.Header.Type & 2) != 0
    || (v19 = *(_QWORD *)&stru_140F060A8.Header.Lock,
        v19 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&stru_140F060A8,
                 v18,
                 *(signed __int64 *)&stru_140F060A8.Header.Lock)) )
  {
    ExfReleasePushLock(&stru_140F060A8);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F060A8);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
