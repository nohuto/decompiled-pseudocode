/*
 * XREFs of RiFastInsertDeviceQueue @ 0x140023B9C
 * Callers:
 *     RaidInsertDeviceQueue @ 0x1400234A0 (RaidInsertDeviceQueue.c)
 * Callees:
 *     RiFlushDeviceLists @ 0x1400232C0 (RiFlushDeviceLists.c)
 */

char __fastcall RiFastInsertDeviceQueue(
        __int64 a1,
        __int64 a2,
        char a3,
        _BYTE *a4,
        LARGE_INTEGER *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  signed __int64 v11; // r14
  char v12; // si
  char v13; // r15
  __int64 v14; // rax
  __int64 v15; // rbx
  signed __int64 v16; // rax
  char v17; // al
  bool v19; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v21; // r14
  USHORT DepthSList; // bp
  char v23; // cl
  volatile LONG *v24; // rbx
  char v25; // bl
  volatile LONG *v26; // rcx

  if ( (*(_BYTE *)(a2 + 22) & 0x51) != 0 )
    return 0;
  v11 = *(_QWORD *)(a1 + 88);
  v12 = 0;
  v13 = 0;
  while ( 1 )
  {
    v14 = 0x100000000LL;
    if ( (v11 & 1) != 0 )
      break;
    v15 = (v11 >> 2) & 0x3FFFFFFF;
    if ( (int)v15 >= *(_DWORD *)(a1 + 4) )
    {
      if ( *(_BYTE *)(a2 + 22) )
        break;
      if ( !v12 && !a3 )
      {
        if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 80)) )
          return v13;
        v12 = 1;
        v14 = 0x100000000LL;
      }
    }
    else
    {
      v14 = 4LL;
    }
    v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v14 + v11, v11);
    if ( v11 == v16 )
    {
      v17 = *(_BYTE *)(a2 + 20);
      if ( (int)v15 < *(_DWORD *)(a1 + 4) )
      {
        *a4 = 0;
        *(_BYTE *)(a2 + 20) = v17 & 0xFE;
LABEL_9:
        v13 = 1;
        break;
      }
      *a4 = 1;
      v19 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(a2 + 20) = v17 | 3;
      if ( !v19 )
      {
        v19 = UseQPCTime == 0;
        goto LABEL_21;
      }
      if ( g_StorpTraceLoggingPerformanceEnabled )
      {
        if ( !UseQPCTime )
          goto LABEL_25;
        v19 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
LABEL_21:
        if ( v19 )
LABEL_25:
          PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        else
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
      }
      else
      {
        PerformanceCounter.QuadPart = 0LL;
      }
      *a5 = PerformanceCounter;
      *a6 = 1;
      v21 = v11 / 0x100000000LL;
      *a7 = v21;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 96), (PSLIST_ENTRY)((a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL));
      DepthSList = ExQueryDepthSList((PSLIST_HEADER)(a1 + 96));
      if ( DepthSList <= 0x40u )
      {
LABEL_27:
        if ( (int)v21 + 1 > *(_DWORD *)(a1 + 180) )
        {
          v23 = 0;
          if ( a3 )
          {
            v24 = (volatile LONG *)(a1 + 72);
          }
          else
          {
            if ( v12 )
            {
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 80));
              v12 = 0;
            }
            v24 = (volatile LONG *)(a1 + 72);
            ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
            v23 = 1;
          }
          if ( (int)v21 + 1 > *(_DWORD *)(a1 + 180) )
            *(_DWORD *)(a1 + 180) = v21 + 1;
          if ( v23 )
            ExReleaseSpinLockExclusiveFromDpcLevel(v24);
        }
        goto LABEL_9;
      }
      if ( v12 )
      {
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 80));
        v12 = 0;
      }
      v25 = 0;
      if ( !a3 )
      {
        v26 = (volatile LONG *)(a1 + 72);
        if ( DepthSList > 0x80u )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel(v26);
        }
        else if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v26) )
        {
          goto LABEL_27;
        }
        v25 = 1;
      }
      RiFlushDeviceLists((union _SLIST_HEADER *)a1);
      if ( v25 )
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      goto LABEL_27;
    }
    v11 = v16;
  }
  if ( v12 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 80));
  return v13;
}
