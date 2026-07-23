/*
 * XREFs of ObpDeleteNameCheck @ 0x14092C880
 * Callers:
 *     ObpDereferenceNamedObject @ 0x1403E1A1C (ObpDereferenceNamedObject.c)
 *     ObpDecrementHandleCount2 @ 0x1408F6920 (ObpDecrementHandleCount2.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x14090A400 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry2 @ 0x14092AF00 (ObCloseHandleTableEntry2.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 *     ObMakeTemporaryObject @ 0x140B03770 (ObMakeTemporaryObject.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ObpReleaseLookupContext @ 0x14027B380 (ObpReleaseLookupContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ObpUnlockDirectory @ 0x1409DF250 (ObpUnlockDirectory.c)
 *     ObpDeleteDirectoryName @ 0x1409DF2E8 (ObpDeleteDirectoryName.c)
 *     ObpLookupDirectoryEntry @ 0x1409DF360 (ObpLookupDirectoryEntry.c)
 *     ObpDeleteSymbolicLinkName @ 0x140B025FC (ObpDeleteSymbolicLinkName.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  signed __int64 v17; // rax
  signed __int64 v18; // rdx
  __int64 v19; // rtt
  struct _KTHREAD *v20; // rax
  AutoBoost *v21; // rax
  void *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rdx
  _QWORD *v26; // rdi
  signed __int64 v27; // rax
  signed __int64 v28; // rdx
  __int64 v29; // rtt
  char *v30; // rbx
  signed __int64 v31; // rax
  signed __int64 v32; // rdx
  __int64 v33; // rtt
  struct _KTHREAD *v34; // rax
  struct _KLOCK_ENTRIES *v35; // r9
  AutoBoost *v36; // rax
  void *v37; // rdx
  struct _KLOCK_ENTRIES *v38; // r9
  AutoBoost *v39; // r14
  struct _KTHREAD *v40; // rax
  AutoBoost *v41; // rax
  void *v42; // rdx
  AutoBoost *v43; // r14
  signed __int64 v44; // rax
  signed __int64 v45; // rdx
  __int64 v46; // rtt
  PVOID Object[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v48; // [rsp+30h] [rbp-38h]

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
          v17 = *(_QWORD *)(a1 + 16);
          v18 = v17 - 16;
          if ( (v17 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v18 = 0LL;
          if ( (v17 & 2) == 0 )
          {
            v19 = *(_QWORD *)(a1 + 16);
            if ( v19 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v18, v17) )
              goto LABEL_16;
          }
LABEL_22:
          ExfReleasePushLock((_QWORD *)(a1 + 16));
LABEL_16:
          KeAbPostRelease(a1 + 16);
          return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
        v48 = 0x10000000000LL;
        v20 = KeGetCurrentThread();
        Object[1] = 0LL;
        Object[0] = v13;
        --v20->KernelApcDisable;
        v21 = (AutoBoost *)KeAbPreAcquire((__int64)(v13 + 296), 0LL, 1LL, v11);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)v13 + 74, 0LL) )
          break;
        if ( v21 )
          KeAbPostReleaseEx((struct _KTHREAD *)(v13 + 296), (unsigned __int64)v21, v23, v24);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        PsReferenceSiloContext(v13);
        _m_prefetchw((const void *)(a1 + 16));
        v31 = *(_QWORD *)(a1 + 16);
        v32 = v31 - 16;
        if ( (v31 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v32 = 0LL;
        if ( (v31 & 2) != 0
          || (v33 = *(_QWORD *)(a1 + 16),
              v33 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v32, v31)) )
        {
          ExfReleasePushLock((_QWORD *)(a1 + 16));
        }
        KeAbPostRelease(a1 + 16);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v34 = KeGetCurrentThread();
        --v34->KernelApcDisable;
        v36 = (AutoBoost *)KeAbPreAcquire((__int64)(v13 + 296), 0LL, 0LL, v35);
        v39 = v36;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v13 + 74, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v13 + 37, v36, (__int64)(v13 + 296));
        if ( v39 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v39, v37);
          else
            *((_BYTE *)v39 + 10) = 1;
        }
        v40 = KeGetCurrentThread();
        --v40->KernelApcDisable;
        v41 = (AutoBoost *)KeAbPreAcquire(a1 + 16, 0LL, 0LL, v38);
        v43 = v41;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 16), v41, a1 + 16);
        if ( v43 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v43, v42);
          else
            *((_BYTE *)v43 + 10) = 1;
        }
        if ( *v7 == v13 && (*(_BYTE *)(a1 + 27) & 0x10) == 0 && !*(_QWORD *)(a1 + 8) )
        {
          ObfDereferenceObject(v13);
          goto LABEL_27;
        }
        ObpReleaseLookupContext((__int64)Object);
        _m_prefetchw((const void *)(a1 + 16));
        v44 = *(_QWORD *)(a1 + 16);
        v45 = v44 - 16;
        if ( (v44 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v45 = 0LL;
        if ( (v44 & 2) != 0
          || (v46 = *(_QWORD *)(a1 + 16),
              v46 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v45, v44)) )
        {
          ExfReleasePushLock((_QWORD *)(a1 + 16));
        }
        KeAbPostRelease(a1 + 16);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ObfDereferenceObject(v13);
      }
      if ( v21 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v21, v22);
        else
          *((_BYTE *)v21 + 10) = 1;
      }
LABEL_27:
      if ( *((_DWORD *)v7 + 6) )
      {
        v26 = 0LL;
      }
      else
      {
        if ( (PVOID)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)] == ObpSymbolicLinkObjectType )
          ObpDeleteSymbolicLinkName(a1 + 48);
        ObpLookupDirectoryEntry(v7 + 1, 0LL, Object);
        v25 = Object[1];
        v13 = (char *)Object[0];
        v26 = *(_QWORD **)Object[1];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL)
                  - 48LL
                  - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(*(_QWORD *)Object[1] + 8LL) - 48LL + 26) & 3]) = 0LL;
        *v25 = *v26;
        *v26 = 0LL;
      }
      _m_prefetchw((const void *)(a1 + 16));
      v27 = *(_QWORD *)(a1 + 16);
      v28 = v27 - 16;
      if ( (v27 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v28 = 0LL;
      if ( (v27 & 2) != 0
        || (v29 = *(_QWORD *)(a1 + 16),
            v29 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v28, v27)) )
      {
        ExfReleasePushLock((_QWORD *)(a1 + 16));
      }
      KeAbPostRelease(a1 + 16);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v26 )
      {
        v30 = (char *)v26[1];
        ObpUnlockDirectory(Object);
        ExFreePoolWithTag(v26, 0);
        ObfDereferenceObjectWithTag(v13, 0x6944624Fu);
        if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(v30 - 24) ^ ((unsigned __int16)((_WORD)v30 - 48) >> 8))) == ObpDirectoryObjectType->Index )
        {
          ObpDeleteDirectoryName(v30);
          return (__int64)ObpReleaseLookupContext((__int64)Object);
        }
        ObfDereferenceObjectWithTag(v30, 0x6944624Fu);
      }
      return (__int64)ObpReleaseLookupContext((__int64)Object);
    }
  }
  return result;
}
