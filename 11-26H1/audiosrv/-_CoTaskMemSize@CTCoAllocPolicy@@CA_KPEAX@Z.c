/*
 * XREFs of ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x180013BC4
 * Callers:
 *     ?CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z @ 0x1800146A8 (-CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTCoAllocPolicy::_CoTaskMemSize(void *a1)
{
  __int64 v1; // rbx
  LPMALLOC ppMalloc; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  ppMalloc = 0LL;
  if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
  {
    v1 = ((__int64 (__fastcall *)(LPMALLOC, void *))ppMalloc->lpVtbl->GetSize)(ppMalloc, a1);
    ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
  }
  return v1;
}
