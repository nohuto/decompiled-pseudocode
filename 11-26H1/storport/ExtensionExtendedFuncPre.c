/*
 * XREFs of ExtensionExtendedFuncPre @ 0x14005CAC0
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 ExtensionExtendedFuncPre()
{
  unsigned int v0; // ecx

  v0 = -1073741822;
  if ( !DisableExtensionDriver && EnableExtensionCalls )
  {
    _InterlockedIncrement(&ExtRefCount);
    v0 = ((__int64 (__fastcall *)(int *))ExtExtendedFuncPre)(&dword_1401721E8);
    _InterlockedDecrement(&ExtRefCount);
  }
  return v0;
}
