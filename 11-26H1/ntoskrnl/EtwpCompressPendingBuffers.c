/*
 * XREFs of EtwpCompressPendingBuffers @ 0x1406CBD3C
 * Callers:
 *     EtwpBufferingModeCompressionFlush @ 0x1406CB8FC (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x1406CBEA0 (EtwpCompressionProc.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     EtwpCompressBuffer @ 0x1406CB9B4 (EtwpCompressBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x1406CBFA4 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x1406CC3C0 (EtwpRotateCompressionTargetIfNeeded.c)
 *     EtwpCompleteBuffer @ 0x140ADFA18 (EtwpCompleteBuffer.c)
 */

void __fastcall EtwpCompressPendingBuffers(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rbx
  AutoBoost *v6; // rax
  volatile unsigned __int8 *v7; // rdx
  AutoBoost *v8; // rsi
  LARGE_INTEGER PerformanceCounter; // rbx
  _DWORD *v10; // rax
  _DWORD *v11; // rsi
  LARGE_INTEGER v12; // rax
  __int64 v13; // rcx
  LONGLONG v14; // rax

  v4 = (unsigned __int64 *)(a1 + 1408);
  v6 = (AutoBoost *)KeAbPreAcquire(a1 + 1408, 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v6, (__int64)v4);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v7) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v8 + 33), v7, 1);
    }
    else
    {
      *((_BYTE *)v8 + 10) = 1;
    }
  }
  EtwpRotateCompressionTargetIfNeeded(a1);
  while ( 1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v10 = (_DWORD *)EtwpDequeueBufferPendingCompression(a1);
    v11 = v10;
    if ( !v10 )
      break;
    if ( (int)v10[3] > 0 || v10[1] > 0x48u && v10[2] > 0x48u )
    {
      if ( (int)EtwpCompressBuffer(a1, (__int64)v10) < 0 )
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 252));
      EtwpCompleteBuffer(a1, v11);
      v12 = KeQueryPerformanceCounter(0LL);
      v13 = *(_QWORD *)(a1 + 1536);
      v14 = v12.QuadPart - PerformanceCounter.QuadPart;
      if ( v13 )
        *(_QWORD *)(a1 + 1536) = (v14 + 4 * v13) / 5;
      else
        *(_QWORD *)(a1 + 1536) = v14;
    }
    else
    {
      EtwpCompleteBuffer(a1, v10);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1408), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1408));
  KeAbPostRelease(a1 + 1408);
}
