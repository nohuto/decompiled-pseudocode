/*
 * XREFs of DirectComposition::Memory::Allocate @ 0x1400A7A70
 * Callers:
 *     DCompositionNotifyPendingPresent @ 0x14012DDD0 (DCompositionNotifyPendingPresent.c)
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 */

void *__fastcall DirectComposition::Memory::Allocate(unsigned __int64 a1)
{
  return Win32AllocPoolImpl(0x100uLL, a1, 0x65734344u);
}
