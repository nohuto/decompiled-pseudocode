/*
 * XREFs of ObpDeleteNameCheck @ 0x1408FC8F0
 * Callers:
 *     ObpDereferenceNamedObject @ 0x1403DE82C (ObpDereferenceNamedObject.c)
 *     ObpDecrementHandleCount2 @ 0x1408F0360 (ObpDecrementHandleCount2.c)
 *     ObCloseHandleTableEntry2 @ 0x1408FAF70 (ObCloseHandleTableEntry2.c)
 *     ObOpenObjectByNameEx @ 0x1408FCDF0 (ObOpenObjectByNameEx.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x14092E8D0 (ObpIncrementHandleCountEx.c)
 *     ObMakeTemporaryObject @ 0x140B01A40 (ObMakeTemporaryObject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostReleaseEx @ 0x140272670 (KeAbPostReleaseEx.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ObpReleaseLookupContext @ 0x14027BE10 (ObpReleaseLookupContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     ObpUnlockDirectory @ 0x1409E2240 (ObpUnlockDirectory.c)
 *     ObpDeleteDirectoryName @ 0x1409E22D8 (ObpDeleteDirectoryName.c)
 *     ObpLookupDirectoryEntry @ 0x1409E2350 (ObpLookupDirectoryEntry.c)
 *     ObpDeleteSymbolicLinkName @ 0x140B008CC (ObpDeleteSymbolicLinkName.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpDeleteNameCheck(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  char **v7; // rdi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v9; // rax
  void *v10; // rdx
  struct _KLOCK_ENTRIES *v11; // r9
  AutoBoost *v12; // rbp
  char *v13; // rbp
  signed __int64 v14; // rax
  signed __int64 v15; // rdx
  __int64 v16; // rtt
  __int64 v17; // rdx
  __int64 v18; // r8
  signed __int64 v19; // rax
  signed __int64 v20; // rdx
  __int64 v21; // rtt
  struct _KTHREAD *v22; // rax
  AutoBoost *v23; // rax
  void *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rdx
  _QWORD *v28; // rdi
  signed __int64 v29; // rax
  signed __int64 v30; // rdx
  __int64 v31; // rtt
  __int64 v32; // rdx
  __int64 v33; // r8
  char *v34; // rbx
  signed __int64 v35; // rax
  signed __int64 v36; // rdx
  __int64 v37; // rtt
  __int64 v38; // rdx
  __int64 v39; // r8
  struct _KTHREAD *v40; // rax
  struct _KLOCK_ENTRIES *v41; // r9
  AutoBoost *v42; // rax
  void *v43; // rdx
  struct _KLOCK_ENTRIES *v44; // r9
  AutoBoost *v45; // r14
  struct _KTHREAD *v46; // rax
  AutoBoost *v47; // rax
  void *v48; // rdx
  AutoBoost *v49; // r14
  signed __int64 v50; // rax
  signed __int64 v51; // rdx
  __int64 v52; // rtt
  __int64 v53; // rdx
  __int64 v54; // r8
  PVOID Object[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v56; // [rsp+30h] [rbp-38h]

  result = *(unsigned __int8 *)(a1 + 26);
  if ( (result & 2) != 0 )
  {
    result &= 3u;
    v6 = ObpInfoMaskToOffset[result];
    v7 = (char **)(a1 - v6);
    if ( a1 != v6 )
    {
      while ( 1 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v9 = (AutoBoost *)KeAbPreAcquire(a1 + 16, 0LL, 0LL, a4);
        v12 = v9;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 16), v9, a1 + 16);
        if ( v12 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v12, v10);
          else
            *((_BYTE *)v12 + 10) = 1;
        }
        v13 = *v7;
        if ( !*v7 )
        {
          _m_prefetchw((const void *)(a1 + 16));
          v19 = *(_QWORD *)(a1 + 16);
          v20 = v19 - 16;
          if ( (v19 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v20 = 0LL;
          if ( (v19 & 2) == 0 )
          {
            v21 = *(_QWORD *)(a1 + 16);
            if ( v21 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v20, v19) )
              goto LABEL_16;
          }
LABEL_22:
          ExfReleasePushLock((_QWORD *)(a1 + 16));
LABEL_16:
          KeAbPostRelease(a1 + 16);
          return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v18);
        }
        if ( (*(_BYTE *)(a1 + 27) & 0x10) != 0 || *(_QWORD *)(a1 + 8) )
        {
          _m_prefetchw((const void *)(a1 + 16));
          v14 = *(_QWORD *)(a1 + 16);
          v15 = v14 - 16;
          if ( (v14 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v15 = 0LL;
          if ( (v14 & 2) == 0 )
          {
            v16 = *(_QWORD *)(a1 + 16);
            if ( v16 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v15, v14) )
              goto LABEL_16;
          }
          goto LABEL_22;
        }
        v56 = 0x10000000000LL;
        v22 = KeGetCurrentThread();
        Object[1] = 0LL;
        Object[0] = v13;
        --v22->KernelApcDisable;
        v23 = (AutoBoost *)KeAbPreAcquire((__int64)(v13 + 296), 0LL, 1LL, v11);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)v13 + 74, 0LL) )
          break;
        if ( v23 )
          KeAbPostReleaseEx((struct _KTHREAD *)(v13 + 296), (unsigned __int64)v23, v25, v26);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), (__int64)v24, v25);
        PsReferenceSiloContext(v13);
        _m_prefetchw((const void *)(a1 + 16));
        v35 = *(_QWORD *)(a1 + 16);
        v36 = v35 - 16;
        if ( (v35 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v36 = 0LL;
        if ( (v35 & 2) != 0
          || (v37 = *(_QWORD *)(a1 + 16),
              v37 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v36, v35)) )
        {
          ExfReleasePushLock((_QWORD *)(a1 + 16));
        }
        KeAbPostRelease(a1 + 16);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v38, v39);
        v40 = KeGetCurrentThread();
        --v40->KernelApcDisable;
        v42 = (AutoBoost *)KeAbPreAcquire((__int64)(v13 + 296), 0LL, 0LL, v41);
        v45 = v42;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v13 + 74, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v13 + 37, v42, (__int64)(v13 + 296));
        if ( v45 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v45, v43);
          else
            *((_BYTE *)v45 + 10) = 1;
        }
        v46 = KeGetCurrentThread();
        --v46->KernelApcDisable;
        v47 = (AutoBoost *)KeAbPreAcquire(a1 + 16, 0LL, 0LL, v44);
        v49 = v47;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 16), v47, a1 + 16);
        if ( v49 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v49, v48);
          else
            *((_BYTE *)v49 + 10) = 1;
        }
        if ( *v7 == v13 && (*(_BYTE *)(a1 + 27) & 0x10) == 0 && !*(_QWORD *)(a1 + 8) )
        {
          ObfDereferenceObject(v13);
          goto LABEL_27;
        }
        ObpReleaseLookupContext((__int64)Object);
        _m_prefetchw((const void *)(a1 + 16));
        v50 = *(_QWORD *)(a1 + 16);
        v51 = v50 - 16;
        if ( (v50 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v51 = 0LL;
        if ( (v50 & 2) != 0
          || (v52 = *(_QWORD *)(a1 + 16),
              v52 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v51, v50)) )
        {
          ExfReleasePushLock((_QWORD *)(a1 + 16));
        }
        KeAbPostRelease(a1 + 16);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v53, v54);
        ObfDereferenceObject(v13);
      }
      if ( v23 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v23, v24);
        else
          *((_BYTE *)v23 + 10) = 1;
      }
LABEL_27:
      if ( *((_DWORD *)v7 + 6) )
      {
        v28 = 0LL;
      }
      else
      {
        if ( (PVOID)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)] == ObpSymbolicLinkObjectType )
          ObpDeleteSymbolicLinkName(a1 + 48);
        ObpLookupDirectoryEntry(v7 + 1, 0LL, Object);
        v27 = Object[1];
        v13 = (char *)Object[0];
        v28 = *(_QWORD **)Object[1];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL)
                  - 48LL
                  - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL) - 48LL + 26) & 3]) = 0LL;
        *v27 = *v28;
        *v28 = 0LL;
      }
      _m_prefetchw((const void *)(a1 + 16));
      v29 = *(_QWORD *)(a1 + 16);
      v30 = v29 - 16;
      if ( (v29 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v30 = 0LL;
      if ( (v29 & 2) != 0
        || (v31 = *(_QWORD *)(a1 + 16),
            v31 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v30, v29)) )
      {
        ExfReleasePushLock((_QWORD *)(a1 + 16));
      }
      KeAbPostRelease(a1 + 16);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v32, v33);
      if ( v28 )
      {
        v34 = (char *)v28[1];
        ObpUnlockDirectory(Object);
        ExFreePoolWithTag(v28, 0);
        ObfDereferenceObjectWithTag(v13, 0x6944624Fu);
        if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(v34 - 24) ^ ((unsigned __int16)((_WORD)v34 - 48) >> 8))) == ObpDirectoryObjectType->Index )
        {
          ObpDeleteDirectoryName(v34);
          return (__int64)ObpReleaseLookupContext((__int64)Object);
        }
        ObfDereferenceObjectWithTag(v34, 0x6944624Fu);
      }
      return (__int64)ObpReleaseLookupContext((__int64)Object);
    }
  }
  return result;
}
