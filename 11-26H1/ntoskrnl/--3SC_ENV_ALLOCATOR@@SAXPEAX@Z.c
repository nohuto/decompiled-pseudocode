/*
 * XREFs of ??3SC_ENV_ALLOCATOR@@SAXPEAX@Z @ 0x14071F6B4
 * Callers:
 *     ??_ENT_DISK@@UEAAPEAXI@Z @ 0x140793610 (--_ENT_DISK@@UEAAPEAXI@Z.c)
 * Callees:
 *     PspUserApcKernelRoutine @ 0x1409FEEE0 (PspUserApcKernelRoutine.c)
 */

void __fastcall SC_ENV_ALLOCATOR::operator delete(void *a1)
{
  PspUserApcKernelRoutine(a1);
}
