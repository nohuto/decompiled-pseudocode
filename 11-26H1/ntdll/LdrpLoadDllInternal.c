/*
 * XREFs of LdrpLoadDllInternal @ 0x1800520B0
 * Callers:
 *     LdrpLoadForwardedDll @ 0x18003A500 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDll @ 0x180051A00 (LdrpLoadDll.c)
 *     LdrpLoadPatchImage @ 0x18015BE70 (LdrpLoadPatchImage.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpBuildForwarderLink @ 0x180050D90 (LdrpBuildForwarderLink.c)
 *     LdrpFastpthReloadedDll @ 0x180052D40 (LdrpFastpthReloadedDll.c)
 *     LdrpFindLoadedDllByHandle @ 0x180054BC0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180055460 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDetectDetour @ 0x180064B60 (LdrpDetectDetour.c)
 *     LdrpApplyPatchImage @ 0x18007115C (LdrpApplyPatchImage.c)
 *     LdrpDrainWorkQueue @ 0x180087180 (LdrpDrainWorkQueue.c)
 *     LdrpProcessWork @ 0x180087350 (LdrpProcessWork.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800BBA10 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpPinModule @ 0x1800C64AC (LdrpPinModule.c)
 *     LdrpFreeLoadContextOfNode @ 0x1800C73C0 (LdrpFreeLoadContextOfNode.c)
 *     LdrpFreeReplacedModule @ 0x1800C750C (LdrpFreeReplacedModule.c)
 *     LdrpHandleReplacedModule @ 0x1800C7590 (LdrpHandleReplacedModule.c)
 *     LdrpQueryCurrentPatch @ 0x1800CDC50 (LdrpQueryCurrentPatch.c)
 *     LdrpFreeUnicodeString @ 0x1800E04A0 (LdrpFreeUnicodeString.c)
 *     LdrpDropLastInProgressCount @ 0x1800E1CDC (LdrpDropLastInProgressCount.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x1800E2CEC (LdrpThreadTokenSetMainThreadToken.c)
 *     LdrpThreadTokenUnsetMainThreadToken @ 0x1800ED158 (LdrpThreadTokenUnsetMainThreadToken.c)
 *     LdrpLogError @ 0x1800FC390 (LdrpLogError.c)
 *     LdrpCondenseGraph @ 0x1801191B4 (LdrpCondenseGraph.c)
 *     LdrpPrepareModuleForExecution @ 0x18011ADA0 (LdrpPrepareModuleForExecution.c)
 */

__int64 __fastcall LdrpLoadDllInternal(
        __int64 ArgList,
        int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        int *a8,
        __int64 a9,
        __int16 a10)
{
  __int64 *v13; // r12
  __int64 v14; // r15
  int v15; // eax
  int *v16; // rbx
  __int64 v17; // r14
  __int16 v19; // bx
  int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // r15d
  int LoadedDllByHandle; // [rsp+40h] [rbp-48h]
  __int64 v28[8]; // [rsp+48h] [rbp-40h] BYREF
  char v30; // [rsp+A8h] [rbp+20h] BYREF

  v30 = 0;
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 1669, (__int64)"LdrpLoadDllInternal", 3, "DLL name: %wZ\n", ArgList);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 1670, (__int64)"LdrpLoadDllInternal", 5, "%wZ\n", ArgList);
  v13 = a7;
  *a7 = 0LL;
  v28[0] = 0LL;
  v14 = a6;
  if ( a4 != 9 )
  {
    v15 = LdrpFastpthReloadedDll(ArgList, a3, a6, v13);
    if ( (int)(v15 + 0x80000000) < 0 || v15 == -1073740608 )
    {
      v16 = a8;
      *a8 = v15;
      v17 = a5;
      goto LABEL_4;
    }
  }
  v19 = NtCurrentTeb()->SameTebFlags >> 12;
  LOBYTE(v19) = v19 & 1;
  a10 = v19;
  LOBYTE(a7) = v19;
  if ( !(_BYTE)v19 )
    LdrpDrainWorkQueue(0LL);
  if ( a4 == 9 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a9, &a5, 0LL);
    v17 = a5;
    if ( LoadedDllByHandle >= 0 )
    {
      if ( *(_DWORD *)(a5 + 304) == 4 )
      {
        v26 = -1073740628;
        goto LABEL_53;
      }
      v14 = a5;
      LoadedDllByHandle = LdrpQueryCurrentPatch(*(_QWORD *)(a5 + 48), &v30);
      if ( LoadedDllByHandle >= 0 && v30 )
      {
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrapi.c",
          1794,
          (__int64)"LdrpLoadDllInternal",
          2,
          "Loading patch image for the following base image: %wZ\n",
          v17 + 88);
        goto LABEL_11;
      }
    }
    v26 = LoadedDllByHandle;
