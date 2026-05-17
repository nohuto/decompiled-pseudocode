/*
 * XREFs of LdrpInitializeKernel32Functions @ 0x1800858A8
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrLoadDll @ 0x180043A10 (LdrLoadDll.c)
 *     LdrpCodeAuthzInitialize @ 0x1800454A0 (LdrpCodeAuthzInitialize.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180051F90 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180082DF0 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpFindLoadedDllInternal @ 0x180085670 (LdrpFindLoadedDllInternal.c)
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpInitializeKernel32Functions(_QWORD *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  int v7; // eax
  int v8; // eax
  int ProcedureAddressForCaller; // eax
  int v10; // eax
  char ArgList[8]; // [rsp+28h] [rbp-D8h]
  char ArgLista[8]; // [rsp+28h] [rbp-D8h]
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (*v17)(void); // [rsp+58h] [rbp-A8h] BYREF
  __int128 v18; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v19; // [rsp+70h] [rbp-90h] BYREF
  __int64 retaddr; // [rsp+1A8h] [rbp+A8h]

  v17 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  memset_thunk_772440563353939046(&v18, 0, 0x110uLL);
  LODWORD(v14) = 0;
  *((_QWORD *)&v18 + 1) = &v19;
  *a1 = 0LL;
  LODWORD(v18) = 0x1000000;
  v19 = 0;
  LdrpAppendUnicodeStringToFilenameBuffer((unsigned __int16 *)&v18, LdrpKernel32DllName, v2, v3);
  if ( (int)LdrpFindLoadedDllInternal(&v18, 0LL, &v16, &v14, 32) >= 0 )
  {
    v6 = *(_QWORD *)(v16 + 48);
    v15 = v6;
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x20000000) == 0 )
      goto LABEL_6;
LABEL_8:
    v8 = LdrLoadDll(16385LL, 0LL, (__int64)&LdrpKernelbaseDllName, &v15);
    v5 = v8;
    if ( v8 < 0 )
    {
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrinit.c",
        2250,
        (__int64)"LdrpInitializeKernel32Functions",
        0,
        "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
        &LdrpKernelbaseDllName,
        v8);
    }
    else
    {
      v5 = LdrpCodeAuthzInitialize();
      if ( (int)(v5 + 0x80000000) < 0 || v5 == -1073741515 )
      {
        ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                      v15,
                                      (unsigned int)&unk_1801719C8,
                                      0,
                                      (unsigned int)&v17,
                                      0,
                                      retaddr);
        v5 = ProcedureAddressForCaller;
        if ( ProcedureAddressForCaller < 0 )
        {
          *(_DWORD *)ArgLista = ProcedureAddressForCaller;
          LdrpLogInternal(
            (int)"minkernel\\ldr\\ldrinit.c",
            2284,
            (__int64)"LdrpInitializeKernel32Functions",
            0,
            "Finding KernelbasePostInit failed with status 0x%08lx\n",
            *(_QWORD *)ArgLista);
        }
        else
        {
          v10 = v17();
          v5 = v10;
          if ( v10 < 0 )
          {
            *(_DWORD *)ArgLista = v10;
            LdrpLogInternal(
              (int)"minkernel\\ldr\\ldrinit.c",
              2293,
              (__int64)"LdrpInitializeKernel32Functions",
              0,
              "Calling KernelbasePostInit failed with status 0x%08lx\n",
              *(_QWORD *)ArgLista);
          }
        }
      }
      else
      {
        *(_DWORD *)ArgList = v5;
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrinit.c",
          2266,
          (__int64)"LdrpInitializeKernel32Functions",
          0,
          "LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
          *(_QWORD *)ArgList);
      }
    }
    return v5;
  }
  v4 = LdrLoadDll(16385LL, 0LL, (__int64)LdrpKernel32DllName, &v15);
  v5 = v4;
  if ( v4 == -1073741515 )
    goto LABEL_8;
  if ( v4 < 0 )
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      2162,
      (__int64)"LdrpInitializeKernel32Functions",
      0,
      "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
      LdrpKernel32DllName,
      v4);
    return v5;
  }
  LODWORD(v6) = v15;
LABEL_6:
  v7 = LdrGetProcedureAddressForCaller(
         v6,
         (unsigned int)&::ArgList,
         0,
         (unsigned int)&Kernel32ThreadInitThunkFunction,
         0,
         retaddr);
  v5 = v7;
  if ( v7 < 0 )
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      2185,
      (__int64)"LdrpInitializeKernel32Functions",
      0,
      "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
      &::ArgList,
      LdrpKernel32DllName,
      v7,
      v14);
    return v5;
  }
  LdrGetProcedureAddressForCaller(v6, (unsigned int)&unk_1801719D8, 0, (_DWORD)a1, 0, retaddr);
  v5 = (unsigned int)LdrpSnapKernelBaseExtensions();
  if ( (v5 & 0x80000000) == 0 )
    goto LABEL_8;
  return v5;
}
