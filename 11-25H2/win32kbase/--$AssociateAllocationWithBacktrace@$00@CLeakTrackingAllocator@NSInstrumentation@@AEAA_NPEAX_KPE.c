/*
 * XREFs of ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ABF4
 * Callers:
 *     ?ScanLookAsideList_Allocate@@YAPEAXXZ @ 0x14000B080 (-ScanLookAsideList_Allocate@@YAPEAXXZ.c)
 *     ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x14000B1D4 (-HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z.c)
 *     Win32AllocPoolZInit @ 0x14000B760 (Win32AllocPoolZInit.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x14000B970 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocateFromPagedLookasideList @ 0x14000BDC0 (Win32AllocateFromPagedLookasideList.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x14000C1D0 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x14000EE20 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x14000F490 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     EngAllocMem @ 0x14001BE30 (EngAllocMem.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x14001D340 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     UserReAllocPool @ 0x14001E320 (UserReAllocPool.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x14001EEB0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     ?AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z @ 0x14002011C (-AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140020FF4 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1400296B0 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     HMAllocObjectEx @ 0x14003E880 (HMAllocObjectEx.c)
 *     DrvEnumDisplayDevices @ 0x140047DF0 (DrvEnumDisplayDevices.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140049A84 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     AllocAce @ 0x140049D70 (AllocAce.c)
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     ?Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z @ 0x14006110C (-Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___ @ 0x1400693C8 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85.c)
 *     AllocFreeTmpBuffer @ 0x140098060 (AllocFreeTmpBuffer.c)
 *     AllocThreadBufferWithTag @ 0x1400B5AE0 (AllocThreadBufferWithTag.c)
 *     Win32AllocPool @ 0x1400BC040 (Win32AllocPool.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1400BDA10 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_0557cbb2832d1680ca92e9237d413628___ @ 0x1401D2B78 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_0557cbb2832d1680ca92e9237d4136.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb8e___ @ 0x1401D2DE8 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb.c)
 * Callees:
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x14015C920 (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     ?Create@?$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@SAPEAV12@XZ @ 0x14019AD78 (-Create@-$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@.c)
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x14019B5D0 (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 *     ?AcquireBackTrace@?$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z @ 0x14019FCF0 (-AcquireBackTrace@-$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrum.c)
 *     ?Destroy@?$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401D34FC (-Destroy@-$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@.c)
 *     ?InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCPointerHashTable@2@_N@Z @ 0x1401D37C8 (-InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCPointerHashTa.c)
 */

char __fastcall NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        NSInstrumentation::CBackTrace *a4)
{
  NSInstrumentation::CPrioritizedWriterLock *v6; // rcx
  void *v9; // rax
  NSInstrumentation::CLeakTrackingAllocator *v10; // rcx
  __int64 v11; // rsi
  bool v12; // r8
  NSInstrumentation::CPointerHashTable **v13; // rdi

  v6 = *(NSInstrumentation::CPrioritizedWriterLock **)(a1 + 104);
  if ( v6 )
    goto LABEL_16;
  v9 = (void *)NSInstrumentation::CBackTraceStoreExCommon<NSInstrumentation::CBackTraceStorageUnit>::Create();
  if ( v9 && _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), (signed __int64)v9, 0LL) )
    NSInstrumentation::CBackTraceStoreExCommon<NSInstrumentation::CBackTraceStorageUnit>::Destroy(v9);
  v6 = *(NSInstrumentation::CPrioritizedWriterLock **)(a1 + 104);
  if ( v6 )
  {
LABEL_16:
    v11 = NSInstrumentation::CBackTraceStoreExCommon<NSInstrumentation::CBackTraceStorageUnit>::AcquireBackTrace(v6, a4);
    if ( v11 )
    {
      v13 = (NSInstrumentation::CPointerHashTable **)(a1 + 88);
      if ( !*(_QWORD *)(a1 + 88) )
        NSInstrumentation::CLeakTrackingAllocator::InitializePointerHashTable(
          v10,
          (struct NSInstrumentation::CPointerHashTable **)(a1 + 88),
          v12);
      if ( *v13 && NSInstrumentation::CPointerHashTable::Insert(*v13, a2, (const void *)(a3 | v11)) )
        return 1;
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(a1 + 104));
    }
  }
  return 0;
}