LABEL_53:
    if ( *(_QWORD *)(ArgList + 8) )
      LdrpFreeUnicodeString(ArgList);
    v16 = a8;
    *a8 = v26;
    if ( !(_BYTE)a10 )
      goto LABEL_49;
    goto LABEL_4;
  }
  v17 = a5;
LABEL_11:
  LdrpThreadTokenSetMainThreadToken();
  if ( !v14 || (_BYTE)v19 || *(_DWORD *)(*(_QWORD *)(v14 + 152) + 24LL) )
  {
    LdrpDetectDetour();
    v16 = a8;
    v20 = LdrpFindOrPrepareLoadingModule(ArgList, a2, a3, a4, v17, (__int64)v28, (__int64)a8);
    if ( v20 == -1073741515 )
    {
      v21 = v28[0];
      LdrpProcessWork(*(_QWORD *)(v28[0] + 176));
      goto LABEL_16;
    }
    if ( v20 != -1073741267 && v20 < 0 )
    {
      *v16 = v20;
      v21 = v28[0];
      goto LABEL_16;
    }
  }
  else
  {
    v16 = a8;
    *a8 = -1073741515;
  }
  v21 = v28[0];
LABEL_16:
  LdrpDrainWorkQueue(1LL);
  if ( LdrpMainThreadToken )
    LdrpThreadTokenUnsetMainThreadToken();
  if ( v21 )
  {
    v22 = LdrpHandleReplacedModule(v21);
    *v13 = v22;
    if ( v21 != v22 )
    {
      LdrpFreeReplacedModule();
      v21 = *v13;
      v28[0] = v21;
      if ( *(_DWORD *)(v21 + 268) == 9 && a4 != 9 )
        *v16 = -1073740608;
    }
    if ( *(_QWORD *)(v21 + 176) )
    {
      LdrpCondenseGraph(*(_QWORD *)(v21 + 152));
      *(_QWORD *)(*(_QWORD *)(v21 + 176) + 200LL) = 0LL;
    }
    if ( *v16 >= 0 )
    {
      v23 = LdrpPrepareModuleForExecution(v21, v16);
      *v16 = v23;
      if ( v23 >= 0 )
      {
        v24 = LdrpBuildForwarderLink(v14, (char *)v21);
        *v16 = v24;
        if ( v24 >= 0 && !LdrInitState )
          LdrpPinModule(v21);
      }
      if ( a4 == 9 && *(_QWORD *)(v17 + 296) != *(_QWORD *)(v21 + 48) )
      {
        if ( *(_DWORD *)(v21 + 304) == 4 || *(_DWORD *)(v17 + 304) == 4 )
        {
          *v16 = -1073741502;
        }
        else
        {
          v25 = LdrpApplyPatchImage(v21);
          *v16 = v25;
          if ( v25 < 0 )
            LdrpLogInternal(
              (int)"minkernel\\ldr\\ldrapi.c",
              1995,
              (__int64)"LdrpLoadDllInternal",
              0,
              "Applying patch \"%wZ\" failed\n",
              v21 + 72);
        }
      }
    }
    LdrpFreeLoadContextOfNode(*(_QWORD *)(v21 + 152), v16);
    if ( *v16 < 0 && (a4 != 9 || *(_DWORD *)(v21 + 304) != 2) )
    {
      *v13 = 0LL;
      LdrpDecrementModuleLoadCountEx(v21, 0LL);
      LdrpDereferenceModule(v21);
    }
  }
  else
  {
    *v16 = -1073741801;
  }
  if ( !(_BYTE)a10 )
LABEL_49:
    LdrpDropLastInProgressCount();
LABEL_4:
  if ( a4 == 9 && v17 )
    LdrpDereferenceModule(v17);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 2120, (__int64)"LdrpLoadDllInternal", 4, "Status: 0x%08lx\n", *v16);
  return LdrpLogInternal((int)"minkernel\\ldr\\ldrapi.c", 2121, (__int64)"LdrpLoadDllInternal", 6, "%x\n", *v16);
}
