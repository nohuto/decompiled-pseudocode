/*
 * XREFs of LdrSetImplicitPathOptions @ 0x18015BAA0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl LdrSetImplicitPathOptions(ULONG ImplicitPathOptions)
{
  int v1; // edx
  char *v2; // r9
  int v3; // ebx
  NTSTATUS LoadedDllByHandle; // edi
  char *v5; // rcx
  int v7; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  v3 = v1;
  BaseAddress = 0LL;
  if ( (~((LdrpPolicyBits & 4 | 0x7B) << 8) & v1) != 0 || !v1 )
    return -1073741811;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(*(PVOID *)&ImplicitPathOptions, (__int64 *)&BaseAddress, &v7, v2);
  if ( LoadedDllByHandle >= 0 )
  {
    v5 = (char *)BaseAddress;
    *((_DWORD *)BaseAddress + 68) = v3;
    LdrpDereferenceModule(v5);
  }
  return LoadedDllByHandle;
}
