/*
 * XREFs of SepInitializationPhase0 @ 0x140CE3538
 * Callers:
 *     SeInitSystem @ 0x140CE34F0 (SeInitSystem.c)
 * Callees:
 *     ObInitializeFastReference @ 0x140A7BD9C (ObInitializeFastReference.c)
 *     SepInitializeWorkList @ 0x140CE0EAC (SepInitializeWorkList.c)
 *     SepVariableInitialization @ 0x140CE1170 (SepVariableInitialization.c)
 *     SeMakeSystemToken @ 0x140CE3B68 (SeMakeSystemToken.c)
 *     SepTokenInitialization @ 0x140CE40F8 (SepTokenInitialization.c)
 *     SepRmDbInitialization @ 0x140CE48BC (SepRmDbInitialization.c)
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
  *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&CurrentThread[1].116 + 4) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFFFFFFF7);
  Process[1].ActiveProcessors = 0LL;
  SystemToken = SeMakeSystemToken();
  ObInitializeFastReference((__int64 *)&Process[1].ActiveProcessors, SystemToken);
  v3 = Process[1].ActiveProcessors == 0LL;
  *(_QWORD *)&RtlpBootStatHandleLock.SavedApcStateFill[40] = SeMediumMandatorySid;
  return !v3;
}
