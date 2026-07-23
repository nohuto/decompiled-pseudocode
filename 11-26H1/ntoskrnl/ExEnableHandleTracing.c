/*
 * XREFs of ExEnableHandleTracing @ 0x14077C508
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x14077DFB0 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     ExpUnlockHandleTableExclusive @ 0x14031722C (ExpUnlockHandleTableExclusive.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403C6CB0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C6FA0 (PsReturnProcessNonPagedPoolQuota.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     ExpLockHandleTableExclusive @ 0x14047D358 (ExpLockHandleTableExclusive.c)
 *     MmGetMaximumNonPagedPoolInBytes @ 0x1404E9610 (MmGetMaximumNonPagedPoolInBytes.c)
 *     ExDereferenceHandleDebugInfo @ 0x140A9431C (ExDereferenceHandleDebugInfo.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall ExEnableHandleTracing(__int64 a1, unsigned int a2, int a3)
{
  int v3; // r15d
  unsigned int v4; // ebx
  __int64 result; // rax
  int i; // eax
  unsigned __int64 v8; // r14
  __int64 MaximumNonPagedPoolInBytes; // rax
  __int64 v10; // rdx
  ULONG_PTR v11; // rbp
  __int64 Pool2; // rax
  __int64 v13; // rsi
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v17; // rbx

  v3 = a3;
  v4 = a2;
  if ( (a3 & 0xFFFFFFF0) != 0 )
    return 3221225485LL;
  if ( !a3 )
    v3 = ExHandleTraceDbDefaultBitMaskFlags;
  if ( a2 )
  {
    if ( a2 >= ExHandleTraceDbMinStacks )
    {
      if ( a2 > ExHandleTraceDbMaxStacks )
        v4 = ExHandleTraceDbMaxStacks;
    }
    else
    {
      v4 = ExHandleTraceDbMinStacks;
    }
    for ( i = v4 - 1; (i & v4) != 0; v4 = i + 1 )
      i = v4 | (v4 - 1);
  }
  else
  {
    v4 = ExHandleTraceDbDefaultStacks;
  }
  v8 = 160LL * v4 + 80;
  _InterlockedExchangeAdd((volatile signed __int32 *)&PspSiloMonitorLock.CycleTime, v4);
  MaximumNonPagedPoolInBytes = MmGetMaximumNonPagedPoolInBytes();
  if ( 160 * v10 > (unsigned __int64)(5 * MaximumNonPagedPoolInBytes) >> 4 )
  {
    result = 3221225626LL;
LABEL_18:
    _InterlockedAdd((volatile signed __int32 *)&PspSiloMonitorLock.CycleTime, -v4);
    return result;
  }
  v11 = *(_QWORD *)(a1 + 16);
  if ( v11 )
  {
    result = PsChargeProcessNonPagedPoolQuota(*(_QWORD *)(a1 + 16), v8);
    if ( (int)result < 0 )
      goto LABEL_18;
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  v13 = Pool2;
  if ( !Pool2 )
  {
    _InterlockedAdd((volatile signed __int32 *)&PspSiloMonitorLock.CycleTime, -v4);
    if ( v11 )
      PsReturnProcessNonPagedPoolQuota(v11, v8);
    return 3221225626LL;
  }
  *(_DWORD *)(Pool2 + 4) = v4;
  *(_DWORD *)(Pool2 + 8) = v3;
  *(_DWORD *)Pool2 = 1;
  *(_DWORD *)(Pool2 + 16) = 1;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  KeInitializeEvent((PRKEVENT)(Pool2 + 40), SynchronizationEvent, 0);
  if ( v11 )
    *(_BYTE *)(a1 + 44) |= 1u;
  CurrentThread = KeGetCurrentThread();
  ExpLockHandleTableExclusive(a1, (__int64)CurrentThread, v14, v15);
  v17 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = v13;
  if ( v17 )
  {
    if ( (*(_DWORD *)(v17 + 8) & 8) != 0 )
      goto LABEL_29;
  }
  else if ( (*(_BYTE *)(a1 + 44) & 2) != 0 )
  {
LABEL_29:
    *(_DWORD *)(v13 + 8) |= 8u;
  }
  *(_BYTE *)(a1 + 44) |= 2u;
  ExpUnlockHandleTableExclusive(a1, (__int64)CurrentThread);
  if ( v17 )
    ExDereferenceHandleDebugInfo(a1, v17);
  return 0LL;
}
