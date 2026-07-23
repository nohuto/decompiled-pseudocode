/*
 * XREFs of EtwpCovSampContextAddSamples @ 0x140A31980
 * Callers:
 *     EtwpCovSampCaptureBufferProcess @ 0x140A31888 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampContextAddAddresses @ 0x140A321BC (EtwpCovSampContextAddAddresses.c)
 *     EtwpCovSampSampleBufferProcess @ 0x140A35F88 (EtwpCovSampSampleBufferProcess.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     EtwpCoverageSamplerFreeTable @ 0x140A322CC (EtwpCoverageSamplerFreeTable.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140A3230C (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 */

__int64 __fastcall EtwpCovSampContextAddSamples(struct _KTHREAD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r14d
  __int64 v4; // r15
  unsigned int v6; // esi
  struct _LIST_ENTRY *Blink; // rdi
  unsigned int RoomAndAcquireLock; // r13d
  __int64 v9; // r11
  _DWORD *v10; // r14
  _DWORD *v11; // r12
  int v12; // r9d
  int v13; // r10d
  int v14; // r9d
  unsigned __int64 v15; // rdx
  int v16; // eax
  int v17; // r15d
  unsigned int j; // r10d
  int v19; // edi
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *v21; // rdi
  __int64 v22; // r14
  struct _LIST_ENTRY *v23; // r12
  int v24; // edx
  __int64 k; // rcx
  struct _LIST_ENTRY **v26; // r10
  __int64 result; // rax
  struct _LIST_ENTRY *i; // rcx
  unsigned int v29; // [rsp+24h] [rbp-84h]
  unsigned __int64 v30; // [rsp+30h] [rbp-78h]
  int SListFaultAddress_high; // [rsp+3Ch] [rbp-6Ch]
  unsigned int v36; // [rsp+C8h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v29 = 0;
  v6 = 0;
  Blink = ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
  RoomAndAcquireLock = EtwpCovSampHashMakeRoomAndAcquireLock(a1);
  v36 = RoomAndAcquireLock;
  if ( RoomAndAcquireLock < v3 && HIDWORD(Blink[80].Flink) != 1 )
  {
    if ( ((__int64)a1->SListFaultAddress & 0x100) == 0 )
    {
      HIDWORD(Blink[80].Flink) = 1;
      KeSetEvent((PRKEVENT)a1[1].WaitBlock[2].SparePtr, 0, 0);
    }
    for ( i = Blink[59].Flink; i != &Blink[59]; i = i->Flink )
      HIDWORD(i[1].Blink) = HIDWORD(Blink[80].Flink);
  }
  v9 = 0LL;
  while ( RoomAndAcquireLock && (unsigned int)v9 < v3 )
  {
    v10 = (_DWORD *)(v4 + 8 * v9);
    v11 = v10 + 1;
    if ( !a1[1].WaitBlock[3].Thread )
      goto LABEL_13;
    SListFaultAddress_high = HIDWORD(a1->SListFaultAddress);
    LODWORD(v30) = *v11;
    HIDWORD(v30) = *v10;
    v12 = 16777619 * (SListFaultAddress_high ^ (unsigned __int8)*v11);
    v13 = 16777619 * (v12 ^ BYTE5(v30) ^ (16777619 * (SListFaultAddress_high ^ BYTE4(v30))));
    v14 = 16777619 * (v13 ^ BYTE2(v30) ^ (16777619 * (v12 ^ BYTE1(v30))));
    v15 = 16777619 * (v14 ^ HIBYTE(v30) ^ (16777619 * (v13 ^ (unsigned int)(unsigned __int8)BYTE2(*v10))));
    v17 = 1;
    for ( j = 0; j < LODWORD(a1[1].LastXStateSaveDebugInfo); ++j )
    {
      v16 = v15 ^ (16777619 * (v14 ^ (unsigned __int8)HIBYTE(*v11)));
      v19 = ((v15 << 32) | (unsigned int)v15 ^ (unsigned __int64)(16777619
                                                                * (v14 ^ (unsigned int)(unsigned __int8)HIBYTE(*v11)))) >> 32;
      if ( (*(&a1[1].WaitBlock[3].Thread->Header.Type + ((HIDWORD(a1[1].Spare18) & (v16 + j * v19)) >> 3)) & (unsigned __int8)(1 << (BYTE4(a1[1].Spare18) & (v16 + j * v19) & 7))) == 0 )
      {
        v17 = 0;
        break;
      }
    }
    if ( v17 )
    {
LABEL_17:
      ++v6;
      v9 = (unsigned int)(v9 + 1);
      v3 = a3;
      v4 = a2;
    }
    else
    {
LABEL_13:
      Flink = a1[1].WaitBlock[3].WaitListEntry.Flink;
      v21 = *(struct _LIST_ENTRY **)v10;
      v22 = HIBYTE(*(_QWORD *)v10)
          + 37
          * ((unsigned __int8)BYTE6(*(_QWORD *)v10)
           + 37
           * ((unsigned __int8)((unsigned __int16)WORD2(*(_QWORD *)v10) >> 8)
            + 37
            * (*(unsigned __int8 *)v11
             + 37
             * (BYTE3(*(_QWORD *)v10)
              + 37
              * ((unsigned __int8)BYTE2(*(_QWORD *)v10)
               + 37 * ((unsigned __int8)BYTE1(*(_QWORD *)v10) + 37 * ((unsigned __int8)*(_QWORD *)v10 + 11623883LL)))))));
      do
      {
        v23 = Flink;
        v24 = 0;
        for ( k = (unsigned int)v22 & (HIDWORD(Flink[1].Flink) - 1);
              ;
              k = (HIDWORD(Flink[1].Flink) - 1) & (unsigned int)(v24 + k) )
        {
          v26 = &Flink[1].Blink->Flink + k;
          if ( *v26 == v21 )
          {
            RoomAndAcquireLock = v36;
            goto LABEL_17;
          }
          if ( !*v26 )
            break;
          if ( !v24 )
          {
            v24 = -1640531535 * v22 + 1;
            if ( ((-79 * (_BYTE)v22) & 1) != 0 )
              v24 = -1640531535 * v22;
          }
        }
        Flink = Flink->Flink;
      }
      while ( Flink != (struct _LIST_ENTRY *)&a1[1].WaitBlockFill11[144] );
      *v26 = v21;
      ++LODWORD(v23[1].Flink);
      ++v29;
      RoomAndAcquireLock = --v36;
      v9 = (unsigned int)(v9 + 1);
      v3 = a3;
      v4 = a2;
    }
  }
  if ( (struct _KTHREAD *)a1->Header.WaitListHead.Flink == KeGetCurrentThread() )
  {
    a1->Header.WaitListHead.Flink = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
    KeAbPostRelease((unsigned __int64)a1);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  result = v29;
  _InterlockedAdd((volatile signed __int32 *)&a1->SchedulerSharedSwappablePage + 1, v29);
  _InterlockedAdd((volatile signed __int32 *)&a1->1136, v6);
  if ( v3 > v6 + v29 )
    _InterlockedAdd((volatile signed __int32 *)&a1->KernelAbEntries + 1, v3 - v6 - v29);
  return result;
}
