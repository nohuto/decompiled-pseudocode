/*
 * XREFs of LdrpCorInitialize @ 0x1800BC06C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     LdrpGetProcedureAddress @ 0x180030D90 (LdrpGetProcedureAddress.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     LdrpReleaseDllPath @ 0x18003B980 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x18003BF80 (LdrpLoadDll.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18003F9E0 (LdrpDecrementModuleLoadCountEx.c)
 *     RtlQueryEnvironmentVariable @ 0x18009BE40 (RtlQueryEnvironmentVariable.c)
 *     LdrpBuildSystem32FileName @ 0x1800BC260 (LdrpBuildSystem32FileName.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpCorInitialize(char **a1)
{
  bool v2; // bl
  int Dll; // ebx
  _UNICODE_STRING *v4; // rcx
  char *v6; // rdi
  ULONG_PTR ReturnLength; // [rsp+30h] [rbp-1C8h] BYREF
  PVOID v8; // [rsp+38h] [rbp-1C0h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp-1B8h] BYREF
  int v10; // [rsp+50h] [rbp-1A8h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-1A0h]
  _WORD v12[128]; // [rsp+60h] [rbp-198h] BYREF
  _BYTE v13[128]; // [rsp+160h] [rbp-98h] BYREF

  v9 = 0LL;
  memset_thunk_772440563353939046(v13, 0, 0x80uLL);
  v2 = 1;
  v8 = 0LL;
  memset_thunk_772440563353939046(&v10, 0, 0x110uLL);
  ReturnLength = 0LL;
  RtlEnterCriticalSection(&FastPebLock);
  if ( RtlQueryEnvironmentVariable(0LL, L"COMPLUS_InstallRoot", 0x13uLL, 0LL, 0LL, &ReturnLength) == -1073741789 )
    v2 = RtlQueryEnvironmentVariable(0LL, L"COMPLUS_Version", 0xFuLL, 0LL, 0LL, &ReturnLength) != -1073741789;
  RtlLeaveCriticalSection(&FastPebLock);
  BaseAddress = v12;
  v10 = 0x1000000;
  v12[0] = 0;
  if ( v2 )
  {
    Dll = LdrpBuildSystem32FileName(&v10, &LdrpMscoreeDllName);
    v4 = (_UNICODE_STRING *)&v10;
  }
  else
  {
    v4 = (_UNICODE_STRING *)&LdrpMscoreeDllName;
    Dll = 0;
  }
  if ( Dll >= 0 )
  {
    Dll = LdrpLoadDll(v4, (__int64)v13, 1, (__int64)&v8);
    LdrpReleaseDllPath((__int64)v13);
    if ( Dll >= 0 )
    {
      v6 = (char *)v8;
      Dll = LdrpGetProcedureAddress(*((_QWORD *)v8 + 6), "_CorExeMain", 0, (char **)&v9);
      if ( Dll < 0 )
      {
        LdrpDecrementModuleLoadCountEx((__int64)v6, 0LL);
      }
      else
      {
        LdrpCorExeMainRoutine = __ROR8__(v9 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        *a1 = v6;
      }
      LdrpDereferenceModule(v6);
    }
  }
  if ( v12 != BaseAddress )
    RtlpSysVolFree(BaseAddress);
  return (unsigned int)Dll;
}
