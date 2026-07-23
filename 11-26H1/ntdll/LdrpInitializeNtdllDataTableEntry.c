/*
 * XREFs of LdrpInitializeNtdllDataTableEntry @ 0x180118B60
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     LdrpRecordModuleDependency @ 0x18003B3E0 (LdrpRecordModuleDependency.c)
 *     RtlAppendUnicodeStringToString @ 0x180043340 (RtlAppendUnicodeStringToString.c)
 *     LdrpLogDllState @ 0x18007A680 (LdrpLogDllState.c)
 *     LdrpResolvePatchDllName @ 0x1800982BC (LdrpResolvePatchDllName.c)
 *     LdrpAllocateModuleEntry @ 0x1800CF3D0 (LdrpAllocateModuleEntry.c)
 *     LdrpFreeUnicodeString @ 0x1800DDD40 (LdrpFreeUnicodeString.c)
 *     LdrpInsertModuleToIndex @ 0x1800FB744 (LdrpInsertModuleToIndex.c)
 *     LdrpInsertDataTableEntry @ 0x180117D60 (LdrpInsertDataTableEntry.c)
 *     LdrpProcessMappedModule @ 0x180119E48 (LdrpProcessMappedModule.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpInitializeNtdllDataTableEntry(PVOID BaseOfImage, __int64 *a2, __int64 a3, _OWORD *a4)
{
  _QWORD *ModuleEntry; // rax
  __int64 v9; // rbx
  int v10; // edi
  __int64 v11; // rsi
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp-268h] BYREF
  ULONG_PTR ReturnLength; // [rsp+38h] [rbp-260h] BYREF
  _BYTE MemoryInformation[16]; // [rsp+40h] [rbp-258h] BYREF
  _WORD Src[264]; // [rsp+50h] [rbp-248h] BYREF

  OutHeaders = 0LL;
  memset_thunk_772440563353939046(MemoryInformation, 0, 0x218uLL);
  ReturnLength = 0LL;
  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &OutHeaders);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v9 = (__int64)ModuleEntry;
  if ( ModuleEntry )
  {
    *(_DWORD *)(ModuleEntry[19] + 24LL) = -1;
    *(_WORD *)(*(_QWORD *)ModuleEntry[19] - 52LL) = -1;
    *((_DWORD *)ModuleEntry + 26) |= 0x204u;
    if ( !a3 )
      ModuleEntry[31] -= LdrSystemDllInitBlock.SystemDllNativeRelocation;
    if ( a4 )
    {
      v11 = (__int64)(ModuleEntry + 9);
      *(_OWORD *)(ModuleEntry + 9) = *a4;
      RtlAppendUnicodeStringToString((PUNICODE_STRING)(ModuleEntry + 9), &NtDllName);
      *(UNICODE_STRING *)(v9 + 88) = NtDllName;
    }
    else
    {
      v10 = ZwQueryVirtualMemory(
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              *(PVOID *)LdrpNtdllHotPatchContext,
              MemoryMappedFilenameInformation,
              MemoryInformation,
              0x218uLL,
              &ReturnLength);
      if ( v10 < 0 )
        goto LABEL_16;
      v11 = v9 + 72;
      v10 = LdrpResolvePatchDllName(Src, v9 + 88, v9 + 72);
      if ( v10 < 0 )
        goto LABEL_16;
    }
    *(_QWORD *)(v9 + 48) = BaseOfImage;
    if ( a3 )
      *(_DWORD *)(v9 + 268) = 9;
    LdrpInsertDataTableEntry(v9);
    LdrpLogDllState(*(_QWORD *)(v9 + 48), v11, 0x14A5u);
    LdrpInsertModuleToIndex(v9, (__int64)OutHeaders);
    LODWORD(OutHeaders) = LdrpProcessMappedModule(v9, 0LL, 1LL);
    v10 = (int)OutHeaders;
    if ( (int)OutHeaders >= 0 )
    {
      LdrpLogDllState(*(_QWORD *)(v9 + 48), v11, 0x14AEu);
      if ( a3 )
      {
        LdrpRecordModuleDependency(LdrpNtDllDataTableEntry, v9, 0LL, &OutHeaders);
        v10 = (int)OutHeaders;
        if ( (int)OutHeaders < 0 )
          goto LABEL_17;
        *(_QWORD *)(v9 + 184) = *(_QWORD *)(a3 + 48);
        *(_DWORD *)(a3 + 304) = 3;
        *(_QWORD *)(a3 + 296) = *(_QWORD *)(v9 + 48);
        *(_DWORD *)(v9 + 304) = 2;
      }
      *(_DWORD *)(*(_QWORD *)(v9 + 152) + 56LL) = 9;
      *a2 = v9;
    }
LABEL_16:
    if ( v10 >= 0 )
      return (unsigned int)v10;
LABEL_17:
    LdrpFreeUnicodeString(v9 + 72);
    return (unsigned int)v10;
  }
  LdrpLogInternal(
    "minkernel\\ldr\\ldrinit.c",
    5155,
    (__int64)"LdrpInitializeNtdllDataTableEntry",
    0,
    "Allocating a data table entry for the system DLL failed\n");
  return (unsigned int)-1073741801;
}
