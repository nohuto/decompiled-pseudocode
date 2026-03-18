/*
 * XREFs of IopDisassociateThreadIrp @ 0x14051FFD0
 * Callers:
 *     IoCancelThreadIo @ 0x140955C20 (IoCancelThreadIo.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     IoAllocateErrorLogEntry @ 0x1404DC010 (IoAllocateErrorLogEntry.c)
 *     IoWriteErrorLogEntry @ 0x1404E5DA0 (IoWriteErrorLogEntry.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

LONG_PTR __fastcall IopDisassociateThreadIrp(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  char *p_SystemCallNumber; // rsi
  KIRQL v3; // al
  __int64 v4; // rdi
  KIRQL v5; // bp
  LONG_PTR result; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  void *v12; // rdi
  _DWORD *ErrorLogEntry; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1 )
    __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 1LL);
  }
  p_SystemCallNumber = (char *)&KeGetCurrentThread()[1].SystemCallNumber;
  if ( *(char **)p_SystemCallNumber == p_SystemCallNumber )
    goto LABEL_8;
  v3 = KeAcquireQueuedSpinLock(0xBuLL);
  v4 = *(_QWORD *)p_SystemCallNumber;
  v5 = v3;
  if ( *(char *)(*(_QWORD *)p_SystemCallNumber + 35LL) == *(char *)(*(_QWORD *)p_SystemCallNumber + 34LL) + 2 )
  {
    KeReleaseQueuedSpinLock(0xBuLL, v3);
LABEL_8:
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    return result;
  }
  ObfReferenceObjectWithTag(*(PVOID *)(v4 + 120), 0x746C6644u);
  v7 = *(_QWORD **)p_SystemCallNumber;
  if ( *(char **)(*(_QWORD *)p_SystemCallNumber + 8LL) != p_SystemCallNumber
    || (v8 = *v7, *(_QWORD **)(*v7 + 8LL) != v7)
    || (*(_QWORD *)p_SystemCallNumber = v8,
        *(_QWORD *)(v8 + 8) = p_SystemCallNumber,
        *(_QWORD *)(v4 + 8) = v4,
        *(_QWORD *)v4 = v4,
        v9 = (_QWORD *)qword_140F853E8,
        *(__int64 **)qword_140F853E8 != &qword_140F853E0) )
  {
    __fastfail(3u);
  }
  *v7 = &qword_140F853E0;
  v7[1] = v9;
  *v9 = v7;
  qword_140F853E8 = (__int64)v7;
  if ( *(_BYTE *)(v4 + 35) <= *(_BYTE *)(v4 + 34)
    && (v10 = *(_QWORD *)(v4 + 160)) != 0
    && (v11 = *(_QWORD *)(v4 + 152), v12 = *(void **)(v11 + 40), *(void **)(v10 + 8) == v12) )
  {
    ObfReferenceObjectWithTag(*(PVOID *)(v11 + 40), 0x746C6644u);
  }
  else
  {
    v12 = 0LL;
  }
  KeReleaseQueuedSpinLock(0xBuLL, v5);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v12 )
  {
    ErrorLogEntry = IoAllocateErrorLogEntry(v12, 0x30u);
    if ( ErrorLogEntry )
    {
      ErrorLogEntry[3] = -2147221450;
      IoWriteErrorLogEntry(ErrorLogEntry);
    }
    return ObfDereferenceObjectWithTag(v12, 0x746C6644u);
  }
  return result;
}
