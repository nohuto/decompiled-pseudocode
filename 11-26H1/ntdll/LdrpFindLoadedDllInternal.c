/*
 * XREFs of LdrpFindLoadedDllInternal @ 0x18007CA10
 * Callers:
 *     LdrpFindLoadedDll @ 0x18003BC00 (LdrpFindLoadedDll.c)
 *     LdrpInitializeKernel32Functions @ 0x18007CC48 (LdrpInitializeKernel32Functions.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpFindLoadedDllByName @ 0x18003D4C0 (LdrpFindLoadedDllByName.c)
 *     LdrpResolveDllName @ 0x18007BF80 (LdrpResolveDllName.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007D68C (LdrpFindLoadedDllByMappingFile.c)
 *     LdrpSearchPath @ 0x180097CEC (LdrpSearchPath.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpFindLoadedDllInternal(PUNICODE_STRING a1, int a2, _QWORD *a3, _DWORD *a4, unsigned int a5)
{
  int LoadedDllByName; // ebx
  int v11; // eax
  PVOID BaseAddress[2]; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING String1; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+70h] [rbp-90h] BYREF
  PVOID v15; // [rsp+78h] [rbp-88h]
  _WORD v16[128]; // [rsp+80h] [rbp-80h] BYREF

  String1 = 0LL;
  memset_thunk_772440563353939046(&v14, 0, 0x110uLL);
  *a3 = 0LL;
  if ( (a5 & 0x20) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(a1, 0LL, a5, (__int64)a3, a4);
  }
  else if ( (a5 & 0x200) == 0
         || (LoadedDllByName = LdrpFindLoadedDllByName(0LL, a1, a5, (__int64)a3, a4), LoadedDllByName < 0) )
  {
    v14 = 0x1000000;
    v15 = v16;
    v16[0] = 0;
    *(_OWORD *)BaseAddress = 0LL;
    if ( (a5 & 0x200) != 0 )
      v11 = LdrpResolveDllName(a1, (__int64)&v14, (__int64)&String1, BaseAddress, a5);
    else
      v11 = LdrpSearchPath((_DWORD)a1, a2, 0, 0, (__int64)&v14, (__int64)&String1, (__int64)BaseAddress, 0LL, 0LL);
    LoadedDllByName = v11;
    if ( v11 >= 0 )
    {
      LoadedDllByName = LdrpFindLoadedDllByName(&String1, (PUNICODE_STRING)BaseAddress, a5, (__int64)a3, a4);
      if ( LoadedDllByName == -1073741515 )
        LoadedDllByName = LdrpFindLoadedDllByMappingFile(&v14, a3, a4);
    }
    if ( BaseAddress[1] )
      RtlpSysVolFree(BaseAddress[1]);
    if ( v16 != v15 )
      RtlpSysVolFree(v15);
    v14 = 0x1000000;
    v15 = v16;
    v16[0] = 0;
  }
  LdrpLogInternal(
    "minkernel\\ldr\\ldrfind.c",
    482,
    (__int64)"LdrpFindLoadedDllInternal",
    4,
    "Status: 0x%08lx\n",
    LoadedDllByName);
  LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 483, (__int64)"LdrpFindLoadedDllInternal", 6, "%x\n", LoadedDllByName);
  return (unsigned int)LoadedDllByName;
}
