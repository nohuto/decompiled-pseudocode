/*
 * XREFs of Win32AllocPoolNonPagedZInit @ 0x140113150
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall Win32AllocPoolNonPagedZInit(unsigned __int64 a1, unsigned int a2)
{
  return Win32AllocPoolZInitImpl(64LL, a1, a2);
}
