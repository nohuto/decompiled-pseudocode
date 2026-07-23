/*
 * XREFs of EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140A3230C
 * Callers:
 *     EtwpCovSampContextAddSamples @ 0x140A31980 (EtwpCovSampContextAddSamples.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     EtwpCoverageSamplerFreeTable @ 0x140A322CC (EtwpCoverageSamplerFreeTable.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x140A3295C (EtwpCoverageSamplerAllocateTable.c)
 *     EtwpCovSampHashLookupInTable @ 0x140A68690 (EtwpCovSampHashLookupInTable.c)
 */

__int64 __fastcall EtwpCovSampHashMakeRoomAndAcquireLock(
        struct _KTHREAD *a1,
        int a2,
        struct _LIST_ENTRY **a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Table; // rdi
  AutoBoost *v9; // rax
  void *v10; // rdx
  struct _KLOCK_ENTRIES *v11; // r9
  AutoBoost *v12; // rsi
  unsigned int v13; // r15d
  _DWORD *Object; // rcx
  int v15; // edx
  unsigned int QuantumTarget_high; // ecx
  unsigned int v17; // edx
  unsigned int InitialStack; // ebp
  struct _KTHREAD *v20; // rax
  AutoBoost *v21; // rax
  void *v22; // rdx
  AutoBoost *v23; // rsi
  struct _LIST_ENTRY *v24; // rsi
  unsigned int Flink_high; // r8d
  unsigned int v26; // eax
  struct _LIST_ENTRY *v27; // rcx
  struct _LIST_ENTRY *Flink; // rcx
  PVOID *p_Flink; // rax
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v31; // rax
  __int64 v32; // rbp
  struct _LIST_ENTRY *v33; // rax
  struct _LIST_ENTRY **v34; // r14
  struct _KTHREAD *v36; // rax
  AutoBoost *v37; // rax
  void *v38; // rdx
  AutoBoost *v39; // rdi
  struct _LIST_ENTRY **v40; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v40 = 0LL;
  --CurrentThread->KernelApcDisable;
  Table = 0LL;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  v12 = v9;
  if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v9, (__int64)a1);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v10);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  v13 = 0;
  a1->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  while ( 1 )
  {
    Object = a1[1].WaitBlock[2].Object;
    v15 = Object[4];
    QuantumTarget_high = Object[5];
    v17 = a2 + v15;
    if ( v17 < (7 * QuantumTarget_high) >> 3 )
    {
LABEL_8:
      if ( !Table )
        goto LABEL_9;
      goto LABEL_43;
    }
    InitialStack = (unsigned int)a1->InitialStack;
    if ( QuantumTarget_high < InitialStack )
    {
      if ( !QuantumTarget_high )
      {
        QuantumTarget_high = HIDWORD(a1->QuantumTarget);
        goto LABEL_47;
      }
      do
      {
        QuantumTarget_high *= 2;
LABEL_47:
        ;
      }
      while ( (7 * QuantumTarget_high) >> 3 < v17 );
      if ( QuantumTarget_high >= InitialStack )
        QuantumTarget_high = (unsigned int)a1->InitialStack;
      InitialStack = QuantumTarget_high;
    }
    else if ( *(_DWORD *)&a1[1].WaitBlockFill11[160] >= HIDWORD(a1->InitialStack) )
    {
      goto LABEL_8;
    }
    a1->Header.WaitListHead.Flink = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
    KeAbPostRelease((unsigned __int64)a1);
    KeLeaveCriticalRegion();
    if ( Table )
      EtwpCoverageSamplerFreeTable(Table);
    Table = (struct _LIST_ENTRY *)EtwpCoverageSamplerAllocateTable(InitialStack);
    if ( !Table )
      goto LABEL_9;
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    v21 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, v11);
    v23 = v21;
    if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v21, (__int64)a1);
    if ( v23 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v23, v22);
      else
        *((_BYTE *)v23 + 10) = 1;
    }
    a1->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
    v24 = (struct _LIST_ENTRY *)a1[1].WaitBlock[2].Object;
    Flink_high = HIDWORD(v24[1].Flink);
    if ( a2 + LODWORD(v24[1].Flink) < (7 * Flink_high) >> 3 )
      goto LABEL_43;
    if ( Flink_high >= InitialStack )
      break;
    a1[1].WaitBlock[2].Object = Table;
    Table = v24;
    Flink = v24->Flink;
    if ( v24->Flink->Blink != v24 )
      goto LABEL_28;
    p_Flink = (PVOID *)&v24->Blink->Flink;
    if ( *p_Flink != v24 )
      goto LABEL_28;
    *p_Flink = Flink;
    Flink->Blink = (struct _LIST_ENTRY *)p_Flink;
    Blink = a1[1].WaitBlock[3].WaitListEntry.Blink;
    v31 = (struct _LIST_ENTRY *)a1[1].WaitBlock[2].Object;
    if ( (unsigned __int8 *)Blink->Flink != &a1[1].WaitBlockFill11[144] )
      goto LABEL_28;
    v31->Flink = &a1[1].WaitBlock[3].WaitListEntry;
    v32 = 0LL;
    v31->Blink = Blink;
    Blink->Flink = v31;
    a1[1].WaitBlock[3].WaitListEntry.Blink = v31;
    for ( *((_DWORD *)a1[1].WaitBlock[2].Object + 4) = v24[1].Flink;
          (unsigned int)v32 < HIDWORD(v24[1].Flink);
          v32 = (unsigned int)(v32 + 1) )
    {
      v33 = v24[1].Blink;
      v34 = &v33->Flink + v32;
      if ( *v34 )
      {
        EtwpCovSampHashLookupInTable(a1[1].WaitBlock[2].Object, (char *)v33 + 8 * v32, &v40);
        *v40 = *v34;
        if ( LODWORD(v24[1].Flink)-- == 1 )
          break;
      }
    }
    if ( v13 >= 0x14 )
      goto LABEL_8;
    ++v13;
  }
  v26 = *(_DWORD *)&a1[1].WaitBlockFill11[160];
  if ( v26 >= HIDWORD(a1->InitialStack) )
  {
LABEL_43:
    *a3 = Table;
    goto LABEL_9;
  }
  a1[1].WaitBlock[2].Object = Table;
  *(_DWORD *)&a1[1].WaitBlockFill11[160] = v26 + 1;
  v27 = a1[1].WaitBlock[3].WaitListEntry.Blink;
  if ( (unsigned __int8 *)v27->Flink != &a1[1].WaitBlockFill11[144] )
