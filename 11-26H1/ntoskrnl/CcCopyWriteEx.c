/*
 * XREFs of CcCopyWriteEx @ 0x14026C4B0
 * Callers:
 *     CcCopyWrite @ 0x1404D95D0 (CcCopyWrite.c)
 *     CcFastCopyWrite @ 0x1404F15F0 (CcFastCopyWrite.c)
 *     DifCcCopyWriteExWrapper @ 0x140651040 (DifCcCopyWriteExWrapper.c)
 *     DifCcCopyWriteWrapper @ 0x140651200 (DifCcCopyWriteWrapper.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     PsGetBaseIoPriorityThread @ 0x14026C7A0 (PsGetBaseIoPriorityThread.c)
 *     CcMapAndCopyInToCache @ 0x14026C7E0 (CcMapAndCopyInToCache.c)
 *     CcTelemetryBucketizeLatency @ 0x140A87318 (CcTelemetryBucketizeLatency.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140B623E8 (CcSetTelemetryPeriodicTimer.c)
 */

char __fastcall CcCopyWriteEx(__int64 a1, __int64 *a2, unsigned int a3, char a4, __int64 a5, __int64 a6)
{
  int v10; // ebx
  int BaseIoPriorityThread; // eax
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // edx
  unsigned int v17; // eax
  unsigned __int64 v18; // r8
  int v19; // ecx
  char v20; // bl
  _QWORD *v21; // rdi
  __int64 v22; // r11
  __int64 v23; // r8
  _QWORD *v24; // r8
  __int64 v25; // rdx
  unsigned __int64 v26; // r11
  __int64 v28; // [rsp+58h] [rbp-50h] BYREF
  __int64 v29; // [rsp+60h] [rbp-48h] BYREF
  __int64 v30; // [rsp+68h] [rbp-40h]
  unsigned __int64 v31; // [rsp+70h] [rbp-38h]
  _QWORD v32[3]; // [rsp+78h] [rbp-30h] BYREF

  v10 = 0;
  v29 = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(KeGetCurrentThread(), a2);
  if ( (BaseIoPriorityThread >= 2 || (struct _KTHREAD *)v12 != KeGetCurrentThread() || !*(_DWORD *)(v12 + 1504))
    && BaseIoPriorityThread <= 0
    || (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
  {
    v10 = 1;
  }
  ++*(_QWORD *)&EmpParseLock.WaitBlockFill11[16];
  if ( !BYTE1(EmpParseLock.Timer.TimerListEntry.Flink)
    && !EmpParseLock.Affinity
    && *((_BYTE *)&EmpParseLock.SwapListEntry + 8) )
  {
    CcSetTelemetryPeriodicTimer(*(LARGE_INTEGER *)&EmpParseLock.Timer.Header.Lock);
  }
  if ( v10 && !a4 )
    return 0;
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v32[1] = v13;
  v14 = *a2;
  v32[0] = v14;
  v15 = 2;
  if ( (v14 & 0xFFF) == 0 && a3 >= 0x1000 )
    v15 = 3;
  v16 = v15 | 4;
  if ( (((_WORD)v14 + (_WORD)a3) & 0xFFF) != 0 )
    v16 = v15;
  v31 = v14 & 0xFFFFFFFFFFFFF000uLL;
  v29 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  v17 = v29 - (v14 & 0xFFFFF000);
  v18 = (v29 - (v14 & 0xFFFFFFFFFFFFF000uLL)) >> 32;
  if ( (__int64)(v29 - (v14 & 0xFFFFFFFFFFFFF000uLL)) <= 0 )
  {
    v19 = v16 | 7;
  }
  else
  {
    v19 = v16;
    if ( !(_DWORD)v18 && v17 <= 0x1000 )
      v19 = v16 | 6;
  }
  v20 = CcMapAndCopyInToCache(v13, a5, (unsigned int)v32, a3, v19, a1, (__int64)&v29, a4, a6, (__int64)&v28);
  if ( !BYTE1(EmpParseLock.Timer.TimerListEntry.Flink) )
  {
    v21 = *(_QWORD **)(v13 + 512);
    if ( v20 )
    {
      if ( v28 )
        v22 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v28) / (__int64)EmpParseLock.Queue;
      else
        v22 = v30;
      v23 = 123LL;
      if ( !a4 )
        v23 = 147LL;
      v24 = &v21[v23];
      v25 = 111LL;
      if ( !a4 )
        v25 = 135LL;
      CcTelemetryBucketizeLatency(v22, &v21[v25], v24);
      if ( a4 )
      {
        ++v21[106];
        if ( v26 > *(_QWORD *)(*(_QWORD *)(v13 + 512) + 872LL) )
          v21[109] = v26;
      }
      else
      {
        ++v21[107];
        if ( v26 > v21[110] )
          v21[110] = v26;
      }
    }
    else
    {
      ++v21[108];
    }
  }
  return v20;
}
