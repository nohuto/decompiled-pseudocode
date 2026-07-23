/*
 * XREFs of LdrDisableThreadCalloutsForDll @ 0x1800DDF20
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 */

NTSTATUS __cdecl LdrDisableThreadCalloutsForDll(PVOID DllImageBase)
{
  char *v1; // r9
  NTSTATUS LoadedDllByHandle; // ebx
  char *v3; // rcx
  int v5; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  LoadedDllByHandle = 0;
  BaseAddress = 0LL;
  if ( !byte_1801CA908 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(DllImageBase, (__int64 *)&BaseAddress, &v5, v1);
    if ( LoadedDllByHandle >= 0 )
    {
      v3 = (char *)BaseAddress;
      if ( !*((_WORD *)BaseAddress + 55) )
        *((_BYTE *)BaseAddress + 106) |= 4u;
      LdrpDereferenceModule(v3);
    }
  }
  return LoadedDllByHandle;
}
