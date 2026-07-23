/*
 * XREFs of LdrAddRefDll @ 0x1800C3BF0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpIncrementModuleLoadCount @ 0x18003F2D0 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpPinModule @ 0x1800C3C6C (LdrpPinModule.c)
 */

NTSTATUS __cdecl LdrAddRefDll(ULONG Flags, PVOID DllHandle)
{
  char *v2; // r9
  char v3; // bl
  NTSTATUS result; // eax
  _QWORD *v5; // rdx
  bool v6; // zf
  char *v7; // rbx
  NTSTATUS Count; // eax
  NTSTATUS v9; // edi
  int v10; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  BaseAddress = 0LL;
  v3 = Flags;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  result = LdrpFindLoadedDllByHandle(DllHandle, (__int64 *)&BaseAddress, &v10, v2);
  if ( result >= 0 )
  {
    v6 = (v3 & 1) == 0;
    v7 = (char *)BaseAddress;
    if ( v6 )
      Count = LdrpIncrementModuleLoadCount((__int64)BaseAddress, v5);
    else
      Count = LdrpPinModule(BaseAddress);
    v9 = Count;
    LdrpDereferenceModule(v7);
    return v9;
  }
  return result;
}
