/*
 * XREFs of HalpDmaFreeChildAdapter @ 0x140509940
 * Callers:
 *     <none>
 * Callees:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmFreeContiguousMemory @ 0x140346600 (MmFreeContiguousMemory.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     HalpDmaFreeCrashdumpRegistersInternal @ 0x1404E9554 (HalpDmaFreeCrashdumpRegistersInternal.c)
 *     CvmDebugLog @ 0x140534A08 (CvmDebugLog.c)
 *     HalpDmaReturnPageToSource @ 0x140534F0C (HalpDmaReturnPageToSource.c)
 *     HalpLeaveDmaDomain @ 0x14058D5A4 (HalpLeaveDmaDomain.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpDmaCvmMakeMdlDevicePrivate @ 0x140785BD0 (HalpDmaCvmMakeMdlDevicePrivate.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall HalpDmaFreeChildAdapter(__int64 a1, __int64 a2)
{
  struct _MDL *v3; // rcx
  __int64 v4; // rbx
  KIRQL v5; // al
  __int64 v6; // r8
  _QWORD *v7; // rdx
  unsigned int v8; // ebx
  unsigned int *v9; // rsi
  void *v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  void *v15; // rbx
  int MdlDevicePrivate; // eax
  unsigned int i; // ebx
  __int64 v18; // rbx
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rbx
  void *v24; // rbx
  int v25; // eax
  __int64 v26; // rdx

  v3 = *(struct _MDL **)(a1 + 304);
  if ( v3 )
  {
    IoFreeMdl(v3);
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  v4 = a1 + 464;
  if ( *(_QWORD *)(a1 + 464) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&HalpDmaAdapterListLock);
    v6 = *(_QWORD *)v4;
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || (v7 = *(_QWORD **)(a1 + 472), *v7 != v4) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    KeReleaseSpinLock(&HalpDmaAdapterListLock, v5);
  }
  v8 = 0;
  v9 = (unsigned int *)(a1 + 280);
  do
  {
    if ( *v9 )
      HalpDmaFreeCrashdumpRegistersInternal(a1, v8, *v9);
    ++v8;
    ++v9;
  }
  while ( v8 < 2 );
  if ( *(_QWORD *)(a1 + 512) )
  {
    *(_BYTE *)(a1 + 524) = 0;
    HalpLeaveDmaDomain(a1);
  }
  v10 = *(void **)(a1 + 544);
  if ( v10 )
  {
    guard_dispatch_icall_no_overrides(v10, a2);
    *(_QWORD *)(a1 + 544) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 440) && !*(_BYTE *)(a1 + 345) )
  {
    if ( !*(_BYTE *)(a1 + 442) )
    {
      v11 = *(_QWORD *)(a1 + 48);
      v12 = *(_QWORD *)(v11 + 16);
      if ( (*(_BYTE *)(v12 + 48) & 1) != 0 )
      {
        do
        {
          for ( i = 0; i < *(_DWORD *)(v11 + 8); ++i )
            HalpDmaReturnPageToSource(a1);
          v18 = *(_QWORD *)v11;
          HalpMmAllocCtxFree((__int64)v10, v11);
          v11 = v18;
        }
        while ( v18 );
      }
      else
      {
        HalpMmAllocCtxFree((__int64)v10, v12);
        HalpMmAllocCtxFree(v13, v11);
        v15 = *(void **)(a1 + 328);
        if ( *(_BYTE *)(a1 + 344) )
        {
          if ( v15 )
          {
            v10 = *(void **)(a1 + 336);
            if ( v10 )
              MmUnmapLockedPages(v10, *(PMDL *)(a1 + 328));
            if ( HalpDmaCvmConfiguration )
            {
              MdlDevicePrivate = HalpDmaCvmMakeMdlDevicePrivate(v15, v14);
              if ( MdlDevicePrivate < 0 )
              {
                CvmDebugLog(
                  "Failed to free map register MDL. MDL will be leaked. Mdl=%p Status=%08X",
                  v15,
                  MdlDevicePrivate);
                MiFreePagesFromMdl((ULONG_PTR)v15, 0, 0, 0);
                ExFreePoolWithTag(v15, 0);
              }
            }
          }
        }
        else
        {
          MmFreeContiguousMemory(*(PVOID *)(a1 + 328));
        }
      }
      v19 = *(_QWORD *)(a1 + 24);
      goto LABEL_43;
    }
    v20 = *(_DWORD *)(a1 + 40);
    v21 = *(_QWORD *)(a1 + 32);
    if ( v20 )
    {
      v22 = v20;
      do
      {
        v23 = *(_QWORD *)(v21 + 8);
        HalpDmaReturnPageToSource(a1);
        v21 = v23;
        --v22;
      }
      while ( v22 );
    }
    v24 = *(void **)(a1 + 328);
    if ( v24 )
    {
      v10 = *(void **)(a1 + 336);
      if ( v10 )
        MmUnmapLockedPages(v10, *(PMDL *)(a1 + 328));
      if ( HalpDmaCvmConfiguration )
      {
        v25 = HalpDmaCvmMakeMdlDevicePrivate(v24, v21);
        if ( v25 < 0 )
        {
          CvmDebugLog("Failed to free map register MDL. MDL will be leaked. Mdl=%p Status=%08X", v24, v25);
          MiFreePagesFromMdl((ULONG_PTR)v24, 0, 0, 0);
          ExFreePoolWithTag(v24, 0);
        }
      }
    }
    v26 = *(_QWORD *)(a1 + 56);
    if ( v26 )
    {
      HalpMmAllocCtxFree((__int64)v10, *(_QWORD *)(v26 + 16));
      v19 = *(_QWORD *)(a1 + 56);
LABEL_43:
      HalpMmAllocCtxFree((__int64)v10, v19);
    }
  }
}
