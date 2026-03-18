/*
 * XREFs of WdipSemMarkNextTimedOutInstanceForDeletion @ 0x140A431B4
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x140A42BB0 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 */

__int64 *__fastcall WdipSemMarkNextTimedOutInstanceForDeletion(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rsi
  __int64 *v4; // rax
  signed __int8 v5; // cf
  __int64 *v6; // rbx
  signed __int64 v7; // rdx
  ULONG_PTR v8; // rtt
  __int64 *v10; // rdx
  __int64 *v11; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&qword_140F01538, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F01538, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&qword_140F01538, v4, (__int64)&qword_140F01538);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  if ( a1 )
  {
    v10 = *a1;
    while ( v10 != &WdipSemEnabledInstanceTable )
    {
      v11 = v10;
      v10 = (__int64 *)*v10;
      if ( ++*((_DWORD *)v11 + 10) >= 0xAu && *(_BYTE *)(v11[4] + 1176) && !*((_DWORD *)v11 + 11) )
      {
        *((_DWORD *)v11 + 11) = 1;
        v3 = v11;
        break;
      }
    }
  }
  _m_prefetchw(&qword_140F01538);
  v7 = qword_140F01538 - 16;
  if ( (qword_140F01538 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v7 = 0LL;
  if ( (qword_140F01538 & 2) != 0
    || (v8 = qword_140F01538,
        v8 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F01538, v7, qword_140F01538)) )
  {
    ExfReleasePushLock(&qword_140F01538);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140F01538);
  KeLeaveCriticalRegion();
  return v3;
}
