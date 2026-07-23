/*
 * XREFs of LdrpMapDllWithSectionHandle @ 0x18007B7D0
 * Callers:
 *     LdrpLoadKnownDll @ 0x180079CB0 (LdrpLoadKnownDll.c)
 *     LdrpMapDllNtFileName @ 0x18007A750 (LdrpMapDllNtFileName.c)
 *     LdrpMapDllPatchImage @ 0x180111640 (LdrpMapDllPatchImage.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x180079850 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpHashUnicodeString @ 0x180079960 (LdrpHashUnicodeString.c)
 *     LdrpLogDllState @ 0x18007A680 (LdrpLogDllState.c)
 *     LdrpLoadContextReplaceModule @ 0x18007C6F0 (LdrpLoadContextReplaceModule.c)
 *     LdrpLogEtwHotPatchStatus @ 0x18008FFAC (LdrpLogEtwHotPatchStatus.c)
 *     LdrpResolvePatchDllName @ 0x1800982BC (LdrpResolvePatchDllName.c)
 *     LdrpMinimalMapModule @ 0x1800D21E4 (LdrpMinimalMapModule.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800D4050 (LdrpLogNewDllLoadInternal.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x1800D7130 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x1800FB790 (LdrpInsertModuleToIndexLockHeld.c)
 *     LdrpInsertDataTableEntry @ 0x180117D60 (LdrpInsertDataTableEntry.c)
 *     LdrpProcessMappedModule @ 0x180119E48 (LdrpProcessMappedModule.c)
 *     LdrpMapAndSnapDependency @ 0x18011A410 (LdrpMapAndSnapDependency.c)
 *     LdrpCompleteMapModule @ 0x18011C230 (LdrpCompleteMapModule.c)
 *     LdrpCorProcessImports @ 0x18011CF50 (LdrpCorProcessImports.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall LdrpMapDllWithSectionHandle(__int64 a1, __int64 a2)
{
  int v4; // eax
  NTSTATUS v5; // edi
  __int64 v6; // rdx
  NTSTATUS result; // eax
  __int64 v8; // rbx
  __int64 v9; // rbx
  ULONG64 v10; // r8
  unsigned __int32 v11; // r15d
  PIMAGE_NT_HEADERS v12; // rbp
  _QWORD *SchedulerSharedDataSlot; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  int v18; // r8d
  _UNICODE_STRING *v19; // rdx
  int LoadedDllByNameLockHeld; // eax
  void *v21; // rcx
  char *v22; // r14
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r9
  _DWORD *SharedData; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  _DWORD *v29; // rcx
  __int64 v30; // rcx
  _DWORD *v31; // rcx
  _DWORD *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  bool v35; // cl
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp-278h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-270h] BYREF
  ULONG_PTR ReturnLength[2]; // [rsp+40h] [rbp-268h] BYREF
  _BYTE MemoryInformation[16]; // [rsp+50h] [rbp-258h] BYREF
  _BYTE Src[528]; // [rsp+60h] [rbp-248h] BYREF

  OutHeaders = 0LL;
  ReturnLength[0] = 0LL;
  memset_thunk_772440563353939046(MemoryInformation, 0, 0x218uLL);
  v4 = LdrpMinimalMapModule(a1, a2);
  v5 = v4;
  if ( v4 < 0 || v4 == 1073741838 )
    return v5;
  v6 = *(_QWORD *)(a1 + 56);
  if ( *(_DWORD *)(v6 + 268) != 9 )
  {
LABEL_7:
    v9 = *(_QWORD *)(a1 + 56);
    v10 = *(_QWORD *)(a1 + 168);
    v11 = v5;
    BaseAddress = 0LL;
    v5 = RtlImageNtHeaderEx(0, *(PVOID *)(v9 + 48), v10, &OutHeaders);
    if ( v5 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
      {
        v12 = OutHeaders;
        v11 = 0;
        *(_DWORD *)(v9 + 128) = OutHeaders->FileHeader.TimeDateStamp;
        *(_DWORD *)(v9 + 288) = v12->OptionalHeader.CheckSum;
        *(_DWORD *)(v9 + 64) = v12->OptionalHeader.SizeOfImage;
LABEL_10:
        if ( LdrpDllNotificationLock.OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
          return -1073741275;
        v5 = LdrpCompleteMapModule(a1, v12, v11);
        if ( v5 >= 0 )
        {
          v5 = LdrpProcessMappedModule(v9, *(unsigned int *)(a1 + 32), 1LL);
          if ( v5 >= 0 )
          {
            v24 = 2147353476LL;
            v25 = *(_QWORD *)(a1 + 48);
            SharedData = NtCurrentPeb()->SharedData;
            if ( SharedData && *SharedData )
              v27 = (__int64)NtCurrentPeb()->SharedData + 554;
            else
              v27 = 2147353476LL;
            v28 = 2147353477LL;
            if ( *(_BYTE *)v27 )
            {
              v29 = NtCurrentPeb()->SharedData;
              if ( v29 && *v29 )
                v30 = (__int64)NtCurrentPeb()->SharedData + 555;
              else
                v30 = 2147353477LL;
              if ( (*(_BYTE *)v30 & 0x10) != 0 )
                goto LABEL_54;
            }
            v31 = NtCurrentPeb()->SharedData;
            if ( v31 && *v31 )
              v24 = (__int64)NtCurrentPeb()->SharedData + 554;
            if ( *(_BYTE *)v24 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
            {
              v32 = NtCurrentPeb()->SharedData;
              if ( v32 && *v32 )
                v28 = (__int64)NtCurrentPeb()->SharedData + 555;
              if ( (*(_BYTE *)v28 & 0x20) != 0 )
              {
LABEL_54:
                v33 = 0LL;
                if ( v25 )
                  v33 = *(_QWORD *)(v25 + 48);
                LdrpLogNewDllLoadInternal(
                  *(_QWORD *)(v9 + 48),
                  v33,
                  *(unsigned int *)(v9 + 268),
                  *(unsigned __int16 *)(v9 + 72),
                  *(_QWORD *)(v9 + 80));
              }
            }
            v34 = *(_QWORD *)(a1 + 48);
            if ( v34 )
              *(_QWORD *)(v9 + 184) = *(_QWORD *)(v34 + 48);
            v35 = 0;
            if ( *(_DWORD *)(v9 + 268) == 9 && LdrpImageEntry )
              v35 = *(_QWORD *)(v9 + 184) == *(_QWORD *)(LdrpImageEntry + 48);
            if ( (*(_DWORD *)(v9 + 104) & 4) != 0 || (*(_DWORD *)(a1 + 32) & 0x800000) != 0 || v35 )
            {
              if ( (*(_DWORD *)(v9 + 104) & 0x1000000) != 0 )
              {
                return LdrpCorProcessImports(v9, v28, v24, v25);
              }
              else
              {
                LdrpMapAndSnapDependency(a1, v28, v24, v25);
                return **(_DWORD **)(a1 + 40);
              }
            }
            else
            {
              LdrpLogDllState(*(_QWORD *)(v9 + 48), v9 + 72, 0x14AEu);
              v5 = 0;
              *(_DWORD *)(*(_QWORD *)(v9 + 152) + 56LL) = 9;
            }
          }
        }
        return v5;
      }
      SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        v14 = 0LL;
        v15 = SchedulerSharedDataSlot;
        while ( *v15 )
        {
          v14 = (unsigned int)(v14 + 1);
          ++v15;
          if ( (unsigned int)v14 >= 8 )
            goto LABEL_19;
        }
        v16 = &SchedulerSharedDataSlot[v14];
        if ( v16 )
          *v16 = &LdrpModuleDatatableLock;
      }
LABEL_19:
      if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(
          (volatile signed __int64 *)&LdrpModuleDatatableLock,
          (unsigned __int64)SchedulerSharedDataSlot);
      v18 = *(_DWORD *)(a1 + 32);
      if ( (v18 & 0x20) != 0 )
        v19 = 0LL;
      else
        v19 = (_UNICODE_STRING *)(v9 + 72);
      LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(
                                  (PUNICODE_STRING)(v9 + 88),
                                  v19,
                                  v18,
                                  &BaseAddress,
                                  *(_DWORD *)(v9 + 264));
      v12 = OutHeaders;
      if ( LoadedDllByNameLockHeld == -1073741515 )
      {
        v21 = *(void **)(v9 + 48);
        LODWORD(OutHeaders) = OutHeaders->FileHeader.TimeDateStamp;
        HIDWORD(OutHeaders) = v12->OptionalHeader.SizeOfImage;
        LdrpFindLoadedDllByMappingLockHeld(v21, v12);
      }
      v22 = (char *)BaseAddress;
      if ( !BaseAddress )
      {
        LdrpInsertDataTableEntry(v9);
        LdrpInsertModuleToIndexLockHeld(v9, v12);
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( !v22 )
        goto LABEL_10;
      v23 = *(_QWORD *)(a1 + 56);
      if ( *(_DWORD *)(v23 + 268) != 9 || *((_DWORD *)v22 + 67) == 9 )
      {
        LdrpLoadContextReplaceModule(a1);
      }
      else
      {
        v5 = -1073740608;
        LdrpLogEtwHotPatchStatus(LdrpImageEntry + 88, *(_QWORD *)(a1 + 48), v23 + 72, -1073740608, 3);
        LdrpDereferenceModule(v22);
      }
    }
    return v5;
  }
  result = ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             *(PVOID *)(v6 + 48),
             MemoryMappedFilenameInformation,
             MemoryInformation,
             0x218uLL,
             ReturnLength);
  if ( result >= 0 )
  {
    result = LdrpResolvePatchDllName(Src);
    v5 = result;
    if ( result >= 0 )
    {
      v8 = *(_QWORD *)(a1 + 56);
      *(_DWORD *)(v8 + 264) = LdrpHashUnicodeString((unsigned __int16 *)(v8 + 88));
      goto LABEL_7;
    }
  }
  return result;
}
