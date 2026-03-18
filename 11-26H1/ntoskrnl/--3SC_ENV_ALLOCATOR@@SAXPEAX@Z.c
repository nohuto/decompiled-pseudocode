/*
 * XREFs of ??3SC_ENV_ALLOCATOR@@SAXPEAX@Z @ 0x14071AA24
 * Callers:
 *     ??_ENT_DISK@@UEAAPEAXI@Z @ 0x140790AE0 (--_ENT_DISK@@UEAAPEAXI@Z.c)
 * Callees:
 *     PspUserApcKernelRoutine @ 0x140959620 (PspUserApcKernelRoutine.c)
 */

void __fastcall SC_ENV_ALLOCATOR::operator delete(void *a1)
{
  PspUserApcKernelRoutine(a1);
}
