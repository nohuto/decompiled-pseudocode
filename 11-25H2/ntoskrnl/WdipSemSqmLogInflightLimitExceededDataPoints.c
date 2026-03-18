/*
 * XREFs of WdipSemSqmLogInflightLimitExceededDataPoints @ 0x140A42D20
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x140A42BB0 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     WdipSemGetGuidKey @ 0x140793B20 (WdipSemGetGuidKey.c)
 *     WdipSemSqmAddToStream @ 0x1407940EC (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x140794250 (WdipSemSqmIncrementDword.c)
 *     WdipSemFreeFrequentScenarioTable @ 0x140A42E40 (WdipSemFreeFrequentScenarioTable.c)
 */

__int64 WdipSemSqmLogInflightLimitExceededDataPoints()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // ebx
  __int64 *v2; // rax
  __int64 v3; // rcx
  signed __int8 v4; // cf
  __int64 *v5; // rdi
  __int64 v6; // rdi
  signed __int64 v7; // rdx
  ULONG_PTR v8; // rtt
  int v10; // eax
  __int64 *v11; // rsi
  __int64 v12; // rbx
  unsigned int v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h] BYREF
  int v15; // [rsp+30h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  v13 = 0;
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  v2 = KeAbPreAcquire((__int64)&qword_140F01968, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F01968, 0LL);
  v5 = v2;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140F01968, v2, (__int64)&qword_140F01968);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  v6 = (unsigned int)dword_140F01960;
  if ( dword_140F01960 )
  {
    v10 = WdipSemSqmIncrementDword(v3, dword_140F01960);
    if ( v10 >= 0 )
      v1 = v10;
    if ( (_DWORD)v6 )
    {
      v11 = WdipSemFrequentScenarioTable;
      do
      {
        v12 = *v11;
        if ( (int)WdipSemGetGuidKey(*v11, &v13) >= 0 )
        {
          LODWORD(v14) = v13;
          HIDWORD(v14) = *(unsigned __int16 *)(v12 + 16);
          v15 = *(_DWORD *)(v12 + 20);
          v1 = WdipSemSqmAddToStream((_DWORD *)0x426, 3u, &v14);
          if ( v1 < 0 )
            v1 = 0;
        }
        else
        {
          v1 = 0;
        }
        ++v11;
        --v6;
      }
      while ( v6 );
    }
  }
  WdipSemFreeFrequentScenarioTable();
  _m_prefetchw(&qword_140F01968);
  v7 = qword_140F01968 - 16;
  if ( (qword_140F01968 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v7 = 0LL;
  if ( (qword_140F01968 & 2) != 0
    || (v8 = qword_140F01968,
        v8 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F01968, v7, qword_140F01968)) )
  {
    ExfReleasePushLock(&qword_140F01968);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140F01968);
  KeLeaveCriticalRegion();
  return (unsigned int)v1;
}
