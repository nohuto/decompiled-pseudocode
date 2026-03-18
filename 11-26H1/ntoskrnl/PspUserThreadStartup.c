/*
 * XREFs of PspUserThreadStartup @ 0x1409EB210
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeUpdateTebSchedulingPropertiesCurrentThread @ 0x1402C3744 (KeUpdateTebSchedulingPropertiesCurrentThread.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     PspTerminateThreadByPointer @ 0x1409575E0 (PspTerminateThreadByPointer.c)
 *     DbgkCreateMinimalThread @ 0x1409E9C90 (DbgkCreateMinimalThread.c)
 *     PsGetSessionLocaleId @ 0x1409EABFC (PsGetSessionLocaleId.c)
 *     PspNotifyThreadCreation @ 0x1409EAC38 (PspNotifyThreadCreation.c)
 *     PspDisablePrimaryTokenExchange @ 0x1409EB314 (PspDisablePrimaryTokenExchange.c)
 *     PspInitializeThunkContext @ 0x1409EB378 (PspInitializeThunkContext.c)
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
