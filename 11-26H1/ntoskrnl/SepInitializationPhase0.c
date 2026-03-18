/*
 * XREFs of SepInitializationPhase0 @ 0x140CDD1A0
 * Callers:
 *     SeInitSystem @ 0x140CDD158 (SeInitSystem.c)
 * Callees:
 *     ObInitializeFastReference @ 0x140A2BC10 (ObInitializeFastReference.c)
 *     SepInitializeWorkList @ 0x140CDAB2C (SepInitializeWorkList.c)
 *     SepVariableInitialization @ 0x140CDADF0 (SepVariableInitialization.c)
 *     SeMakeSystemToken @ 0x140CDD7D0 (SeMakeSystemToken.c)
 *     SepTokenInitialization @ 0x140CDDD60 (SepTokenInitialization.c)
 *     SepRmDbInitialization @ 0x140CDE524 (SepRmDbInitialization.c)
 */

bool SepInitializationPhase0()
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbx
  __int64 SystemToken; // rax
  bool v3; // zf

  if ( !SepVariableInitialization()
    || !(unsigned __int8)SepRmDbInitialization()
    || !(unsigned __int8)SepTokenInitialization()
    || !SepInitializeWorkList() )
  {
    return 0;
  }
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  *($353D57E818BB6F967B4B818D974CF463 *)((char *)&CurrentThread[1].116 + 4) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFFFFFFF7);
  Process[1].ActiveProcessors = 0LL;
  SystemToken = SeMakeSystemToken();
  ObInitializeFastReference((__int64 *)&Process[1].ActiveProcessors, SystemToken);
  v3 = Process[1].ActiveProcessors == 0LL;
  RtlpBootStatHandleLock.SavedApcState.ApcListHead[1].Blink = (struct _LIST_ENTRY *)SeMediumMandatorySid;
  return !v3;
}
