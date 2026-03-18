/*
 * XREFs of ?EnsureStackCaptureRegisteredWithWER@@YAXXZ @ 0x1801A74F8
 * Callers:
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x1801A738C (-DoStackCapture@@YAXJIPEAX@Z.c)
 * Callees:
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x1801E0180 (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 */

void EnsureStackCaptureRegisteredWithWER(void)
{
  if ( !_InterlockedCompareExchange(&dword_1803DED80, 1, 0) )
  {
    MilWerRegisterMemoryBlock(g_StackCaptureFrames, 0x3800u);
    MilWerRegisterMemoryBlock((const void *)&g_nCurrentStackCaptureIndex, 4u);
  }
}
