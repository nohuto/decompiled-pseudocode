/*
 * XREFs of LdrpInitShimEngine @ 0x18011831C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpReleaseDllPath @ 0x180051400 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x180051A00 (LdrpLoadDll.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x18009B960 (LdrpInitializeDllPath.c)
 *     LdrpBuildSystem32FileName @ 0x1800BE800 (LdrpBuildSystem32FileName.c)
 *     LdrpPinModule @ 0x1800C64AC (LdrpPinModule.c)
 *     LdrpLoadShimEngine @ 0x1800C6518 (LdrpLoadShimEngine.c)
 *     LdrpGetShimEngineInterface @ 0x18011DA94 (LdrpGetShimEngineInterface.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

_WORD *__fastcall LdrpInitShimEngine(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // eax
  int Dll; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  int ShimEngineInterface; // eax
  _WORD *result; // rax
  char ArgList[4]; // [rsp+28h] [rbp-D8h]
  char ArgLista[4]; // [rsp+28h] [rbp-D8h]
  char ArgListb[4]; // [rsp+28h] [rbp-D8h]
  PCWSTR SourceString[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v16[3]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v17[4]; // [rsp+60h] [rbp-A0h] BYREF
  _WORD *v18; // [rsp+68h] [rbp-98h]
  _WORD v19[128]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v20[128]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v21[512]; // [rsp+1F0h] [rbp+F0h] BYREF

  v16[0] = 1572886LL;
  v16[1] = L"apphelp.dll";
  memset_thunk_772440563353939046(v20, 0, 0x80uLL);
  v15 = 0LL;
  memset_thunk_772440563353939046(v17, 0, 0x110uLL);
  *(_DWORD *)v17 = 0x1000000;
  v19[0] = 0;
  v18 = v19;
  *(_OWORD *)SourceString = 0LL;
  v4 = LdrpBuildSystem32FileName(v17, (unsigned __int16 *)v16, v2, v3);
  if ( v4 >= 0 )
  {
    LdrpInitializeDllPath(0LL, 16385LL, (__int64)v20);
    Dll = LdrpLoadDll(v17, (__int64)v20, 0, (__int64)&v15);
    LdrpReleaseDllPath((__int64)v20);
    if ( Dll >= 0 )
    {
      v7 = v15;
      v8 = v15;
      *(_DWORD *)(v15 + 104) |= 0x100u;
      g_pShimEngineModule = *(_QWORD *)(v8 + 48);
      LdrpPinModule(v8, v6);
      LdrpDereferenceModule(v7);
      ShimEngineInterface = LdrpGetShimEngineInterface();
      if ( ShimEngineInterface >= 0 )
      {
        SourceString[1] = (PCWSTR)v21;
        LODWORD(SourceString[0]) = 0x2000000;
        if ( ((int (__fastcall *)(PCWSTR *, __int64, __int64))(__ROR8__(
                                                                 g_pfnSE_InitializeEngine,
                                                                 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
               SourceString,
               LdrpImageEntry + 72,
               a1) >= 0 )
        {
          LdrpLoadShimEngine(SourceString[1]);
          if ( (_BYTE *)SourceString[1] != v21 )
            RtlFreeHeap_0();
        }
      }
      else
      {
        *(_DWORD *)ArgListb = ShimEngineInterface;
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrinit.c",
          3743,
          (__int64)"LdrpInitShimEngine",
          0,
          "Getting the shim engine exports failed with status 0x%08lx\n",
          *(_DWORD *)ArgListb);
      }
    }
    else
    {
      *(_DWORD *)ArgLista = Dll;
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrinit.c",
        3729,
        (__int64)"LdrpInitShimEngine",
        0,
        "Loading the shim engine DLL failed with status 0x%08lx\n",
        *(_DWORD *)ArgLista);
    }
  }
  else
  {
    *(_DWORD *)ArgList = v4;
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrinit.c",
      3710,
      (__int64)"LdrpInitShimEngine",
      0,
      "Building shim engine DLL system32 filename failed with status 0x%08lx\n",
      *(_DWORD *)ArgList);
  }
  result = v19;
  if ( v19 != v18 )
    return (_WORD *)RtlFreeHeap_0();
  return result;
}
