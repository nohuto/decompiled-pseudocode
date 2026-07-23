/*
 * XREFs of PopFreeHiberContext @ 0x140B1CE40
 * Callers:
 *     PopAllocateHiberContext @ 0x140B75B48 (PopAllocateHiberContext.c)
 *     PopUnlockAfterSleepWorker @ 0x140C0ACC0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     MmFreePagesFromMdl @ 0x140347520 (MmFreePagesFromMdl.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x1405CBA94 (IopDumpTraceFreeDumpStackFailure.c)
 *     PopInternalAddToDumpFile @ 0x1406032D4 (PopInternalAddToDumpFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     BiOpenStoreWithHash @ 0x140776404 (BiOpenStoreWithHash.c)
 *     VslFreeSecureHibernateResources @ 0x140794DF8 (VslFreeSecureHibernateResources.c)
 *     BcdCloseStore @ 0x1409A1068 (BcdCloseStore.c)
 *     PopBcdClearPendingResume @ 0x1409A18D8 (PopBcdClearPendingResume.c)
 *     MmReleaseDumpHibernateResources @ 0x140B1D0CC (MmReleaseDumpHibernateResources.c)
 *     MmUnlockPreChargedPagedPool @ 0x140B1D110 (MmUnlockPreChargedPagedPool.c)
 *     PopClearHiberFileSignature @ 0x140B1D150 (PopClearHiberFileSignature.c)
 *     BgkResumeFinished @ 0x140C0F614 (BgkResumeFinished.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  HANDLE BcdStoreHandle; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  v4 = qword_140F10470;
  BcdStoreHandle = 0LL;
  if ( qword_140F10470 )
  {
    if ( (int)BiOpenStoreWithHash(a1, 2u, a3, (__int64)&BcdStoreHandle) >= 0 )
    {
      PopBcdClearPendingResume(BcdStoreHandle);
      BcdCloseStore(BcdStoreHandle);
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
        if ( qword_140E66010 )
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
    MmUnlockPreChargedPagedPool(qword_140F10930, Length);
    v11 = *(void **)(v4 + 320);
    if ( v11 )
      ExFreePoolWithTag(v11, 0x72626968u);
    v12 = *(_QWORD *)(v4 + 336);
    if ( v12 )
      MmReleaseDumpHibernateResources(v12, (unsigned int)(*(_DWORD *)(v4 + 288) << 16));
    if ( PopBgkResumePrepared )
    {
      BgkResumeFinished();
      PopBgkResumePrepared = 0;
    }
    if ( *(_BYTE *)(v4 + 488) )
      VslFreeSecureHibernateResources();
    if ( VslpReservedTransferLock.Affinity )
    {
      ExFreePoolWithTag(VslpReservedTransferLock.Affinity, 0x204C5648u);
      VslpReservedTransferLock.Affinity = 0LL;
      *(_DWORD *)&VslpReservedTransferLock.AffinityPrimaryGroup = 0;
    }
    result = (_UNKNOWN **)memset_0((void *)v4, 0, 0x1F0uLL);
    qword_140F10470 = 0LL;
  }
  return result;
}
