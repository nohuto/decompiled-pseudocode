/*
 * XREFs of RIMAllocKernelMem @ 0x1401990E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall RIMAllocKernelMem(unsigned __int64 a1, unsigned int a2)
{
  return Win32AllocPoolZInitImpl(256LL, a1, a2);
}
