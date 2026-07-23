/*
 * XREFs of LdrpMapAndSnapDependency @ 0x18011A410
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18007B7D0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     LdrpLoadDependentModuleA @ 0x180025230 (LdrpLoadDependentModuleA.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025500 (LdrpLoadDependentModuleInternal.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlReleaseActivationContext @ 0x180038390 (RtlReleaseActivationContext.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x1800773A0 (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlImageDirectoryEntryToData @ 0x1800785F0 (RtlImageDirectoryEntryToData.c)
 *     LdrpQueueWork @ 0x180087FA0 (LdrpQueueWork.c)
 *     LdrpLogEtwHotPatchStatus @ 0x18008FFAC (LdrpLogEtwHotPatchStatus.c)
 *     LdrpQueryCurrentPatch @ 0x1800CB3C0 (LdrpQueryCurrentPatch.c)
 *     LdrpCheckPagesForTampering @ 0x180107A54 (LdrpCheckPagesForTampering.c)
 *     LdrpSnapModule @ 0x18011B2E0 (LdrpSnapModule.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtQueryInformationProcess @ 0x18015F160 (NtQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x18015F340 (ZwMapViewOfSection.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     strlen @ 0x180164EE0 (strlen.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

void __fastcall LdrpMapAndSnapDependency(__int64 a1)
{
  __int64 v1; // r14
  char v2; // r15
  unsigned int v3; // ebx
  bool v4; // zf
  _WORD *v6; // rdx
  int v7; // eax
  int CurrentPatch; // edi
  __int64 v9; // rax
  _ACTIVATION_CONTEXT *v10; // rcx
  int v11; // r13d
  int v12; // eax
  __int64 v13; // r15
  char *v14; // r12
  NTSTATUS v15; // r15d
  unsigned int v16; // r15d
  _DWORD *v17; // rdx
  PVOID Heap_0; // rax
  char *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // r12d
  unsigned int *i; // r15
  __int64 v24; // rcx
  __int64 v25; // rax
  char *v26; // rcx
  size_t v27; // rax
  struct _TEB *v28; // rax
  char *SchedulerSharedDataSlot; // rcx
  _QWORD *v30; // rax
  char v32[8]; // [rsp+50h] [rbp-B0h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Size[2]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-98h] BYREF
  char *v36; // [rsp+70h] [rbp-90h]
  ANSI_STRING SourceString; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v39[2]; // [rsp+90h] [rbp-70h] BYREF
  PVOID v40; // [rsp+98h] [rbp-68h]
  __int16 v41; // [rsp+A0h] [rbp-60h] BYREF
  char v42[254]; // [rsp+A2h] [rbp-5Eh] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = 0;
  v3 = 0;
  v32[0] = 0;
  v4 = (*(_DWORD *)(a1 + 32) & 0x800000) == 0;
  SourceString = 0LL;
  if ( !v4 )
    goto LABEL_27;
  if ( *(_DWORD *)(v1 + 268) == 9 )
    goto LABEL_27;
  *(_QWORD *)Size = 0LL;
  if ( !LdrpManifestProberRoutine || NtCurrentPeb()->ActivationContextData && v1 == LdrpImageEntry )
    goto LABEL_27;
  v6 = *(_WORD **)(v1 + 80);
  if ( v1 == LdrpImageEntry
    && *v6 == 92
    && v6[1] == 63
    && v6[2] == 63
    && v6[3] == 92
    && v6[4]
    && v6[5] == 58
    && v6[6] == 92 )
  {
    v6 += 4;
  }
  v7 = ((__int64 (__fastcall *)(_QWORD, _WORD *, ULONG *))LdrpManifestProberRoutine)(*(_QWORD *)(v1 + 48), v6, Size);
  CurrentPatch = v7;
  if ( v7 == -1073741809
    || (unsigned int)(v7 + 1073741687) <= 2
    || v7 == -1073741308
    || v7 == -1073741822
    || v7 == -1073741637 )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrsnap.c",
      743,
      (__int64)"LdrpFindDllActivationContext",
      2,
      "Probing for the manifest of DLL \"%wZ\" failed with status 0x%08lx\n",
      v1 + 72,
      v7);
    CurrentPatch = 0;
  }
  v9 = *(_QWORD *)Size;
  if ( *(_QWORD *)Size )
  {
    v10 = *(_ACTIVATION_CONTEXT **)(v1 + 136);
    if ( v10 )
    {
      RtlReleaseActivationContext(v10);
      v9 = *(_QWORD *)Size;
    }
    *(_QWORD *)(v1 + 136) = v9;
  }
  if ( CurrentPatch >= 0 )
  {
LABEL_27:
    CurrentPatch = LdrpPrepareImportAddressTableForSnap(a1);
    if ( CurrentPatch < 0 )
      goto LABEL_71;
    v11 = 0;
    if ( LdrpIsHotPatchingEnabled && *(_QWORD *)(a1 + 56) )
    {
      CurrentPatch = LdrpQueryCurrentPatch(*(_QWORD *)(v1 + 48), v32);
      if ( CurrentPatch < 0 )
        goto LABEL_71;
      v2 = v32[0];
    }
    if ( !*(_QWORD *)(a1 + 112) && !v2 )
      goto LABEL_66;
    if ( v1 && LdrpRedirectionModule && LdrpRedirectionModule != v1 )
    {
      if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
      {
        v12 = *(_DWORD *)(v1 + 104) & 1;
      }
      else
      {
        if ( !LdrpRedirectionCalloutFunc )
        {
LABEL_42:
          *(_DWORD *)(a1 + 32) |= 0x2000000u;
          goto LABEL_43;
        }
        LOBYTE(v12) = LdrpRedirectionCalloutFunc(*(_QWORD *)(v1 + 80));
      }
      if ( (_BYTE)v12 )
        goto LABEL_42;
    }
LABEL_43:
    v13 = *(_QWORD *)(a1 + 56);
    Size[0] = 0;
    OutHeaders = 0LL;
    v14 = (char *)RtlImageDirectoryEntryToData(*(PVOID *)(v13 + 48), 1u, 1u, Size);
    v36 = v14;
    if ( v13 == LdrpImageEntry && ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 44) & 3) == 1 )
    {
      RtlImageNtHeaderEx(3u, *(PVOID *)(v13 + 48), 0LL, &OutHeaders);
      if ( LdrpCheckPagesForTampering((__int64)&OutHeaders->OptionalHeader.DataDirectory[1], 8LL)
        || LdrpCheckPagesForTampering((__int64)v14, Size[0]) )
      {
        OutHeaders = 0LL;
        BaseAddress = 0LL;
        ViewSize = 0LL;
        if ( *(_QWORD *)(a1 + 56) == LdrpImageEntry )
        {
          v15 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessImageSection, &OutHeaders, 8u, 0LL);
          if ( v15 >= 0 )
          {
            v15 = ZwMapViewOfSection(
                    OutHeaders,
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    &BaseAddress,
                    0LL,
                    0LL,
                    0LL,
                    &ViewSize,
                    ViewShare,
                    0x40000u,
                    2u);
            if ( v15 >= 0 )
              *(_QWORD *)(a1 + 192) = BaseAddress;
            NtClose(OutHeaders);
          }
          if ( v15 >= 0 )
          {
            v14 = (char *)RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 192), 1u, 1u, Size);
            v36 = v14;
          }
        }
      }
    }
    v16 = 0;
    if ( !v14 )
      goto LABEL_62;
    v17 = v14 + 16;
    do
    {
      if ( !*(v17 - 1) || !*v17 )
        break;
      ++v16;
      if ( *(_QWORD *)((unsigned int)*v17 + *(_QWORD *)(v1 + 48)) )
        ++v11;
      v17 += 5;
    }
    while ( v17 != (_DWORD *)16 );
    if ( !v11 )
    {
LABEL_62:
      if ( !v32[0] )
        goto LABEL_65;
    }
    Heap_0 = RtlAllocateHeap_0(LdrpHeap, (NtdllBaseTag + 1572864) | 8, 8LL * v16);
    *(_QWORD *)(a1 + 88) = Heap_0;
    if ( !Heap_0 )
    {
      CurrentPatch = -1073741801;
LABEL_65:
      v2 = v32[0];
      goto LABEL_66;
    }
    *(_DWORD *)(a1 + 104) = v16;
    *(_DWORD *)(a1 + 108) = v11 + 1;
    *(_QWORD *)(a1 + 136) = v14;
    if ( v32[0] )
      *(_DWORD *)(a1 + 108) = v11 + 2;
    v22 = 0;
    OutHeaders = 0LL;
    if ( v36 )
    {
      for ( i = (unsigned int *)(v36 + 16); i != (unsigned int *)16; i += 5 )
      {
        v24 = *(i - 1);
        if ( !(_DWORD)v24 )
          break;
        v25 = *i;
        if ( !(_DWORD)v25 )
          break;
        v19 = *(char **)(v1 + 48);
        if ( *(_QWORD *)&v19[v25] )
        {
          v4 = &v19[v24] == 0LL;
          v26 = &v19[v24];
          *(_QWORD *)&SourceString.Length = 0LL;
          SourceString.Buffer = v26;
          if ( !v4 )
          {
            v27 = strlen(v26);
            if ( v27 > 0xFFFE )
            {
              CurrentPatch = -1073741562;
              break;
            }
            SourceString.Length = v27;
            SourceString.MaximumLength = v27 + 1;
          }
          CurrentPatch = LdrpLoadDependentModuleA(
                           &SourceString,
                           a1,
                           v1,
                           0,
                           (_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * v22),
                           (__int64)&OutHeaders);
          if ( CurrentPatch < 0 )
            break;
        }
        ++v22;
      }
    }
    v2 = v32[0];
    if ( v32[0] )
    {
      v39[1] = 0;
      memset_thunk_772440563353939046(v42, 0, 0xFEuLL);
      v39[0] = 0x1000000;
      v40 = &v41;
      v41 = 0;
      LdrpLogInternal(
        "minkernel\\ldr\\ldrsnap.c",
        1829,
        (__int64)"LdrpLoadDependentModuleW",
        2,
        "Loading a patch image.\n");
      CurrentPatch = LdrpLoadDependentModuleInternal((__int64)v39, a1, v1, 9, (PVOID *)(a1 + 96), &OutHeaders);
      if ( CurrentPatch < 0 )
      {
        *(_QWORD *)(a1 + 96) = 0LL;
        **(_DWORD **)(a1 + 40) = CurrentPatch;
      }
      if ( &v41 != v40 )
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v40);
      v39[0] = 0x1000000;
      v40 = &v41;
      v41 = 0;
      if ( CurrentPatch < 0 )
        LdrpLogEtwHotPatchStatus(
          (unsigned __int16 *)(LdrpImageEntry + 88),
          v1,
          (unsigned __int16 *)(v1 + 72),
          CurrentPatch,
          5);
      v2 = v32[0];
    }
    if ( OutHeaders )
      RtlFreeHeap_0(LdrpHeap, 0, OutHeaders);
    if ( CurrentPatch >= 0 )
    {
      v28 = NtCurrentTeb();
      SchedulerSharedDataSlot = (char *)v28->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        v30 = v28->SchedulerSharedDataSlot;
        while ( *v30 )
        {
          ++v3;
          ++v30;
          if ( v3 >= 8 )
            goto LABEL_105;
        }
        v19 = &SchedulerSharedDataSlot[8 * v3];
        if ( v19 )
          *(_QWORD *)v19 = &LdrpModuleDatatableLock;
      }
LABEL_105:
      if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
        RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)&LdrpModuleDatatableLock, (unsigned __int64)v19);
      v11 = *(_DWORD *)(a1 + 108) - 1;
      *(_DWORD *)(a1 + 108) = v11;
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    }
LABEL_66:
    v20 = *(_QWORD *)(a1 + 112);
    if ( !v20 && v2 )
    {
      v21 = *(_QWORD *)(v1 + 152);
LABEL_69:
      *(_DWORD *)(v21 + 56) = 5;
      goto LABEL_70;
    }
    if ( !v11 )
    {
      v21 = *(_QWORD *)(v1 + 152);
      if ( !v20 )
        goto LABEL_69;
      *(_DWORD *)(v21 + 56) = 4;
      if ( *(_QWORD *)(a1 + 48) )
        LdrpQueueWork(a1);
      else
        CurrentPatch = LdrpSnapModule(a1);
    }
LABEL_70:
    if ( CurrentPatch >= 0 )
      return;
    goto LABEL_71;
  }
  LdrpLogInternal(
    "minkernel\\ldr\\ldrsnap.c",
    772,
    (__int64)"LdrpFindDllActivationContext",
    0,
    "Querying the active activation context failed with status 0x%08lx\n",
    CurrentPatch);
LABEL_71:
  **(_DWORD **)(a1 + 40) = CurrentPatch;
}
