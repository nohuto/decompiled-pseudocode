/*
 * XREFs of LdrFindEntryForAddress @ 0x1800C38D0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001B390 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrInitShimEngineDynamic @ 0x1800C2AE0 (LdrInitShimEngineDynamic.c)
 *     LdrpIsReparsePoint @ 0x1800C3638 (LdrpIsReparsePoint.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByAddress @ 0x1800C3930 (LdrpFindLoadedDllByAddress.c)
 */

NTSTATUS __cdecl LdrFindEntryForAddress(PVOID DllHandle, PLDR_DATA_TABLE_ENTRY *Entry)
{
  NTSTATUS result; // eax
  NTSTATUS v4; // ebx
  char *v5; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  BaseAddress = 0LL;
  if ( !DllHandle )
    return -1073741515;
  result = LdrpFindLoadedDllByAddress(DllHandle, &BaseAddress, &v6);
  v4 = result;
  if ( result >= 0 )
  {
    v5 = (char *)BaseAddress;
    *Entry = (PLDR_DATA_TABLE_ENTRY)BaseAddress;
    LdrpDereferenceModule(v5);
    return v4;
  }
  return result;
}
