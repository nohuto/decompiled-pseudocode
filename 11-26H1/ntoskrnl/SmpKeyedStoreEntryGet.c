/*
 * XREFs of SmpKeyedStoreEntryGet @ 0x140409DF0
 * Callers:
 *     ?SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z @ 0x140354BA0 (-SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z.c)
 *     SmpKeyedStoreReference @ 0x140409CFC (SmpKeyedStoreReference.c)
 *     SmStoreExistsForProcess @ 0x140513B48 (SmStoreExistsForProcess.c)
 *     SmGetStoreOwnerProcessId @ 0x14063EE98 (SmGetStoreOwnerProcessId.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     SmpKeyedStoreCreate @ 0x140966FB8 (SmpKeyedStoreCreate.c)
 *     SmStoreCompressionStart @ 0x140AE9D90 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x140AE9E34 (SmStoreCompressionStop.c)
 *     SmSwapStore @ 0x140AEA064 (SmSwapStore.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140B522A4 (SmProcessStoreMemoryPriorityRequest.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExAllocatePool3 @ 0x140C10010 (ExAllocatePool3.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

unsigned __int64 *__fastcall SmpKeyedStoreEntryGet(
        struct _KTHREAD *a1,
        unsigned __int64 *a2,
        int a3,
        struct _KLOCK_ENTRIES *a4)
{
  int v5; // ebp
  unsigned __int64 *SListFaultAddress; // rsi
  void *v10; // rdx
  int v11; // r8d
  unsigned __int64 v12; // rdi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v14; // rax
  AutoBoost *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 *i; // rcx
  LIST_ENTRY *p_WaitListHead; // r9
  unsigned __int64 v20; // rdi
  unsigned int Flink_high; // r8d
  unsigned __int64 v22; // rdi
  struct _LIST_ENTRY **v23; // rcx
  struct _LIST_ENTRY *Pool3; // r9
  char v25; // cl
  LIST_ENTRY *v26; // r8
  unsigned int v27; // r10d
  unsigned __int64 v28; // rcx
  __int64 v29; // r11
  _QWORD **v30; // r8
  _QWORD *v31; // rcx
  int v32; // edx
  int v33; // eax
  __int64 v34; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  _QWORD *v36; // [rsp+38h] [rbp-40h]
  int v37; // [rsp+98h] [rbp+20h]

  v5 = (int)a4;
  if ( !(_DWORD)a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v14 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
    v15 = v14;
    if ( a3 > 0 )
    {
      if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v14, (__int64)a1);
      if ( v15 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v15, v10);
        else
          *((_BYTE *)v15 + 10) = 1;
      }
      goto LABEL_14;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&a1->Header.Lock, 0, v14, a1);
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v15 + 33) |= 2u;
      else
        *((_BYTE *)v15 + 10) = 1;
    }
  }
  if ( !a3 )
  {
    SListFaultAddress = (unsigned __int64 *)a1->SListFaultAddress;
    if ( SListFaultAddress && SListFaultAddress[1] == *a2 )
      goto LABEL_5;
    if ( *a2 == a1->QuantumTarget )
    {
      SListFaultAddress = 0LL;
      goto LABEL_5;
    }
  }
LABEL_14:
  v11 = HIDWORD(a1->Header.WaitListHead.Flink) >> 5;
  v12 = *a2 & (-1LL << (BYTE4(a1->Header.WaitListHead.Flink) & 0x1F));
  if ( v11 )
  {
    SListFaultAddress = (unsigned __int64 *)a1->Header.WaitListHead.Blink
                      + ((v11 - 1) & (442596621 * (unsigned __int8)v12
                                    - 877075889
                                    + HIBYTE(v12)
                                    + 37
                                    * (BYTE6(v12)
                                     + 37
                                     * (BYTE5(v12)
                                      + 37
                                      * (BYTE4(v12)
                                       + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (unsigned int)BYTE1(v12))))))));
    while ( 1 )
    {
      SListFaultAddress = (unsigned __int64 *)*SListFaultAddress;
      if ( ((unsigned __int8)SListFaultAddress & 1) != 0 )
        break;
      if ( v12 == ((-1LL << (BYTE4(a1->Header.WaitListHead.Flink) & 0x1F)) & SListFaultAddress[1]) )
      {
        if ( !SListFaultAddress )
          break;
        if ( a3 == 2 )
        {
          for ( i = (unsigned __int64 *)a1->Header.WaitListHead.Blink
                  + (((HIDWORD(a1->Header.WaitListHead.Flink) >> 5) - 1) & (442596621
                                                                          * (unsigned __int8)(SListFaultAddress[1] & (-1 << (HIDWORD(a1->Header.WaitListHead.Flink) & 0x1F)))
                                                                          - 877075889
                                                                          + ((SListFaultAddress[1] & (-1LL << (HIDWORD(a1->Header.WaitListHead.Flink) & 0x1F))) >> 56)
                                                                          + 37
                                                                          * ((unsigned __int8)((SListFaultAddress[1] & (-1LL << (HIDWORD(a1->Header.WaitListHead.Flink) & 0x1F))) >> 48)
                                                                           + 37
                                                                           * ((unsigned __int8)((unsigned __int16)((SListFaultAddress[1] & (-1LL << (HIDWORD(a1->Header.WaitListHead.Flink) & 0x1F))) >> 32) >> 8)
                                                                            + 37
                                                                            * ((unsigned __int8)((SListFaultAddress[1] & (-1LL << (HIDWORD(a1->Header.WaitListHead.Flink) & 0x1F))) >> 32)
                                                                             + 37
                                                                             * ((((_DWORD)SListFaultAddress[1] & (unsigned int)(-1 << (HIDWORD(a1->Header.WaitListHead.Flink) & 0x1F))) >> 24)
                                                                              + 37
                                                                              * ((unsigned __int8)(((_DWORD)SListFaultAddress[1] & (unsigned int)(-1 << (HIDWORD(a1->Header.WaitListHead.Flink) & 0x1F))) >> 16)
                                                                               + 37
                                                                               * (unsigned __int8)((unsigned __int16)(SListFaultAddress[1] & (-1 << (HIDWORD(a1->Header.WaitListHead.Flink) & 0x1F))) >> 8))))))));
                (*i & 1) == 0;
                i = (unsigned __int64 *)*i )
          {
            if ( (unsigned __int64 *)*i == SListFaultAddress )
            {
              *i = *SListFaultAddress;
              --LODWORD(a1->Header.WaitListHead.Flink);
              *SListFaultAddress |= 0x8000000000000002uLL;
              break;
            }
          }
          if ( a1->SListFaultAddress == SListFaultAddress )
            a1->SListFaultAddress = 0LL;
        }
        else
        {
          a1->SListFaultAddress = SListFaultAddress;
        }
        goto LABEL_5;
      }
    }
  }
  if ( a3 != 1 )
  {
    a1->QuantumTarget = *a2;
    SListFaultAddress = 0LL;
    goto LABEL_5;
  }
  p_WaitListHead = &a1->Header.WaitListHead;
  SListFaultAddress = a2 - 1;
  v20 = (unsigned int)(2 * (HIDWORD(a1->Header.WaitListHead.Flink) >> 5));
  if ( LODWORD(a1->Header.WaitListHead.Flink) >= (unsigned int)v20 )
  {
    if ( (unsigned int)v20 < 4 )
      v20 = 4LL;
    Pool3 = (struct _LIST_ENTRY *)ExAllocatePool3(
                                    64LL,
                                    8LL * (unsigned int)v20,
                                    1414032755LL,
                                    &stru_140E27B08.Header.WaitListHead.Blink,
                                    1);
    if ( Pool3 )
    {
      if ( (((_DWORD)v20 - 1) & (unsigned int)v20) != 0 )
      {
        v25 = -1;
        do
        {
          ++v25;
          LODWORD(v20) = (unsigned int)v20 >> 1;
        }
        while ( (_DWORD)v20 );
        v20 = (unsigned int)(1 << v25);
      }
      v26 = &a1->Header.WaitListHead;
      v27 = 0;
      if ( (unsigned int)v20 > 0x4000000 )
        v20 = 0x4000000LL;
      v28 = (unsigned int)v20;
      v37 = v20;
      if ( Pool3 > (struct _LIST_ENTRY *)((char *)Pool3 + 8 * v20) )
        v28 = 0LL;
      if ( v28 )
        memset64(Pool3, (unsigned __int64)v26 | 1, v28);
      v29 = -1LL << (BYTE4(a1->Header.WaitListHead.Flink) & 0x1F);
      if ( (HIDWORD(a1->Header.WaitListHead.Flink) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v30 = (_QWORD **)v26->Blink + v27;
          while ( 1 )
          {
            v31 = *v30;
            v36 = *v30;
            if ( ((unsigned __int8)*v30 & 1) != 0 )
              break;
            *v30 = (_QWORD *)*v31;
            v20 = v31[1] & v29;
            v32 = HIBYTE(v20)
                + 37
                * (BYTE6(v20)
                 + 37
                 * (BYTE5(v20)
                  + 37
                  * (BYTE4(v20)
                   + 37
                   * ((((_DWORD)v31[1] & (unsigned int)v29) >> 24)
                    + 37
                    * ((unsigned __int8)(((_DWORD)v31[1] & (unsigned int)v29) >> 16)
                     + 37 * (unsigned __int8)((unsigned __int16)(v31[1] & v29) >> 8))))));
            v33 = (unsigned __int8)v20;
            LODWORD(v20) = v37;
            v34 = (v37 - 1) & (unsigned int)(442596621 * v33 - 877075889 + v32);
            *v36 = *((_QWORD *)&Pool3->Flink + v34);
            *((_QWORD *)&Pool3->Flink + v34) = v36;
          }
          v26 = &a1->Header.WaitListHead;
          ++v27;
        }
        while ( v27 < HIDWORD(a1->Header.WaitListHead.Flink) >> 5 );
      }
      Blink = v26->Blink;
      v26->Blink = Pool3;
      HIDWORD(v26->Flink) = (32 * v20) | HIDWORD(v26->Flink) & 0x1F;
      if ( Blink )
        ExFreePoolWithTag(Blink, 0);
      p_WaitListHead = &a1->Header.WaitListHead;
    }
    else
    {
      p_WaitListHead = &a1->Header.WaitListHead;
      if ( HIDWORD(a1->Header.WaitListHead.Flink) < 0x20 )
      {
        SListFaultAddress = 0LL;
        goto LABEL_5;
      }
    }
  }
  Flink_high = HIDWORD(p_WaitListHead->Flink);
  v22 = *a2 & (-1LL << (Flink_high & 0x1F));
  v23 = &p_WaitListHead->Blink->Flink
      + (((Flink_high >> 5) - 1) & (442596621 * (unsigned __int8)v22
                                  + HIBYTE(v22)
                                  + 37
                                  * (BYTE6(v22)
                                   + 37
                                   * (BYTE5(v22)
                                    + 37 * (BYTE4(v22) + 37 * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * BYTE1(v22))))))
                                  - 877075889));
  *SListFaultAddress = (unsigned __int64)*v23;
  *v23 = (struct _LIST_ENTRY *)SListFaultAddress;
  ++LODWORD(p_WaitListHead->Flink);
  if ( a1->QuantumTarget == *a2 )
    a1->QuantumTarget = 0LL;
LABEL_5:
  if ( !v5 )
  {
    if ( a3 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
    }
    else if ( _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared((signed __int64 *)&a1->Header.Lock);
    }
    KeAbPostRelease((unsigned __int64)a1);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17);
  }
  return SListFaultAddress;
}
