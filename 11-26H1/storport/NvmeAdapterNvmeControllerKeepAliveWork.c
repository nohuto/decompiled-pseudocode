/*
 * XREFs of NvmeAdapterNvmeControllerKeepAliveWork @ 0x1400EAA20
 * Callers:
 *     <none>
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     RaidCaptureLivedumpInternal @ 0x140093748 (RaidCaptureLivedumpInternal.c)
 *     NvmeAdapterSendFabricControllerKeepAlive @ 0x1400ED538 (NvmeAdapterSendFabricControllerKeepAlive.c)
 *     NvmeDbgLogCriticalEvent @ 0x1400FB97C (NvmeDbgLogCriticalEvent.c)
 */

void __fastcall NvmeAdapterNvmeControllerKeepAliveWork(PDEVICE_OBJECT DeviceObject, char *Context)
{
  int v2; // eax
  char v4; // r15
  unsigned __int64 v5; // rbp
  char v6; // r14
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rbx
  __int64 v9; // rax
  __int64 QuadPart; // r8
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r10
  _DWORD *v13; // rsi
  unsigned __int64 v14; // r8
  bool v15; // zf
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  union _LARGE_INTEGER v18; // [rsp+D8h] [rbp+10h] BYREF

  v2 = *((_DWORD *)Context + 34);
  v18.QuadPart = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 1;
  if ( (v2 & 0x400) != 0 )
    goto LABEL_26;
  if ( UseQPCTime )
    v7 = KeQueryPerformanceCounter(&v18);
  else
    v7.QuadPart = KeQueryUnbiasedInterruptTime();
  v8 = v7;
  v9 = *((_QWORD *)Context + 135);
  if ( v9 <= 0 )
  {
    v13 = Context + 1076;
LABEL_30:
    if ( (int)NvmeAdapterSendFabricControllerKeepAlive(Context) < 0 )
      v4 = 1;
    else
      *((LARGE_INTEGER *)Context + 135) = v8;
    goto LABEL_33;
  }
  QuadPart = *((_QWORD *)Context + 136);
  if ( QuadPart <= v9 )
  {
    v6 = 0;
    if ( v8.QuadPart > 0 && v8.QuadPart < v9 )
    {
      v11 = v8.QuadPart - v9 - 1;
      goto LABEL_12;
    }
    QuadPart = v8.QuadPart;
  }
  v11 = QuadPart - v9;
LABEL_12:
  if ( UseQPCTime )
  {
    v12 = 0LL;
    if ( v18.QuadPart && v11 )
      v12 = 10000 * (1000 * (v11 % v18.QuadPart) % v18.QuadPart) / v18.QuadPart
          + 10000 * (1000 * (v11 % v18.QuadPart) / v18.QuadPart + 1000 * (v11 / v18.QuadPart));
  }
  else
  {
    v12 = v11;
  }
  v13 = Context + 1076;
  v14 = *((unsigned int *)Context + 269);
  v5 = v12 / 0x2710;
  if ( v12 / 0x2710 >= v14 )
  {
    *((_QWORD *)Context + 17) |= 0x20000000uLL;
    v15 = (Context[1360] & 0x20) == 0;
    *((_DWORD *)Context + 142) = 4;
    *((_DWORD *)Context + 298) = 34;
    if ( !v15 )
      NvmeDbgLogCriticalEvent((_DWORD)Context, 1, v14, v12 / 0x2710, 0LL, 0LL);
    if ( (StorLivedumpCodesEnabled & 4) != 0 )
      RaidCaptureLivedumpInternal(3, (__int64)Context, 0LL);
    StorEtwNvmeControllerEvent(
      (__int64)Context,
      1,
      2LL,
      (__int64)L"Keep Alive timeout expired",
      L"KeepAliveTimeout msecs",
      *v13,
      L"Wait time",
      v5,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0,
      (void *)&word_140152E7C,
      0);
    if ( (*((_DWORD *)Context + 34) & 0x400LL) == 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Context + 161) + 40LL) + 192LL) )
      {
        KeCancelTimer((PKTIMER)(*(_QWORD *)(*((_QWORD *)Context + 161) + 40LL) + 128LL));
        KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(*((_QWORD *)Context + 161) + 40LL) + 64LL));
        _InterlockedCompareExchange(
          (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)Context + 161) + 40LL) + 192LL),
          0,
          1);
      }
      KeClearEvent((PRKEVENT)(Context + 232));
      IoQueueWorkItem(
        *((PIO_WORKITEM *)Context + 20),
        NvmeAdapterNvmeControllerRebuildAssociationWork,
        DelayedWorkQueue,
        Context);
    }
    goto LABEL_26;
  }
  if ( v6 )
    goto LABEL_30;
LABEL_33:
  if ( (*((_DWORD *)Context + 34) & 0x400LL) != 0 )
  {
LABEL_26:
    KeSetEvent((PRKEVENT)(Context + 208), 0, 0);
    return;
  }
  if ( v4 )
  {
    v16 = 1LL;
  }
  else
  {
    v17 = (unsigned int)*v13;
    if ( (*(_DWORD *)(*((_QWORD *)Context + 74) + 96LL) & 0x40) != 0 )
      v16 = v17 >> 2;
    else
      v16 = v17 >> 1;
  }
  if ( !v6 && v16 >= (unsigned int)*v13 - v5 )
    v16 = (unsigned int)*v13 - v5;
  KeClearEvent((PRKEVENT)(Context + 208));
  KeSetCoalescableTimer((PKTIMER)(Context + 408), (LARGE_INTEGER)(-10000LL * v16), 0, 1u, (PKDPC)(Context + 472));
}
