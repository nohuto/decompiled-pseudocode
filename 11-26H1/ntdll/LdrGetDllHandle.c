/*
 * XREFs of LdrGetDllHandle @ 0x180050FC0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpReleaseDllPath @ 0x180051400 (LdrpReleaseDllPath.c)
 *     LdrpFindLoadedDll @ 0x180051680 (LdrpFindLoadedDll.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpLogDllStateEx2 @ 0x18009BA10 (LdrpLogDllStateEx2.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrGetDllHandle(__int64 ArgList, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // rbp
  int LoadedDll; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-A8h] BYREF
  int v14; // [rsp+58h] [rbp-90h]
  __int64 v15; // [rsp+60h] [rbp-88h]

  v12 = 0LL;
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 2312, (__int64)"LdrGetDllHandleEx", 3, "DLL name: %wZ\n", a3);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 2313, (__int64)"LdrGetDllHandleEx", 5, "%wZ\n", a3);
  v7 = *(_QWORD *)(a3 + 8);
  memset_thunk_772440563353939046(v13, 0, 0x80uLL);
  if ( (ArgList & 1) != 0 || !ArgList )
  {
    v15 = v7;
    v14 = ArgList & 0xFFFFFFFE;
  }
  else
  {
    v13[0] = ArgList;
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrutil.c",
      1552,
      (__int64)"LdrpInitializeDllPath",
      2,
      "DLL search path passed in externally: %ws\n",
      ArgList);
    LdrpLogDllStateEx2(v11, v7, ArgList, 5312LL);
  }
  if ( a4 )
  {
    LoadedDll = LdrpFindLoadedDll(a3, v13, &v12);
    if ( LoadedDll >= 0 )
    {
      v10 = v12;
      *a4 = *(_QWORD *)(v12 + 48);
      LdrpDereferenceModule(v10);
    }
  }
  else
  {
    LoadedDll = -1073741811;
  }
  LdrpReleaseDllPath(v13);
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrapi.c",
    2361,
    (__int64)"LdrGetDllHandleEx",
    4,
    "Status: 0x%08lx\n",
    LoadedDll);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 2362, (__int64)"LdrGetDllHandleEx", 6, "%x\n", LoadedDll);
  return (unsigned int)LoadedDll;
}
