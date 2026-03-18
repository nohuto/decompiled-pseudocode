/*
 * XREFs of KeRaiseUserException @ 0x140529EA0
 * Callers:
 *     ExHandleLogBadReference @ 0x14046C9F0 (ExHandleLogBadReference.c)
 *     ObpCloseHandle @ 0x1408F9C70 (ObpCloseHandle.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     ObCloseHandleTableEntry2 @ 0x1408FAF70 (ObCloseHandleTableEntry2.c)
 *     PspInsertThread @ 0x140A026D0 (PspInsertThread.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiSetupForInstrumentationReturn @ 0x140488168 (KiSetupForInstrumentationReturn.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall KeRaiseUserException(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v4; // cl
  __int64 TrapFrame; // rsi

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    v4 = KeGetCurrentIrql();
    if ( v4 != 1 )
      __writecr8(1uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v4, 1);
  }
  TrapFrame = (__int64)CurrentThread->TrapFrame;
  if ( TrapFrame )
  {
    if ( (*(_BYTE *)(TrapFrame + 368) & 1) != 0 )
    {
      RtlWriteULongToUser((char *)CurrentThread->Teb + 704, a1);
      *(_WORD *)(TrapFrame + 368) = 51;
      *(_QWORD *)(TrapFrame + 360) = stru_140FC01F0.GlobalUpdateVpThreadPriorityListEntry.Flink;
      if ( *(_BYTE *)(TrapFrame + 43) != 2 )
        KiSetupForInstrumentationReturn(TrapFrame);
    }
  }
  if ( !CurrentIrql )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0);
    __writecr8(0LL);
  }
  return a1;
}
