/*
 * XREFs of PopFreeHiberContext @ 0x140B1AB90
 * Callers:
 *     PopAllocateHiberContext @ 0x140B71364 (PopAllocateHiberContext.c)
 *     PopUnlockAfterSleepWorker @ 0x140C04AB0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140281690 (MmUnmapLockedPages.c)
 *     MmFreePagesFromMdl @ 0x1403454A0 (MmFreePagesFromMdl.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x1405C91C4 (IopDumpTraceFreeDumpStackFailure.c)
 *     PopInternalAddToDumpFile @ 0x140600824 (PopInternalAddToDumpFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     BiOpenStoreWithHash @ 0x140773404 (BiOpenStoreWithHash.c)
 *     VslFreeSecureHibernateResources @ 0x1407922C8 (VslFreeSecureHibernateResources.c)
 *     BcdCloseStore @ 0x1409D0088 (BcdCloseStore.c)
 *     PopBcdClearPendingResume @ 0x1409D08F8 (PopBcdClearPendingResume.c)
 *     MmReleaseDumpHibernateResources @ 0x140B1AE1C (MmReleaseDumpHibernateResources.c)
 *     MmUnlockPreChargedPagedPool @ 0x140B1AE60 (MmUnlockPreChargedPagedPool.c)
 *     PopClearHiberFileSignature @ 0x140B1AEA0 (PopClearHiberFileSignature.c)
 *     BgkResumeFinished @ 0x140C09404 (BgkResumeFinished.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

_UNKNOWN **__fastcall PopFreeHiberContext(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  ULONG_PTR v4; // rbx
  __int64 v5; // rdx
  void *v6; // rcx
  __int64 v7; // rdi
  _QWORD **v8; // rdi
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  int v15; // eax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  v4 = qword_140F0FBB0;
  v17 = 0LL;
  if ( qword_140F0FBB0 )
  {
    if ( (int)BiOpenStoreWithHash(a1, 2u, a3, (__int64)&v17) >= 0 )
    {
      PopBcdClearPendingResume(v17);
      BcdCloseStore(v17);
    }
    v6 = *(void **)(v4 + 272);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      *(_QWORD *)(v4 + 272) = 0LL;
    }
    while ( 1 )
    {
      v7 = *(_QWORD *)(v4 + 144);
      if ( !v7 )
        break;
      *(_QWORD *)(v4 + 144) = *(_QWORD *)v7;
      *(_QWORD *)(v4 + 152) -= (unsigned __int64)*(unsigned int *)(v7 + 40) >> 12;
      if ( (*(_BYTE *)(v7 + 10) & 1) != 0 )
        MmUnmapLockedPages(*(PVOID *)(v7 + 24), (PMDL)v7);
      MmFreePagesFromMdl((PMDL)v7);
      ExFreePoolWithTag((PVOID)v7, 0);
    }
    *(_QWORD *)(v4 + 248) = 0LL;
    v8 = (_QWORD **)(v4 + 80);
    *(_QWORD *)(v4 + 240) = 0LL;
    while ( 1 )
    {
      v9 = *v8;
      if ( *v8 == v8 )
        break;
      v13 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v14 = (_QWORD *)v9[1], (_QWORD *)*v14 != v9) )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      ExFreePoolWithTag(v9, 0);
      --*(_DWORD *)(v4 + 96);
    }
    v10 = *(_QWORD *)(v4 + 184);
    if ( v10 )
    {
      if ( CrashdmpImageEntry )
      {
        if ( qword_140E65E70 )
        {
          v15 = guard_dispatch_icall_no_overrides(v10, v5);
          if ( v15 < 0 )
            IopDumpTraceFreeDumpStackFailure(v15);
        }
      }
    }
    if ( *(_QWORD *)(v4 + 152) )
    {
      PopInternalAddToDumpFile(v4, 0x1F0u, 0LL);
      KeBugCheckEx(0xA0u, 0x103uLL, 0xAuLL, v4, 0LL);
    }
    if ( *(_DWORD *)(v4 + 204) == 1073742484 )
      PopClearHiberFileSignature();
    *(_BYTE *)(v4 + 24) = 0;
    MmUnlockPreChargedPagedPool(qword_140F0FDB0, qword_140F0FDB8);
    v11 = *(void **)(v4 + 320);
    if ( v11 )
      ExFreePoolWithTag(v11, 0x72626968u);
    v12 = *(_QWORD *)(v4 + 336);
    if ( v12 )
      MmReleaseDumpHibernateResources(v12, (unsigned int)(*(_DWORD *)(v4 + 288) << 16));
    if ( stru_140F11D08.ApcStateFill[32] )
    {
      BgkResumeFinished();
      stru_140F11D08.ApcStateFill[32] = 0;
    }
    if ( *(_BYTE *)(v4 + 488) )
      VslFreeSecureHibernateResources();
    if ( VslpReservedTransferLock.QueueListEntry.Blink )
    {
      ExFreePoolWithTag(VslpReservedTransferLock.QueueListEntry.Blink, 0x204C5648u);
      VslpReservedTransferLock.QueueListEntry.Blink = 0LL;
      VslpReservedTransferLock.NextProcessor = 0;
    }
    result = (_UNKNOWN **)memset_0((void *)v4, 0, 0x1F0uLL);
    qword_140F0FBB0 = 0LL;
  }
  return result;
}
