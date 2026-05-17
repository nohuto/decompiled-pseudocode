/*
 * XREFs of LdrpMapAndSnapDependency @ 0x18011A660
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180084430 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     LdrpLoadDependentModuleA @ 0x18003ACC0 (LdrpLoadDependentModuleA.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003AF90 (LdrpLoadDependentModuleInternal.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     RtlReleaseActivationContext @ 0x18004DE10 (RtlReleaseActivationContext.c)
 *     LdrpQueueWork @ 0x180067B50 (LdrpQueueWork.c)
 *     LdrpLogEtwHotPatchStatus @ 0x18006FB5C (LdrpLogEtwHotPatchStatus.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180080000 (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlImageDirectoryEntryToData @ 0x180081250 (RtlImageDirectoryEntryToData.c)
 *     LdrpQueryCurrentPatch @ 0x1800CDC50 (LdrpQueryCurrentPatch.c)
 *     LdrpCheckPagesForTampering @ 0x180108054 (LdrpCheckPagesForTampering.c)
 *     LdrpSnapModule @ 0x18011B530 (LdrpSnapModule.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtQueryInformationProcess @ 0x18015F260 (NtQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     strlen @ 0x180164FE0 (strlen.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

char __fastcall LdrpMapAndSnapDependency(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  char v3; // r15
  unsigned int v4; // ebx
  bool v5; // zf
  _WORD *v7; // rdx
  int v8; // eax
  int DependentModuleInternal; // edi
  __int64 v10; // rax
  volatile signed __int32 *v11; // rcx
  size_t Heap_0; // rax
  int v13; // r13d
  int v14; // eax
  __int64 v15; // r15
  __int64 v16; // r12
  int v17; // r15d
  int v18; // r15d
  _DWORD *v19; // rdx
  char *v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // r12d
  unsigned int *v23; // r15
  __int64 v24; // rcx
  char *v25; // rcx
  struct _TEB *v26; // rax
  char *SchedulerSharedDataSlot; // rcx
  _QWORD *v28; // rax
  char v31[8]; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE ProcessInformation; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  size_t v35; // [rsp+70h] [rbp-90h]
  STRING SourceString; // [rsp+78h] [rbp-88h] BYREF
  __int64 v37; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v38[2]; // [rsp+90h] [rbp-70h] BYREF
  __int16 *v39; // [rsp+98h] [rbp-68h]
  __int16 v40; // [rsp+A0h] [rbp-60h] BYREF
  char v41[254]; // [rsp+A2h] [rbp-5Eh] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v3 = 0;
  v4 = 0;
  v31[0] = 0;
  v5 = (*(_DWORD *)(a1 + 32) & 0x800000) == 0;
  SourceString = 0LL;
  if ( v5 && *(_DWORD *)(v2 + 268) != 9 )
  {
    v33 = 0LL;
    if ( LdrpManifestProberRoutine )
    {
      if ( !NtCurrentPeb()->ActivationContextData || v2 != LdrpImageEntry )
      {
        v7 = *(_WORD **)(v2 + 80);
        if ( v2 == LdrpImageEntry
          && *v7 == 92
          && v7[1] == 63
          && v7[2] == 63
          && v7[3] == 92
          && v7[4]
          && v7[5] == 58
          && v7[6] == 92 )
        {
          v7 += 4;
        }
        v8 = ((__int64 (__fastcall *)(_QWORD, _WORD *, __int64 *))LdrpManifestProberRoutine)(
               *(_QWORD *)(v2 + 48),
               v7,
               &v33);
        DependentModuleInternal = v8;
        if ( v8 == -1073741809
          || (unsigned int)(v8 + 1073741687) <= 2
          || v8 == -1073741308
          || v8 == -1073741822
          || v8 == -1073741637 )
        {
          LdrpLogInternal(
            (int)"minkernel\\ldr\\ldrsnap.c",
            743,
            (__int64)"LdrpFindDllActivationContext",
            2,
            "Probing for the manifest of DLL \"%wZ\" failed with status 0x%08lx\n",
            v2 + 72,
            v8);
          DependentModuleInternal = 0;
        }
        v10 = v33;
        if ( v33 )
        {
          v11 = *(volatile signed __int32 **)(v2 + 136);
          if ( v11 )
          {
            RtlReleaseActivationContext(v11);
            v10 = v33;
          }
          *(_QWORD *)(v2 + 136) = v10;
        }
        if ( DependentModuleInternal < 0 )
        {
          LdrpLogInternal(
            (int)"minkernel\\ldr\\ldrsnap.c",
            772,
            (__int64)"LdrpFindDllActivationContext",
            0,
            "Querying the active activation context failed with status 0x%08lx\n",
            DependentModuleInternal);
LABEL_71:
          Heap_0 = *(_QWORD *)(a1 + 40);
          *(_DWORD *)Heap_0 = DependentModuleInternal;
          return Heap_0;
        }
      }
    }
  }
  LODWORD(Heap_0) = LdrpPrepareImportAddressTableForSnap(a1, a2);
  DependentModuleInternal = Heap_0;
  if ( (Heap_0 & 0x80000000) != 0LL )
    goto LABEL_71;
  v13 = 0;
  if ( LdrpIsHotPatchingEnabled && *(_QWORD *)(a1 + 56) )
  {
    LODWORD(Heap_0) = LdrpQueryCurrentPatch(*(_QWORD *)(v2 + 48), v31);
    DependentModuleInternal = Heap_0;
    if ( (Heap_0 & 0x80000000) != 0LL )
      goto LABEL_71;
    v3 = v31[0];
  }
  if ( !*(_QWORD *)(a1 + 112) && !v3 )
    goto LABEL_66;
  if ( v2 && LdrpRedirectionModule && LdrpRedirectionModule != v2 )
  {
    if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
    {
      v14 = *(_DWORD *)(v2 + 104) & 1;
    }
    else
    {
      if ( !LdrpRedirectionCalloutFunc )
      {
LABEL_42:
        *(_DWORD *)(a1 + 32) |= 0x2000000u;
        goto LABEL_43;
      }
      LOBYTE(v14) = LdrpRedirectionCalloutFunc(*(_QWORD *)(v2 + 80));
    }
    if ( (_BYTE)v14 )
      goto LABEL_42;
  }
LABEL_43:
  v15 = *(_QWORD *)(a1 + 56);
  LODWORD(v33) = 0;
  ProcessInformation = 0LL;
  Heap_0 = (size_t)RtlImageDirectoryEntryToData(*(_QWORD *)(v15 + 48), 1, 1u, &v33);
  v16 = Heap_0;
  v35 = Heap_0;
  if ( v15 == LdrpImageEntry )
  {
    LOBYTE(Heap_0) = ((unsigned __int64)qword_1801E3508 >> 44) & 3;
    if ( (_BYTE)Heap_0 == 1 )
    {
      RtlImageNtHeaderEx(3, *(_QWORD *)(v15 + 48), 0LL, &ProcessInformation);
      if ( LdrpCheckPagesForTampering((__int64)ProcessInformation + 144, 8LL)
        || (LOBYTE(Heap_0) = LdrpCheckPagesForTampering(v16, (unsigned int)v33), (_BYTE)Heap_0) )
      {
        LOBYTE(Heap_0) = LdrpImageEntry;
        ProcessInformation = 0LL;
        v34 = 0LL;
        v37 = 0LL;
        if ( *(_QWORD *)(a1 + 56) == LdrpImageEntry )
        {
          LODWORD(Heap_0) = NtQueryInformationProcess(
                              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                              (PROCESSINFOCLASS)89,
                              &ProcessInformation,
                              8u,
                              0LL);
          v17 = Heap_0;
          if ( (Heap_0 & 0x80000000) == 0LL )
          {
            v17 = ZwMapViewOfSection(ProcessInformation, -1LL, &v34, 0LL, 0LL, 0LL, &v37, 1, 0x40000, 2);
            if ( v17 >= 0 )
              *(_QWORD *)(a1 + 192) = v34;
            LOBYTE(Heap_0) = NtClose(ProcessInformation);
          }
          if ( v17 >= 0 )
          {
            Heap_0 = (size_t)RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 192), 1, 1u, &v33);
            v16 = Heap_0;
            v35 = Heap_0;
          }
        }
      }
    }
  }
  v18 = 0;
  if ( !v16 )
    goto LABEL_62;
  v19 = (_DWORD *)(v16 + 16);
  do
  {
    if ( !*(v19 - 1) )
      break;
    LODWORD(Heap_0) = *v19;
    if ( !*v19 )
      break;
    ++v18;
    if ( *(_QWORD *)((unsigned int)Heap_0 + *(_QWORD *)(v2 + 48)) )
      ++v13;
    v19 += 5;
    LOBYTE(Heap_0) = (_BYTE)v19 - 16;
  }
  while ( v19 != (_DWORD *)16 );
  if ( !v13 )
  {
LABEL_62:
    if ( !v31[0] )
      goto LABEL_65;
  }
  Heap_0 = RtlAllocateHeap_0();
  *(_QWORD *)(a1 + 88) = Heap_0;
  if ( !Heap_0 )
  {
    DependentModuleInternal = -1073741801;
LABEL_65:
    v3 = v31[0];
    goto LABEL_66;
  }
  LOBYTE(Heap_0) = v13 + 1;
  *(_DWORD *)(a1 + 104) = v18;
  *(_DWORD *)(a1 + 108) = v13 + 1;
  *(_QWORD *)(a1 + 136) = v16;
  if ( v31[0] )
  {
    LOBYTE(Heap_0) = v13 + 2;
    *(_DWORD *)(a1 + 108) = v13 + 2;
  }
  v22 = 0;
  ProcessInformation = 0LL;
  if ( v35 )
  {
    v23 = (unsigned int *)(v35 + 16);
    do
    {
      v24 = *(v23 - 1);
      if ( !(_DWORD)v24 )
        break;
      Heap_0 = *v23;
      if ( !(_DWORD)Heap_0 )
        break;
      v20 = *(char **)(v2 + 48);
      if ( *(_QWORD *)&v20[Heap_0] )
      {
        v5 = &v20[v24] == 0LL;
        v25 = &v20[v24];
        *(_QWORD *)&SourceString.Length = 0LL;
        SourceString.Buffer = v25;
        if ( !v5 )
        {
          Heap_0 = strlen(v25);
          if ( Heap_0 > 0xFFFE )
          {
            DependentModuleInternal = -1073741562;
            break;
          }
          SourceString.Length = Heap_0;
          SourceString.MaximumLength = Heap_0 + 1;
        }
        LODWORD(Heap_0) = LdrpLoadDependentModuleA(
                            &SourceString,
                            a1,
                            v2,
                            0,
                            (_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * v22),
                            (__int64)&ProcessInformation);
        DependentModuleInternal = Heap_0;
        if ( (Heap_0 & 0x80000000) != 0LL )
          break;
      }
      v23 += 5;
      ++v22;
      LOBYTE(Heap_0) = (_BYTE)v23 - 16;
    }
    while ( v23 != (unsigned int *)16 );
  }
  v3 = v31[0];
  if ( v31[0] )
  {
    v38[1] = 0;
    memset_thunk_772440563353939046(v41, 0, 0xFEuLL);
    v38[0] = 0x1000000;
    v39 = &v40;
    v40 = 0;
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrsnap.c",
      1829,
      (__int64)"LdrpLoadDependentModuleW",
      2,
      "Loading a patch image.\n");
    DependentModuleInternal = LdrpLoadDependentModuleInternal(
                                (char)v38,
                                a1,
                                v2,
                                9,
                                (__int64 *)(a1 + 96),
                                (__int64 *)&ProcessInformation);
    if ( DependentModuleInternal < 0 )
    {
      *(_QWORD *)(a1 + 96) = 0LL;
      **(_DWORD **)(a1 + 40) = DependentModuleInternal;
    }
    if ( &v40 != v39 )
      RtlFreeHeap_0();
    v38[0] = 0x1000000;
    Heap_0 = (size_t)&v40;
    v39 = &v40;
    v40 = 0;
    if ( DependentModuleInternal < 0 )
      LOBYTE(Heap_0) = LdrpLogEtwHotPatchStatus(
                         (unsigned __int16 *)(LdrpImageEntry + 88),
                         v2,
                         (unsigned __int16 *)(v2 + 72),
                         DependentModuleInternal,
                         5);
    v3 = v31[0];
  }
  if ( ProcessInformation )
    LOBYTE(Heap_0) = RtlFreeHeap_0();
  if ( DependentModuleInternal >= 0 )
  {
    v26 = NtCurrentTeb();
    SchedulerSharedDataSlot = (char *)v26->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      v28 = v26->SchedulerSharedDataSlot;
      while ( *v28 )
      {
        ++v4;
        ++v28;
        if ( v4 >= 8 )
          goto LABEL_105;
      }
      v20 = &SchedulerSharedDataSlot[8 * v4];
      if ( v20 )
        *(_QWORD *)v20 = &LdrpModuleDatatableLock;
    }
LABEL_105:
    if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(&LdrpModuleDatatableLock, (__int64)v20);
    v13 = *(_DWORD *)(a1 + 108) - 1;
    *(_DWORD *)(a1 + 108) = v13;
    LOBYTE(Heap_0) = (unsigned __int8)RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  }
LABEL_66:
  v21 = *(_QWORD *)(a1 + 112);
  if ( !v21 && v3 )
  {
    Heap_0 = *(_QWORD *)(v2 + 152);
LABEL_69:
    *(_DWORD *)(Heap_0 + 56) = 5;
    goto LABEL_70;
  }
  if ( !v13 )
  {
    Heap_0 = *(_QWORD *)(v2 + 152);
    if ( !v21 )
      goto LABEL_69;
    *(_DWORD *)(Heap_0 + 56) = 4;
    if ( *(_QWORD *)(a1 + 48) )
    {
      LOBYTE(Heap_0) = (unsigned __int8)LdrpQueueWork(a1);
    }
    else
    {
      LODWORD(Heap_0) = LdrpSnapModule(a1);
      DependentModuleInternal = Heap_0;
    }
  }
LABEL_70:
  if ( DependentModuleInternal < 0 )
    goto LABEL_71;
  return Heap_0;
}
