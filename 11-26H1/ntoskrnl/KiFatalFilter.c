/*
 * XREFs of KiFatalFilter @ 0x1405E50D0
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402638C0 (KeExpandKernelStackAndCalloutInternal.c)
 *     PsEnumProcessThreads @ 0x14096F1F0 (PsEnumProcessThreads.c)
 *     KiInitializeKernel @ 0x140BF6190 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiFatalFilter(ULONG a1, ULONG_PTR *a2)
{
  KeBugCheckEx(a1, *(int *)*a2, *(_QWORD *)(*a2 + 16), *a2, a2[1]);
}
