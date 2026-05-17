/*
 * XREFs of LdrpFindLoadedDll @ 0x180051680
 * Callers:
 *     LdrGetDllHandle @ 0x180050FC0 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x1800511B0 (LdrGetDllHandleEx.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     LdrpPreprocessDllName @ 0x180045C10 (LdrpPreprocessDllName.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpFindLoadedDllByName @ 0x180052F40 (LdrpFindLoadedDllByName.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpResolveDllName @ 0x180084BE0 (LdrpResolveDllName.c)
 *     LdrpFindLoadedDllInternal @ 0x180085670 (LdrpFindLoadedDllInternal.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800862EC (LdrpFindLoadedDllByMappingFile.c)
 *     LdrpDrainWorkQueue @ 0x180087180 (LdrpDrainWorkQueue.c)
 *     LdrpSearchPath @ 0x180098BBC (LdrpSearchPath.c)
 *     LdrpDropLastInProgressCount @ 0x1800E1CDC (LdrpDropLastInProgressCount.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpFindLoadedDll(unsigned __int16 *a1, __int64 a2, _QWORD *a3)
{
  int LoadedDllByName; // ebx
  int v7; // esi
  int v8; // eax
  __int64 v9; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v10[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v11[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v12; // [rsp+88h] [rbp-80h] BYREF
  _WORD *v13; // [rsp+90h] [rbp-78h]
  _WORD v14[128]; // [rsp+98h] [rbp-70h] BYREF
  char v15[4]; // [rsp+198h] [rbp+90h] BYREF
  int v16; // [rsp+19Ch] [rbp+94h]
  __int16 *v17; // [rsp+1A0h] [rbp+98h]
  __int16 v18; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v19[254]; // [rsp+1AAh] [rbp+A2h] BYREF

  v16 = 0;
  memset_thunk_772440563353939046(v19, 0, 0xFEuLL);
  *(_DWORD *)v15 = 0x1000000;
  v9 = 0LL;
  v17 = &v18;
  *a3 = 0LL;
  v18 = 0;
  LoadedDllByName = LdrpPreprocessDllName(a1, (unsigned __int16 *)v15, 0LL, (int *)&v9 + 1);
  if ( LoadedDllByName >= 0 )
  {
    *(_OWORD *)v11 = 0LL;
    memset_thunk_772440563353939046(&v12, 0, 0x110uLL);
    v7 = HIDWORD(v9);
    *a3 = 0LL;
    if ( (v7 & 0x20) != 0 )
    {
      LoadedDllByName = LdrpFindLoadedDllByName((unsigned int)v15, 0, v7, (_DWORD)a3, (__int64)&v9);
    }
    else if ( (v7 & 0x200) == 0
           || (LoadedDllByName = LdrpFindLoadedDllByName(0, (unsigned int)v15, v7, (_DWORD)a3, (__int64)&v9),
               LoadedDllByName < 0) )
    {
      LODWORD(v12) = 0x1000000;
      v13 = v14;
      v14[0] = 0;
      *(_OWORD *)v10 = 0LL;
      if ( (v7 & 0x200) != 0 )
        v8 = LdrpResolveDllName((char)v15, v7);
      else
        v8 = LdrpSearchPath((char)v15, (__int64)&v12, (__int64)v11, (__int64)v10, 0LL, 0LL);
      LoadedDllByName = v8;
      if ( v8 >= 0 )
      {
        LoadedDllByName = LdrpFindLoadedDllByName((unsigned int)v11, (unsigned int)v10, v7, (_DWORD)a3, (__int64)&v9);
        if ( LoadedDllByName == -1073741515 )
          LoadedDllByName = LdrpFindLoadedDllByMappingFile(&v12, a3, &v9);
      }
      if ( v10[1] )
        RtlpSysVolFree(v10[1]);
      if ( v14 != v13 )
        RtlpSysVolFree((__int64)v13);
      LODWORD(v12) = 0x1000000;
      v13 = v14;
      v14[0] = 0;
    }
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrfind.c",
      482,
      (__int64)"LdrpFindLoadedDllInternal",
      4,
      "Status: 0x%08lx\n",
      LoadedDllByName);
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrfind.c",
      483,
      (__int64)"LdrpFindLoadedDllInternal",
      6,
      "%x\n",
      LoadedDllByName);
    if ( LoadedDllByName >= 0 && (int)v9 < 6 && (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
    {
      LdrpDereferenceModule(*a3);
      *a3 = 0LL;
      LdrpDrainWorkQueue(0LL);
      LoadedDllByName = LdrpFindLoadedDllInternal((char)v15, v7);
      LdrpDropLastInProgressCount();
      if ( LoadedDllByName >= 0 && (_DWORD)v9 != 9 )
      {
        LdrpDereferenceModule(*a3);
        *a3 = 0LL;
        LoadedDllByName = -1073741515;
      }
    }
  }
  if ( &v18 != v17 )
    RtlpSysVolFree((__int64)v17);
  return (unsigned int)LoadedDllByName;
}
