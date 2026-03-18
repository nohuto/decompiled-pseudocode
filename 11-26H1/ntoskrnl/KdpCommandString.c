/*
 * XREFs of KdpCommandString @ 0x140C15C54
 * Callers:
 *     KdpTrap @ 0x140C17A90 (KdpTrap.c)
 * Callees:
 *     KiRestoreProcessorControlState @ 0x140727140 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x140727210 (KiSaveProcessorControlState.c)
 *     KdExitDebugger @ 0x140C12008 (KdExitDebugger.c)
 *     KdpReportCommandStringStateChange @ 0x140C14890 (KdpReportCommandStringStateChange.c)
 *     KdEnterDebugger @ 0x140C17858 (KdEnterDebugger.c)
 *     KdpCopyContext @ 0x140C179C0 (KdpCopyContext.c)
 */

void __fastcall KdpCommandString(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char v9; // al
  struct _KPRCB *CurrentPrcb; // rdi
  char v11; // bp
  int v12; // edx
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rdx

  if ( !a3 && !(_BYTE)KdDebuggerNotPresent )
  {
    v9 = KdEnterDebugger(a5, a6);
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = v9;
    KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v12);
    KdpCopyContext(CurrentPrcb->Context, CurrentPrcb->ContextFlagsInit & *(_DWORD *)(a4 + 48), a4);
    KdpReportCommandStringStateChange(a1, a2, (__int64)CurrentPrcb->Context);
    v13 = *(_DWORD *)(a4 + 48);
    KdpCopyContext(a4, CurrentPrcb->ContextFlagsInit & v13, CurrentPrcb->Context);
    *(_DWORD *)(a4 + 48) = v13;
    KiRestoreProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
    LOBYTE(v14) = v11;
    KdExitDebugger(v14, v15);
  }
}
