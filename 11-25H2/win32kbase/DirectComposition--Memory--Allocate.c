/*
 * XREFs of DirectComposition::Memory::Allocate @ 0x14002690C
 * Callers:
 *     DCompositionNotifyPendingPresent @ 0x14004FF70 (DCompositionNotifyPendingPresent.c)
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 */

void *__fastcall DirectComposition::Memory::Allocate(unsigned __int64 a1)
{
  return Win32AllocPoolImpl(0x100uLL, a1, 0x65734344u);
}
