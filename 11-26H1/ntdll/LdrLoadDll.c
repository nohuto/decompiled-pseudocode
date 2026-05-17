/*
 * XREFs of LdrLoadDll @ 0x180043A10
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x1800454A0 (LdrpCodeAuthzInitialize.c)
 *     SbpResolveBasedOnName @ 0x180064918 (SbpResolveBasedOnName.c)
 *     LdrpInitializeKernel32Functions @ 0x1800858A8 (LdrpInitializeKernel32Functions.c)
 *     RtlLogMessageInEventLogger @ 0x180120950 (RtlLogMessageInEventLogger.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpReleaseDllPath @ 0x180051400 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x180051A00 (LdrpLoadDll.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpLogDllStateEx2 @ 0x18009BA10 (LdrpLogDllStateEx2.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrLoadDll(__int64 ArgList, int *a2, __int64 a3, _QWORD *a4)
{
  char v4; // bl
  int v8; // r9d
  int v9; // ecx
  char v10; // dl
  char v11; // r8
  char v12; // cl
  __int64 v13; // rbp
  int Dll; // ebx
  __int64 v16; // rcx
  char ArgLista; // [rsp+28h] [rbp-C0h]
  __int128 v18; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v19; // [rsp+50h] [rbp-98h]
  __int128 v20; // [rsp+60h] [rbp-88h]
  __int128 v21; // [rsp+70h] [rbp-78h]
  __int128 v22; // [rsp+80h] [rbp-68h]
  __int128 v23; // [rsp+90h] [rbp-58h]
  __int128 v24; // [rsp+A0h] [rbp-48h]
  __int128 v25; // [rsp+B0h] [rbp-38h]

  v4 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  if ( a2 )
  {
    v8 = *a2;
    v9 = 2 * (*a2 & 4);
    v10 = v9 | 0x40;
    if ( (v8 & 2) == 0 )
      v10 = v9;
    v11 = v10 | 0x80;
    if ( (v8 & 0x800000) == 0 )
      v11 = v10;
    v12 = v11;
    if ( (v8 & 0x1000) == 0 )
      v12 = v11;
    v4 = v12;
    if ( v8 >= 0 )
      v4 = v12;
  }
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 1345, (int)"LdrLoadDll", 3, "DLL name: %wZ\n", a3);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 1346, (int)"LdrLoadDll", 5, "%wZ\n", a3);
  if ( (LdrpPolicyBits & 4) == 0 && (ArgList & 0x401) == 0x401 )
    return 3221225485LL;
  if ( (v4 & 8) == 0 || (LdrpPolicyBits & 8) != 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x2000) != 0 )
    {
      Dll = -1073740004;
    }
    else
    {
      v13 = *(_QWORD *)(a3 + 8);
      if ( (ArgList & 1) != 0 || !ArgList )
      {
        *(_QWORD *)&v20 = *(_QWORD *)(a3 + 8);
        DWORD2(v19) = ArgList & 0xFFFFFFFE;
      }
      else
      {
        *(_QWORD *)&v18 = ArgList;
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrutil.c",
          1552,
          (int)"LdrpInitializeDllPath",
          2,
          "DLL search path passed in externally: %ws\n",
          ArgList);
        LdrpLogDllStateEx2(v16, v13, ArgList, 5312LL);
      }
      Dll = LdrpLoadDll(a3);
      LdrpReleaseDllPath(&v18);
      if ( Dll >= 0 )
      {
        *a4 = MEMORY[0x30];
        LdrpDereferenceModule(0LL);
      }
    }
  }
  else
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrapi.c",
      1369,
      (int)"LdrLoadDll",
      0,
      "Nonpackaged process attempted to load a packaged DLL.\n",
      ArgLista);
    Dll = -1073741398;
  }
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 1403, (int)"LdrLoadDll", 4, "Status: 0x%08lx\n", Dll);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 1404, (int)"LdrLoadDll", 6, "%x\n", Dll);
  return (unsigned int)Dll;
}