LABEL_28:
    __fastfail(3u);
  Table->Flink = &a1[1].WaitBlock[3].WaitListEntry;
  Table->Blink = v27;
  v27->Flink = Table;
  a1[1].WaitBlock[3].WaitListEntry.Blink = Table;
  if ( *(_DWORD *)&a1[1].WaitBlockFill11[160] == 2 )
    KeSetEvent((PRKEVENT)a1[1].WaitBlock[2].SparePtr, 0, 0);
LABEL_9:
  if ( (struct _KTHREAD *)a1->Header.WaitListHead.Flink != KeGetCurrentThread() )
  {
    v36 = KeGetCurrentThread();
    --v36->KernelApcDisable;
    v37 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, v11);
    v39 = v37;
    if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v37, (__int64)a1);
    if ( v39 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v39, v38);
      else
        *((_BYTE *)v39 + 10) = 1;
    }
    a1->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  }
  return *((_DWORD *)a1[1].WaitBlock[2].Object + 4) < (unsigned int)(7 * *((_DWORD *)a1[1].WaitBlock[2].Object + 5)) >> 3
       ? ((unsigned int)(7 * *((_DWORD *)a1[1].WaitBlock[2].Object + 5)) >> 3)
       - *((_DWORD *)a1[1].WaitBlock[2].Object + 4)
       : 0;
}
