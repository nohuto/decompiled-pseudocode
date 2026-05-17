/*
 * XREFs of LdrGetDllHandleEx @ 0x1800511B0
 * Callers:
 *     SbpResolveBasedOnName @ 0x180064918 (SbpResolveBasedOnName.c)
 *     CsrClientConnectToServer @ 0x1800CA4C0 (CsrClientConnectToServer.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpReleaseDllPath @ 0x180051400 (LdrpReleaseDllPath.c)
 *     LdrpFindLoadedDll @ 0x180051680 (LdrpFindLoadedDll.c)
 *     LdrpIncrementModuleLoadCount @ 0x180054D50 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpLogDllStateEx2 @ 0x18009BA10 (LdrpLogDllStateEx2.c)
 *     LdrpPinModule @ 0x1800C64AC (LdrpPinModule.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrGetDllHandleEx(int a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v8; // rbp
  char v9; // si
  int v10; // ebx
  int v11; // esi
  int LoadedDll; // edi
  __int64 v13; // rbp
  int Count; // eax
  __int64 v16; // rcx
  __int64 v17; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v18[3]; // [rsp+40h] [rbp-A8h] BYREF
  int v19; // [rsp+58h] [rbp-90h]
  __int64 v20; // [rsp+60h] [rbp-88h]

  v17 = 0LL;
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 2312, (__int64)"LdrGetDllHandleEx", 3, "DLL name: %wZ\n", a4);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 2313, (__int64)"LdrGetDllHandleEx", 5, "%wZ\n", a4);
  v8 = *(_QWORD *)(a4 + 8);
  memset_thunk_772440563353939046(v18, 0, 0x80uLL);
  if ( (a2 & 1) != 0 || !a2 )
  {
    v20 = v8;
    v19 = a2 & 0xFFFFFFFE;
  }
  else
  {
    v18[0] = a2;
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrutil.c",
      1552,
      (__int64)"LdrpInitializeDllPath",
      2,
      "DLL search path passed in externally: %ws\n",
      a2);
    LdrpLogDllStateEx2(v16, v8, a2, 5312LL);
  }
  if ( (a1 & 0xFFFFFFF8) != 0 || (v9 = a1, v10 = a1 & 2, (v11 = v9 & 1) != 0) && v10 || !a5 && !v10 )
  {
    LoadedDll = -1073741811;
    goto LABEL_15;
  }
  LoadedDll = LdrpFindLoadedDll(a4, v18, &v17);
  if ( LoadedDll >= 0 )
  {
    v13 = v17;
    if ( v10 )
    {
      Count = LdrpPinModule(v17);
    }
    else
    {
      if ( v11 )
        goto LABEL_12;
      Count = LdrpIncrementModuleLoadCount(v17);
    }
    LoadedDll = Count;
    if ( Count < 0 )
    {
LABEL_14:
      LdrpDereferenceModule(v13);
      goto LABEL_15;
    }
LABEL_12:
    if ( a5 )
      *a5 = *(_QWORD *)(v13 + 48);
    goto LABEL_14;
  }
LABEL_15:
  LdrpReleaseDllPath(v18);
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
