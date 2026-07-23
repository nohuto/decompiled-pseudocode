/*
 * XREFs of LdrpLoadDllInternal @ 0x18003C630
 * Callers:
 *     LdrpLoadForwardedDll @ 0x180024A70 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDll @ 0x18003BF80 (LdrpLoadDll.c)
 *     LdrpLoadPatchImage @ 0x18015BD30 (LdrpLoadPatchImage.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpBuildForwarderLink @ 0x18003B310 (LdrpBuildForwarderLink.c)
 *     LdrpFastpthReloadedDll @ 0x18003D2C0 (LdrpFastpthReloadedDll.c)
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18003F9E0 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDrainWorkQueue @ 0x18007E4F0 (LdrpDrainWorkQueue.c)
 *     LdrpProcessWork @ 0x18007E6C0 (LdrpProcessWork.c)
 *     LdrpDetectDetour @ 0x180084FB0 (LdrpDetectDetour.c)
 *     LdrpApplyPatchImage @ 0x1800915AC (LdrpApplyPatchImage.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800B8F40 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpPinModule @ 0x1800C3C6C (LdrpPinModule.c)
 *     LdrpFreeLoadContextOfNode @ 0x1800C4B80 (LdrpFreeLoadContextOfNode.c)
 *     LdrpFreeReplacedModule @ 0x1800C4CCC (LdrpFreeReplacedModule.c)
 *     LdrpHandleReplacedModule @ 0x1800C4D50 (LdrpHandleReplacedModule.c)
 *     LdrpQueryCurrentPatch @ 0x1800CB3C0 (LdrpQueryCurrentPatch.c)
 *     LdrpFreeUnicodeString @ 0x1800DDD40 (LdrpFreeUnicodeString.c)
 *     LdrpDropLastInProgressCount @ 0x1800DF57C (LdrpDropLastInProgressCount.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x1800E154C (LdrpThreadTokenSetMainThreadToken.c)
 *     LdrpThreadTokenUnsetMainThreadToken @ 0x1800EC5F8 (LdrpThreadTokenUnsetMainThreadToken.c)
 *     LdrpLogError @ 0x1800FBAE0 (LdrpLogError.c)
 *     LdrpCondenseGraph @ 0x180118F64 (LdrpCondenseGraph.c)
 *     LdrpPrepareModuleForExecution @ 0x18011AB50 (LdrpPrepareModuleForExecution.c)
 */

__int64 __fastcall LdrpLoadDllInternal(
        _UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _DWORD *a5,
        _QWORD *a6,
        __int64 *a7,
        int *a8,
        __int64 a9,
        __int16 a10)
{
  __int64 *v12; // r12
  _QWORD *v13; // r15
  int v14; // eax
  int *v15; // rbx
  _DWORD *v16; // r14
  __int16 v18; // bx
  int v19; // eax
  __int64 v20; // rdx
  char *v21; // rsi
  __int64 v22; // rax
  void *v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // r15d
  int LoadedDllByHandle; // [rsp+40h] [rbp-48h]
  PVOID BaseAddress[8]; // [rsp+48h] [rbp-40h] BYREF
  char v30; // [rsp+A8h] [rbp+20h] BYREF

  v30 = 0;
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 1669, (__int64)"LdrpLoadDllInternal", 3, "DLL name: %wZ\n", a1);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 1670, (__int64)"LdrpLoadDllInternal", 5, "%wZ\n", a1);
  v12 = a7;
  *a7 = 0LL;
  BaseAddress[0] = 0LL;
  v13 = a6;
  if ( a4 != 9 )
  {
    v14 = LdrpFastpthReloadedDll(a1);
    if ( (int)(v14 + 0x80000000) < 0 || v14 == -1073740608 )
    {
      v15 = a8;
      *a8 = v14;
      v16 = a5;
      goto LABEL_4;
    }
  }
  v18 = NtCurrentTeb()->SameTebFlags >> 12;
  LOBYTE(v18) = v18 & 1;
  a10 = v18;
  LOBYTE(a7) = v18;
  if ( !(_BYTE)v18 )
    LdrpDrainWorkQueue(0LL);
  if ( a4 == 9 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a9, &a5, 0LL);
    v16 = a5;
    if ( LoadedDllByHandle >= 0 )
    {
      if ( a5[76] == 4 )
      {
        v27 = -1073740628;
        goto LABEL_53;
      }
      v13 = a5;
      LoadedDllByHandle = LdrpQueryCurrentPatch(*((_QWORD *)a5 + 6), &v30);
      if ( LoadedDllByHandle >= 0 && v30 )
      {
        LdrpLogInternal(
          "minkernel\\ldr\\ldrapi.c",
          1794,
          (__int64)"LdrpLoadDllInternal",
          2,
          "Loading patch image for the following base image: %wZ\n",
          v16 + 22);
        goto LABEL_11;
      }
    }
    v27 = LoadedDllByHandle;
