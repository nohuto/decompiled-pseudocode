/*
 * XREFs of NtAlertThreadByThreadId @ 0x140A5D8F0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140278BB0 (ObpTraceObjectReferenceIfActive.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     KeAlertThreadByThreadIdEx @ 0x140381260 (KeAlertThreadByThreadIdEx.c)
 *     ExFastReferenceHandleTableEntry @ 0x1403F3A50 (ExFastReferenceHandleTableEntry.c)
 *     PsIsProcessInSilo @ 0x14043D820 (PsIsProcessInSilo.c)
 *     ExLookupHandleTableEntry @ 0x140446220 (ExLookupHandleTableEntry.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140449B6C (ExfAcquireReleasePushLockExclusive.c)
 *     ExLockHandleTableEntry @ 0x14044C040 (ExLockHandleTableEntry.c)
 *     ExSlowReplenishHandleTableEntry @ 0x14044D280 (ExSlowReplenishHandleTableEntry.c)
 *     ExGetHandlePointer @ 0x140457590 (ExGetHandlePointer.c)
 *     IoThreadToProcess @ 0x1404703A0 (IoThreadToProcess.c)
 *     ObDereferenceObjectExWithTag2 @ 0x14047F848 (ObDereferenceObjectExWithTag2.c)
 *     ExUnlockHandleTableEntry @ 0x140A33080 (ExUnlockHandleTableEntry.c)
 */

__int64 __fastcall NtAlertThreadByThreadId(__int16 a1)
{
  struct _KTHREAD *CurrentThread; // r13
  _QWORD *v2; // rsi
  signed __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // r8
  unsigned int v7; // r9d
  signed __int64 *v8; // rdi
  int v9; // eax
  ULONG_PTR HandlePointer; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  unsigned __int64 CurrentServerSilo; // rax
  int v15; // edi
  bool v16; // zf
  int v18; // r15d
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  signed __int32 v21[8]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v22[7]; // [rsp+20h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  *(_OWORD *)v22 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v3 = (signed __int64 *)ExLookupHandleTableEntry(PspCidTable, a1);
  v8 = v3;
  if ( !v3 )
    goto LABEL_9;
  v9 = ExFastReferenceHandleTableEntry(PspCidTable, v3, v22);
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
          v20 = v19;
          v19 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(HandlePointer - 48),
                  v19 + (unsigned int)(v18 + 1),
                  v19);
          if ( v20 == v19 )
            goto LABEL_35;
        }
        *v8 &= 0xFFFFFFFFFFFE0001uLL;
      }
      HandlePointer = 0LL;
LABEL_35:
      ExUnlockHandleTableEntry(PspCidTable, v8);
    }
    else
    {
      HandlePointer = 0LL;
    }
  }
  else
  {
    HandlePointer = ExGetHandlePointer((__int64 *)v22);
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
    goto LABEL_10;
  }
  ObpTraceObjectReferenceIfActive(HandlePointer - 48, 1, 0x746C6644u);
  if ( IoThreadToProcess((PETHREAD)HandlePointer) == PsIdleProcess )
    goto LABEL_21;
  if ( (*(_DWORD *)(HandlePointer + 1440) & 2) == 0 )
  {
    _InterlockedOr(v21, 0);
    if ( (*(_QWORD *)(HandlePointer + 1424) & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((struct _KTHREAD *)(HandlePointer + 1424), v11, v12, v13);
    if ( (*(_DWORD *)(HandlePointer + 1440) & 2) == 0 )
      goto LABEL_21;
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsProcessInSilo(*(struct _KPROCESS **)(HandlePointer + 544), CurrentServerSilo) )
  {
    v2 = (_QWORD *)HandlePointer;
    v15 = 0;
  }
  else
  {
LABEL_21:
    v15 = -1073741813;
    ObfDereferenceObject((PVOID)HandlePointer);
  }
LABEL_10:
  v16 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v16 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v5, v4);
  if ( v15 >= 0 )
  {
    if ( (_KPROCESS *)v2[68] == CurrentThread->Process )
    {
      KeAlertThreadByThreadIdEx((__int64)v2, 0LL, v6, v7);
      ObfDereferenceObject(v2);
      return 0;
    }
    else
    {
      ObfDereferenceObject(v2);
      return (unsigned int)-1073741790;
    }
  }
  return (unsigned int)v15;
}
