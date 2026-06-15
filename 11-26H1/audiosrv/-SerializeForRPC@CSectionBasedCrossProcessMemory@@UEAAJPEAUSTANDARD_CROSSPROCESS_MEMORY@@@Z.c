/*
 * XREFs of ?SerializeForRPC@CSectionBasedCrossProcessMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x18015F900
 * Callers:
 *     ?SerializeForRPC@?$CSectionBasedCPClientMemory@UControlData_V2@@@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z @ 0x18015F630 (-SerializeForRPC@-$CSectionBasedCPClientMemory@UControlData_V2@@@@UEAAJPEAUCP_MEMORY_METADATA_BL.c)
 *     ?SerializeForRPC@CCrossProcessKSMemory@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z @ 0x18015FBF0 (-SerializeForRPC@CCrossProcessKSMemory@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180067DCC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800788EC (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B0364 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CSectionBasedCrossProcessMemory::SerializeForRPC(
        CSectionBasedCrossProcessMemory *this,
        struct STANDARD_CROSSPROCESS_MEMORY *a2)
{
  HANDLE CurrentProcess; // rax
  void *v5; // rdi
  void *v6; // rbx
  HANDLE v7; // rax
  const char *v8; // r9
  unsigned int LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HANDLE TargetHandle; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)a2 = 0LL;
  if ( !*((_QWORD *)this + 2) || *((_QWORD *)this + 2) == -1LL )
  {
    LastError = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpbasememory.cpp",
      (const char *)0x80004005LL);
  }
  else
  {
    TargetHandle = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &TargetHandle,
      0LL);
    CurrentProcess = GetCurrentProcess();
    v5 = (void *)*((_QWORD *)this + 2);
    v6 = CurrentProcess;
    v7 = GetCurrentProcess();
    if ( DuplicateHandle(v7, v5, v6, &TargetHandle, 0, 0, 2u) )
    {
      LastError = 0;
      *(_QWORD *)a2 = TargetHandle;
      TargetHandle = 0LL;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x26,
                    (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpbasememory.cpp",
                    v8);
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TargetHandle);
  }
  return LastError;
}
