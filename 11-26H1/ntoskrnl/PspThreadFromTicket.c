/*
 * XREFs of PspThreadFromTicket @ 0x140A227F0
 * Callers:
 *     ?PspQueryWobTicketPriority@@YAJPEAXDKPEAK@Z @ 0x140805170 (-PspQueryWobTicketPriority@@YAJPEAXDKPEAK@Z.c)
 *     ?PspQueryWobTicketQos@@YAJPEAXDKPEAK@Z @ 0x14080525C (-PspQueryWobTicketQos@@YAJPEAXDKPEAK@Z.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140278120 (ObpTraceObjectReferenceIfActive.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExFastReferenceHandleTableEntry @ 0x1403ED400 (ExFastReferenceHandleTableEntry.c)
 *     PsIsProcessInSilo @ 0x1404300D0 (PsIsProcessInSilo.c)
 *     ExLookupHandleTableEntry @ 0x14043ED20 (ExLookupHandleTableEntry.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140441C9C (ExfAcquireReleasePushLockExclusive.c)
 *     ExLockHandleTableEntry @ 0x140444160 (ExLockHandleTableEntry.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1404453A0 (ExSlowReplenishHandleTableEntry.c)
 *     ExGetHandlePointer @ 0x14044EE00 (ExGetHandlePointer.c)
 *     IoThreadToProcess @ 0x140469B20 (IoThreadToProcess.c)
 *     ObDereferenceObjectExWithTag2 @ 0x1404791B8 (ObDereferenceObjectExWithTag2.c)
 *     ExUnlockHandleTableEntry @ 0x140A4DFE0 (ExUnlockHandleTableEntry.c)
 */

__int64 __fastcall PspThreadFromTicket(_QWORD *a1, _QWORD *a2)
{
  _DWORD *v3; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  signed __int64 *v8; // rsi
  int v9; // eax
  ULONG_PTR HandlePointer; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  unsigned __int64 CurrentServerSilo; // rax
  int v15; // esi
  bool v16; // zf
  int v18; // r15d
  signed __int64 v19; // rdx
  signed __int64 v20; // rax
  signed __int32 v21[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v22; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+70h] [rbp+18h]

  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v23 = (__int64)PspSiloMonitorLock.SavedApcState.ApcListHead[1].Blink ^ *a1;
  --CurrentThread->SpecialApcDisable;
  v22 = 0LL;
  v5 = (signed __int64 *)ExLookupHandleTableEntry(PspCidTable, v23);
  v8 = v5;
  if ( !v5 )
    goto LABEL_9;
  v9 = ExFastReferenceHandleTableEntry(PspCidTable, v5, (unsigned __int64 *)&v22);
  if ( v9 < 0 )
  {
    if ( v9 == -1 )
    {
      v18 = 0;
      if ( !ExLockHandleTableEntry(PspCidTable, v8) )
        goto LABEL_9;
      HandlePointer = ExGetHandlePointer(v8);
      if ( (*(_BYTE *)HandlePointer & 0x7F) == 6 )
      {
        if ( (*(_DWORD *)(HandlePointer + 1440) & 3) == 2 )
          v18 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v8);
        _m_prefetchw((const void *)(HandlePointer - 48));
        v19 = *(_QWORD *)(HandlePointer - 48);
        while ( v19 )
        {
          v20 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(HandlePointer - 48),
                  v19 + (unsigned int)(v18 + 1),
                  v19);
          v16 = v19 == v20;
          v19 = v20;
          if ( v16 )
            goto LABEL_41;
        }
        *v8 &= 0xFFFFFFFFFFFE0001uLL;
      }
      HandlePointer = 0LL;
LABEL_41:
      ExUnlockHandleTableEntry(PspCidTable, v8);
    }
    else
    {
      HandlePointer = 0LL;
    }
  }
  else
  {
    HandlePointer = ExGetHandlePointer((__int64 *)&v22);
    if ( (*(_BYTE *)HandlePointer & 0x7F) != 6 )
    {
      ObDereferenceObjectExWithTag2(HandlePointer, 1, 0x746C6644u, 0);
      goto LABEL_9;
    }
  }
  if ( !HandlePointer )
  {
LABEL_9:
    v15 = -1073741813;
    goto LABEL_11;
  }
  ObpTraceObjectReferenceIfActive(HandlePointer - 48, 1, 0x746C6644u);
  if ( IoThreadToProcess((PETHREAD)HandlePointer) == PsIdleProcess )
  {
    v15 = -1073741813;
    goto LABEL_10;
  }
  if ( (*(_DWORD *)(HandlePointer + 1440) & 2) == 0 )
  {
    _InterlockedOr(v21, 0);
    if ( (*(_QWORD *)(HandlePointer + 1424) & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((struct _KTHREAD *)(HandlePointer + 1424), v11, v12, v13);
    if ( (*(_DWORD *)(HandlePointer + 1440) & 2) == 0 )
    {
      v15 = -1073741813;
LABEL_10:
      ObfDereferenceObject((PVOID)HandlePointer);
      goto LABEL_11;
    }
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( !PsIsProcessInSilo(*(struct _KPROCESS **)(HandlePointer + 544), CurrentServerSilo) )
  {
    v15 = -1073741813;
    goto LABEL_10;
  }
  v3 = (_DWORD *)HandlePointer;
  v15 = 0;
LABEL_11:
  v16 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v16 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v7, v6);
  if ( v15 >= 0 )
  {
    if ( (v3[360] & 1) == 0 && v3[304] == HIDWORD(v23) )
    {
      *a2 = v3;
      return 0LL;
    }
    v15 = -1073741275;
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v15;
}
