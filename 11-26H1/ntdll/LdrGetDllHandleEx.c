/*
 * XREFs of LdrGetDllHandleEx @ 0x18003B730
 * Callers:
 *     SbpResolveBasedOnName @ 0x180084D68 (SbpResolveBasedOnName.c)
 *     CsrClientConnectToServer @ 0x1800C7C30 (CsrClientConnectToServer.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpReleaseDllPath @ 0x18003B980 (LdrpReleaseDllPath.c)
 *     LdrpFindLoadedDll @ 0x18003BC00 (LdrpFindLoadedDll.c)
 *     LdrpIncrementModuleLoadCount @ 0x18003F2D0 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpLogDllStateEx2 @ 0x18009AB40 (LdrpLogDllStateEx2.c)
 *     LdrpPinModule @ 0x1800C3C6C (LdrpPinModule.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl LdrGetDllHandleEx(
        ULONG Flags,
        PWSTR DllPath,
        PULONG DllCharacteristics,
        PUNICODE_STRING DllName,
        PVOID *DllHandle)
{
  wchar_t *Buffer; // rbp
  char v9; // si
  ULONG v10; // ebx
  int v11; // esi
  NTSTATUS LoadedDll; // edi
  PVOID *v13; // rbp
  int Count; // eax
  __int64 v16; // rcx
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v18[3]; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v19; // [rsp+58h] [rbp-90h]
  wchar_t *v20; // [rsp+60h] [rbp-88h]

  BaseAddress[0] = 0LL;
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 2312, (__int64)"LdrGetDllHandleEx", 3, "DLL name: %wZ\n", DllName);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 2313, (__int64)"LdrGetDllHandleEx", 5, "%wZ\n", DllName);
  Buffer = DllName->Buffer;
  memset_thunk_772440563353939046(v18, 0, 0x80uLL);
  if ( ((unsigned __int8)DllPath & 1) != 0 || !DllPath )
  {
    v20 = Buffer;
    v19 = (unsigned int)DllPath & 0xFFFFFFFE;
  }
  else
  {
    v18[0] = DllPath;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrutil.c",
      1552,
      (__int64)"LdrpInitializeDllPath",
      2,
      "DLL search path passed in externally: %ws\n",
      DllPath);
    LdrpLogDllStateEx2(v16, Buffer, DllPath, 5312LL);
  }
  if ( (Flags & 0xFFFFFFF8) != 0 || (v9 = Flags, v10 = Flags & 2, (v11 = v9 & 1) != 0) && v10 || !DllHandle && !v10 )
  {
    LoadedDll = -1073741811;
    goto LABEL_15;
  }
  LoadedDll = LdrpFindLoadedDll(DllName, v18, BaseAddress);
  if ( LoadedDll >= 0 )
  {
    v13 = (PVOID *)BaseAddress[0];
    if ( v10 )
    {
      Count = LdrpPinModule(BaseAddress[0]);
    }
    else
    {
      if ( v11 )
        goto LABEL_12;
      Count = LdrpIncrementModuleLoadCount(BaseAddress[0]);
    }
    LoadedDll = Count;
    if ( Count < 0 )
    {
LABEL_14:
      LdrpDereferenceModule(v13);
      goto LABEL_15;
    }
LABEL_12:
    if ( DllHandle )
      *DllHandle = v13[6];
    goto LABEL_14;
  }
LABEL_15:
  LdrpReleaseDllPath(v18);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 2361, (__int64)"LdrGetDllHandleEx", 4, "Status: 0x%08lx\n", LoadedDll);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 2362, (__int64)"LdrGetDllHandleEx", 6, "%x\n", LoadedDll);
  return LoadedDll;
}
