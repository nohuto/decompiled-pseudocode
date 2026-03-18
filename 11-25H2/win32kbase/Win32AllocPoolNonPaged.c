/*
 * XREFs of Win32AllocPoolNonPaged @ 0x140027760
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall Win32AllocPoolNonPaged(unsigned __int64 a1, unsigned int a2)
{
  return Win32AllocPoolImpl(64LL, a1, a2);
}
