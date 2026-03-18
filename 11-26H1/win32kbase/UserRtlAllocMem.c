/*
 * XREFs of UserRtlAllocMem @ 0x1401C5810
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall UserRtlAllocMem(unsigned __int64 a1)
{
  return Win32AllocPoolZInitImpl(256LL, a1, 0x74727355u);
}
