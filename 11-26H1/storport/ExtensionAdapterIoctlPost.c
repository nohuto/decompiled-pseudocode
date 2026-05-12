/*
 * XREFs of ExtensionAdapterIoctlPost @ 0x14001E660
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 ExtensionAdapterIoctlPost()
{
  unsigned int v0; // ecx

  v0 = -1073741822;
  if ( !DisableExtensionDriver && EnableExtensionCalls )
  {
    _InterlockedIncrement(&ExtRefCount);
    v0 = ((__int64 (__fastcall *)(int *))ExtAdapterIoctlPost)(&dword_1401721E8);
    _InterlockedDecrement(&ExtRefCount);
  }
  return v0;
}
