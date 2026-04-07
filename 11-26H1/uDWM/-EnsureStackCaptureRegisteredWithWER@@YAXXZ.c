/*
 * XREFs of ?EnsureStackCaptureRegisteredWithWER@@YAXXZ @ 0x180073714
 * Callers:
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x1800735C4 (-DoStackCapture@@YAXJIPEAX@Z.c)
 * Callees:
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x180073758 (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 */

void EnsureStackCaptureRegisteredWithWER(void)
{
  if ( !_InterlockedCompareExchange(&dword_180115AE4, 1, 0) )
  {
    MilWerRegisterMemoryBlock(g_StackCaptureFrames, 0x3000u);
    MilWerRegisterMemoryBlock((const void *)&g_nCurrentStackCaptureIndex, 4u);
  }
}
