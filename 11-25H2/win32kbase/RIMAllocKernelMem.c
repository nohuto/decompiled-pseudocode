/*
 * XREFs of RIMAllocKernelMem @ 0x14015FB20
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall RIMAllocKernelMem(unsigned __int64 a1, unsigned int a2)
{
  return Win32AllocPoolZInitImpl(256LL, a1, a2);
}
