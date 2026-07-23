/*
 * XREFs of NtAlertThreadByThreadIdEx @ 0x140A4E1B0
 * Callers:
 *     DifNtAlertThreadByThreadIdExWrapper @ 0x14066EB30 (DifNtAlertThreadByThreadIdExWrapper.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140278120 (ObpTraceObjectReferenceIfActive.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     KeAlertThreadByThreadIdEx @ 0x140383010 (KeAlertThreadByThreadIdEx.c)
 *     ExFastReferenceHandleTableEntry @ 0x1403ED400 (ExFastReferenceHandleTableEntry.c)
 *     PsIsProcessInSilo @ 0x1404300D0 (PsIsProcessInSilo.c)
 *     ExLookupHandleTableEntry @ 0x14043ED20 (ExLookupHandleTableEntry.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140441C9C (ExfAcquireReleasePushLockExclusive.c)
 *     ExLockHandleTableEntry @ 0x140444160 (ExLockHandleTableEntry.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1404453A0 (ExSlowReplenishHandleTableEntry.c)
 *     ExGetHandlePointer @ 0x14044EE00 (ExGetHandlePointer.c)
 *     KeAbIsValidUserModeLockAddress @ 0x14044F7A0 (KeAbIsValidUserModeLockAddress.c)
 *     IoThreadToProcess @ 0x140469B20 (IoThreadToProcess.c)
 *     ObDereferenceObjectExWithTag2 @ 0x1404791B8 (ObDereferenceObjectExWithTag2.c)
 *     ExUnlockHandleTableEntry @ 0x140A4DFE0 (ExUnlockHandleTableEntry.c)
 */

__int64 __fastcall NtAlertThreadByThreadIdEx(__int16 a1, struct _KTHREAD *a2)
{
  struct _KTHREAD *CurrentThread; // r14
  struct _KTHREAD *v4; // rdi
  signed __int64 *v5; // rax
  __int64 v6; // rdx
  void *v7; // r8
  unsigned int v8; // r9d
  signed __int64 *v9; // r15
  int v10; // eax
  ULONG_PTR HandlePointer; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  unsigned __int64 CurrentServerSilo; // rax
  int v16; // ebp
  $241382875694CED3D471BC5892DE3337 *v18; // rcx
  int v20; // ebp
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  signed __int32 v23[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v24; // [rsp+20h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v24 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v5 = (signed __int64 *)ExLookupHandleTableEntry(PspCidTable, a1);
  v9 = v5;
  if ( !v5 )
    goto LABEL_9;
  v10 = ExFastReferenceHandleTableEntry(PspCidTable, v5, (unsigned __int64 *)&v24);
  if ( v10 < 0 )
  {
    if ( v10 == -1 )
    {
      v20 = 0;
      if ( !ExLockHandleTableEntry(PspCidTable, v9) )
        goto LABEL_9;
      HandlePointer = ExGetHandlePointer(v9);
      if ( (*(_BYTE *)HandlePointer & 0x7F) == 6 )
      {
        if ( (*(_DWORD *)(HandlePointer + 1440) & 3) == 2 )
          v20 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v9);
        _m_prefetchw((const void *)(HandlePointer - 48));
        v21 = *(_QWORD *)(HandlePointer - 48);
        while ( v21 )
        {
          v22 = v21;
          v21 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(HandlePointer - 48),
                  v21 + (unsigned int)(v20 + 1),
                  v21);
          if ( v22 == v21 )
            goto LABEL_41;
        }
        *v9 &= 0xFFFFFFFFFFFE0001uLL;
      }
      HandlePointer = 0LL;
LABEL_41:
      ExUnlockHandleTableEntry(PspCidTable, v9);
    }
    else
    {
      HandlePointer = 0LL;
    }
  }
  else
  {
    HandlePointer = ExGetHandlePointer((__int64 *)&v24);
    if ( (*(_BYTE *)HandlePointer & 0x7F) != 6 )
    {
      ObDereferenceObjectExWithTag2(HandlePointer, 1, 0x746C6644u, 0);
      goto LABEL_9;
    }
  }
  if ( !HandlePointer )
  {
LABEL_9:
    v16 = -1073741813;
    goto LABEL_11;
  }
  ObpTraceObjectReferenceIfActive(HandlePointer - 48, 1, 0x746C6644u);
  if ( IoThreadToProcess((PETHREAD)HandlePointer) == PsIdleProcess )
  {
    v16 = -1073741813;
    goto LABEL_10;
  }
  if ( (*(_DWORD *)(HandlePointer + 1440) & 2) == 0 )
  {
    _InterlockedOr(v23, 0);
    if ( (*(_QWORD *)(HandlePointer + 1424) & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((struct _KTHREAD *)(HandlePointer + 1424), v12, v13, v14);
    if ( (*(_DWORD *)(HandlePointer + 1440) & 2) == 0 )
    {
      v16 = -1073741813;
LABEL_10:
      ObfDereferenceObject((PVOID)HandlePointer);
      goto LABEL_11;
    }
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( !PsIsProcessInSilo(*(struct _KPROCESS **)(HandlePointer + 544), CurrentServerSilo) )
  {
    v16 = -1073741813;
    goto LABEL_10;
  }
  v4 = (struct _KTHREAD *)HandlePointer;
  v16 = 0;
LABEL_11:
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v18 = &CurrentThread->152;
    if ( ($241382875694CED3D471BC5892DE3337 *)v18->ApcState.ApcListHead[0].Flink != v18 )
      KiCheckForKernelApcDelivery((__int64)v18, v6);
  }
  if ( v16 < 0 )
    return (unsigned int)v16;
  if ( v4->Process == CurrentThread->Process )
  {
    if ( CurrentThread == v4 || !KeAbIsValidUserModeLockAddress((__int64)a2) )
      a2 = 0LL;
    KeAlertThreadByThreadIdEx((__int64)v4, a2, v7, v8);
    ObfDereferenceObject(v4);
    return 0LL;
  }
  else
  {
    ObfDereferenceObject(v4);
    return 3221225506LL;
  }
}
