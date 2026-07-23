/*
 * XREFs of LdrLoadDll @ 0x18002DF80
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x18002FA10 (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializeKernel32Functions @ 0x18007CC48 (LdrpInitializeKernel32Functions.c)
 *     SbpResolveBasedOnName @ 0x180084D68 (SbpResolveBasedOnName.c)
 *     RtlLogMessageInEventLogger @ 0x180120700 (RtlLogMessageInEventLogger.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpReleaseDllPath @ 0x18003B980 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x18003BF80 (LdrpLoadDll.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpLogDllStateEx2 @ 0x18009AB40 (LdrpLogDllStateEx2.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __cdecl LdrLoadDll(PWSTR DllPath, PULONG DllCharacteristics, PUNICODE_STRING DllName, PVOID *DllHandle)
{
  unsigned int v4; // ebx
  signed int v8; // r9d
  ULONG v9; // ecx
  int v10; // edx
  int v11; // r8d
  int v12; // ecx
  wchar_t *Buffer; // rbp
  NTSTATUS v14; // ebx
  PVOID v15; // rcx
  __int64 v17; // rcx
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v20; // [rsp+50h] [rbp-98h]
  __int128 v21; // [rsp+60h] [rbp-88h]
  __int128 v22; // [rsp+70h] [rbp-78h]
  __int128 v23; // [rsp+80h] [rbp-68h]
  __int128 v24; // [rsp+90h] [rbp-58h]
  __int128 v25; // [rsp+A0h] [rbp-48h]
  __int128 v26; // [rsp+B0h] [rbp-38h]

  v4 = 0;
  BaseAddress[0] = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( DllCharacteristics )
  {
    v8 = *DllCharacteristics;
    v9 = 2 * (*DllCharacteristics & 4);
    v10 = v9 | 0x40;
    if ( (v8 & 2) == 0 )
      v10 = v9;
    v11 = v10 | 0x80;
    if ( (v8 & 0x800000) == 0 )
      v11 = v10;
    v12 = v11 | 0x100;
    if ( (v8 & 0x1000) == 0 )
      v12 = v11;
    v4 = v12 | 0x400000;
    if ( v8 >= 0 )
      v4 = v12;
  }
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 1345LL, "LdrLoadDll", 3LL, "DLL name: %wZ\n", DllName);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 1346LL, "LdrLoadDll", 5LL, "%wZ\n", DllName);
  if ( (LdrpPolicyBits & 4) == 0 && ((unsigned __int16)DllPath & 0x401) == 0x401LL )
    return -1073741811;
  if ( (v4 & 8) == 0 || (LdrpPolicyBits & 8) != 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x2000) != 0 )
    {
      v14 = -1073740004;
    }
    else
    {
      Buffer = DllName->Buffer;
      if ( ((unsigned __int8)DllPath & 1) != 0 || !DllPath )
      {
        *(_QWORD *)&v21 = DllName->Buffer;
        DWORD2(v20) = (unsigned int)DllPath & 0xFFFFFFFE;
      }
      else
      {
        *(_QWORD *)&v19 = DllPath;
        LdrpLogInternal(
          "minkernel\\ldr\\ldrutil.c",
          1552LL,
          "LdrpInitializeDllPath",
          2LL,
          "DLL search path passed in externally: %ws\n",
          DllPath);
        LdrpLogDllStateEx2(v17, Buffer, DllPath, 5312LL);
      }
      v14 = LdrpLoadDll(DllName, &v19, v4, BaseAddress);
      LdrpReleaseDllPath(&v19);
      if ( v14 >= 0 )
      {
        v15 = BaseAddress[0];
        *DllHandle = (PVOID)*((_QWORD *)BaseAddress[0] + 6);
        LdrpDereferenceModule(v15);
      }
    }
  }
  else
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrapi.c",
      1369LL,
      "LdrLoadDll",
      0LL,
      "Nonpackaged process attempted to load a packaged DLL.\n");
    v14 = -1073741398;
  }
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 1403LL, "LdrLoadDll", 4LL, "Status: 0x%08lx\n", v14);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 1404LL, "LdrLoadDll", 6LL, "%x\n", v14);
  return v14;
}
