/*
 * XREFs of NtSetDefaultHardErrorPort @ 0x1408406A0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __fastcall NtSetDefaultHardErrorPort(HANDLE Handle)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rbx
  NTSTATUS result; // eax
  _KPROCESS *Process; // rcx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
    return -1073741727;
  if ( LODWORD(CurrentServerSiloGlobals[54].Flink) == 1 )
    return -1073741823;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 0, LpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  CurrentServerSiloGlobals[53].Blink = (struct _LIST_ENTRY *)Object;
  if ( result >= 0 )
  {
    if ( !PsIsCurrentThreadInServerSilo() )
      ExReadyForErrors = 1;
    LODWORD(CurrentServerSiloGlobals[54].Flink) = 1;
    Process = KeGetCurrentThread()->ApcState.Process;
    CurrentServerSiloGlobals[53].Flink = (struct _LIST_ENTRY *)Process;
    PsReferenceSiloContext(Process);
    return 0;
  }
  return result;
}
