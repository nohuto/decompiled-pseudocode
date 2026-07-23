/*
 * XREFs of PspUserThreadStartup @ 0x1409E79E0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeUpdateTebSchedulingPropertiesCurrentThread @ 0x14030E404 (KeUpdateTebSchedulingPropertiesCurrentThread.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     PspTerminateThreadByPointer @ 0x14094B010 (PspTerminateThreadByPointer.c)
 *     DbgkCreateMinimalThread @ 0x1409E6974 (DbgkCreateMinimalThread.c)
 *     PsGetSessionLocaleId @ 0x1409E73CC (PsGetSessionLocaleId.c)
 *     PspNotifyThreadCreation @ 0x1409E7408 (PspNotifyThreadCreation.c)
 *     PspDisablePrimaryTokenExchange @ 0x1409E7AE4 (PspDisablePrimaryTokenExchange.c)
 *     PspInitializeThunkContext @ 0x1409E7B48 (PspInitializeThunkContext.c)
 */

NTSTATUS PspUserThreadStartup()
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS *v1; // rsi
  int SessionLocaleId; // eax
  __int64 v3; // rdx
  NTSTATUS result; // eax

  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0);
  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  PspDisablePrimaryTokenExchange(CurrentThread);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) == 0 )
    PspTerminateThreadByPointer((__int64)CurrentThread, 0xC000004B, 1);
  v1 = (NTSTATUS *)&CurrentThread->ApcState.Process[3].ActiveGroupsMask.Masks[1] + 1;
  if ( (*v1 & 1) != 0 )
  {
    DbgkCreateMinimalThread((__int64)CurrentThread);
  }
  else
  {
    SessionLocaleId = PsGetSessionLocaleId();
    RtlWriteULongToUser((_DWORD *)(v3 + 264), SessionLocaleId);
    KeUpdateTebSchedulingPropertiesCurrentThread();
    PspNotifyThreadCreation((__int64)CurrentThread);
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
    return KeWaitForSingleObject(CurrentThread, UserRequest, 1, 0, 0LL);
  result = *v1;
  if ( (*v1 & 1) == 0 )
    return PspInitializeThunkContext();
  return result;
}
