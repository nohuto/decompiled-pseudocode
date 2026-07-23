/*
 * XREFs of LdrpInitShimEngine @ 0x1801180CC
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpReleaseDllPath @ 0x18003B980 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x18003BF80 (LdrpLoadDll.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x18009AA90 (LdrpInitializeDllPath.c)
 *     LdrpBuildSystem32FileName @ 0x1800BC260 (LdrpBuildSystem32FileName.c)
 *     LdrpPinModule @ 0x1800C3C6C (LdrpPinModule.c)
 *     LdrpLoadShimEngine @ 0x1800C3CD8 (LdrpLoadShimEngine.c)
 *     LdrpGetShimEngineInterface @ 0x18011D844 (LdrpGetShimEngineInterface.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

int __fastcall LdrpInitShimEngine(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  char *v4; // rbx
  _QWORD *v5; // rcx
  int ShimEngineInterface; // eax
  _WORD *v7; // rax
  int v9; // [rsp+28h] [rbp-D8h]
  int v10; // [rsp+28h] [rbp-D8h]
  int v11; // [rsp+28h] [rbp-D8h]
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v13; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v14[3]; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING v15; // [rsp+60h] [rbp-A0h] BYREF
  _WORD v16[128]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v17[128]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v18[512]; // [rsp+1F0h] [rbp+F0h] BYREF

  v14[0] = 1572886LL;
  v14[1] = L"apphelp.dll";
  memset_thunk_772440563353939046(v17, 0, 0x80uLL);
  v13 = 0LL;
  memset_thunk_772440563353939046(&v15, 0, 0x110uLL);
  *(_DWORD *)&v15.Length = 0x1000000;
  v16[0] = 0;
  v15.Buffer = v16;
  *(_OWORD *)BaseAddress = 0LL;
  v2 = LdrpBuildSystem32FileName(&v15.Length, (unsigned __int16 *)v14);
  if ( v2 >= 0 )
  {
    LdrpInitializeDllPath(0LL, 16385LL, (__int64)v17);
    v3 = LdrpLoadDll(&v15, (__int64)v17, 0, (__int64)&v13);
    LdrpReleaseDllPath((__int64)v17);
    if ( v3 >= 0 )
    {
      v4 = (char *)v13;
      v5 = v13;
      *((_DWORD *)v13 + 26) |= 0x100u;
      g_pShimEngineModule = (PVOID)v5[6];
      LdrpPinModule((__int64)v5);
      LdrpDereferenceModule(v4);
      ShimEngineInterface = LdrpGetShimEngineInterface();
      if ( ShimEngineInterface >= 0 )
      {
        BaseAddress[1] = v18;
        LODWORD(BaseAddress[0]) = 0x2000000;
        if ( ((int (__fastcall *)(PVOID *, __int64, __int64))(__ROR8__(
                                                                g_pfnSE_InitializeEngine,
                                                                64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
               BaseAddress,
               LdrpImageEntry + 72,
               a1) >= 0 )
        {
          LdrpLoadShimEngine((PCWSTR)BaseAddress[1]);
          if ( BaseAddress[1] != v18 )
            RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress[1]);
        }
      }
      else
      {
        v11 = ShimEngineInterface;
        LdrpLogInternal(
          "minkernel\\ldr\\ldrinit.c",
          3743,
          (__int64)"LdrpInitShimEngine",
          0,
          "Getting the shim engine exports failed with status 0x%08lx\n",
          v11);
      }
    }
    else
    {
      v10 = v3;
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        3729,
        (__int64)"LdrpInitShimEngine",
        0,
        "Loading the shim engine DLL failed with status 0x%08lx\n",
        v10);
    }
  }
  else
  {
    v9 = v2;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      3710,
      (__int64)"LdrpInitShimEngine",
      0,
      "Building shim engine DLL system32 filename failed with status 0x%08lx\n",
      v9);
  }
  v7 = v16;
  if ( v16 != v15.Buffer )
    LODWORD(v7) = RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v15.Buffer);
  return (int)v7;
}
