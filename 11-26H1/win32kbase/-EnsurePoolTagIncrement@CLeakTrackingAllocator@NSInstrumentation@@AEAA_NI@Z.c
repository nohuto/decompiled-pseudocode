/*
 * XREFs of ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BAC
 * Callers:
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     AllocFreeTmpBuffer @ 0x1400110D0 (AllocFreeTmpBuffer.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x140015AE0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x140040BF0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     UserReAllocPool @ 0x140043400 (UserReAllocPool.c)
 *     EngAllocMem @ 0x140044130 (EngAllocMem.c)
 *     ?AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z @ 0x140044D44 (-AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     rimQueueApiSetHidRawInputAsyncWorkItem @ 0x140045CC8 (rimQueueApiSetHidRawInputAsyncWorkItem.c)
 *     DrvEnumDisplayDevices @ 0x140046490 (DrvEnumDisplayDevices.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140048C08 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x1400A77FC (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___ @ 0x1400B3E34 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85.c)
 *     AllocThreadBufferWithTag @ 0x1400B5520 (AllocThreadBufferWithTag.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1400B5830 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolZInit @ 0x1400B5DD0 (Win32AllocPoolZInit.c)
 *     ?HMAllocateUserOrIsolatedType@@YAPEAX_KW4HM_OBJ_CREATE_FLAGS@@E@Z @ 0x1400B84FC (-HMAllocateUserOrIsolatedType@@YAPEAX_KW4HM_OBJ_CREATE_FLAGS@@E@Z.c)
 *     Win32AllocPool @ 0x1400B88C0 (Win32AllocPool.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1400C3A40 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1400FDB74 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     AllocAce @ 0x140108680 (AllocAce.c)
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x14010EB20 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x14010EC3C (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     AllocateWindowManagerSid @ 0x1401197D0 (AllocateWindowManagerSid.c)
 *     ?AllocateLocalSystemSid@@YAJPEAPEAX@Z @ 0x140119CE0 (-AllocateLocalSystemSid@@YAJPEAPEAX@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_0557cbb2832d1680ca92e9237d413628___ @ 0x1401FC098 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_0557cbb2832d1680ca92e9237d4136.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb8e___ @ 0x1401FC310 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb.c)
 * Callees:
 *     ?AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B704C (-AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B72D4 (-LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B73C4 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x140114080 (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 */

char __fastcall NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
        NSInstrumentation::CLeakTrackingAllocator *this,
        unsigned int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rdx
  unsigned int v6; // r11d
  unsigned __int64 v7; // rdx
  unsigned int v8; // r10d
  unsigned int i; // r9d
  __int64 v10; // r8
  char v11; // si
  unsigned int v12; // edx
  unsigned int v14; // edx
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  v2 = *((_QWORD *)this + 1);
  v4 = a2;
  NSInstrumentation::CPrioritizedWriterLock::AcquireShared((NSInstrumentation::CPrioritizedWriterLock *)v2);
  if ( !*(_DWORD *)(v2 + 48) )
    goto LABEL_14;
  v5 = 0x9E3779B97F34A803uLL * ((unsigned __int64)(unsigned int)v4 >> 4);
  if ( (*(_BYTE *)(v2 + 52) & 1) != 0 && *(_QWORD *)v4 != v5 )
    goto LABEL_14;
  v6 = *(_DWORD *)(v2 + 40);
  v7 = v5 >> (64 - (unsigned __int8)*(_DWORD *)(v2 + 44));
  v8 = 0;
LABEL_4:
  if ( v8 < 2 )
  {
    for ( i = v7; ; ++i )
    {
      if ( i >= v6 )
      {
        v6 = v7;
        ++v8;
        LODWORD(v7) = 0;
        goto LABEL_4;
      }
      v10 = *(_QWORD *)(v2 + 32) + 16LL * i;
      if ( *(_QWORD *)v10 == v4 )
        break;
    }
    if ( !v10 )
      goto LABEL_14;
    _InterlockedAdd64((volatile signed __int64 *)(v10 + 8), 1uLL);
    v11 = 1;
  }
  else
  {
LABEL_14:
    v11 = 0;
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v2);
  if ( v11 )
    return 1;
  W32AcquirePushLockExclusiveEx((NSInstrumentation::CLeakTrackingAllocator *)((char *)this + 16), v12);
  _InterlockedCompareExchange((volatile signed __int32 *)this + 8, 0, 1);
  _InterlockedAdd((volatile signed __int32 *)this + 11, 1u);
  if ( *((_DWORD *)this + 10) )
  {
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    *((_QWORD *)this + 3) = &Event;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 8, -1, 0) != 1 )
      KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
  }
  if ( NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
         *((NSInstrumentation::CPointerHashTable **)this + 1),
         (const void *)v4)
    || NSInstrumentation::CPointerHashTable::Insert(
         *((NSInstrumentation::CPointerHashTable **)this + 1),
         (const void *)v4,
         (const void *)1) )
  {
    _InterlockedAdd((volatile signed __int32 *)this + 11, 0xFFFFFFFF);
    W32ReleasePushLockExclusiveEx((NSInstrumentation::CLeakTrackingAllocator *)((char *)this + 16), v14);
    return 1;
  }
  _InterlockedAdd((volatile signed __int32 *)this + 11, 0xFFFFFFFF);
  W32ReleasePushLockExclusiveEx((NSInstrumentation::CLeakTrackingAllocator *)((char *)this + 16), v14);
  return 0;
}
