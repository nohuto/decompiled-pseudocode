/*
 * XREFs of NtSubscribeWnfStateChange @ 0x1409C45C0
 * Callers:
 *     DifNtSubscribeWnfStateChangeWrapper @ 0x140692D90 (DifNtSubscribeWnfStateChangeWrapper.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1409C46A4 (ExpWnfSubscribeWnfStateChange.c)
 */

NTSTATUS __cdecl NtSubscribeWnfStateChange(
        PCWNF_STATE_NAME StateName,
        WNF_CHANGE_STAMP ChangeStamp,
        ULONG EventMask,
        PULONG64 SubscriptionId)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx
  __int64 v9; // [rsp+48h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v9 = 0LL;
    if ( SubscriptionId )
      RtlWriteULong64ToUser(SubscriptionId, 0LL);
    v7 = ExpWnfSubscribeWnfStateChange((unsigned __int64)&v9 & -(__int64)(SubscriptionId != 0LL), 0LL, StateName);
    if ( v7 >= 0 && SubscriptionId )
      RtlWriteULong64ToUser(SubscriptionId, v9);
  }
  else
  {
    v7 = -1073741796;
  }
  KeLeaveCriticalRegion();
  return v7;
}
