/*
 * XREFs of LdrpFindLoadedDll @ 0x18003BC00
 * Callers:
 *     LdrGetDllHandle @ 0x18003B540 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x18003B730 (LdrGetDllHandleEx.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     LdrpPreprocessDllName @ 0x180030180 (LdrpPreprocessDllName.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpFindLoadedDllByName @ 0x18003D4C0 (LdrpFindLoadedDllByName.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpResolveDllName @ 0x18007BF80 (LdrpResolveDllName.c)
 *     LdrpFindLoadedDllInternal @ 0x18007CA10 (LdrpFindLoadedDllInternal.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007D68C (LdrpFindLoadedDllByMappingFile.c)
 *     LdrpDrainWorkQueue @ 0x18007E4F0 (LdrpDrainWorkQueue.c)
 *     LdrpSearchPath @ 0x180097CEC (LdrpSearchPath.c)
 *     LdrpDropLastInProgressCount @ 0x1800DF57C (LdrpDropLastInProgressCount.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpFindLoadedDll(unsigned __int16 *a1, int a2, PVOID *a3)
{
  int LoadedDllByName; // ebx
  int v8; // esi
  int v9; // eax
  int v10; // [rsp+58h] [rbp-B0h] BYREF
  int v11; // [rsp+5Ch] [rbp-ACh] BYREF
  _UNICODE_STRING v12; // [rsp+60h] [rbp-A8h] BYREF
  _UNICODE_STRING BaseAddress_8; // [rsp+70h] [rbp-98h] BYREF
  int v14; // [rsp+88h] [rbp-80h] BYREF
  PVOID v15; // [rsp+90h] [rbp-78h]
  _WORD v16[128]; // [rsp+98h] [rbp-70h] BYREF
  _UNICODE_STRING String1; // [rsp+198h] [rbp+90h] BYREF
  __int16 v18; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v19[254]; // [rsp+1AAh] [rbp+A2h] BYREF

  *(_DWORD *)(&String1.MaximumLength + 1) = 0;
  memset_thunk_772440563353939046(v19, 0, 0xFEuLL);
  *(_DWORD *)&String1.Length = 0x1000000;
  v10 = 0;
  String1.Buffer = (wchar_t *)&v18;
  v11 = 0;
  *a3 = 0LL;
  v18 = 0;
  LoadedDllByName = LdrpPreprocessDllName(a1, &String1, 0LL, &v11);
  if ( LoadedDllByName >= 0 )
  {
    BaseAddress_8 = 0LL;
    memset_thunk_772440563353939046(&v14, 0, 0x110uLL);
    v8 = v11;
    *a3 = 0LL;
    if ( (v8 & 0x20) != 0 )
    {
      LoadedDllByName = LdrpFindLoadedDllByName(&String1, 0LL, (__int64)&v10);
    }
    else if ( (v8 & 0x200) == 0
           || (LoadedDllByName = LdrpFindLoadedDllByName(0LL, &String1, (__int64)&v10), LoadedDllByName < 0) )
    {
      v14 = 0x1000000;
      v15 = v16;
      v16[0] = 0;
      v12 = 0LL;
      if ( (v8 & 0x200) != 0 )
        v9 = LdrpResolveDllName(
               (unsigned int)&String1,
               (unsigned int)&v14,
               (unsigned int)&BaseAddress_8,
               (unsigned int)&v12,
               v8);
      else
        v9 = LdrpSearchPath(
               (unsigned int)&String1,
               a2,
               0,
               0,
               (__int64)&v14,
               (__int64)&BaseAddress_8,
               (__int64)&v12,
               0LL,
               0LL);
      LoadedDllByName = v9;
      if ( v9 >= 0 )
      {
        LoadedDllByName = LdrpFindLoadedDllByName(&BaseAddress_8, &v12, (__int64)&v10);
        if ( LoadedDllByName == -1073741515 )
          LoadedDllByName = LdrpFindLoadedDllByMappingFile(&v14, a3, &v10);
      }
      if ( v12.Buffer )
        RtlpSysVolFree(v12.Buffer);
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
    if ( LoadedDllByName >= 0 && v10 < 6 && (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
    {
      LdrpDereferenceModule(*a3);
      *a3 = 0LL;
      LdrpDrainWorkQueue(0LL);
      LoadedDllByName = LdrpFindLoadedDllInternal(&String1, v8);
      LdrpDropLastInProgressCount();
      if ( LoadedDllByName >= 0 && v10 != 9 )
      {
        LdrpDereferenceModule(*a3);
        *a3 = 0LL;
        LoadedDllByName = -1073741515;
      }
    }
  }
  if ( &v18 != (__int16 *)String1.Buffer )
    RtlpSysVolFree(String1.Buffer);
  return (unsigned int)LoadedDllByName;
}
