/*
 * XREFs of WdipSemDisableContextProvider @ 0x140A4346C
 * Callers:
 *     WdipSemDisableContextProviders @ 0x140A43054 (WdipSemDisableContextProviders.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     WdipSemCaptureState @ 0x1404AF4BC (WdipSemCaptureState.c)
 *     WdipSemEnableDisableTrace @ 0x140A43AE0 (WdipSemEnableDisableTrace.c)
 */

__int64 __fastcall WdipSemDisableContextProvider(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // esi
  __int64 *v6; // rax
  signed __int8 v7; // cf
  __int64 *v8; // rbx
  int v9; // r8d
  __int64 v10; // rbx
  __int32 v11; // ecx
  signed __int64 v13; // rdx
  ULONG_PTR v14; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = 0;
  v6 = KeAbPreAcquire((__int64)&qword_140F01508, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F01508, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&qword_140F01508, v6, (__int64)&qword_140F01508);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  if ( a1 )
  {
    WdipSemCaptureState(a1, a2);
    if ( *(_DWORD *)(a1 + 32) != 1 )
    {
      v10 = *(_QWORD *)(a1 + 40);
      v11 = _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId);
      if ( (*(_DWORD *)(v10 + 72))-- == 1 )
      {
        if ( *(_DWORD *)(v10 + 40) )
        {
          LOBYTE(v9) = *(_BYTE *)(v10 + 16);
          v5 = WdipSemEnableDisableTrace(v11, a1, v9, *(_QWORD *)(v10 + 24), *(_DWORD *)(v10 + 32), 1);
          if ( v5 >= 0 )
          {
            *(_BYTE *)(v10 + 48) = *(_BYTE *)(v10 + 16);
            *(_QWORD *)(v10 + 56) = *(_QWORD *)(v10 + 24);
            *(_DWORD *)(v10 + 64) = *(_DWORD *)(v10 + 32);
          }
        }
        else
        {
          v5 = WdipSemEnableDisableTrace(v11, a1, 0, 0, 0, 0);
          if ( v5 >= 0 )
          {
            *(_OWORD *)(v10 + 48) = 0LL;
            *(_OWORD *)(v10 + 64) = 0LL;
          }
        }
      }
    }
  }
  else
  {
    v5 = -1073741811;
  }
  _m_prefetchw(&qword_140F01508);
  v13 = qword_140F01508 - 16;
  if ( (qword_140F01508 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v13 = 0LL;
  if ( (qword_140F01508 & 2) != 0
    || (v14 = qword_140F01508,
        v14 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F01508, v13, qword_140F01508)) )
  {
    ExfReleasePushLock(&qword_140F01508);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140F01508);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
