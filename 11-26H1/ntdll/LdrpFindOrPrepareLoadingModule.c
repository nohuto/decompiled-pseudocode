/*
 * XREFs of LdrpFindOrPrepareLoadingModule @ 0x1800BBA10
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x18003AF90 (LdrpLoadDependentModuleInternal.c)
 *     LdrpLoadDllInternal @ 0x1800520B0 (LdrpLoadDllInternal.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     RtlReleaseActivationContext @ 0x18004DE10 (RtlReleaseActivationContext.c)
 *     LdrpFindLoadedDllByName @ 0x180052F40 (LdrpFindLoadedDllByName.c)
 *     LdrpIncrementModuleLoadCount @ 0x180054D50 (LdrpIncrementModuleLoadCount.c)
 *     LdrpReleaseTlsEntry @ 0x18007E780 (LdrpReleaseTlsEntry.c)
 *     LdrpLoadKnownDll @ 0x180082910 (LdrpLoadKnownDll.c)
 *     LdrpLogEtwEvent @ 0x180084238 (LdrpLogEtwEvent.c)
 *     LdrpAllocateModuleEntry @ 0x1800D1C60 (LdrpAllocateModuleEntry.c)
 *     LdrpFreeUnicodeString @ 0x1800E04A0 (LdrpFreeUnicodeString.c)
 *     LdrpDestroyNode @ 0x1800E5D90 (LdrpDestroyNode.c)
 *     LdrpUnmapModule @ 0x1801199AC (LdrpUnmapModule.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall LdrpFindOrPrepareLoadingModule(
        __int128 *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7)
{
  __int64 v7; // rsi
  const void **v11; // r14
  size_t v12; // rax
  __int64 Heap_0; // rax
  __int64 v14; // rbx
  __int64 ModuleEntry; // rax
  __int64 v16; // rdx
  unsigned int LoadedDllByName; // edi
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rcx
  _QWORD *SchedulerSharedDataSlot; // rdx
  __int64 v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rcx
  __int64 v26; // r8
  _QWORD *v27; // rdx
  _QWORD *v28; // r14
  _QWORD *v29; // rbp
  volatile signed __int32 *v30; // rcx
  _DWORD *SharedData; // rcx
  __int64 v32; // rcx
  char *v33; // rcx
  __int64 v34; // rcx
  __int128 v36; // [rsp+40h] [rbp-38h] BYREF
  int v37; // [rsp+98h] [rbp+20h] BYREF

  v7 = (__int64)a6;
  v37 = 0;
  v11 = (const void **)a1;
  *a6 = 0LL;
  v36 = 0LL;
  if ( a4 == 9 )
  {
    *((_QWORD *)&v36 + 1) = ModuleNamePlaceholderBuffer;
    v12 = 2 * wcslen(ModuleNamePlaceholderBuffer);
    v11 = (const void **)&v36;
    if ( v12 >= 0xFFFE )
      LOWORD(v12) = -4;
    LOWORD(v36) = v12;
    WORD1(v36) = v12 + 2;
    goto LABEL_5;
  }
  if ( (a3 & 0x20) != 0 )
  {
    v16 = 0LL;
  }
  else
  {
    if ( (a3 & 0x200) == 0 )
    {
LABEL_5:
      *(_QWORD *)v7 = 0LL;
      Heap_0 = RtlAllocateHeap_0();
      v14 = Heap_0;
      if ( Heap_0 )
      {
        *(_QWORD *)(Heap_0 + 40) = a7;
        *(_QWORD *)(Heap_0 + 48) = a5;
        *(_DWORD *)(Heap_0 + 32) = a3 | 0x8000;
        *(_QWORD *)(Heap_0 + 16) = a2;
        *(_QWORD *)(Heap_0 + 184) = -1LL;
        *(_QWORD *)(Heap_0 + 8) = Heap_0 + 208;
        *(_WORD *)Heap_0 = *(_WORD *)v11;
        *(_WORD *)(Heap_0 + 2) = *(_WORD *)v11 + 2;
        memmove((void *)(Heap_0 + 208), v11[1], *(unsigned __int16 *)v11);
        *(_WORD *)(*(_QWORD *)(v14 + 8) + 2 * ((unsigned __int64)*(unsigned __int16 *)v11 >> 1)) = 0;
        ModuleEntry = LdrpAllocateModuleEntry(v14);
        *(_QWORD *)v7 = ModuleEntry;
        if ( ModuleEntry )
        {
          *(_DWORD *)(ModuleEntry + 268) = a4;
          if ( a4 == 9 )
            *(_DWORD *)(*(_QWORD *)v7 + 304LL) = 1;
          SharedData = NtCurrentPeb()->SharedData;
          if ( SharedData && *SharedData )
            v32 = (__int64)NtCurrentPeb()->SharedData + 554;
          else
            v32 = 2147353476LL;
          if ( *(_BYTE *)v32 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
          {
            v33 = (unsigned int)RtlGetCurrentServiceSessionId()
                ? (char *)NtCurrentPeb()->SharedData + 555
                : (char *)2147353477;
            if ( (*v33 & 0x20) != 0 )
              LdrpLogEtwEvent(5292, 0LL, 0, 0, (unsigned __int16 *)v14, 0LL);
          }
        }
        else
        {
          RtlFreeHeap_0();
        }
      }
      v34 = *(_QWORD *)v7;
      LoadedDllByName = 0;
      if ( !*(_QWORD *)v7 )
        LoadedDllByName = -1073741801;
      if ( a4 == 9 )
      {
        return (unsigned int)-1073741515;
      }
      else if ( v34 )
      {
        return (unsigned int)LdrpLoadKnownDll(*(char **)(v34 + 176));
      }
      return LoadedDllByName;
    }
    a1 = 0LL;
    v16 = (__int64)v11;
  }
  LoadedDllByName = LdrpFindLoadedDllByName(a1, v16, a3, v7, &v37);
  if ( LoadedDllByName == -1073741515 )
    goto LABEL_5;
  v18 = *(_QWORD *)v7;
  if ( v37 >= 0 )
  {
    LdrpIncrementModuleLoadCount(v18, (_QWORD *)(unsigned int)v37);
  }
  else
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrmap.c",
      3522,
      (__int64)"LdrpFindOrPrepareLoadingModule",
      0,
      "Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
      v18 + 72,
      v37);
    v19 = *(_QWORD *)v7;
    LoadedDllByName = -1073741595;
    v20 = *(_QWORD *)(*(_QWORD *)v7 + 152LL);
    if ( *(_DWORD *)(v20 + 24) != -1
      && (*(_DWORD *)(*(_QWORD *)v20 - 56LL) & 0x20) == 0
      && _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 276), 0xFFFFFFFF) == 1 )
    {
      SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        v22 = 0LL;
        v23 = SchedulerSharedDataSlot;
        while ( *v23 )
        {
          v22 = (unsigned int)(v22 + 1);
          ++v23;
          if ( (unsigned int)v22 >= 8 )
            goto LABEL_24;
        }
        v24 = &SchedulerSharedDataSlot[v22];
        if ( v24 )
          *v24 = &LdrpModuleDatatableLock;
      }
LABEL_24:
      if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(&LdrpModuleDatatableLock, (__int64)SchedulerSharedDataSlot);
      v26 = *(_QWORD *)(v19 + 160);
      if ( *(_QWORD *)(v26 + 8) != v19 + 160 || (v27 = *(_QWORD **)(v19 + 168), *v27 != v19 + 160) )
        __fastfail(3u);
      *v27 = v26;
      *(_QWORD *)(v26 + 8) = v27;
      v28 = *(_QWORD **)(v19 + 152);
      v29 = (_QWORD *)*v28;
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( *(_WORD *)(v19 + 110) )
        LdrpReleaseTlsEntry(v19, 0LL);
      LdrpUnmapModule(v19);
      v30 = *(volatile signed __int32 **)(v19 + 136);
      if ( v30 && v30 != (volatile signed __int32 *)-1LL )
        RtlReleaseActivationContext(v30);
      if ( *(_QWORD *)(v19 + 80) )
        LdrpFreeUnicodeString(v19 + 72);
      RtlFreeHeap_0();
      if ( v29 == v28 )
        LdrpDestroyNode(v28);
    }
    *(_QWORD *)v7 = 0LL;
  }
  return LoadedDllByName;
}
