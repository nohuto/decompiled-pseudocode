/*
 * XREFs of LdrpInitializeNtdllDataTableEntry @ 0x180118DB0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     LdrpRecordModuleDependency @ 0x180050E60 (LdrpRecordModuleDependency.c)
 *     RtlAppendUnicodeStringToString @ 0x180058DC0 (RtlAppendUnicodeStringToString.c)
 *     LdrpLogDllState @ 0x1800832E0 (LdrpLogDllState.c)
 *     LdrpResolvePatchDllName @ 0x18009918C (LdrpResolvePatchDllName.c)
 *     LdrpAllocateModuleEntry @ 0x1800D1C60 (LdrpAllocateModuleEntry.c)
 *     LdrpFreeUnicodeString @ 0x1800E04A0 (LdrpFreeUnicodeString.c)
 *     LdrpInsertModuleToIndex @ 0x1800FBFF4 (LdrpInsertModuleToIndex.c)
 *     LdrpInsertDataTableEntry @ 0x180117FB0 (LdrpInsertDataTableEntry.c)
 *     LdrpProcessMappedModule @ 0x18011A098 (LdrpProcessMappedModule.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpInitializeNtdllDataTableEntry(unsigned __int64 a1, __int64 *a2, __int64 a3, _OWORD *a4)
{
  __int64 ModuleEntry; // rax
  __int64 v9; // rbx
  int v10; // edi
  __int64 v11; // rsi
  __int64 v13; // [rsp+30h] [rbp-268h] BYREF
  __int64 v14; // [rsp+38h] [rbp-260h] BYREF
  _BYTE v15[16]; // [rsp+40h] [rbp-258h] BYREF
  _WORD Src[264]; // [rsp+50h] [rbp-248h] BYREF

  v13 = 0LL;
  memset_thunk_772440563353939046(v15, 0, 0x218uLL);
  v14 = 0LL;
  RtlImageNtHeaderEx(3, a1, 0LL, &v13);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v9 = ModuleEntry;
  if ( ModuleEntry )
  {
    *(_DWORD *)(*(_QWORD *)(ModuleEntry + 152) + 24LL) = -1;
    *(_WORD *)(**(_QWORD **)(ModuleEntry + 152) - 52LL) = -1;
    *(_DWORD *)(ModuleEntry + 104) |= 0x204u;
    if ( !a3 )
      *(_QWORD *)(ModuleEntry + 248) -= qword_1801E3470;
    if ( a4 )
    {
      v11 = ModuleEntry + 72;
      *(_OWORD *)(ModuleEntry + 72) = *a4;
      RtlAppendUnicodeStringToString((unsigned __int16 *)(ModuleEntry + 72), &NtDllName);
      *(_OWORD *)(v9 + 88) = *(_OWORD *)&NtDllName;
    }
    else
    {
      v10 = ZwQueryVirtualMemory(-1LL, *(_QWORD *)LdrpNtdllHotPatchContext, 2LL, v15, 536LL, &v14);
      if ( v10 < 0 )
        goto LABEL_16;
      v11 = v9 + 72;
      v10 = LdrpResolvePatchDllName(Src, v9 + 88, v9 + 72);
      if ( v10 < 0 )
        goto LABEL_16;
    }
    *(_QWORD *)(v9 + 48) = a1;
    if ( a3 )
      *(_DWORD *)(v9 + 268) = 9;
    LdrpInsertDataTableEntry(v9);
    LdrpLogDllState(*(_QWORD *)(v9 + 48), v11, 0x14A5u);
    LdrpInsertModuleToIndex(v9, v13);
    LODWORD(v13) = LdrpProcessMappedModule(v9, 0LL, 1LL);
    v10 = v13;
    if ( (int)v13 >= 0 )
    {
      LdrpLogDllState(*(_QWORD *)(v9 + 48), v11, 0x14AEu);
      if ( a3 )
      {
        LdrpRecordModuleDependency(LdrpNtDllDataTableEntry, v9, 0LL, &v13);
        v10 = v13;
        if ( (int)v13 < 0 )
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
    (int)"minkernel\\ldr\\ldrinit.c",
    5155,
    (__int64)"LdrpInitializeNtdllDataTableEntry",
    0,
    "Allocating a data table entry for the system DLL failed\n");
  return (unsigned int)-1073741801;
}
