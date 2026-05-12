/*
 * XREFs of ExtensionExtendedFuncPost @ 0x140074DCC
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 ExtensionExtendedFuncPost()
{
  unsigned int v0; // ecx

  v0 = -1073741822;
  if ( !DisableExtensionDriver && EnableExtensionCalls )
  {
    _InterlockedIncrement(&ExtRefCount);
    v0 = ((__int64 (__fastcall *)(int *))ExtExtendedFuncPost)(&dword_1401721E8);
    _InterlockedDecrement(&ExtRefCount);
  }
  return v0;
}
