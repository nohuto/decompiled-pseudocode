/*
 * XREFs of KdpSymbol @ 0x140C1C018
 * Callers:
 *     KdpTrap @ 0x140C1DA90 (KdpTrap.c)
 * Callees:
 *     KiRestoreProcessorControlState @ 0x14072BD10 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x14072BDE0 (KiSaveProcessorControlState.c)
 *     KdExitDebugger @ 0x140C18008 (KdExitDebugger.c)
 *     KdpReportLoadSymbolsStateChange @ 0x140C1AA2C (KdpReportLoadSymbolsStateChange.c)
 *     KdEnterDebugger @ 0x140C1D858 (KdEnterDebugger.c)
 *     KdpCopyContext @ 0x140C1D9C0 (KdpCopyContext.c)
 */

void __fastcall KdpSymbol(unsigned __int16 *a1, __int64 *a2, char a3, char a4, __int64 a5, __int64 a6, __int64 a7)
{
  char v10; // al
  struct _KPRCB *CurrentPrcb; // rsi
  char v12; // r14
  int v13; // edx
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rdx

  if ( !a4 && !(_BYTE)KdDebuggerNotPresent )
  {
    v10 = KdEnterDebugger(a6, a7);
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = v10;
    KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v13);
    KdpCopyContext(CurrentPrcb->Context, CurrentPrcb->ContextFlagsInit & *(_DWORD *)(a5 + 48), a5);
    KdpReportLoadSymbolsStateChange(a1, a2, a3, (__int64)CurrentPrcb->Context);
    v14 = *(_DWORD *)(a5 + 48);
    KdpCopyContext(a5, CurrentPrcb->ContextFlagsInit & v14, CurrentPrcb->Context);
    *(_DWORD *)(a5 + 48) = v14;
    KiRestoreProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
    LOBYTE(v15) = v12;
    KdExitDebugger(v15, v16);
  }
}
