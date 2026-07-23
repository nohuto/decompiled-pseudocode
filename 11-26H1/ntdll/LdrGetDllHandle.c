/*
 * XREFs of LdrGetDllHandle @ 0x18003B540
 * Callers:
 *     <none>
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpReleaseDllPath @ 0x18003B980 (LdrpReleaseDllPath.c)
 *     LdrpFindLoadedDll @ 0x18003BC00 (LdrpFindLoadedDll.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpLogDllStateEx2 @ 0x18009AB40 (LdrpLogDllStateEx2.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl LdrGetDllHandle(PWSTR DllPath, PULONG DllCharacteristics, PUNICODE_STRING DllName, PVOID *DllHandle)
{
  wchar_t *Buffer; // rbp
  NTSTATUS LoadedDll; // ebx
  PVOID v10; // rcx
  __int64 v11; // rcx
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v14; // [rsp+58h] [rbp-90h]
  wchar_t *v15; // [rsp+60h] [rbp-88h]

  BaseAddress[0] = 0LL;
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 2312, (__int64)"LdrGetDllHandleEx", 3, "DLL name: %wZ\n", DllName);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 2313, (__int64)"LdrGetDllHandleEx", 5, "%wZ\n", DllName);
  Buffer = DllName->Buffer;
  memset_thunk_772440563353939046(v13, 0, 0x80uLL);
  if ( ((unsigned __int8)DllPath & 1) != 0 || !DllPath )
  {
    v15 = Buffer;
    v14 = (unsigned int)DllPath & 0xFFFFFFFE;
  }
  else
  {
    v13[0] = DllPath;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrutil.c",
      1552,
      (__int64)"LdrpInitializeDllPath",
      2,
      "DLL search path passed in externally: %ws\n",
      DllPath);
    LdrpLogDllStateEx2(v11, Buffer, DllPath, 5312LL);
  }
  if ( DllHandle )
  {
    LoadedDll = LdrpFindLoadedDll(DllName, v13, BaseAddress);
    if ( LoadedDll >= 0 )
    {
      v10 = BaseAddress[0];
      *DllHandle = (PVOID)*((_QWORD *)BaseAddress[0] + 6);
      LdrpDereferenceModule(v10);
    }
  }
  else
  {
    LoadedDll = -1073741811;
  }
  LdrpReleaseDllPath(v13);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 2361, (__int64)"LdrGetDllHandleEx", 4, "Status: 0x%08lx\n", LoadedDll);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 2362, (__int64)"LdrGetDllHandleEx", 6, "%x\n", LoadedDll);
  return LoadedDll;
}
