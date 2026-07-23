/*
 * XREFs of LdrpDecrementModuleLoadCountEx @ 0x18003F9E0
 * Callers:
 *     LdrpLoadDllInternal @ 0x18003C630 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x18003D2C0 (LdrpFastpthReloadedDll.c)
 *     LdrUnloadDll @ 0x18003F930 (LdrUnloadDll.c)
 *     LdrpCorInitialize @ 0x1800BC06C (LdrpCorInitialize.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     LdrpAcquireLoaderLock @ 0x18007B430 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18007C860 (LdrpReleaseLoaderLock.c)
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x180119180 (LdrpDecrementNodeLoadCountLockHeld.c)
 *     LdrpUnloadNode @ 0x18011BC60 (LdrpUnloadNode.c)
 */

__int64 __fastcall LdrpDecrementModuleLoadCountEx(__int64 a1, char *a2)
{
  __int64 v2; // r9
  unsigned int v3; // edi
  struct _TEB *v6; // rax
  char *SchedulerSharedDataSlot; // rcx
  _QWORD *v8; // rax
  __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rcx
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = (unsigned int)a2;
  v13 = 0;
  if ( (_DWORD)a2 && *(_DWORD *)(*(_QWORD *)(a1 + 152) + 24LL) == 1 )
    return 3221226029LL;
  v6 = NtCurrentTeb();
  SchedulerSharedDataSlot = (char *)v6->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    v8 = v6->SchedulerSharedDataSlot;
    while ( *v8 )
    {
      v2 = (unsigned int)(v2 + 1);
      ++v8;
      if ( (unsigned int)v2 >= 8 )
        goto LABEL_11;
    }
    a2 = &SchedulerSharedDataSlot[8 * v2];
    if ( a2 )
      *(_QWORD *)a2 = &LdrpModuleDatatableLock;
  }
LABEL_11:
  if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
    RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)&LdrpModuleDatatableLock, (unsigned __int64)a2);
  v10 = *(_QWORD *)(a1 + 152);
  v11 = LdrpDecrementNodeLoadCountLockHeld(v10, v3, &v13);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( v13 )
  {
    LdrpAcquireLoaderLock();
    LdrpUnloadNode(v10);
    LdrpReleaseLoaderLock(v12, 8LL);
  }
  return v11;
}
