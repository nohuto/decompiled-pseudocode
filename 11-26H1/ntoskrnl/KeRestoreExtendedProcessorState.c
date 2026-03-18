/*
 * XREFs of KeRestoreExtendedProcessorState @ 0x1403D30F0
 * Callers:
 *     SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1405533A8 (SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater.c)
 * Callees:
 *     KeRestoreExtendedAndSupervisorState @ 0x1403D3108 (KeRestoreExtendedAndSupervisorState.c)
 */

void __stdcall KeRestoreExtendedProcessorState(PXSTATE_SAVE XStateSave)
{
  KeRestoreExtendedAndSupervisorState((ULONG_PTR)XStateSave);
}
