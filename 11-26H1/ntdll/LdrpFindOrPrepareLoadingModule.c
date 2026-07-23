/*
 * XREFs of LdrpFindOrPrepareLoadingModule @ 0x1800B8F40
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x180025500 (LdrpLoadDependentModuleInternal.c)
 *     LdrpLoadDllInternal @ 0x18003C630 (LdrpLoadDllInternal.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     RtlReleaseActivationContext @ 0x180038390 (RtlReleaseActivationContext.c)
 *     LdrpFindLoadedDllByName @ 0x18003D4C0 (LdrpFindLoadedDllByName.c)
 *     LdrpIncrementModuleLoadCount @ 0x18003F2D0 (LdrpIncrementModuleLoadCount.c)
 *     LdrpLoadKnownDll @ 0x180079CB0 (LdrpLoadKnownDll.c)
 *     LdrpLogEtwEvent @ 0x18007B5D8 (LdrpLogEtwEvent.c)
 *     LdrpReleaseTlsEntry @ 0x1800C1840 (LdrpReleaseTlsEntry.c)
 *     LdrpAllocateModuleEntry @ 0x1800CF3D0 (LdrpAllocateModuleEntry.c)
 *     LdrpFreeUnicodeString @ 0x1800DDD40 (LdrpFreeUnicodeString.c)
 *     LdrpDestroyNode @ 0x1800E3FA0 (LdrpDestroyNode.c)
 *     LdrpUnmapModule @ 0x18011975C (LdrpUnmapModule.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall LdrpFindOrPrepareLoadingModule(
        PUNICODE_STRING a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7)
{
  __int64 v7; // rsi
  int v9; // ebp
  PUNICODE_STRING v11; // r14
  size_t v12; // rax
  PVOID v13; // rcx
  ULONG v14; // edx
  unsigned __int16 *Heap_0; // rax
  unsigned __int16 *v16; // rbx
  __int64 ModuleEntry; // rax
  _UNICODE_STRING *v18; // rdx
  unsigned int LoadedDllByName; // edi
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rcx
  _QWORD *SchedulerSharedDataSlot; // rdx
  __int64 v24; // rax
  _QWORD *v25; // rcx
  _QWORD *v26; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rdx
  _QWORD *v30; // r14
  _QWORD *v31; // rbp
  _ACTIVATION_CONTEXT *v32; // rcx
  _DWORD *SharedData; // rcx
  __int64 v34; // rcx
  char *v35; // rcx
  __int64 v36; // rcx
  __int128 v38; // [rsp+40h] [rbp-38h] BYREF
  __int64 v39; // [rsp+98h] [rbp+20h] BYREF

  v7 = (__int64)a6;
  LODWORD(v39) = 0;
  v9 = a3;
  v11 = a1;
  *a6 = 0LL;
  v38 = 0LL;
  if ( a4 == 9 )
  {
    *((_QWORD *)&v38 + 1) = ModuleNamePlaceholderBuffer;
    v12 = 2 * wcslen(ModuleNamePlaceholderBuffer);
    v11 = (PUNICODE_STRING)&v38;
    if ( v12 >= 0xFFFE )
      LOWORD(v12) = -4;
    LOWORD(v38) = v12;
    WORD1(v38) = v12 + 2;
    goto LABEL_5;
  }
  if ( (a3 & 0x20) != 0 )
  {
    v18 = 0LL;
  }
  else
  {
    if ( (a3 & 0x200) == 0 )
    {
LABEL_5:
      v13 = LdrpHeap;
      v14 = NtdllBaseTag + 0x40000;
      *(_QWORD *)v7 = 0LL;
      Heap_0 = (unsigned __int16 *)RtlAllocateHeap_0(v13, v14 | 8, v11->Length + 210LL);
      v16 = Heap_0;
      if ( Heap_0 )
      {
        *((_QWORD *)Heap_0 + 5) = a7;
        *((_QWORD *)Heap_0 + 6) = a5;
        *((_DWORD *)Heap_0 + 8) = v9 | 0x8000;
        *((_QWORD *)Heap_0 + 2) = a2;
        *((_QWORD *)Heap_0 + 23) = -1LL;
        *((_QWORD *)Heap_0 + 1) = Heap_0 + 104;
        *Heap_0 = v11->Length;
        Heap_0[1] = v11->Length + 2;
        memmove(Heap_0 + 104, v11->Buffer, v11->Length);
        *(_WORD *)(*((_QWORD *)v16 + 1) + 2 * ((unsigned __int64)v11->Length >> 1)) = 0;
        ModuleEntry = LdrpAllocateModuleEntry(v16);
        *(_QWORD *)v7 = ModuleEntry;
        if ( ModuleEntry )
        {
          *(_DWORD *)(ModuleEntry + 268) = a4;
          if ( a4 == 9 )
            *(_DWORD *)(*(_QWORD *)v7 + 304LL) = 1;
          SharedData = NtCurrentPeb()->SharedData;
          if ( SharedData && *SharedData )
            v34 = (__int64)NtCurrentPeb()->SharedData + 554;
          else
            v34 = 2147353476LL;
          if ( *(_BYTE *)v34 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
          {
            v35 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
            if ( (*v35 & 0x20) != 0 )
              LdrpLogEtwEvent(5292, 0LL, 0, 0, v16, 0LL);
          }
        }
        else
        {
          RtlFreeHeap_0(LdrpHeap, 0, v16);
        }
      }
      v36 = *(_QWORD *)v7;
      LoadedDllByName = 0;
      if ( !*(_QWORD *)v7 )
        LoadedDllByName = -1073741801;
      if ( a4 == 9 )
      {
        return (unsigned int)-1073741515;
      }
      else if ( v36 )
      {
        return (unsigned int)LdrpLoadKnownDll(*(UNICODE_STRING **)(v36 + 176));
      }
      return LoadedDllByName;
    }
    a1 = 0LL;
    v18 = v11;
  }
  LoadedDllByName = LdrpFindLoadedDllByName(a1, v18, a3, v7, &v39);
  if ( LoadedDllByName == -1073741515 )
    goto LABEL_5;
  v20 = *(_QWORD *)v7;
  if ( (int)v39 >= 0 )
  {
    LdrpIncrementModuleLoadCount(v20, (_QWORD *)(unsigned int)v39);
  }
  else
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrmap.c",
      3567,
      (__int64)"LdrpFindOrPrepareLoadingModule",
      0,
      "Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
      v20 + 72,
      v39);
    v21 = *(_QWORD *)v7;
    LoadedDllByName = -1073741595;
    v22 = *(_QWORD *)(*(_QWORD *)v7 + 152LL);
    if ( *(_DWORD *)(v22 + 24) != -1
      && (*(_DWORD *)(*(_QWORD *)v22 - 56LL) & 0x20) == 0
      && _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 276), 0xFFFFFFFF) == 1 )
    {
      SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        v24 = 0LL;
        v25 = SchedulerSharedDataSlot;
        while ( *v25 )
        {
          v24 = (unsigned int)(v24 + 1);
          ++v25;
          if ( (unsigned int)v24 >= 8 )
            goto LABEL_24;
        }
        v26 = &SchedulerSharedDataSlot[v24];
        if ( v26 )
          *v26 = &LdrpModuleDatatableLock;
      }
LABEL_24:
      if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(
          (volatile signed __int64 *)&LdrpModuleDatatableLock,
          (unsigned __int64)SchedulerSharedDataSlot);
      v28 = *(_QWORD *)(v21 + 160);
      if ( *(_QWORD *)(v28 + 8) != v21 + 160 || (v29 = *(_QWORD **)(v21 + 168), *v29 != v21 + 160) )
        __fastfail(3u);
      *v29 = v28;
      *(_QWORD *)(v28 + 8) = v29;
      v30 = *(_QWORD **)(v21 + 152);
      v31 = (_QWORD *)*v30;
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( *(_WORD *)(v21 + 110) )
        LdrpReleaseTlsEntry(v21, 0LL);
      LdrpUnmapModule(v21);
      v32 = *(_ACTIVATION_CONTEXT **)(v21 + 136);
      if ( v32 && v32 != (_ACTIVATION_CONTEXT *)-1LL )
        RtlReleaseActivationContext(v32);
      if ( *(_QWORD *)(v21 + 80) )
        LdrpFreeUnicodeString(v21 + 72);
      RtlFreeHeap_0(LdrpHeap, 0, (PVOID)v21);
      if ( v31 == v30 )
        LdrpDestroyNode(v30);
    }
    *(_QWORD *)v7 = 0LL;
  }
  return LoadedDllByName;
}
