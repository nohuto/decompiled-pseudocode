/*
 * XREFs of Win32AllocPoolNonPagedZInit @ 0x140154680
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall Win32AllocPoolNonPagedZInit(unsigned __int64 a1, unsigned int a2)
{
  return Win32AllocPoolZInitImpl(64LL, a1, a2);
}
