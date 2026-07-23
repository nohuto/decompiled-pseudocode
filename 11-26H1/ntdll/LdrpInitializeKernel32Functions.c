/*
 * XREFs of LdrpInitializeKernel32Functions @ 0x18007CC48
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrLoadDll @ 0x18002DF80 (LdrLoadDll.c)
 *     LdrpCodeAuthzInitialize @ 0x18002FA10 (LdrpCodeAuthzInitialize.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x18003C510 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18007A190 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpFindLoadedDllInternal @ 0x18007CA10 (LdrpFindLoadedDllInternal.c)
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpInitializeKernel32Functions(PVOID *ProcedureAddress)
{
  NTSTATUS v2; // eax
  unsigned int v3; // ebx
  PVOID v4; // rdi
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  NTSTATUS ProcedureAddressForCaller; // eax
  int v8; // eax
  PVOID *Callback; // [rsp+28h] [rbp-D8h]
  PVOID *Callbacka; // [rsp+28h] [rbp-D8h]
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  PVOID DllHandle; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B0h] BYREF
  PVOID ProcedureAddressa; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING v16; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v17; // [rsp+70h] [rbp-90h] BYREF
  PVOID *retaddr; // [rsp+1A8h] [rbp+A8h]

  ProcedureAddressa = 0LL;
  v14 = 0LL;
  DllHandle = 0LL;
  memset_thunk_772440563353939046(&v16, 0, 0x110uLL);
  LODWORD(v12) = 0;
  v16.Buffer = (wchar_t *)&v17;
  *ProcedureAddress = 0LL;
  *(_DWORD *)&v16.Length = 0x1000000;
  v17 = 0;
  LdrpAppendUnicodeStringToFilenameBuffer(&v16.Length, &LdrpKernel32DllName.Length);
  if ( (int)LdrpFindLoadedDllInternal(&v16, 0, &v14, &v12, 0x20u) >= 0 )
  {
    v4 = *(PVOID *)(v14 + 48);
    DllHandle = v4;
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x20000000) == 0 )
      goto LABEL_6;
LABEL_8:
    v6 = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&LdrpKernelbaseDllName, &DllHandle);
    v3 = v6;
    if ( v6 < 0 )
    {
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        2250,
        (__int64)"LdrpInitializeKernel32Functions",
        0,
        "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
        &LdrpKernelbaseDllName,
        v6);
    }
    else
    {
      v3 = LdrpCodeAuthzInitialize();
      if ( (int)(v3 + 0x80000000) < 0 || v3 == -1073741515 )
      {
        ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                      DllHandle,
                                      (PANSI_STRING)&stru_1801708B0,
                                      0,
                                      &ProcedureAddressa,
                                      0,
                                      retaddr);
        v3 = ProcedureAddressForCaller;
        if ( ProcedureAddressForCaller < 0 )
        {
          LODWORD(Callbacka) = ProcedureAddressForCaller;
          LdrpLogInternal(
            "minkernel\\ldr\\ldrinit.c",
            2284,
            (__int64)"LdrpInitializeKernel32Functions",
            0,
            "Finding KernelbasePostInit failed with status 0x%08lx\n",
            Callbacka);
        }
        else
        {
          v8 = ((__int64 (*)(void))ProcedureAddressa)();
          v3 = v8;
          if ( v8 < 0 )
          {
            LODWORD(Callbacka) = v8;
            LdrpLogInternal(
              "minkernel\\ldr\\ldrinit.c",
              2293,
              (__int64)"LdrpInitializeKernel32Functions",
              0,
              "Calling KernelbasePostInit failed with status 0x%08lx\n",
              Callbacka);
          }
        }
      }
      else
      {
        LODWORD(Callback) = v3;
        LdrpLogInternal(
          "minkernel\\ldr\\ldrinit.c",
          2266,
          (__int64)"LdrpInitializeKernel32Functions",
          0,
          "LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
          Callback);
      }
    }
    return v3;
  }
  v2 = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&LdrpKernel32DllName, &DllHandle);
  v3 = v2;
  if ( v2 == -1073741515 )
    goto LABEL_8;
  if ( v2 < 0 )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      2162,
      (__int64)"LdrpInitializeKernel32Functions",
      0,
      "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
      &LdrpKernel32DllName,
      v2);
    return v3;
  }
  v4 = DllHandle;
LABEL_6:
  v5 = LdrGetProcedureAddressForCaller(
         v4,
         (PANSI_STRING)&stru_1801708A0,
         0,
         &Kernel32ThreadInitThunkFunction,
         0,
         retaddr);
  v3 = v5;
  if ( v5 < 0 )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      2185,
      (__int64)"LdrpInitializeKernel32Functions",
      0,
      "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
      &stru_1801708A0,
      &LdrpKernel32DllName,
      v5,
      v12);
    return v3;
  }
  LdrGetProcedureAddressForCaller(v4, (PANSI_STRING)&stru_1801708C0, 0, ProcedureAddress, 0, retaddr);
  v3 = (unsigned int)LdrpSnapKernelBaseExtensions();
  if ( (v3 & 0x80000000) == 0 )
    goto LABEL_8;
  return v3;
}
