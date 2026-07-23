/*
 * XREFs of NtAlertThreadByThreadId @ 0x140A6A8B0
 * Callers:
 *     <none>
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
 *     IoThreadToProcess @ 0x140469B20 (IoThreadToProcess.c)
 *     ObDereferenceObjectExWithTag2 @ 0x1404791B8 (ObDereferenceObjectExWithTag2.c)
 *     ExUnlockHandleTableEntry @ 0x140A4DFE0 (ExUnlockHandleTableEntry.c)
 */

NTSTATUS __cdecl NtAlertThreadByThreadId(HANDLE ThreadId)
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
  NTSTATUS v15; // edi
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
  v3 = (signed __int64 *)ExLookupHandleTableEntry(PspCidTable, (__int16)ThreadId);
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
  if ( v16 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
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
      return -1073741790;
    }
  }
  return v15;
}
