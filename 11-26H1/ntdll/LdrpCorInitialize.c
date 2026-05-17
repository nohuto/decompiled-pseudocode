/*
 * XREFs of LdrpCorInitialize @ 0x1800BE60C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     LdrpGetProcedureAddress @ 0x180046820 (LdrpGetProcedureAddress.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     LdrpReleaseDllPath @ 0x180051400 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x180051A00 (LdrpLoadDll.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180055460 (LdrpDecrementModuleLoadCountEx.c)
 *     RtlQueryEnvironmentVariable @ 0x18009CD10 (RtlQueryEnvironmentVariable.c)
 *     LdrpBuildSystem32FileName @ 0x1800BE800 (LdrpBuildSystem32FileName.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpCorInitialize(__int64 *a1)
{
  bool v2; // bl
  int Dll; // ebx
  unsigned __int16 *v4; // rcx
  __int64 v6; // rdi
  unsigned __int64 v7; // [rsp+30h] [rbp-1C8h] BYREF
  __int64 v8; // [rsp+38h] [rbp-1C0h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp-1B8h] BYREF
  char ArgList[4]; // [rsp+50h] [rbp-1A8h] BYREF
  _WORD *v11; // [rsp+58h] [rbp-1A0h]
  _WORD v12[128]; // [rsp+60h] [rbp-198h] BYREF
  _BYTE v13[128]; // [rsp+160h] [rbp-98h] BYREF

  v9 = 0LL;
  memset_thunk_772440563353939046(v13, 0, 0x80uLL);
  v2 = 1;
  v8 = 0LL;
  memset_thunk_772440563353939046(ArgList, 0, 0x110uLL);
  v7 = 0LL;
  RtlEnterCriticalSection((__int64)&FastPebLock);
  if ( (unsigned int)RtlQueryEnvironmentVariable(0LL, L"COMPLUS_InstallRoot", 0x13uLL, 0LL, 0LL, &v7) == -1073741789 )
    v2 = (unsigned int)RtlQueryEnvironmentVariable(0LL, L"COMPLUS_Version", 0xFuLL, 0LL, 0LL, &v7) != -1073741789;
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  v11 = v12;
  *(_DWORD *)ArgList = 0x1000000;
  v12[0] = 0;
  if ( v2 )
  {
    Dll = LdrpBuildSystem32FileName(ArgList, &LdrpMscoreeDllName);
    v4 = (unsigned __int16 *)ArgList;
  }
  else
  {
    v4 = (unsigned __int16 *)&LdrpMscoreeDllName;
    Dll = 0;
  }
  if ( Dll >= 0 )
  {
    Dll = LdrpLoadDll(v4, (__int64)v13, 1, (__int64)&v8);
    LdrpReleaseDllPath((__int64)v13);
    if ( Dll >= 0 )
    {
      v6 = v8;
      Dll = LdrpGetProcedureAddress(*(_QWORD *)(v8 + 48), "_CorExeMain", 0, &v9);
      if ( Dll < 0 )
      {
        LdrpDecrementModuleLoadCountEx(v6, 0LL);
      }
      else
      {
        LdrpCorExeMainRoutine = __ROR8__(v9 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        *a1 = v6;
      }
      LdrpDereferenceModule(v6);
    }
  }
  if ( v12 != v11 )
    RtlpSysVolFree((__int64)v11);
  return (unsigned int)Dll;
}
