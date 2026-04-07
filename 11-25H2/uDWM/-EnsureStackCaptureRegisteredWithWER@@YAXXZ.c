/*
 * XREFs of ?EnsureStackCaptureRegisteredWithWER@@YAXXZ @ 0x180082064
 * Callers:
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x180081F14 (-DoStackCapture@@YAXJIPEAX@Z.c)
 * Callees:
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x1800820A8 (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 */

void EnsureStackCaptureRegisteredWithWER(void)
{
  if ( !_InterlockedCompareExchange(&dword_180119B18, 1, 0) )
  {
    MilWerRegisterMemoryBlock(&g_StackCaptureFrames, 0x3000u);
    MilWerRegisterMemoryBlock((const void *)&g_nCurrentStackCaptureIndex, 4u);
  }
}