LABEL_53:
    if ( a1->Buffer )
      LdrpFreeUnicodeString(a1);
    v15 = a8;
    *a8 = v27;
    if ( !(_BYTE)a10 )
      goto LABEL_49;
    goto LABEL_4;
  }
  v16 = a5;
LABEL_11:
  LdrpThreadTokenSetMainThreadToken();
  if ( !v13 || (_BYTE)v18 || *(_DWORD *)(v13[19] + 24LL) )
  {
    LdrpDetectDetour();
    v15 = a8;
    v19 = LdrpFindOrPrepareLoadingModule(a1, (__int64)v16, (__int64)BaseAddress, (__int64)a8);
    if ( v19 == -1073741515 )
    {
      LOBYTE(v20) = 1;
      v21 = (char *)BaseAddress[0];
      LdrpProcessWork(*((_QWORD *)BaseAddress[0] + 22), v20);
      goto LABEL_16;
    }
    if ( v19 != -1073741267 && v19 < 0 )
    {
      *v15 = v19;
      v21 = (char *)BaseAddress[0];
      goto LABEL_16;
    }
  }
  else
  {
    v15 = a8;
    *a8 = -1073741515;
  }
  v21 = (char *)BaseAddress[0];
LABEL_16:
  LdrpDrainWorkQueue(1LL);
  if ( LdrpMainThreadToken )
    LdrpThreadTokenUnsetMainThreadToken();
  if ( v21 )
  {
    v22 = LdrpHandleReplacedModule(v21);
    *v12 = v22;
    if ( v21 != (char *)v22 )
    {
      LdrpFreeReplacedModule(v23);
      v21 = (char *)*v12;
      BaseAddress[0] = v21;
      if ( *((_DWORD *)v21 + 67) == 9 && a4 != 9 )
        *v15 = -1073740608;
    }
    if ( *((_QWORD *)v21 + 22) )
    {
      LdrpCondenseGraph(*((_QWORD *)v21 + 19));
      *(_QWORD *)(*((_QWORD *)v21 + 22) + 200LL) = 0LL;
    }
    if ( *v15 >= 0 )
    {
      v24 = LdrpPrepareModuleForExecution(v21, v15);
      *v15 = v24;
      if ( v24 >= 0 )
      {
        v25 = LdrpBuildForwarderLink((__int64)v13, v21);
        *v15 = v25;
        if ( v25 >= 0 && !LdrInitState )
          LdrpPinModule(v21);
      }
      if ( a4 == 9 && *((_QWORD *)v16 + 37) != *((_QWORD *)v21 + 6) )
      {
        if ( *((_DWORD *)v21 + 76) == 4 || v16[76] == 4 )
        {
          *v15 = -1073741502;
        }
        else
        {
          v26 = LdrpApplyPatchImage(v21);
          *v15 = v26;
          if ( v26 < 0 )
            LdrpLogInternal(
              "minkernel\\ldr\\ldrapi.c",
              1995,
              (__int64)"LdrpLoadDllInternal",
              0,
              "Applying patch \"%wZ\" failed\n",
              v21 + 72);
        }
      }
    }
    LdrpFreeLoadContextOfNode(*((_QWORD *)v21 + 19), v15);
    if ( *v15 < 0 && (a4 != 9 || *((_DWORD *)v21 + 76) != 2) )
    {
      *v12 = 0LL;
      LdrpDecrementModuleLoadCountEx(v21, 0LL);
      LdrpDereferenceModule(v21);
    }
  }
  else
  {
    *v15 = -1073741801;
  }
  if ( !(_BYTE)a10 )
LABEL_49:
    LdrpDropLastInProgressCount();
LABEL_4:
  if ( a4 == 9 && v16 )
    LdrpDereferenceModule(v16);
  LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 2120, (__int64)"LdrpLoadDllInternal", 4, "Status: 0x%08lx\n", *v15);
  return LdrpLogInternal("minkernel\\ldr\\ldrapi.c", 2121, (__int64)"LdrpLoadDllInternal", 6, "%x\n", *v15);
}
