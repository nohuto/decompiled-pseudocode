/*
 * XREFs of WdipSemDisableContextProvider @ 0x140AD6238
 * Callers:
 *     WdipSemDisableContextProviders @ 0x140AD61C8 (WdipSemDisableContextProviders.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     WdipSemCaptureState @ 0x1404DC660 (WdipSemCaptureState.c)
 *     WdipSemEnableDisableTrace @ 0x140AD65E0 (WdipSemEnableDisableTrace.c)
 */

__int64 __fastcall WdipSemDisableContextProvider(__int64 a1, char a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // esi
  AutoBoost *v8; // rax
  void *v9; // rdx
  signed __int8 v10; // cf
  AutoBoost *v11; // rbx
  int v12; // r8d
  __int64 v13; // rbx
  __int32 v14; // ecx
  signed __int64 v16; // rdx
  __int64 v17; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = 0;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F06A28, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64(&stru_140F06A28.Header.Lock, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F06A28, v8, (__int64)&stru_140F06A28);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v9);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( a1 )
  {
    WdipSemCaptureState(a1, a2);
    if ( *(_DWORD *)(a1 + 32) != 1 )
    {
      v13 = *(_QWORD *)(a1 + 40);
      v14 = _InterlockedExchange((_DWORD *)&stru_140F06A28.QuantumTarget + 1, SHIDWORD(stru_140F06A28.QuantumTarget));
      if ( (*(_DWORD *)(v13 + 72))-- == 1 )
      {
        if ( *(_DWORD *)(v13 + 40) )
        {
          LOBYTE(v12) = *(_BYTE *)(v13 + 16);
          v7 = WdipSemEnableDisableTrace(v14, a1, v12, *(_QWORD *)(v13 + 24), *(_DWORD *)(v13 + 32), 1);
          if ( v7 >= 0 )
          {
            *(_BYTE *)(v13 + 48) = *(_BYTE *)(v13 + 16);
            *(_QWORD *)(v13 + 56) = *(_QWORD *)(v13 + 24);
            *(_DWORD *)(v13 + 64) = *(_DWORD *)(v13 + 32);
          }
        }
        else
        {
          v7 = WdipSemEnableDisableTrace(v14, a1, 0, 0, 0, 0);
          if ( v7 >= 0 )
          {
            *(_OWORD *)(v13 + 48) = 0LL;
            *(_OWORD *)(v13 + 64) = 0LL;
          }
        }
      }
    }
  }
  else
  {
    v7 = -1073741811;
  }
  _m_prefetchw(&stru_140F06A28);
  v16 = *(_QWORD *)&stru_140F06A28.Header.Lock - 16LL;
  if ( (*(_QWORD *)&stru_140F06A28.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v16 = 0LL;
  if ( (stru_140F06A28.Header.Type & 2) != 0
    || (v17 = *(_QWORD *)&stru_140F06A28.Header.Lock,
        v17 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&stru_140F06A28,
                 v16,
                 *(signed __int64 *)&stru_140F06A28.Header.Lock)) )
  {
    ExfReleasePushLock(&stru_140F06A28);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F06A28);
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
