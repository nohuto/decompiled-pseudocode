/*
 * XREFs of IommupPasidDeviceCreate @ 0x14058AAEC
 * Callers:
 *     IommupDeviceEnablePasidTaggedDma @ 0x14078518C (IommupDeviceEnablePasidTaggedDma.c)
 *     IommuPasidDeviceCreate @ 0x140789BA0 (IommuPasidDeviceCreate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline @ 0x140589CFC (Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline.c)
 *     IommuGetLibraryContext @ 0x14059EC30 (IommuGetLibraryContext.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall IommupPasidDeviceCreate(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v3; // rdi
  int LibraryContext; // ebp
  void *v8; // rax
  __int64 v9; // rbx
  struct _KLOCK_ENTRIES *v10; // r9
  bool v11; // zf
  __int64 v12; // rcx
  AutoBoost *v13; // rax
  volatile unsigned __int8 *v14; // rdx
  AutoBoost *v15; // r14
  __int64 *v16; // rcx
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  v18 = 0LL;
  LibraryContext = 0;
  v8 = (void *)HalpMmAllocCtxAlloc(a1, 64LL);
  v9 = (__int64)v8;
  if ( v8 )
  {
    memset_0(v8, 0, 0x40uLL);
    if ( (unsigned int)Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline() )
    {
      *(_QWORD *)(v9 + 40) = v9 + 32;
      *(_QWORD *)(v9 + 32) = v9 + 32;
    }
    v11 = HalpHvIommu == 0;
    *(_DWORD *)(v9 + 48) = a2;
    if ( v11 )
    {
      LibraryContext = IommuGetLibraryContext(a2, *(unsigned int *)(a1 + 268), 0LL, &v18);
      if ( LibraryContext < 0 )
      {
        HalpMmAllocCtxFree(v12, v9);
        goto LABEL_20;
      }
      *(_QWORD *)(v9 + 56) = v18;
    }
    *(_QWORD *)(v9 + 16) = a1;
    v13 = (AutoBoost *)KeAbPreAcquire(a1 + 368, 0LL, 0LL, v10);
    v15 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 368), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 368), v13, a1 + 368);
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v14) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v15 + 33), v14, 1);
      }
      else
      {
        *((_BYTE *)v15 + 10) = 1;
      }
    }
    v16 = *(__int64 **)(a1 + 360);
    if ( *v16 != a1 + 352 )
      __fastfail(3u);
    *(_QWORD *)v9 = a1 + 352;
    *(_QWORD *)(v9 + 8) = v16;
    *v16 = v9;
    *(_QWORD *)(a1 + 360) = v9;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 368), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 368));
    KeAbPostRelease(a1 + 368);
    v3 = v9;
  }
  else
  {
    LibraryContext = -1073741670;
  }
LABEL_20:
  *a3 = v3;
  return (unsigned int)LibraryContext;
}
