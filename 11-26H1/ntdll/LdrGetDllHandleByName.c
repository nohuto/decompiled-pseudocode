/*
 * XREFs of LdrGetDllHandleByName @ 0x18007BCD0
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x18007A190 (LdrpSnapKernelBaseExtensions.c)
 * Callees:
 *     LdrpFindLoadedDllByName @ 0x18003D4C0 (LdrpFindLoadedDllByName.c)
 *     LdrpIncrementModuleLoadCount @ 0x18003F2D0 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpFatalExceptionFilter @ 0x18015B5A0 (LdrpFatalExceptionFilter.c)
 */

NTSTATUS __cdecl LdrGetDllHandleByName(PUNICODE_STRING BaseDllName, PUNICODE_STRING FullDllName, PVOID *DllHandle)
{
  _QWORD *v4; // rdx
  NTSTATUS LoadedDllByName; // ebx
  PVOID v6; // rdi
  PVOID BaseAddress[2]; // [rsp+38h] [rbp-10h] BYREF
  int v9; // [rsp+68h] [rbp+20h] BYREF

  BaseAddress[0] = 0LL;
  v9 = 0;
  LoadedDllByName = LdrpFindLoadedDllByName(BaseDllName, FullDllName, 0LL, (__int64)BaseAddress, &v9);
  if ( LoadedDllByName >= 0 )
  {
    if ( v9 < 7 )
    {
      LoadedDllByName = -1073741515;
      v6 = BaseAddress[0];
    }
    else
    {
      v6 = BaseAddress[0];
      LoadedDllByName = LdrpIncrementModuleLoadCount((__int64)BaseAddress[0], v4);
      if ( LoadedDllByName >= 0 )
        *DllHandle = (PVOID)*((_QWORD *)v6 + 6);
    }
    LdrpDereferenceModule((char *)v6);
  }
  return LoadedDllByName;
}
